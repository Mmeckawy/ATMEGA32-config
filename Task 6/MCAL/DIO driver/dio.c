/*
 * dio.c
 *
 * Created: 10/16/2022 5:52:54 PM
 *  Author: lenovo
 */ 

#include "dio.h"

void DIO_init(uint8_t portNum, uint8_t pinNum, uint8_t direction)
{
	switch(portNum)
	{
		case PORT_A:
		   if(direction == IN)
		   {
			   DDRA &=~ (1<<pinNum); //input
		   }
		   else if (direction == OUT)
		   {
			   DDRA |= (1<<pinNum); //output
		   }
		   else
		   {
			   //Error handling
		   }
		   break;
		   
		case PORT_B:
		   if(direction == IN)
		   {
			   DDRB &=~ (1<<pinNum); //input
		   }
		   else if (direction == OUT)
		   {
			   DDRB |= (1<<pinNum); //output
		   }
		   else
		   {
			   //Error handling
		   }
		   break;
		   
		case PORT_C:
		   if(direction == IN)
		   {
			   DDRC &=~ (1<<pinNum); //input
		   }
		   else if (direction == OUT)
		   {
			   DDRC |= (1<<pinNum); //output
		   }
		   else
		   {
			   //Error handling
		   }
		   break;
		   
	    case PORT_D:
		   if(direction == IN)
		   {
			   DDRD &=~ (1<<pinNum); //input
		   }
		   else if (direction == OUT)
		   {
			   DDRD |= (1<<pinNum); //output
		   }
		   else
		   {
			   //Error handling
		   }
		   break;   
	}
}

void DIO_write(uint8_t portNum, uint8_t pinNum, uint8_t value)
{
	switch(portNum)
	{
		case PORT_A:
		if(value == LOW)
		{
			PORTA &=~ (1<<pinNum); //input
		}
		else if (value == HIGH)
		{
			PORTA |= (1<<pinNum); //output
		}
		else
		{
			//Error handling
		}
		break;
		
		case PORT_B:
		if(value == LOW)
		{
			PORTB &=~ (1<<pinNum); //input
		}
		else if (value == HIGH)
		{
			PORTB |= (1<<pinNum); //output
		}
		else
		{
			//Error handling
		}
		break;
		
		case PORT_C:
		if(value == LOW)
		{
			PORTC &=~ (1<<pinNum); //input
		}
		else if (value == HIGH)
		{
			PORTC |= (1<<pinNum); //output
		}
		else
		{
			//Error handling
		}
		break;
		
		case PORT_D:
		if(value == LOW)
		{
			PORTD &=~ (1<<pinNum); //input
		}
		else if (value == HIGH)
		{
			PORTD |= (1<<pinNum); //output
		}
		else
		{
			//Error handling
		}
		break;
	}
}

void DIO_toggle(uint8_t portNum, uint8_t pinNum)
{
	switch(portNum)
	{
		case PORT_A:
		    PORTA ^= (1<<pinNum);
		    break;
		
		case PORT_B:
		    PORTB ^= (1<<pinNum);
		    break;
		
		case PORT_C:
		    PORTC ^= (1<<pinNum);
		    break;
		
		case PORT_D:
            PORTD ^= (1<<pinNum);
            break;
			
		default:
		   //Error handling
		   break;
	}
}

uint8_t DIO_read(uint8_t portNum, uint8_t pinNum, uint8_t* value)
{
	switch(portNum)
	{
		case PORT_A:
		    *value = (PINA & (1<<pinNum))>>pinNum;
		break;
		
		case PORT_B:
		    *value = (PINB & (1<<pinNum))>>pinNum;
		break;
		
		case PORT_C:
		    *value = (PINC & (1<<pinNum))>>pinNum;
		break;
		
		case PORT_D:
		    *value = (PIND & (1<<pinNum))>>pinNum;
		break;
		
		default:
		//Error handling
		break;
	}
}