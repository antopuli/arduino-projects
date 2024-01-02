# Arduino Projects

This repository contains some small projects that I made while studying for the Arduino Fundamentals Certification. This is a list to directly see the details about them:
1. [Aereospace Interface](#aereospace-interface)

## Aereospace Interface

I simulated a small control panel with a button and lights. A green LED turns on until you click the button, then the green LED turns off and the other lights starts blinking. In the folder you find the logical and physical schemes.

The interesting part of the project regard the digital pins, I used them to control the leds and button behaviors. In the setup() I configurated the third, fourth and fifth pins as output (LEDs) and the second as input (button). In the loop() I used to read the value of the second digital pin, if it was LOW then the green LED (third digital pin) was set to HIGH and the others to LOW, if it was HIGH then the opposite. 
