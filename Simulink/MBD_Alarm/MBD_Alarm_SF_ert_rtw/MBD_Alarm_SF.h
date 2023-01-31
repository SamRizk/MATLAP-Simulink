/*
 * File: MBD_Alarm_SF.h
 *
 * Code generated for Simulink model 'MBD_Alarm_SF'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Mon Jan 16 09:07:34 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_MBD_Alarm_SF_h_
#define RTW_HEADER_MBD_Alarm_SF_h_
#include <stddef.h>
#ifndef MBD_Alarm_SF_COMMON_INCLUDES_
# define MBD_Alarm_SF_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* MBD_Alarm_SF_COMMON_INCLUDES_ */

#include "MBD_Alarm_SF_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* user code (top of header file) */
#include "Bit_math.h"
#include "Alarm_interface.h"

/* Real-time Model Data Structure */
struct tag_RTM_MBD_Alarm_SF_T {
  const char_T * volatile errorStatus;
};

/* Model entry point functions */
extern void MBD_Alarm_SF_initialize(void);
extern void MBD_Alarm_SF_step(void);
extern void MBD_Alarm_SF_terminate(void);

/* Real-time Model object */
extern RT_MODEL_MBD_Alarm_SF_T *const MBD_Alarm_SF_M;

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
 * '<Root>' : 'MBD_Alarm_SF'
 * '<S1>'   : 'MBD_Alarm_SF/Alarm_System'
 */
#endif                                 /* RTW_HEADER_MBD_Alarm_SF_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
