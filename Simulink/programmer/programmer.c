/*
 * File: programmer.c
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

#include "programmer.h"
#include "programmer_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_programmer_T programmer_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_programmer_T programmer_Y;

/* Real-time model */
RT_MODEL_programmer_T programmer_M_;
RT_MODEL_programmer_T *const programmer_M = &programmer_M_;

/* Model step function */
void programmer_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/subsystem' */
  programmer_subsystem();

  /* End of Outputs for SubSystem: '<Root>/subsystem' */
}

/* Model initialize function */
void programmer_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(programmer_M, (NULL));

  /* external inputs */
  programmer_U.In1 = 0U;

  /* external outputs */
  (void) memset((void *)&programmer_Y, 0,
                sizeof(ExtY_programmer_T));
}

/* Model terminate function */
void programmer_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
