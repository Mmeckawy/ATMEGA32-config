/*
 * GccApplication1.c
 *
 * Created: 10/6/2022 5:36:44 AM
 * Author : lenovo
 */ 


#include "Application/application.h"

int main(void)
{
	APP_init();
	
	while (1)
	{
		APP_start();
		DELAY();
	}
}

