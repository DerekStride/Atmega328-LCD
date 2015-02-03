# Atmega328p w/Arduino bootloader RGB LCD

## Introduction

This Project hosts the code for my project to make an LCD screen that will be controlled by the Atmega328p with the Arduino bootloader on it. I will be using various tutorials and guides and will provide the link to all of them in the Sources section below.

Essentially, this is a collection of all the resources you'll need to get the microcontroller to continually send and change messages on an LCD screen. I recommend soldering components to a protobroad and providing plugs for the pins when you want to reflash the code with new messages. It makes for a **great** gift if you make it look nice!

## Quick Reference Guide

1.  Get all the gear you'll need
2.  Test the LCD with the Raspberry Pi using the [Adafruit_Python_CharLCD](https://github.com/adafruit/Adafruit_Python_CharLCD) library
    *    Alternatively you can test with the Arduino Uno using the    [LiquidCrystal](http://arduino.cc/en/Reference/LiquidCrystal) library and Eliminate the need for the python library
3.  Test the Atmega328p with the Raspberry Pi using a modified avrdude
```shell
cd /tmp
wget http://project-downloads.drogon.net/gertboard/avrdude_5.10-4_armhf.deb
sudo dpkg -i avrdude_5.10-4_armhf.deb
sudo chmod 4755 /usr/bin/avrdude
```
4.  Link the LCD with the Atmega328p

## The Gear You'll Need

1.  [Raspberry Pi](https://www.adafruit.com/product/1914) (Any model will work, I used the B+)
2.  [Atmega328p w/ Arduino Bootloader](https://www.adafruit.com/products/123) (Grab 2 just in case you fry one)
3.  [A Breadboard](https://www.adafruit.com/products/239)
4.  [16 MHz Oscillator](https://www.adafruit.com/products/1873)
5.  General Electronics Gear
    *   Jumper Wires
    *   Resistors
    *   Multimeter
    *   Pliers
    *   Anything Else You Expect Will Help

## Sources:

[Building the Pico Piduino - By Philip Howard](http://pi.gadgetoid.com/article/building-the-pico-piduino)

[Programming the Pico Piduino - By Philip Howard](http://pi.gadgetoid.com/article/programming-your-pico-piduino)

[LCD Arduino Project](https://learn.adafruit.com/character-lcds/overview)

[LCD - RGB | Pi/BBB](https://learn.adafruit.com/character-lcd-with-raspberry-pi-or-beaglebone-black/overview)

[Atmega328 | Arduino Pinout](http://www.hobbytronics.co.uk/arduino-atmega328-pinout)

[Pico Piduino Build](http://pi.gadgetoid.com/piduino/pico-piduino)

[Raspberry Pi Pinout](http://pi.gadgetoid.com/pinout)
