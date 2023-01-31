
#include "Bit_math.h"
#include "STD_Types.h"





#define PINA   *((volatile u8*)(0x19))
#define DDRA   *((volatile u8*)(0x1A))
#define PORTA  *((volatile u8*)(0x1B))


#define PINB   *((volatile u8*)(0x16))
#define DDRB   *((volatile u8*)(0x17))
#define PORTB  *((volatile u8*)(0x18))



extern void vidAlarmInit(void);
extern u8 u8ReadBtn(void);
extern void vidAlarmOn(u8 Copy_u8IsPressed);





















