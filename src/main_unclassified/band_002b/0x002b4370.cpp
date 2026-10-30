/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EF25DC335C9D1DF8C789E2B02F149E5D8387A381760B5FCF16E7CEFB31F18586
 * Entry: 0x002b4370, Ghidra index: 9784, label: FUN_002b4370
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b4370(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float *extraout_ECX;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float local_10;
  
  fVar1 = *param_2 * *param_3 +
          param_2[1] * param_3[1] + param_2[2] * param_3[2] + param_2[3] * param_3[3];
  if (fVar1 <= 0.0) {
    fVar1 = -fVar1;
    local_10 = -1.0;
  }
  else {
    local_10 = 1.0;
  }
  if (fVar1 < 0.999) {
    fVar3 = (float10)FUN_002b72a0(fVar1);
    fVar4 = (float10)1.0 / (float10)SQRT(1.0 - fVar1 * fVar1);
    fVar5 = (float10)fsin(((float10)1.0 - (float10)param_4) * (float10)(float)fVar3);
    fVar5 = fVar5 * fVar4;
    fVar3 = (float10)fsin((float10)(float)fVar3 * (float10)param_4);
    fVar3 = fVar3 * fVar4 * (float10)local_10;
    *extraout_ECX = (float)(fVar3 * (float10)*param_3 + fVar5 * (float10)*param_2);
    extraout_ECX[1] = (float)(fVar5 * (float10)param_2[1] + fVar3 * (float10)param_3[1]);
    extraout_ECX[2] = (float)(fVar5 * (float10)param_2[2] + fVar3 * (float10)param_3[2]);
    extraout_ECX[3] = (float)(fVar5 * (float10)param_2[3] + fVar3 * (float10)param_3[3]);
    return;
  }
  *param_1 = (local_10 * *param_3 - *param_2) * param_4 + *param_2;
  param_1[1] = (local_10 * param_3[1] - param_2[1]) * param_4 + param_2[1];
  param_1[2] = (local_10 * param_3[2] - param_2[2]) * param_4 + param_2[2];
  fVar1 = (local_10 * param_3[3] - param_2[3]) * param_4 + param_2[3];
  param_1[3] = fVar1;
  fVar1 = (fVar1 * fVar1 + param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1)
          * 0.5;
  fVar2 = 1.5 - fVar1;
  fVar2 = (0.5 - fVar2 * fVar2 * fVar1) + fVar2;
  fVar2 = (0.5 - fVar2 * fVar2 * fVar1) + fVar2;
  *param_1 = fVar2 * *param_1;
  param_1[1] = fVar2 * param_1[1];
  param_1[2] = fVar2 * param_1[2];
  param_1[3] = fVar2 * param_1[3];
  return;
}
