/*
 * Timer.c
 *
 * Created: 11/4/2022 11:41:27 PM
 *  Author: lenovo
 */ 

#include "Timer.h"

void Timer_init(uint8_t timer_mode, uint8_t init_val)
{
	TCCR0 = timer_mode;
	TCNT0 = init_val;
}

void Timer_start(uint32_t counter)
{
	double Num_overflow = 0; //calculates number of overflows that will occur
	TCCR0 |= (1<<0); //No pre-scaler
	
	Num_overflow = ceil(counter/0.256); //Overflow in milliseconds / max delay in microseconds
	while(overflow < Num_overflow)
	{
		//Wait for overflow flag
		while((TIFR & (1<<0)) == 0);
		//Clear the overflow flag
		TIFR |= (1<<0);
		
		overflow++;
	}
	overflow = 0;
	//Timer Stop
	TCCR0 = 0x00;
}

