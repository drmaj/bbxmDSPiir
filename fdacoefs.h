/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 *
 * Generated by MATLAB(R) 7.14 and the DSP System Toolbox 8.2.
 *
 * Generated on: 24-Jul-2013 11:36:35
 *
 */

/*
 * Discrete-Time IIR Filter (real)
 * -------------------------------
 * Filter Structure    : Direct-Form II, Second-Order Sections
 * Number of Sections  : 4
 * Stable              : Yes
 * Linear Phase        : No
 * Arithmetic          : fixed
 * Numerator           : s16,13 -> [-4 4)
 * Denominator         : s16,14 -> [-2 2)
 * Scale Values        : s16,18 -> [-1.250000e-01 1.250000e-01)
 * Input               : s16,15 -> [-1 1)
 * Section Input       : s16,12 -> [-8 8)
 * Section Output      : s16,10 -> [-32 32)
 * Output              : s16,10 -> [-32 32)
 * State               : s16,15 -> [-1 1)
 * Numerator Prod      : s32,28 -> [-8 8)
 * Denominator Prod    : s32,29 -> [-4 4)
 * Numerator Accum     : s40,28 -> [-2048 2048)
 * Denominator Accum   : s40,29 -> [-1024 1024)
 * Round Mode          : convergent
 * Overflow Mode       : wrap
 * Cast Before Sum     : true
 */

/* General type conversion for MATLAB generated C-code  */
#include "tmwtypes.h"
/* 
 * Expected path to tmwtypes.h 
 * /usr/local/MATLAB/R2012a/extern/include/tmwtypes.h 
 */
#define MWSPT_NSEC 9
const int NL[MWSPT_NSEC] = { 1,3,1,3,1,3,1,3,1 };
const int16_T NUM[MWSPT_NSEC][3] = {
  {
      586,      0,      0 
  },
  {
     8192,  16384,   8192 
  },
  {
      498,      0,      0 
  },
  {
     8192,  16384,   8192 
  },
  {
      447,      0,      0 
  },
  {
     8192,  16384,   8192 
  },
  {
      423,      0,      0 
  },
  {
     8192,  16384,   8192 
  },
  {
     8192,      0,      0 
  }
};
const int DL[MWSPT_NSEC] = { 1,3,1,3,1,3,1,3,1 };
const int16_T DEN[MWSPT_NSEC][3] = {
  {
     8192,      0,      0 
  },
  {
     8192, -12481,   6632 
  },
  {
     8192,      0,      0 
  },
  {
     8192, -10613,   4414 
  },
  {
     8192,      0,      0 
  },
  {
     8192,  -9523,   3118 
  },
  {
     8192,      0,      0 
  },
  {
     8192,  -9021,   2522 
  },
  {
     8192,      0,      0 
  }
};
