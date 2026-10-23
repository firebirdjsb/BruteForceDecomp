/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 04E4CC89AE8134BECAEFD9AF755FFDC2966459C8015922640EC79CFC63F69301
 * Entry: 0x0016b210, Ghidra index: 4772, label: FUN_0016b210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float * FUN_0016b210(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)fcos((float10)param_2);
  fVar5 = (float10)fsin((float10)param_2);
  fVar1 = (float)fVar4;
  fVar2 = (float)fVar5;
  fVar3 = *param_1;
  *param_1 = fVar1 * fVar3 - fVar2 * param_1[3];
  param_1[3] = fVar3 * fVar2 + fVar1 * param_1[3];
  fVar3 = param_1[1];
  param_1[1] = fVar1 * fVar3 - fVar2 * param_1[4];
  param_1[4] = fVar3 * fVar2 + fVar1 * param_1[4];
  fVar3 = param_1[2];
  param_1[2] = fVar1 * fVar3 - fVar2 * param_1[5];
  param_1[5] = fVar3 * fVar2 + fVar1 * param_1[5];
  return param_1;
}
