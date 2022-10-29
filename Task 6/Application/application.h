/*
 * application.h
 *
 * Created: 10/21/2022 5:28:08 PM
 *  Author: lenovo
 */ 


#ifndef APPLICATION_H_
#define APPLICATION_H_

#include "../ECUAL/LED driver/led.h"
#include "../ECUAL/Button driver/button.h"

#define Button_port PORT_D
#define LED_port PORT_B

//Three LEDs used in the task
#define LED_1 3 
#define LED_2 4
#define LED_3 5

uint8_t counter;
void APP_init(void);
void APP_start(void);
void DELAY(void);

#endif /* APPLICATION_H_ */