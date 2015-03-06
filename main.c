#include <driverlib.h>
#include <msp430.h>

/*
 * main.c
 */
int main(void) {
    WDT_A_hold(WDT_A_BASE);	// Stop watchdog timer
	GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN0); //Setting P1.0 as Output Pin
	
	while(1){

	}
	return 0;
}
