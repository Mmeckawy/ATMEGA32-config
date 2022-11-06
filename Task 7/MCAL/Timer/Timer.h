/*
 * Timer.h
 *
 * Created: 11/4/2022 11:41:16 PM
 *  Author: lenovo
 */ 


#ifndef TIMER_H_
#define TIMER_H_

#include "../../registers.h"
#include <math.h>

unsigned int overflow; //increments every time an overflow occurs

void Timer_init(uint8_t timer_mode, uint8_t init_val); //Initializes timer registers
void Timer_start(uint32_t counter); //starts the timer
void Noverflows(uint8_t counter_val); //Calculates number of overflows


#endif /* TIMER_H_ */