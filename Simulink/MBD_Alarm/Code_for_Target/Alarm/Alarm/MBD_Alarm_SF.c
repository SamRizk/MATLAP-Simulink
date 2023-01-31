/*
 * File: MBD_Alarm_SF.c
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

#include "MBD_Alarm_SF.h"
#include "MBD_Alarm_SF_private.h"

/* Real-time model */
RT_MODEL_MBD_Alarm_SF_T MBD_Alarm_SF_M_;
RT_MODEL_MBD_Alarm_SF_T *const MBD_Alarm_SF_M = &MBD_Alarm_SF_M_;

/* Model step function */
void MBD_Alarm_SF_step(void)
{
  /* Chart: '<Root>/Alarm_System' */
  vidAlarmInit();
  vidAlarmOn();
}

/* Model initialize function */
void MBD_Alarm_SF_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(MBD_Alarm_SF_M, (NULL));
}

/* Model terminate function */
void MBD_Alarm_SF_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
