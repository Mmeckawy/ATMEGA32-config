/*
 * application.c
 *
 * Created: 10/21/2022 5:27:52 PM
 *  Author: lenovo
 */ 

#include "application.h"


void APP_init(void)
{
	LED_init(LED_port,LED_1);
	Timer_init(0x00,0x00);
	overflow = 0;
}

void APP_start(void)
{
	LED_on(LED_port,LED_1);
	Timer_start(500);
	LED_off(LED_port,LED_1);
	Timer_start(300);
}