
#include "Bit_math.h"
#include "Alarm_interface.h"
#include "STD_Types.h"


void vidAlarmInit(void)
{
	DDRA = 0b00000011; //PortA -> Bit 0,1 OUTPUT
	DDRB = 0b00000000; //PortB -> All Bits INPUT
}


void vidAlarmOn(u8 Copy_u8IsPressed)
{
	
	Copy_u8IsPressed = u8ReadBtn();
	
	if(Copy_u8IsPressed)
	{
		PORTA = 0b00000001; //PortA Bit_0 -> HIGH
	}
	
	else
	{
	   	PORTA = 0b00000010; //PortA Bit_1 -> HIGH
	}
}


u8 u8ReadBtn(void)
{
	return GET_BIT(PORTB,0); //get the value of the bit_0 in portB
}














