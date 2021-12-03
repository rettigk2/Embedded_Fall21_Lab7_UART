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
RedLED
GreenLED
BUTTON
_______________________________________________________________________________________________________________________________________
PROGRAM FUNCTIONS:
WDTInterrupt.c is a program that uses the MSP430G2553's internal SMCLK, along with a clock divider, to toggle between the onboard red and green LEDs at a time of 256ms per toggle until the code is forcibly stopped

SoftwarePWM.c is a program that uses the MSP430G2553's internal SMCLK, along with a clock divider, to control the brightness of the onboard red LED with a duty cycle of 10% in a period of 500ms until the code is forcibly stopped, this is done in the main code

HardwarePWM.c is a program that uses the MSP430G2553's internal SMCLK, along with a clock divider, to control the brightness of the onboard red LED with a duty cycle of 10% in a period of 256ms until the code is forcibly stopped, this is done through a separate hardware interrupt
