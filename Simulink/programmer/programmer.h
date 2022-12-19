/*
 * File: programmer.h
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

#ifndef RTW_HEADER_programmer_h_
#define RTW_HEADER_programmer_h_
#include <stddef.h>
#include <string.h>
#ifndef programmer_COMMON_INCLUDES_
# define programmer_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* programmer_COMMON_INCLUDES_ */

#include "programmer_types.h"

/* Child system includes */
#include "subsystem.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  uint8_T In1;                         /* '<Root>/In1' */
} ExtU_programmer_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  uint8_T Out1;                        /* '<Root>/Out1' */
  uint8_T Out2;                        /* '<Root>/Out2' */
  uint8_T Out3;                        /* '<Root>/Out3' */
  uint8_T Out4;                        /* '<Root>/Out4' */
  uint8_T Out5;                        /* '<Root>/Out5' */
  uint8_T Out6;                        /* '<Root>/Out6' */
} ExtY_programmer_T;

/* Real-time Model Data Structure */
struct tag_RTM_programmer_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_programmer_T programmer_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_programmer_T programmer_Y;

/* Model entry point functions */
extern void programmer_initialize(void);
extern void programmer_step(void);
extern void programmer_terminate(void);

/* Real-time Model object */
extern RT_MODEL_programmer_T *const programmer_M;

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
 * '<Root>' : 'programmer'
 * '<S1>'   : 'programmer/subsystem'
 */
#endif                                 /* RTW_HEADER_programmer_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
