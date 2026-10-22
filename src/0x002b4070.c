/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 25DE5C0787DC3055086B1F75E58447E21A749F26C1A0130A99F156FA12BA6979
 * Entry: 0x002b4070, Ghidra index: 9781, label: FUN_002b4070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b4070(float *param_1,float param_2,float param_3,float param_4)

{
  float10 fVar1;
  
  fVar1 = (float10)fsin((float10)param_2 * (float10)0.5);
  *param_1 = (float)fVar1;
  fVar1 = (float10)fsin((float10)param_3 * (float10)0.5);
  param_1[1] = (float)fVar1;
  fVar1 = (float10)fsin((float10)param_4 * (float10)0.5);
  param_1[2] = (float)fVar1;
  param_1[3] = SQRT(1.0 - (param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1))
  ;
  return;
}
