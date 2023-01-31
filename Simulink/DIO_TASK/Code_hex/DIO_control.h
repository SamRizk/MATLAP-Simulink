/*
 * File: DIO_control.h
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

#ifndef RTW_HEADER_DIO_control_h_
#define RTW_HEADER_DIO_control_h_
#include <stddef.h>
#ifndef DIO_control_COMMON_INCLUDES_
# define DIO_control_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* DIO_control_COMMON_INCLUDES_ */

#include "DIO_control_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* user code (top of header file) */
#include "DIO_interface.h"

/* Real-time Model Data Structure */
struct tag_RTM_DIO_control_T {
  const char_T * volatile errorStatus;
};

/* Model entry point functions */
extern void DIO_control_initialize(void);
extern void DIO_control_step(void);
extern void DIO_control_terminate(void);

/* Real-time Model object */
extern RT_MODEL_DIO_control_T *const DIO_control_M;

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
 * '<Root>' : 'DIO_control'
 * '<S1>'   : 'DIO_control/Bit0_PA_ON'
 */
#endif                                 /* RTW_HEADER_DIO_control_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
