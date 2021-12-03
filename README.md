README for Embedded Systems Lab 6 and Lab 7: ADC and UART
Author: Kyle Rettig
Created: Demember 3, 2021
Latest Update: Initial Commit
Description: Using the MSP430G2 embedded system, operate different sensor devices, reading data from analog to digital, then sending this data over UART to thinkspeak
_______________________________________________________________________________________________________________________________________
FILES REQUIRED:
msp430.h
_______________________________________________________________________________________________________________________________________
VARIABLES USED:
tempRaw
micRaw
_______________________________________________________________________________________________________________________________________
PROGRAM FUNCTIONS:
Embedded_Lab6_Thermistor.c uses a 10k resistor to collect a resistance that can be used to calculate temperature. This resistance is collected through the designated pin, then run through the ADC to create a digital resistance, that is run through a calculation to make a readable temperature.

Embedded_Lab7_UARTInputs.c uses both a 10k resistor and a electret condensor microphone taken in through their respective pins on the MSP430, using a single ADC to take in an input from each sensor alternatively each time it takes an input. This input it sent through UART to thinkspeak to receive the data wirelessly.

Form.cs is the gui used to start the serial data transmission and read the inputs being sent to thinkspeak.
