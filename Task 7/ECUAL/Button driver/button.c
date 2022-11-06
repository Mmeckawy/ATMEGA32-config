/*
 * button.c
 *
 * Created: 10/21/2022 5:45:38 PM
 *  Author: lenovo
 */ 

#include "button.h"

void Button_init(uint8_t buttonPort, uint8_t buttonPin)
{
	DIO_init(buttonPort, buttonPin, IN);
}

void Button_read(uint8_t buttonPort, uint8_t buttonPin, uint8_t * value)
{
	DIO_read(buttonPort, buttonPin, value);
}