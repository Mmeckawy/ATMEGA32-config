/*
 * buttons.h
 *
 * Created: 10/21/2022 5:45:15 PM
 *  Author: lenovo
 */ 


#ifndef BUTTONS_H_
#define BUTTONS_H_

#include "../../MCAL/DIO driver/dio.h"


//Initialize
void Button_init(uint8_t buttonPort, uint8_t buttonPin);

//Button Read
void Button_read(uint8_t buttonPort, uint8_t buttonPin, uint8_t * value);


#endif /* BUTTONS_H_ */