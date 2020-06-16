/*
 a program to generate a 2KHz clock using Timer0 CTC Mode.
  Requirements:
• μC control with internal 1Mhz Clock
• Timer0 - CTC Mode with no prescalar
• clock duty cycle is 50%.
 */ 

#include "mcu.h"

int main(void)
{
	timer0_square_wave_init();
    for(;;);
}
