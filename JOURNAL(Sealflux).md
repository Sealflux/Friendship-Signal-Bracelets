## July 19th: Research & Decision Lock-In

First off, I began researching the type of gesture I want to trigger the signal as I feel like the bracelet constantly shooting out messsages of "yo is my friend near by" will be incredibly energy draining. I thought of the gesture of double tapping the bracelet to shoot out a signal like in those movies but that obviously requires an accelerometer. I feel like the easiest option will simply be a tactile button on the bracelet that you push if you wanna detect if your bestie is nearby. For the MCU, I'm already quite familiar with Seeed Studio's XIAO ESP32-C3(![image](https://cdn.hackclub.com/019f7d88-d318-70ac-a23f-b3359861d138/paste-1784517546507.png)) so that decision is quite easy. As its tiny, it has a bulit in battery charger and its low power using BLE which is bluetooth low energy. For the battery of the bracelet, it needs to be a small lipo as it needs to fit into a wearable and be small yet still able to last a day or so. Probably a battery thats 150-250 mAh capacity. Now for the feedback of the bracelet, as how else would you know if your bestie is nearby. I'm thinking of a small haptic motor that vibrates the bracelet once the bracelet detects another bracelet nearby. I'll probably also include an OLED as if theres more than two bracelets in the world, you would want to have a way of knowing who the bracelet belongs to. For the material of the 3d printed enclosure of the bracelet, I don't want to use PLA, probably use PETG or TPU. This project is going to be level 3 as its a wearable so $400 dollar budget however we don't wanna use all of it. Tomorrow I'll do the BOM and then I'll get all of the components and start designing the PCB.

## July 20th: BOM & Schematic
Part 1 (2 Am grind session)
Doing the BOM of the project. Putting all of the parts, quantity, cost, link and LCSC Part number. I'm also gonna begin the schematic of the bracelet.
I'm kinda fried rn, its 2:43 AM, I decided to use RGB LEDS to be part of the design instead of warm white LEDS because I think it would be cooler in terms of lighting! Alright imma go to sleep now. I need to update the BOM tomorrow! For the schematic, I'm going to daisy chain the LEDs in order to have more pins/space for the MCU. Also I'm gonna continue this after i sleep as well so uhh yeah. ![image](https://cdn.hackclub.com/019f7e4b-1b6f-733e-8d1a-aee28015eba9/paste-1784530278718.png)

### Lapse Link: https://lapse.hackclub.com/timelapse/CnL-RgcvxC9W

## July 21th: Finishing Schematic and Doing PCB

I finished what I had currently however after doing the Schematic and PCb, I realized that I probably want it to vibrate so I'll be adding one of those coin motors to the design. Also I need to udpate the bom and stuff
Finished Schematic* I need to add more stuff probably
![image](https://cdn.hackclub.com/019f87a6-3d38-74a4-b46e-d572fc4a7f14/paste-1784687246389.png)
Finished PCB* I need to probably redo after adding more stuff
![image](https://cdn.hackclub.com/019f87a6-f88c-7570-984e-1c8a2c191da5/paste-1784687294180.png)
PCBA:
![image](https://cdn.hackclub.com/019f87a7-3a92-78b9-8d96-6dfc8220115a/paste-1784687311286.png)

### Lapse Link: https://lapse.hackclub.com/timelapse/bK2I03S8tRUv

## July 22th: Researching More Features

Yesterday I finished the schematic and PCB and finished that. However, I've decided that adding a module that vibrates the bracelet would be a very cool features. Right the PCB design incorporates RGB LEDs, a buzzer, a button and a OLED screen. So when you send out a signal wave and the bracelet receives it back and notices your bestie being close by in proximity, the bracelet will show you who is close/near you, who it is, play a sound, and light in. I feel like adding a coin vibration motor or something that vibrates the bracelet would be a perfect addition. Along with this addition, I will also need to redo the schematic and PCB again tomorrow but thats fine. I spent so long trying to find the coin vibration motor on LCSC but couldn't find it. ![image](https://cdn.hackclub.com/019f8cbe-4ae0-79b0-9424-acdc7ac8141b/image.png)