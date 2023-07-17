# EGL314 Team-B-Project-Space

## Software Required:<br>

Arduino IDE 1.8.16<br>
Reaper 6.8.0<br>
Wallpaper engine 2.2.18 <br>
### **Plugins**
Drums: https://decomposer.de/sitala/ <br>
Midi Keyboard: https://tal-software.com/products/tal-noisemaker<br>


## Hardware Required:<br>
Arduino Leonardo x 3<br>
Concourse Q5 speakers (nominal impedance 8Ohms, 35 Watts) x 2<br>
XPA 1002 power amplifier x 1<br>
Ultra Short Throw Projector, Sony VPL-SW630 x 1<br>
Remaco Motorised Screen (with Controller for Up, Stop, Down Relay control) x 1<br>
Laptops (HP ZBook 15 G5) x 2<br>
HDMI over-twisted pair transmitter, KRAMER PT-571 x 1<br>
HDMI over-twisted pair receiver, KRAMER PT-572+ x 1<br>
Media Server(Lenovo Thinkstation) x1<br>

USB type C to female LAN adapter x 2<br>

## Cables Required:<br>
HDMI cable x 2<br>
Terminal block to 4 bare end cable x 1<br>
3.5mm to 4-way terminal block cable x 1<br>
RJ45 LAN cable x 4<br>

## BOM List:<br>
Arduino Leonardo x 3

## Video 
![Video Diagram](images/Video.jpg)
## Audio
![Audio Diagram](images/Audio.jpg)
## Control
![Control Diagram](images/controlphoto.jpeg)

## Floor Plan
![ALT](images/FloorPlan.jpg)

## Setup 
![Capture](images/setup.jpg)
![Capture](images/server.jpg)
![Capture](images/phidget_setup.jpg)
Turns on the video
![Capture](images/MIDIsetup.jpg)
The respective LEDs will turn on
![Capture](images/Rack.jpg)
## Media Server
```
IP address: 192.168.0.12 
```
## DIY MIDI Instruments
![ALT](images/MIDI_Keyboard.jpg)

![ALT](images/Drum.jpg)
These are the Midi keyboard and drum user interfaces for the user to play on .
* The MIDI `eth0` interfaces is powered and controlled by a Arduino Leonardo micro-controller 
* The wires are connected from the Arduino to the aluminium tape which is use as a conductive sensors for the users to touch. When they touch, it will register the desired tunes for the respective instruments, which will be played.
## Audio Visual
![ALT](images/AudioVisual.jpg)
Here is a photo of a audio visual response from wallpaper engine which is being translated from the musical notes that are being played by the user

![Alt](images/MIDIcode.jpg)
This is the program for the MIDI instruments which is used to programmed the tunes and melody with the help of **Reaper software**.

## Fixtures and Devices

![Capture](images/TouchSensor.jpg)
**Description:** Touch Sensor <br>
**Model:** 1110 <br>
**Manufacturer:** Phidgets <br>
**P/N** NA <br>
![Capture](images/Phidget_Interface.jpg)
**Description:** Phidget Controller interface <br>
**Model:** 1018 <br>
**Manufacturer:** Phidgets <br>
**P/N** NA <br>
![Capture](images/Projector.jpg)x
**Description:** Projector <br>
**Model:** Sony VPL-SW630 <br>
**Manufacturer:** Sony <br>
**P/N** NA <br>
![Capture](images/Speaker1.jpg)
**Description:** Concourse Passive Speaker <br>
**Model:** Concourse Quad 5  <br>
**Manufacturer:** Yumpu <br>
**P/N** Q5 <br>
![Capture](images/XPA1002Amp.jpg)
**Description:** Power Amplifier<br>
**Model:** XPA 1002 <br>
**Manufacturer:** Extron <br>
**P/N:** 60-849-01 <br>
![Capture](images/server.jpg)









