#include<msp430.h>
char result[100];

int ReadTemp()
{
    int temp = 0;
    __delay_cycles(1000);
    ADC10CTL0 |= ENC + ADC10SC; //enable and start the ADC
    while (ADC10CTL1 & BUSY);
    temp = ADC10MEM; //store converted resistance
    ADC10CTL0 &= ~ENC; //disable ADC
    return (int) ((temp * 27069L - 18169625L) >> 16); // convert temperature reading to Fahrenheit
}

void main(void)
{
    volatile int temperature; //initialise
    WDTCTL = WDTPW + WDTHOLD; //stop Watchdog Timer
    ADC10CTL0 = SREF_1 + REFON + ADC10ON + ADC10SHT_3; //Vref+,Ref on,64 clocks for sample
    ADC10CTL1 = INCH_10 + ADC10DIV_3; //Use A5 for thermistor location, and clock/4
    while (1)
    {
        __delay_cycles(500);
        temperature = ReadTemp();
        __delay_cycles(500);

    }
}

