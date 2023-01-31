
#include "Bit_math.h"
#include "Alarm_interface.h"



void vidAlarmInit(void)
{
	DDRA = 0b00000011;
}


void vidAlarmOn(void)
{
	if( GET_BIT(PORTA,2) == 1 )
	{
		SET_BIT(PORTA,1);
	}
	
	else
	{
	    SET_BIT(PORTA,0);	
	}
}

















