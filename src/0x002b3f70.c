/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D9D3BAA27A677FEFF69576AC7D31434D9AF33CB48BE46BF3D77F2AC699D54323
 * Entry: 0x002b3f70, Ghidra index: 9780, label: FUN_002b3f70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b3f70(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)param_3 * (float10)0.5;
  fVar3 = (float10)fsin(fVar2 * (float10)*param_2);
  *param_1 = (float)fVar3;
  fVar3 = (float10)fsin(fVar2 * (float10)param_2[1]);
  param_1[1] = (float)fVar3;
  fVar2 = (float10)fsin(fVar2 * (float10)param_2[2]);
  param_1[2] = (float)fVar2;
  fVar1 = param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1;
  if (1.0 < fVar1) {
    fVar1 = 0.997 / SQRT(fVar1);
    *param_1 = fVar1 * *param_1;
    param_1[1] = fVar1 * param_1[1];
    param_1[2] = fVar1 * param_1[2];
    fVar1 = param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1;
  }
  param_1[3] = SQRT(1.0 - fVar1);
  return;
}
