# Friendship-Signal-Bracelets
Friendship Signal Bracelets, which as the name suggests, light up when a bestie is nearby.

# Description
Two (or more) bracelets that light up, vibrate, and/or display a pattern when they come within ~3-5 meters of each other, using BLE (Bluetooth Low Energy) RSSI-based proximity detection.

## Features
- Proximity Detection - BLE RSSI(Bluetooth Low Energy Received Signal Strength Indicator) to detect nearby besties
- Cool lights(6 LEDs) when your bestie is nearby
- OLED Display(You can see which bestie is nearby!)
- Audio beeping(Buzzer) when your friend is nearby
- Microphone


## Hardware
- Seeed Xiao ESP32-C3
- SSD1306 0.96" OLED
- WS2812B-V6 LEDs
- ICS-43434 Mems Microphone
- ISM303DACTR Accelerometer
- SPX3819M5-L-1-8 LDO
- LSF0108PWR Level Shifter
- 250mAh LiPo Battery


## Bill of Materials (BOM)

| Designator | Part | Qty | Cost (each) | Total | Link | LCSC # |
|------------|------|:---:|------------|-------|------|--------|
| U1 | Seeed Xiao ESP32-C3 | 1 | $4.99 | $4.99 | https://www.seeedstudio.com/Seeed-XIAO-ESP32C3-p-5431.html | N/A |
| U2 | SSD1306 0.96" OLED | 1 | $2.24 | $2.24 | https://www.lcsc.com/product-detail/C5248080.html | C5248080 |
| SW1 | Tactile Push Button | 1 | $0.56 | $0.56 | https://www.lcsc.com/product-detail/C2888493.html | C2888493 |
| BT1 | LiPo 250mAh Battery | 1 | $8.99 | $8.99 | https://www.amazon.com/EEMB-Battery-Rechargeable-Lithium-Connector/dp/B08FD3V6TF | N/A |
| PCB | PCB Board | 5 | $0.80 | $4 | https://www.jlcpcb.com | N/A |
| C1,C2,C3 | 100nF Capacitor | 3 | $0.0086 | $0.86(Min order of 100) | https://www.lcsc.com/product-detail/C60474.html | C60474 |
| C4 | 220nF Capacitor | 1 | $0.0238 | $1.19(Min order of 100) | https://www.lcsc.com/product-detail/C64705.html | C64705 |
| C5 | 10µF Capacitor | 1 | $0.0372 | $0.74(Min order of 20) | https://www.lcsc.com/product-detail/C192100.html | C192100 |
| C6 | 10nF Capacitor | 1 | $0.016 | $0.8(Min order of 50)| https://www.lcsc.com/product-detail/C100042.html | C100042 |
| LED1-6 | WS2812B-V6 LED | 6 | $0.1011 | $1.01(Multiple order of 5s) | https://www.lcsc.com/product-detail/C52917433.html | C52917433 |
| R1 | 100kΩ Resistor | 1 | $0.0061 | $0.62(Min order of 100) | https://www.lcsc.com/product-detail/C60491.html | C60491 |
| U3 | ICS-43434 Microphone | 1 | $4.66 | $4.66 | https://www.lcsc.com/product-detail/C5656610.html | C5656610 |
| U4 | ISM303DACTR Accelerometer | 1 | $4.04 | $4.04 | https://www.lcsc.com/product-detail/C2913653.html | C2913653 |
| U5 | SPX3819M5-L-1-8 Voltage Regulator | 1 | $0.1437 | $0.72(Min order of 5) | https://www.lcsc.com/product-detail/C24639.html | C24639 |
| U6 | LSF0108PWR Level Shifter | 1 | $0.5849 | $0.5849 | https://www.lcsc.com/product-detail/C190219.html | C190219 |
| BUZZER1 | 1207-P6.5MM Buzzer | 1 | $0.0317 | $0.32(Min order of 10) | https://www.lcsc.com/product-detail/C49246964.html | C49246964 |
| Shipping | N/A | 1 | Seeed($6.5) + LCSC($9.58) + Amazon($7.95) + JLCPCB($3.12) | Sum after i calculate | N/A | N/A
| Total Costs | N/A | 1 | 11.49+16.94+7.12+27.98 | $63.53 | N/A | N/A |

## Firmware
Basic functional firmware in `/firmware/friendship_bracelet.ino`.
## Steps To Reproduce
1. Order all the components from the BOM
2. Download the gerbers.zip from Production folder and order a pcb from whatever manufacturer(JLCPCB)
3. Solder the components onto the PCB
4. Download the enclosure from Production folder and print using PETG or TPU
5. Order watch strap adapters
6. Assemble the case, sand down the bottom and top parts and hot glue the together. The PCB will fit snugly
7. Flash the Firmware onto the PCB
8. Now repeat steps 1 and 7 for a second bracelet
9. Enjoy!


## Schematic
![image](https://cdn.hackclub.com/019fa081-dd6f-7408-8bfe-3449cb5a6e5a/paste-1785104292713.png)
## PCB
![image](https://cdn.hackclub.com/019fa082-33dc-7e69-a8c7-730d42b7e6b7/paste-1785104315064.png)
## PCBA
![image](https://cdn.hackclub.com/019fa081-6a71-7ca9-ae38-88b025ed37ae/paste-1785104263474.png)
## Case
![image](https://cdn.hackclub.com/019fc57f-daff-7dda-ae0c-90170066348d/paste-1785724918210.png)
## Demo Video
 