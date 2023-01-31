/************************************
 * Bit_math.h                       *
 *                                  *
 *  Created on: Dec 7, 2022         *
 *      Author: Raouf Abdel-Magied  *
 *                                  *
 ************************************/


#ifndef BIT_MATH_H_
#define BIT_MATH_H_


#define SET_BIT(REG,BIT)           (REG) |= (1<<(BIT))
#define CLR_BIT(REG,BIT)           (REG) &= ~(1<<(BIT))
#define TGL_BIT(REG,BIT)           (REG) ^= (1<<(BIT))
#define GET_BIT(REG,BIT)           ((REG >> BIT)&1)

#define SET_HIGH_NIB(REG)          (REG)|= (0xF0)
#define CLR_HIGH_NIB(REG)          (REG)&= (0x0F)
#define GET_HIGH_NIB(REG)          ((REG >> 4) & 0xF0)
#define TGL_HIGH_NIB(REG)          (REG) ^= (0xF0)    
#define SET_LOW_NIB(REG)           (REG)|= (0x0F)
#define CLR_LOW_NIB(REG)           (REG)&= (0xF0)
#define GET_LOW_NIB(REG)           ((REG) & 0x0F)
#define TGL_LOW_NIB(REG)           (REG) ^= (0x0F)
#define GET_HIGH_NIB(REG)          ((REG >> 4) & 0xF0)
#define GET_LOW_NIB(REG)           ((REG >> 4) & 0x0F)

#define ASSIGN_REG(REG,VALUE)      (REG) = ((REG&0)|VALUE)
#define ASSIGN_HIGH_NIB(REG,VALUE) (REG) = ((REG & 0x0F)|(VALUE << 4))
#define ASSIGN_LOW_NIB(REG,VALUE)  (REG) = ((REG & 0xF0)|(VALUE))
#define CIRC_RIGHT_SHIFT(REG,NO)   (REG) = ((REG >> NO) | (REG << ((sizeof(REG)*8) - NO)))
#define CIRC_LEFT_SHIFT(REG,NO)    (REG) = ((REG << NO) | (REG >> ((sizeof(REG)*8) - NO)))


#endif 

