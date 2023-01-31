#include <avr/io.h>
#include "Bit_math.h"
#include "Alarm_interface.h"



void vidAlarmInit(void)
{
	DDRA = 0b00000011;
}


void vidAlarmOn(void)
{
	if( GET_BIT(PINA,2) == 1 )
	{
		SET_BIT(PORTA,1);
		CLR_BIT(PORTA,0);
	}
	
	if( GET_BIT(PINA,2) == 0 )
	{
	    SET_BIT(PORTA,0);	
		CLR_BIT(PORTA,1);
	}
}

















