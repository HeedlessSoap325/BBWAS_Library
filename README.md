# BBWAS-Library

## Prerequisits

To use this Library, the folowing dependencies must be installed:

1. [Adafruit LED Backpack](https://www.arduinolibraries.info/libraries/adafruit-led-backpack-library) versions 1.5.1 and lower are definitely supported, higher versions may not work 

2. [Adafruit GFX](https://www.arduinolibraries.info/libraries/adafruit-gfx-library) versions 1.17.4 and lower are definitely supported, higher versions may not work 

3. [Adafruit BusIO](https://www.arduinolibraries.info/libraries/adafruit-bus-io) versions 1.26.6 and lower are definitely supported, higher versions may not work 

4. [IRRemote](https://github.com/Arduino-IRremote/Arduino-IRremote/releases/tag/2.8.0) versions 2.8.0 and lower should work supported, higher versions are currently not supported


It is also **crutial** that the IRRemote Library and the BBWAS_Library are placed in the same libraries directory, because BBWAS_Library directly imports IRRemote headers (i know, very bad but yeah, it won't work otherwise)

## What is this?
This is a custom Library created for the Arduino IDE intended to be used to communicate more easily with the "BBWAS", a custom PCB Shield created by the [BBW](https://www.bbw.ch/).

To use this Library, simply download the whole project, and extract it into a folder called "BBWAS" then place this Folder in your Arduino-Library Folder.

The libraries Folder per default is located at 
**C:\Users\\\<user\>\Documents\Arduino\libraries**
on Windows


and **/home/\<user\>/Arduino/libraries**
on Linux.

Then you can just include the Library in any Sketch by adding 
```C++
#include <BBWAS.h>
```

## How do I use it?

To explore the capabilities of this Library, check out the **examples Folder** in the project root.
