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
		setOutputHighOnPin(GPIO_PORT_P1, GPIO_PIN0);
		_delay_cycles(ONE_SECOND);
		setOutputLowOnPin(GPIO_PORT_P1, GPIO_PIN0);
		_delay_cycles(ONE_SECOND);
	}
	return 0;
}
