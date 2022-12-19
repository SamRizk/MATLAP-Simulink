/*
 * File: Scientific_calculator.h
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

#ifndef RTW_HEADER_Scientific_calculator_h_
#define RTW_HEADER_Scientific_calculator_h_
#include <string.h>
#include <stddef.h>
#ifndef Scientific_calculator_COMMON_INCLUDES_
# define Scientific_calculator_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Scientific_calculator_COMMON_INCLUDES_ */

#include "Scientific_calculator_types.h"

/* Child system includes */
#include "Scientific.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (auto storage) */
typedef struct {
  B_Scientific_Scientific_calcu_T Scientific;/* '<Root>/Scientific' */
} B_Scientific_calculator_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
  real_T In2;                          /* '<Root>/In2' */
} ExtU_Scientific_calculator_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
  real_T Out2;                         /* '<Root>/Out2' */
  real_T Out3;                         /* '<Root>/Out3' */
  real_T Out4;                         /* '<Root>/Out4' */
  real_T Out5;                         /* '<Root>/Out5' */
  real_T Out6;                         /* '<Root>/Out6' */
  real_T Out7;                         /* '<Root>/Out7' */
  real_T Out8;                         /* '<Root>/Out8' */
  real_T Out9;                         /* '<Root>/Out9' */
  real_T Out10;                        /* '<Root>/Out10' */
  real_T Out11;                        /* '<Root>/Out11' */
  real_T Out12;                        /* '<Root>/Out12' */
  real_T Out13;                        /* '<Root>/Out13' */
  real_T Out14;                        /* '<Root>/Out14' */
} ExtY_Scientific_calculator_T;

/* Real-time Model Data Structure */
struct tag_RTM_Scientific_calculator_T {
  const char_T * volatile errorStatus;
};

/* Block signals (auto storage) */
extern B_Scientific_calculator_T Scientific_calculator_B;

/* External inputs (root inport signals with auto storage) */
extern ExtU_Scientific_calculator_T Scientific_calculator_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_Scientific_calculator_T Scientific_calculator_Y;

/* Model entry point functions */
extern void Scientific_calculator_initialize(void);
extern void Scientific_calculator_step(void);
extern void Scientific_calculator_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Scientific_calculato_T *const Scientific_calculator_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Scientific_calculator'
 * '<S1>'   : 'Scientific_calculator/Scientific'
 */
#endif                                 /* RTW_HEADER_Scientific_calculator_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
