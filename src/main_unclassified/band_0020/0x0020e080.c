/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C2C47719ABF4375300CA16B4EEB11AAADC637921A514A2624CFA825154BC83D6
 * Entry: 0x0020e080, Ghidra index: 7399, label: FUN_0020e080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float * FUN_0020e080(float *param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)param_2);
  fVar2 = (float10)fsin((float10)param_2);
  *param_1 = (float)fVar1;
  param_1[1] = -(float)fVar2;
  param_1[2] = 0.0;
  param_1[3] = (float)fVar2;
  param_1[4] = (float)fVar1;
  param_1[5] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = 1.0;
  return param_1;
}
