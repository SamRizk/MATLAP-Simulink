/*
 * File: DIO_control.c
 *
 * Code generated for Simulink model 'DIO_control'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Sun Jan 15 18:05:21 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DIO_control.h"
#include "DIO_control_private.h"

/* Real-time model */
RT_MODEL_DIO_control_T DIO_control_M_;
RT_MODEL_DIO_control_T *const DIO_control_M = &DIO_control_M_;

/* Model step function */
void DIO_control_step(void)
{
  /* Chart: '<Root>/Bit0_PA_ON' */
  vidLedOn(1U);
}

/* Model initialize function */
void DIO_control_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(DIO_control_M, (NULL));
}

/* Model terminate function */
void DIO_control_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
