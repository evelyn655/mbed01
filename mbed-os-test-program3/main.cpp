#include "mbed.h"

DigitalOut myLED(LED3);
DigitalOut myLED2(LED1);

void Led1(DigitalOut &ledpin);
void Led2(DigitalOut &ledpin);

int main()
{
    myLED = 1;
    myLED2 = 1;
    while(true)
    {
        Led1(myLED);
        Led2(myLED2);
    }
}