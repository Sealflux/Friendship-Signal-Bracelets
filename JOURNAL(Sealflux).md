## July 19th: Research & Decision Lock-In

First off, I began researching the type of gesture I want to trigger the signal as I feel like the bracelet constantly shooting out messsages of "yo is my friend near by" will be incredibly energy draining. I thought of the gesture of double tapping the bracelet to shoot out a signal like in those movies but that obviously requires an accelerometer. I feel like the easiest option will simply be a tactile button on the bracelet that you push if you wanna detect if your bestie is nearby. For the MCU, I'm already quite familiar with Seeed Studio's XIAO ESP32-C3(![image](https://cdn.hackclub.com/019f7d88-d318-70ac-a23f-b3359861d138/paste-1784517546507.png)) so that decision is quite easy. As its tiny, it has a bulit in battery charger and its low power using BLE which is bluetooth low energy. For the battery of the bracelet, it needs to be a small lipo as it needs to fit into a wearable and be small yet still able to last a day or so. Probably a battery thats 150-250 mAh capacity. Now for the feedback of the bracelet, as how else would you know if your bestie is nearby. I'm thinking of a small haptic motor that vibrates the bracelet once the bracelet detects another bracelet nearby. I'll probably also include an OLED as if theres more than two bracelets in the world, you would want to have a way of knowing who the bracelet belongs to. For the material of the 3d printed enclosure of the bracelet, I don't want to use PLA, probably use PETG or TPU. This project is going to be level 3 as its a wearable so $400 dollar budget however we don't wanna use all of it. Tomorrow I'll do the BOM and then I'll get all of the components and start designing the PCB.

## July 20th: BOM & Schematic
Part 1 (2 Am grind session)
Doing the BOM of the project. Putting all of the parts, quantity, cost, link and LCSC Part number. I'm also gonna begin the schematic of the bracelet.
I'm kinda fried rn, its 2:43 AM, I decided to use RGB LEDS to be part of the design instead of warm white LEDS because I think it would be cooler in terms of lighting! Alright imma go to sleep now. I need to update the BOM tomorrow! For the schematic, I'm going to daisy chain the LEDs in order to have more pins/space for the MCU. Also I'm gonna continue this after i sleep as well so uhh yeah. ![image](https://cdn.hackclub.com/019f7e4b-1b6f-733e-8d1a-aee28015eba9/paste-1784530278718.png)

### Lapse Link: https://lapse.hackclub.com/timelapse/CnL-RgcvxC9W

## July 21st: Finishing Schematic and Doing PCB

I finished what I had currently however after doing the Schematic and PCb, I realized that I probably want it to vibrate so I'll be adding one of those coin motors to the design. Also I need to udpate the bom and stuff
Finished Schematic* I need to add more stuff probably
![image](https://cdn.hackclub.com/019f87a6-3d38-74a4-b46e-d572fc4a7f14/paste-1784687246389.png)
Finished PCB* I need to probably redo after adding more stuff
![image](https://cdn.hackclub.com/019f87a6-f88c-7570-984e-1c8a2c191da5/paste-1784687294180.png)
PCBA:
![image](https://cdn.hackclub.com/019f87a7-3a92-78b9-8d96-6dfc8220115a/paste-1784687311286.png)

### Lapse Link: https://lapse.hackclub.com/timelapse/bK2I03S8tRUv

## July 22nd: Researching More Features

Yesterday I finished the schematic and PCB and finished that. However, I've decided that adding a module that vibrates the bracelet would be a very cool features. Right the PCB design incorporates RGB LEDs, a buzzer, a button and a OLED screen. So when you send out a signal wave and the bracelet receives it back and notices your bestie being close by in proximity, the bracelet will show you who is close/near you, who it is, play a sound, and light in. I feel like adding a coin vibration motor or something that vibrates the bracelet would be a perfect addition. Along with this addition, I will also need to redo the schematic and PCB again tomorrow but thats fine. I spent so long trying to find the coin vibration motor on LCSC but couldn't find it. ![image](https://cdn.hackclub.com/019f8cbe-4ae0-79b0-9424-acdc7ac8141b/image.png)

## July 23rd: Implementing an accelerometer and microphone into design and not doing vibration motor.

I don't know how to connect the coin vibration motor. Perhaps a connector of 1 by 2 will be enough for the coin vibration motor. It seems that the coin vibration motor just needs to be powered to turn on. I'm still not sure how I'm supposed to connect the coin vibration motor as I'm not very familiar with Digikey compared to LCSC. Yeah I'm not sure how to connect this coin vibration motor. I'll replace this coin vibration motor with a microphone. So perhaps we can add a messenging system or something, like press the button to send a signal and once connected to another bracelet, you can hold the button to speak into the microphone to record a message and then send it. Also I feel like the coin vibration motor is redundant with the RGB lighting already. With the microphone addition, I might as well make the bracelet a whole entire safety device as well. So I'll add an accelerometer so if you like get into a car accident, the sudden motion will be picked up by the accelerometer and with correlation from the microphone can detect an accident and then send out SOS signals. For both of these additions, the microhpone and accelerometer also include the addition of the capacitors needed for them. For the microphone, an addition of a 100nF capacitor and a 100kOhm pull-down resistor. For the accelerometer, an addition of a 220 nF, two 100 nF, and a 10 uF capacitor.
I've began the schematic incoroporation of the accelerometer. I'll finish it and the microphone tomorrow!
![image](https://cdn.hackclub.com/019f916e-2c92-7d07-ab1c-b4bb8a15173e/paste-1784851344226.png)

### Lapse Link: https://lapse.hackclub.com/timelapse/o5ep2N4YsLN6

## July 24th: Finished implementing the accelerometer and microphone into the design.

For today, I just finished implementing the accelerometer and microphone into the design. Unlike the 0.96 " OLED, that is able to directly take 3.3 Volts, both the acclerometer and microphone needs a LDO along with a level shifter because of the data being fed out being lower potential. Also I needed a pull down resistor for the microphone along with some other stuff. I'll do the BOM once I finalize everything because otherwise its a constant hassle to change it over and over again. I also organized and labeled the schematic so its nice and clean!. Heres the finished schematic* maybe if I don't add or remove anything else!
![image](https://cdn.hackclub.com/019f9609-b4df-7a52-bcc8-1f520ab94f5d/paste-1784928646159.png)

### Lapse Link: https://lapse.hackclub.com/timelapse/MKJ2zy4voQ4b

## July 25th: Began implementing the PCB structure.
I began with deleting the old PCB design and added all of the new PCB components. I also began structuring my PCB, lining up certain components and at certain spaces. I also decided to wire/route all of the traces tomorrow as right now I want to come up with the most efficient space wise design as this is going into a wearable(bracelet). I think instead of routing traces for the ground of the PCB design, I'll use a ground plane so its easier. Most of the components are already top routed anyway so it should make the design more efficient. I don't know how to do a ground plane so I'll probably spend some time researching how to do that tomorrow as well. So yeah thats it for today! Heres the current PCB design:
![image](https://cdn.hackclub.com/019f9ba5-9be9-79c0-acde-9093badceb88/paste-1785022748976.png)

### Lapse Link: https://lapse.hackclub.com/timelapse/ry9qcLeaWOjL   

## July 26th: Finished the PCB and had a headache doing it.
I started with making a ground plane and began routing all of the traces which were fine until I started routing the acclerometer, the level shifter, the low dropout regulator and the microphone, these were front loaded which made things a pain to route until I realized that I can still use the back plane, as the ground plane will simply not intersect at those vias if I used the back plane at those points. This fixed the stalemate/headache that I had when routing the traces. Heres everything finalized* I think maybe, I'll probably update the design to make it more efficient but this is sufficient so far. 
Schematic: ![image](https://cdn.hackclub.com/019fa081-dd6f-7408-8bfe-3449cb5a6e5a/paste-1785104292713.png)
PCB: ![image](https://cdn.hackclub.com/019fa082-33dc-7e69-a8c7-730d42b7e6b7/paste-1785104315064.png)
PCBA: ![image](https://cdn.hackclub.com/019fa081-6a71-7ca9-ae38-88b025ed37ae/paste-1785104263474.png)

### Lapse Link: https://lapse.hackclub.com/timelapse/NMeOHii6G4NA

## July 27th: Started the Cad models in fusion
I started with getting some 3d models for the PCB so its easier for me to design the enclosure of the PCB visually in Fusion. I then started sketching an enclosure for the PCB :D. This is what I have so far and I'll continue tomorrow!
![image](https://cdn.hackclub.com/019fa64a-c628-7f9b-862f-d62c9b09193e/paste-1785201345765.png)

### Lapse Link: https://lapse.hackclub.com/timelapse/Tswan7ZMvzGd

## July 29th: Mentally fried while desigining case
I started with fixing my PCB because it seems that the button was overlapping with the OLED so I fixed that. As a result I also needed to update the Production of gerber files and the PCB files which I did. Now for the case, I was just staring at it while also thinking of how the hell am I supposd to make it so that the person is able to press the button as while as attach this case/pod with a watch strap as its supposed to be a bracelet.
![image](https://cdn.hackclub.com/019fafcc-1054-7edb-8533-4e646694624c/paste-1785360813876.png)

### Lapse Link: https://lapse.hackclub.com/timelapse/m1o0u2HX9UKT

## July 30th: Another day of trying to cad the case while not being able to :C
I started by revamping the case with a projection of the PCB to ensure better accuracy and fit for the PCB in the case. Then I shelled out the extrusion of the projection that was offset by a couple mms as I didn't want the USB C to extrude/be out compared to be inside. That was the easy part, the more complex part is the top of the case which I am still working on as I need a way for the person to see the leds, the OLED along with pressing the button while also having straps to fit a watch strap or wrist strap. 
![image](https://cdn.hackclub.com/019fb5c1-ed44-7c97-a893-845503d0bb87/paste-1785460812779.png)

### Lapse Link: https://lapse.hackclub.com/timelapse/o3BgAJiJEnb6