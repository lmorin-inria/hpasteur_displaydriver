# hpasteur_displaydriver
ATmega328PDriver for Hotel Pasteur custom display

## Description

This package contains the driver and a basic example of the HotelPasteur display units.

## Driver Files
The driver depends on the following files:
src/AvrGPIO.h
src/GpioPin.h
src/HpasteurDisplay.h

It has been developped and tested on the Atmega 328p µControler.
There are no specific requirements beyond the standard platformio SDK backend for the Atmega.

The file "HpasteurDisplay_tests.cc" contains some testing functions and examples

## Usage

The interface is created using the class *HPLetter*:
```c++
    hpasteur::HPLetter gpioSegment;
```

One led can be activated at a time (for the moment). To activate it,
```c++
    gpioSegment.ledOn()
```

Two buttons are available (0 and 1) and can be accessed via the function:
```c++
    gpioSegment.getButton( 0 /* button number */)
```

The total number of leds:
```c++
    gpioSegment.size();
```

## Compilation
The platforio scripts have been extended to support and automatic uploading of the firmware over the network using an ESP8266 (ESP8266AVRISP)

New pio targets :
 "telnet":   command line on the atmega328p flash program
 "wupload":  upload the firmware via an esp8266 at an IP address set in the "platformio.ini" file
 "assembly": compile the main file and generate the assembly code
 "sclean":   clean the "compile" target

To run a target:
```bash
    platformio run --target <target>
```
