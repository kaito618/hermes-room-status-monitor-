# hermes-room-status-monitor-
i'm making a device to monitor my room's temp and humidity 

schematic done
i chose what sensor i want to use i'll use the SHT31-DIS-B2.5KS to make a room temp and hum monitor
![Screenshot_2026-03-31_23-48-51](https://github.com/user-attachments/assets/1d27124b-fb75-483b-bbdd-443e723d2526)


added 2 buttons to control the device and an oled screen to show room status

schematic
![schematic](https://github.com/user-attachments/assets/573eacd9-5f36-4275-9df9-4d6a3021a882)

done w pcb kicad 
im having some real issues with my footprints and my kicad ill be posting the pcb pic later on when i fix everything

MY KICAD DIED guess my 18 yr old laptop didn't wanna take it anymore or maybe it's linux gon no clue anyways after hours of debegguing i switched to easyeda adn redid averything

![Screenshot_2026-04-03_01-13-43](https://github.com/user-attachments/assets/89ba19d0-2cd2-48b8-aad5-23924f940ecc)


![Screenshot_2026-04-03_01-10-48](https://github.com/user-attachments/assets/da084c0b-65ec-4955-9b30-e35f5c29809d)


pcb done easyeda
i finished the pcb layout and wiring and getting my 3d models ready

![Screenshot_2026-04-03_23-29-31](https://github.com/user-attachments/assets/705255f8-05d3-46d8-8386-dab21a8211a9)
![Screenshot_2026-04-03_23-29-47](https://github.com/user-attachments/assets/667d2f3c-60e6-47b6-8b96-95268ebcbf02)

3d model 

![Screenshot_2026-04-04_01-18-53](https://github.com/user-attachments/assets/810bbcb0-700a-4280-9a9e-307ef0c16edc)

## 🛠 Bill of Materials (BOM)

| Component | Description | Qty | Est. Price (EGP) | Source / Link |
| :--- | :--- | :---: | :--- | :--- |
| **Microcontroller** | Seeed Studio XIAO RP2040 | 1 | 499 | [amazoneg](https://www.amazon.eg/-/en/gp/product/B0GHNR74YH/ref=ewc_pr_img_2?smid=A1FZS2ISSCLNWQ&psc=1) |
| **Sensor** | SHT31 High-Precision Temp & Humidity ($I^2C$) | 1 | 195.00 | [RAM Electronics](https://www.ram-e-shop.com/shop/kit-sht31-sht31-temperature-humidity-sensor-module-9216) |
| **Display** | 0.96" OLED 128x64 ($I^2C$ SSD1306) | 1 | 160.00 | [RAM Electronics](https://www.ram-e-shop.com/shop/oled-0-96-4pin-oled-0-96-4pin-lcd-display-module-i2c-iic-communicate-7772) |
| **Buttons** | mx switches (THT) | 2 | 175 | [amazoneg](https://www.amazon.eg/-/en/gp/product/B0GRPPX2T6/ref=ewc_pr_img_1?smid=A209IF81KPKFRD&psc=1) |
| **Resistors** | 10k Ohm 1/4W (Pull-ups for $I^2C$) | 2 | 4 | [RAM Electronics](https://www.ram-e-shop.com/shop/carbon-resistance-1-4w-price-per-4-resistors-9506#attr=301) |
| **capacitors** | 2.54mm Female Header Strip (1x40) | 2 | 2 | [RAM Electronics](https://www.ram-e-shop.com/shop/c-10u25v-capacitor-10uf-25v-6095) |

| **TOTAL** | **Estimated Project Cost** | | **~1034egp 19.03 usd** | |

### 📋 Component Justification (for HCB Grant)
* **XIAO RP2040:** Chosen for its powerful dual-core processor and compact form factor, ideal for wearable or small-scale monitoring.
* **SHT31 Sensor:** Upgraded from SHT30 for superior $\pm0.2$°C accuracy and high reliability in local Cairo humidity conditions.
* **I2C Architecture:** Both the display and sensor share the same $I^2C$ bus (SDA/SCL), reducing PCB complexity and pin usage.


