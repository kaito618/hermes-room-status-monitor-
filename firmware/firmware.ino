#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_SHT31.h>

#define BT_MODE 0 
#define BT_PAGE 1 

Adafruit_SSD1306 oled(128, 64, &Wire, -1);
Adafruit_SHT31 sensor = Adafruit_SHT31();

bool f_unit = false;
bool p_toggle = false;
unsigned long prev_ms = 0;

void setup() {
  pinMode(BT_MODE, INPUT_PULLUP);
  pinMode(BT_PAGE, INPUT_PULLUP);

  if(!oled.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    for(;;); 
  }
  
  oled.clearDisplay();
  oled.setTextSize(1);
  oled.setTextColor(1);

  if (!sensor.begin(0x44)) {
    oled.setCursor(0,0);
    oled.print("SHT31 ERROR");
    oled.display();
    while (1);
  }
}

void loop() {
  if (digitalRead(BT_MODE) == LOW) {
    f_unit = !f_unit;
    delay(250); 
  }

  if (digitalRead(BT_PAGE) == LOW) {
    p_toggle = !p_toggle;
    delay(250); 
  }

  if (millis() - prev_ms > 800) {
    float t_raw = sensor.readTemperature();
    float h_raw = sensor.readHumidity();
    prev_ms = millis();

    oled.clearDisplay();
    oled.setCursor(0, 0);
    oled.print(p_toggle ? "SYS_STATUS" : "HERMES_V1");
    oled.drawLine(0, 9, 128, 9, 1);

    if (p_toggle) {
      oled.setCursor(0, 15);
      oled.print("MCU: RP2040");
      oled.setCursor(0, 25);
      oled.print("I2C: 0x44, 0x3C");
      oled.setCursor(0, 35);
      oled.print("UP: "); oled.print(millis()/1000); oled.print("s");
    } else {
      if (!isnan(t_raw)) {
        float val = f_unit ? (t_raw * 1.8 + 32) : t_raw;
        oled.setCursor(0, 18);
        oled.print("TEMP:");
        oled.setTextSize(3); 
        oled.setCursor(0, 30);
        oled.print(val, 1);
        oled.setTextSize(1);
        oled.print(f_unit ? " F" : " C");
        
        oled.setCursor(85, 55);
        oled.print("H: "); oled.print((int)h_raw); oled.print("%");
      }
    }
    oled.display();
  }
}

