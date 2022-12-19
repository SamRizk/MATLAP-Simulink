/*
 * File: Scientific_calculator.c
 *
 * Code generated for Simulink model 'Scientific_calculator'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Dec 19 04:38:12 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#include "Scientific_calculator.h"
#include "Scientific_calculator_private.h"

/* Block signals (auto storage) */
B_Scientific_calculator_T Scientific_calculator_B;

/* External inputs (root inport signals with auto storage) */
ExtU_Scientific_calculator_T Scientific_calculator_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Scientific_calculator_T Scientific_calculator_Y;

/* Real-time model */
RT_MODEL_Scientific_calculato_T Scientific_calculator_M_;
RT_MODEL_Scientific_calculato_T *const Scientific_calculator_M =
  &Scientific_calculator_M_;

/* Model step function */
void Scientific_calculator_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Scientific' */

  /* Inport: '<Root>/In1' incorporates:
   *  Inport: '<Root>/In2'
   */
  Scientific_calculato_Scientific(Scientific_calculator_U.In1,
    Scientific_calculator_U.In2, &Scientific_calculator_B.Scientific);

  /* End of Outputs for SubSystem: '<Root>/Scientific' */

  /* Outport: '<Root>/Out1' */
  Scientific_calculator_Y.Out1 =
    Scientific_calculator_B.Scientific.TrigonometricFunction2;

  /* Outport: '<Root>/Out2' */
  Scientific_calculator_Y.Out2 =
    Scientific_calculator_B.Scientific.TrigonometricFunction;

  /* Outport: '<Root>/Out3' */
  Scientific_calculator_Y.Out3 =
    Scientific_calculator_B.Scientific.TrigonometricFunction3;

  /* Outport: '<Root>/Out4' */
  Scientific_calculator_Y.Out4 =
    Scientific_calculator_B.Scientific.TrigonometricFunction5;

  /* Outport: '<Root>/Out5' */
  Scientific_calculator_Y.Out5 =
    Scientific_calculator_B.Scientific.TrigonometricFunction4;

  /* Outport: '<Root>/Out6' */
  Scientific_calculator_Y.Out6 =
    Scientific_calculator_B.Scientific.TrigonometricFunction6;

  /* Outport: '<Root>/Out7' */
  Scientific_calculator_Y.Out7 =
    Scientific_calculator_B.Scientific.TrigonometricFunction7;

  /* Outport: '<Root>/Out8' */
  Scientific_calculator_Y.Out8 =
    Scientific_calculator_B.Scientific.TrigonometricFunction1;

  /* Outport: '<Root>/Out9' */
  Scientific_calculator_Y.Out9 =
    Scientific_calculator_B.Scientific.TrigonometricFunction9;

  /* Outport: '<Root>/Out10' */
  Scientific_calculator_Y.Out10 =
    Scientific_calculator_B.Scientific.TrigonometricFunction10;

  /* Outport: '<Root>/Out11' */
  Scientific_calculator_Y.Out11 =
    Scientific_calculator_B.Scientific.TrigonometricFunction11;

  /* Outport: '<Root>/Out12' */
  Scientific_calculator_Y.Out12 =
    Scientific_calculator_B.Scientific.TrigonometricFunction8;

  /* Outport: '<Root>/Out13' */
  Scientific_calculator_Y.Out13 =
    Scientific_calculator_B.Scientific.TrigonometricFunction12;

  /* Outport: '<Root>/Out14' */
  Scientific_calculator_Y.Out14 =
    Scientific_calculator_B.Scientific.TrigonometricFunction13;
}

/* Model initialize function */
void Scientific_calculator_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(Scientific_calculator_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &Scientific_calculator_B), 0,
                sizeof(B_Scientific_calculator_T));

  /* external inputs */
  (void)memset((void *)&Scientific_calculator_U, 0, sizeof
               (ExtU_Scientific_calculator_T));

  /* external outputs */
  (void) memset((void *)&Scientific_calculator_Y, 0,
                sizeof(ExtY_Scientific_calculator_T));
}

/* Model terminate function */
void Scientific_calculator_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
