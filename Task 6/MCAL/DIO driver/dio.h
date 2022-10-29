/*
 * dio.h
 *
 * Created: 10/16/2022 5:52:40 PM
 *  Author: lenovo
 */ 

#include "../../registers.h"

#ifndef DIO_H_
#define DIO_H_

//All driver macros
#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'

//Direction definitions
#define IN 0
#define OUT 1

//Value Definitions
#define LOW 0
#define HIGH 1

void DIO_init(uint8_t portNum, uint8_t pinNum, uint8_t direction); //Initialize the DIO direction

void DIO_write(uint8_t portNum, uint8_t pinNum, uint8_t value); //Write to DIO

void DIO_toggle(uint8_t portNum, uint8_t pinNum); //Toggle DIO

uint8_t DIO_read(uint8_t portNum, uint8_t pinNum, uint8_t* value); //Read DIO

#endif /* DIO_H_ */