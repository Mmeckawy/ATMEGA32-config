/*
 * application.h
 *
 * Created: 10/21/2022 5:28:08 PM
 *  Author: lenovo
 */ 


#ifndef APPLICATION_H_
#define APPLICATION_H_

#include "../ECUAL/LED driver/led.h"
#include "../MCAL/Timer/Timer.h"

//LED port
#define LED_port PORT_B

//Three LEDs used in the task
#define LED_1 3 

uint8_t counter;
void APP_init(void);
void APP_start(void);

#endif /* APPLICATION_H_ */