
#include <avr/io.h>

#define PORTA_OUT (DDRA = 0xFF)
#define PORTB_OUT (DDRB = 0xFF)
#define PORTC_OUT (DDRC = 0xFF)
#define PORTD_OUT (DDRD = 0xFF)

#define PORTA_IN (DDRA = 0x00)
#define PORTB_IN (DDRB = 0x00)
#define PORTC_IN (DDRC = 0x00)
#define PORTD_IN (DDRD = 0x00)

#define Bit0_PA_HIGH (PORTA = 0b00000001)
#define Bit1_PA_HIGH (PORTA = 0b00000010)
#define Bit2_PA_HIGH (PORTA = 0b00000100)
#define Bit3_PA_HIGH (PORTA = 0b00001000)
#define Bit4_PA_HIGH (PORTA = 0b00010000)
#define Bit5_PA_HIGH (PORTA = 0b00100000)
#define Bit6_PA_HIGH (PORTA = 0b01000000)
#define Bit7_PA_HIGH (PORTA = 0b10000000)


#define Bit0_PB_HIGH (PORTB = 0b00000001)
#define Bit1_PB_HIGH (PORTB = 0b00000010)
#define Bit2_PB_HIGH (PORTB = 0b00000100)
#define Bit3_PB_HIGH (PORTB = 0b00001000)
#define Bit4_PB_HIGH (PORTB = 0b00010000)
#define Bit5_PB_HIGH (PORTB = 0b00100000)
#define Bit6_PB_HIGH (PORTB = 0b01000000)
#define Bit7_PB_HIGH (PORTB = 0b10000000)


#define Bit0_PC_HIGH (PORTC = 0b00000001)
#define Bit1_PC_HIGH (PORTC = 0b00000010)
#define Bit2_PC_HIGH (PORTC = 0b00000100)
#define Bit3_PC_HIGH (PORTC = 0b00001000)
#define Bit4_PC_HIGH (PORTC = 0b00010000)
#define Bit5_PC_HIGH (PORTC = 0b00100000)
#define Bit6_PC_HIGH (PORTC = 0b01000000)
#define Bit7_PC_HIGH (PORTC = 0b10000000)


#define Bit0_PD_HIGH (PORTD = 0b00000001)
#define Bit1_PD_HIGH (PORTD = 0b00000010)
#define Bit2_PD_HIGH (PORTD = 0b00000100)
#define Bit3_PD_HIGH (PORTD = 0b00001000)
#define Bit4_PD_HIGH (PORTD = 0b00010000)
#define Bit5_PD_HIGH (PORTD = 0b00100000)
#define Bit6_PD_HIGH (PORTD = 0b01000000)
#define Bit7_PD_HIGH (PORTD = 0b10000000)




extern void vidLedOn(unsigned int Led_ID);





