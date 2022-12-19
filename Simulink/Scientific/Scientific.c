/*
 * File: Scientific.c
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

#include "Scientific.h"

/* Include model header file for global data */
#include "Scientific_calculator.h"
#include "Scientific_calculator_private.h"

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int32_T u0_0;
  int32_T u1_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      u0_0 = 1;
    } else {
      u0_0 = -1;
    }

    if (u1 > 0.0) {
      u1_0 = 1;
    } else {
      u1_0 = -1;
    }

    y = atan2(u0_0, u1_0);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

/* Output and update for atomic system: '<Root>/Scientific' */
void Scientific_calculato_Scientific(real_T rtu_In1, real_T rtu_In2,
  B_Scientific_Scientific_calcu_T *localB)
{
  real_T rtu_In1_0;

  /* Trigonometry: '<S1>/Trigonometric Function' */
  localB->TrigonometricFunction = cos(rtu_In1);

  /* Trigonometry: '<S1>/Trigonometric Function1' */
  localB->TrigonometricFunction1 = sinh(rtu_In1);

  /* Trigonometry: '<S1>/Trigonometric Function10' */
  localB->TrigonometricFunction10 = tanh(rtu_In1);

  /* Trigonometry: '<S1>/Trigonometric Function11' */
  localB->TrigonometricFunction11 = asinh(rtu_In1);

  /* Trigonometry: '<S1>/Trigonometric Function12' */
  localB->TrigonometricFunction12 = atanh(rtu_In1);

  /* Trigonometry: '<S1>/Trigonometric Function13' */
  localB->TrigonometricFunction13 = acosh(rtu_In1);

  /* Trigonometry: '<S1>/Trigonometric Function2' */
  localB->TrigonometricFunction2 = sin(rtu_In1);

  /* Trigonometry: '<S1>/Trigonometric Function3' */
  localB->TrigonometricFunction3 = tan(rtu_In1);

  /* Trigonometry: '<S1>/Trigonometric Function4' */
  if (rtu_In1 > 1.0) {
    rtu_In1_0 = 1.0;
  } else if (rtu_In1 < -1.0) {
    rtu_In1_0 = -1.0;
  } else {
    rtu_In1_0 = rtu_In1;
  }

  localB->TrigonometricFunction4 = asin(rtu_In1_0);

  /* End of Trigonometry: '<S1>/Trigonometric Function4' */

  /* Trigonometry: '<S1>/Trigonometric Function5' */
  if (rtu_In1 > 1.0) {
    rtu_In1_0 = 1.0;
  } else if (rtu_In1 < -1.0) {
    rtu_In1_0 = -1.0;
  } else {
    rtu_In1_0 = rtu_In1;
  }

  localB->TrigonometricFunction5 = acos(rtu_In1_0);

  /* End of Trigonometry: '<S1>/Trigonometric Function5' */

  /* Trigonometry: '<S1>/Trigonometric Function6' */
  localB->TrigonometricFunction6 = atan(rtu_In1);

  /* Trigonometry: '<S1>/Trigonometric Function7' */
  localB->TrigonometricFunction7 = rt_atan2d_snf(rtu_In1, rtu_In2);

  /* Trigonometry: '<S1>/Trigonometric Function8' */
  localB->TrigonometricFunction8 = acosh(rtu_In1);

  /* Trigonometry: '<S1>/Trigonometric Function9' */
  localB->TrigonometricFunction9 = cosh(rtu_In1);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
