/*
 * application.c
 *
 * Created: 10/21/2022 5:27:52 PM
 *  Author: lenovo
 */ 

#include "application.h"

void DELAY(void)
{
	for(int i=0; i<12500; i++);
}

void APP_init(void)
{
	counter = 0;
	LED_init(LED_port,LED_1);
	LED_init(LED_port,LED_2);
	LED_init(LED_port,LED_3);
	Button_init(Button_port, 1);
}

void APP_start(void)
{
	uint8_t button_state;
	
	Button_read(Button_port, 1, &button_state);
	
	if(button_state == HIGH)
	{
		if(counter < 6)
		{
			counter++;
		}
		else if(counter == 6)
		{
			counter = 0;
		}
	}
	
	switch(counter)
	{
		case 0:
		   LED_off(LED_port,LED_1);
		   LED_off(LED_port,LED_2);
		   LED_off(LED_port,LED_3);
		   break;
		
		case 1:
		   LED_on(LED_port,LED_1);
		   LED_off(LED_port,LED_2);
		   LED_off(LED_port,LED_3);
		   break;
		
		case 2:
		   LED_on(LED_port,LED_1);
		   LED_on(LED_port,LED_2);
		   LED_off(LED_port,LED_3);
		   break;
		   
		case 3:
		   LED_on(LED_port,LED_1);
		   LED_on(LED_port,LED_2);
		   LED_on(LED_port,LED_3);
		   break;
		   
		case 4:
		   LED_on(LED_port,LED_1);
		   LED_on(LED_port,LED_2);
		   LED_off(LED_port,LED_3);
		   break;
		   
		case 5:
		   LED_on(LED_port,LED_1);
		   LED_off(LED_port,LED_2);
		   LED_off(LED_port,LED_3);
		   break;
	}
}