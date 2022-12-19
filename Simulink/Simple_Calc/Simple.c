/*
 * File: Simple.c
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

#include "Simple.h"
#include "Simple_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_Simple_T Simple_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Simple_T Simple_Y;

/* Real-time model */
RT_MODEL_Simple_T Simple_M_;
RT_MODEL_Simple_T *const Simple_M = &Simple_M_;

/* Model step function */
void Simple_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/subsystem' */
  Simple_subsystem();

  /* End of Outputs for SubSystem: '<Root>/subsystem' */
}

/* Model initialize function */
void Simple_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Simple_M, (NULL));

  /* external inputs */
  (void)memset((void *)&Simple_U, 0, sizeof(ExtU_Simple_T));

  /* external outputs */
  (void) memset((void *)&Simple_Y, 0,
                sizeof(ExtY_Simple_T));
}

/* Model terminate function */
void Simple_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
