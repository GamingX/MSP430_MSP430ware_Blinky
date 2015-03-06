#include <driverlib.h>
#include <msp430.h>

#define ONE_SECOND 800000
/*
 * main.c
 */
int main(void) {
    WDT_A_hold(WDT_A_BASE);	// Stop watchdog timer
	GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN0); //Setting P1.0 as Output Pin
	
	while(1){
		GPIO_setOutputHighOnPin(GPIO_PORT_P1, GPIO_PIN0); // Sets P1.0 as high, LED glows
		_delay_cycles(ONE_SECOND);						  // In-built delay function for one second
		GPIO_setOutputLowOnPin(GPIO_PORT_P1, GPIO_PIN0);  // Resets P1.0, LED turns off
		_delay_cycles(ONE_SECOND);
	}
	return 0;
}
