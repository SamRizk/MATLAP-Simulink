#ifndef __customcode_XTWGS6YQeo3kGTKrqoyPPB_h__
#define __customcode_XTWGS6YQeo3kGTKrqoyPPB_h__

/* Include files */
#include "mex.h"
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "tmwtypes.h"


/* Helper definitions for DLL support */
#if defined _WIN32 
  #define DLL_EXPORT_CC    
#else
  #if __GNUC__ >= 4
    #define DLL_EXPORT_CC __attribute__ ((visibility ("default")))
  #else
    #define DLL_EXPORT_CC
  #endif
#endif
/* Custom Code from Simulation Target dialog */
#include "Bit_math.h"
#include "Alarm_interface.h"
#include "STD_Types.h"

/* Function Declarations */
#ifdef __cplusplus
extern "C" {
#endif
#define customcode_XTWGS6YQeo3kGTKrqoyPPB_initializer()

#define customcode_XTWGS6YQeo3kGTKrqoyPPB_terminator()
#ifdef __cplusplus
}
#endif

#endif

