#include "mbed.h"
#include "arm_book_lib.h"
 
int main()
{
    DigitalIn gasDetector(D2);
    DigitalIn overTempDetector(D3);
	DigitalIn aButton(D4);
	DigitalIn aButton(D5);
	DigitalIn aButton(D6);
	DigitalIn aButton(D7);
	
    DigitalOut alarmLed(LED1);
 
    gasDetector.mode(PullDown);
    overTempDetector.mode(PullDown);
	aButton.mode(PullDown);
	bButton.mode(PullDown)
	cButton.mode(PullDown)
	dButton.mode(PullDown)
	 
    alarmLed = OFF;
 
    bool alarmState = OFF;
 
    while (true) {
 
        if ( gasDetector || overTempDetector ) {
            alarmState = ON;
        }
 
        alarmLed = alarmState;
 
        if (aButton && bButton &&cButton && |dButton) {
            alarmState = OFF;
        }
    }
}