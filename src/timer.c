#include "mcu.h"
#include "timer.h"

void timer0_square_wave_init(void){ 

	TCNT0 = 0x00;      // initial value

	/* Tout = 2 * Ttimer 
	 * Ttimer = Tclock * (OCR0 +1)
	 * given: Tclock = 1MHZ, required: Tout 2KHZ */
	OCR0 = 250;        // compare value
	DDRB |= (1<<PB3);  // OC0 Pin as output pin
	TCCR0 = ((1<<CS00)|(1<<COM00)|(1<<FOC0)|(1<<WGM01));
}