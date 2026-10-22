/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B16E4A7481C301116D37734B35C45967572E26C940C471C194EA19897C4D640A
 * Entry: 0x0001fa20, Ghidra index: 153, label: FUN_0001fa20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float * FUN_0001fa20(float *param_1,float param_2)

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
  *param_1 = fVar3 * fVar1 + fVar2 * param_1[6];
  param_1[6] = fVar1 * param_1[6] - fVar3 * fVar2;
  fVar3 = param_1[1];
  param_1[1] = fVar3 * fVar1 + fVar2 * param_1[7];
  param_1[7] = fVar1 * param_1[7] - fVar3 * fVar2;
  fVar3 = param_1[2];
  param_1[2] = fVar3 * fVar1 + fVar2 * param_1[8];
  param_1[8] = fVar1 * param_1[8] - fVar3 * fVar2;
  return param_1;
}
