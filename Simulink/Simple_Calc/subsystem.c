/*
 * File: subsystem.c
 *
 * Code generated for Simulink model 'Simple'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Dec 19 09:46:18 2022
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
#include "Simple.h"
#include "Simple_private.h"

/* Output and update for atomic system: '<Root>/subsystem' */
void Simple_subsystem(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<S1>/Add'
   */
  Simple_Y.Out1 = Simple_U.In1 + Simple_U.In2;

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<S1>/Divide'
   */
  Simple_Y.Out4 = Simple_U.In1 / Simple_U.In2;

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<S1>/Product'
   */
  Simple_Y.Out3 = Simple_U.In1 * Simple_U.In2;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<S1>/Subtract'
   */
  Simple_Y.Out2 = Simple_U.In1 - Simple_U.In2;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
