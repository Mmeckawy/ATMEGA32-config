/*
 * led.h
 *
 * Created: 10/21/2022 4:59:45 PM
 *  Author: lenovo
 */ 


#ifndef LED_H_
#define LED_H_

#include "../../MCAL/DIO driver/dio.h"

void LED_init(uint8_t ledPort, uint8_t ledPin);
void LED_on(uint8_t ledPort, uint8_t ledPin);
void LED_off(uint8_t ledPort, uint8_t ledPin);
void LED_toggle(uint8_t ledPort, uint8_t ledPin);

#endif /* LED_H_ */