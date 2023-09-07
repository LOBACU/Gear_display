# Gear_display
Code and schematics to produce easy and cheap gear display for manual transmission using arduino nano and A3144 hall effect sensors.

Firstly there will be an DYI version, but later on trying to produce bolt on kits.
  

First bolt on kits are made for:

-honda civic

-bmw e34

-bmw e36


List of materials:

-A3144 Hall effect sensors

-Neo magnet

-arduino nano

-10k ohm resistors

-220 ohm resistors

The resistor between +5V and the signal output acts as a pull-up resistor. When the sensor is not actively pulling the signal line low (i.e., detecting a magnetic field), the resistor pulls the signal line high to +5V. This prevents the signal line from floating, which could lead to unstable or undefined states.


The displayed numbers

![display1](https://github.com/LOBACU/Gear_display/assets/143682416/d20e3314-1f30-4a47-8003-6e5844f9b9ed)


