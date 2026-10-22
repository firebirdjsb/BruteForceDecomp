/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 59AD7A555B8B55EFF4B71A7A7BF8A006B236EA790282FE23CDF6BF7770A04BFF
 * Entry: 0x00305380, Ghidra index: 11094, label: FUN_00305380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00305380(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float local_c;
  
  local_c = 1.0;
  fVar1 = *param_2 * *param_3 +
          param_3[3] * param_2[3] + param_3[1] * param_2[1] + param_3[2] * param_2[2];
  if (fVar1 < 0.0) {
    fVar1 = -fVar1;
    local_c = -1.0;
  }
  if (fVar1 < 0.999) {
    fVar5 = (float10)FUN_002b72a0(fVar1);
    fVar6 = (float10)1.0 / (float10)SQRT(1.0 - fVar1 * fVar1);
    fVar7 = (float10)(float)fVar5 * (float10)param_4;
    fVar5 = (float10)fsin((float10)(float)fVar5 - fVar7);
    fVar5 = fVar5 * fVar6;
    fVar1 = param_2[1];
    fVar2 = param_2[2];
    fVar3 = param_2[3];
    *param_1 = (float)(fVar5 * (float10)*param_2);
    param_1[1] = (float)(fVar5 * (float10)fVar1);
    param_1[2] = (float)(fVar5 * (float10)fVar2);
    param_1[3] = (float)(fVar5 * (float10)fVar3);
    fVar5 = (float10)fsin(fVar7);
    fVar5 = fVar5 * fVar6 * (float10)local_c;
    fVar1 = param_3[1];
    fVar2 = param_3[2];
    fVar3 = param_3[3];
    *param_1 = (float)(fVar5 * (float10)*param_3 + (float10)*param_1);
    param_1[1] = (float)(fVar5 * (float10)fVar1 + (float10)param_1[1]);
    param_1[2] = (float)(fVar5 * (float10)fVar2 + (float10)param_1[2]);
    param_1[3] = (float)(fVar5 * (float10)fVar3 + (float10)param_1[3]);
    fVar1 = 1.0 / SQRT(param_1[1] * param_1[1] +
                       param_1[2] * param_1[2] + param_1[3] * param_1[3] + *param_1 * *param_1);
    *param_1 = fVar1 * *param_1;
    param_1[1] = fVar1 * param_1[1];
    param_1[2] = fVar1 * param_1[2];
    param_1[3] = fVar1 * param_1[3];
    return;
  }
  fVar4 = 1.0 - param_4;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_1 = fVar4 * *param_2;
  param_1[1] = fVar4 * fVar1;
  param_1[2] = fVar4 * fVar2;
  param_1[3] = fVar4 * fVar3;
  param_4 = param_4 * local_c;
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  *param_1 = param_4 * *param_3 + *param_1;
  param_1[1] = param_4 * fVar1 + param_1[1];
  param_1[2] = param_4 * fVar2 + param_1[2];
  param_1[3] = param_4 * fVar3 + param_1[3];
  fVar1 = 1.0 / SQRT(param_1[1] * param_1[1] +
                     param_1[2] * param_1[2] + param_1[3] * param_1[3] + *param_1 * *param_1);
  *param_1 = fVar1 * *param_1;
  param_1[1] = fVar1 * param_1[1];
  param_1[2] = fVar1 * param_1[2];
  param_1[3] = fVar1 * param_1[3];
  return;
}
