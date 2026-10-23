/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F7C50AA28B2C07EF2C7927FFB8C39CDB6AB677C043CB7AE359DD58E1383504C2
 * Entry: 0x002b3eb0, Ghidra index: 9779, label: FUN_002b3eb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b3eb0(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  
  param_3 = param_3 * 0.5;
  fVar1 = param_3 * *param_2;
  *param_1 = fVar1 - fVar1 * fVar1 * fVar1 * 0.16666667;
  fVar1 = param_3 * param_2[1];
  param_1[1] = fVar1 - fVar1 * fVar1 * fVar1 * 0.16666667;
  param_3 = param_3 * param_2[2];
  param_1[2] = param_3 - param_3 * param_3 * param_3 * 0.16666667;
  param_1[3] = SQRT(1.0 - (param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1))
  ;
  return;
}
