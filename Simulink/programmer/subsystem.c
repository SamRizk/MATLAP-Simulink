/*
 * File: subsystem.c
 *
 * Code generated for Simulink model 'programmer'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Dec 19 09:34:03 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#include "subsystem.h"

/* Include model header file for global data */
#include "programmer.h"
#include "programmer_private.h"

/* Output and update for atomic system: '<Root>/subsystem' */
void programmer_subsystem(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  S-Function (sfix_bitop): '<S1>/Bitwise Operator'
   */
  programmer_Y.Out1 = (uint8_T)(programmer_U.In1 & 217);

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   *  S-Function (sfix_bitop): '<S1>/Bitwise Operator1'
   */
  programmer_Y.Out2 = (uint8_T)(programmer_U.In1 | 217U);

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/In1'
   *  S-Function (sfix_bitop): '<S1>/Bitwise Operator2'
   */
  programmer_Y.Out3 = (uint8_T)~programmer_U.In1;

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/In1'
   *  S-Function (sfix_bitop): '<S1>/Bitwise Operator3'
   */
  programmer_Y.Out4 = (uint8_T)~(uint8_T)(programmer_U.In1 & 217);

  /* Outport: '<Root>/Out5' incorporates:
   *  Inport: '<Root>/In1'
   *  S-Function (sfix_bitop): '<S1>/Bitwise Operator4'
   */
  programmer_Y.Out5 = (uint8_T)~programmer_U.In1;

  /* Outport: '<Root>/Out6' incorporates:
   *  Inport: '<Root>/In1'
   *  S-Function (sfix_bitop): '<S1>/Bitwise Operator5'
   */
  programmer_Y.Out6 = (uint8_T)(programmer_U.In1 ^ 217U);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
