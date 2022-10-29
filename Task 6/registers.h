/*
 * registers.h
 *
 * Created: 10/21/2022 2:40:24 PM
 *  Author: lenovo
 */ 


#ifndef REGISTERS_H_
#define REGISTERS_H_

typedef unsigned char uint8_t;

//PORTA Registers
#define PORTA *((volatile uint8_t*)0x3B) //8-bit register
#define DDRA *((volatile uint8_t*)0x3A)
#define PINA *((volatile uint8_t*)0x39)

//PORTB Registers
#define PORTB *((volatile uint8_t*)0x38)
#define DDRB *((volatile uint8_t*)0x37)
#define PINB *((volatile uint8_t*)0x36)

//PORTC Registers
#define PORTC *((volatile uint8_t*)0x35)
#define DDRC *((volatile uint8_t*)0x34)
#define PINC *((volatile uint8_t*)0x33)

//PORTD Registers
#define PORTD *((volatile uint8_t*)0x32)
#define DDRD *((volatile uint8_t*)0x31)
#define PIND *((volatile uint8_t*)0x30)

#endif /* REGISTERS_H_ */