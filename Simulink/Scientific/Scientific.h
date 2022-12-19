/*
 * File: Scientific.h
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

#ifndef RTW_HEADER_Scientific_h_
#define RTW_HEADER_Scientific_h_
#include <math.h>
#ifndef Scientific_calculator_COMMON_INCLUDES_
# define Scientific_calculator_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Scientific_calculator_COMMON_INCLUDES_ */

#include "Scientific_calculator_types.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"

/* Block signals for system '<Root>/Scientific' */
typedef struct {
  real_T TrigonometricFunction;        /* '<S1>/Trigonometric Function' */
  real_T TrigonometricFunction1;       /* '<S1>/Trigonometric Function1' */
  real_T TrigonometricFunction10;      /* '<S1>/Trigonometric Function10' */
  real_T TrigonometricFunction11;      /* '<S1>/Trigonometric Function11' */
  real_T TrigonometricFunction12;      /* '<S1>/Trigonometric Function12' */
  real_T TrigonometricFunction13;      /* '<S1>/Trigonometric Function13' */
  real_T TrigonometricFunction2;       /* '<S1>/Trigonometric Function2' */
  real_T TrigonometricFunction3;       /* '<S1>/Trigonometric Function3' */
  real_T TrigonometricFunction4;       /* '<S1>/Trigonometric Function4' */
  real_T TrigonometricFunction5;       /* '<S1>/Trigonometric Function5' */
  real_T TrigonometricFunction6;       /* '<S1>/Trigonometric Function6' */
  real_T TrigonometricFunction7;       /* '<S1>/Trigonometric Function7' */
  real_T TrigonometricFunction8;       /* '<S1>/Trigonometric Function8' */
  real_T TrigonometricFunction9;       /* '<S1>/Trigonometric Function9' */
} B_Scientific_Scientific_calcu_T;

extern void Scientific_calculato_Scientific(real_T rtu_In1, real_T rtu_In2,
  B_Scientific_Scientific_calcu_T *localB);

#endif                                 /* RTW_HEADER_Scientific_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
