/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C674BBDFCDEADBDAE0BF61B332E0EF9EFCA9AF078E1F4A41E95F6E1FE00DC9E0
 * Entry: 0x002d96b0, Ghidra index: 10254, label: FUN_002d96b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d96b0(undefined4 *param_1,float *param_2,int param_3,float *param_4,float *param_5,
                 float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  iVar9 = param_3 + 0xfc;
  param_1[0x1b] = iVar9;
  fVar10 = *param_2 - *(float *)(param_3 + 300);
  fVar11 = (float)*(undefined8 *)(param_2 + 1) - (float)*(undefined8 *)(param_3 + 0x130);
  fVar12 = (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20) -
           (float)((ulonglong)*(undefined8 *)(param_3 + 0x130) >> 0x20);
  local_4 = 0;
  pfVar7 = (float *)*param_1;
  pfVar8 = (float *)(param_3 + 0x34);
  local_c = fVar12 * *pfVar7 - fVar10 * pfVar7[2];
  local_10 = fVar11 * pfVar7[2] - fVar12 * pfVar7[1];
  local_8 = fVar10 * pfVar7[1] - fVar11 * *pfVar7;
  FUN_002b73d0(iVar9,&local_10,param_4);
  param_4[3] = 1.0;
  fVar1 = param_4[1];
  fVar2 = *(float *)(param_3 + 0x38);
  fVar3 = param_4[2];
  fVar4 = *(float *)(param_3 + 0x3c);
  fVar5 = param_4[3];
  fVar6 = *(float *)(param_3 + 0x40);
  *param_5 = *param_4 * *pfVar8;
  param_5[1] = fVar1 * fVar2;
  param_5[2] = fVar3 * fVar4;
  param_5[3] = fVar5 * fVar6;
  param_1[0x35] =
       *param_4 * *param_5 +
       param_4[1] * param_5[1] + param_4[2] * param_5[2] + param_4[3] * param_5[3] +
       (float)param_1[0x35];
  pfVar7 = (float *)*param_1;
  param_1[0x41] =
       (*(float *)(param_3 + 0x9c) * *param_4 +
        *(float *)(param_3 + 0xa0) * param_4[1] + *(float *)(param_3 + 0xa4) * param_4[2] +
       *(float *)(param_3 + 0xac) * *pfVar7 +
       *(float *)(param_3 + 0xb0) * pfVar7[1] + *(float *)(param_3 + 0xb4) * pfVar7[2]) * param_6 +
       (float)param_1[0x41];
  pfVar7 = (float *)param_1[1];
  if (pfVar7 != (float *)0x0) {
    local_4 = 0;
    local_c = fVar12 * *pfVar7 - fVar10 * pfVar7[2];
    local_10 = fVar11 * pfVar7[2] - fVar12 * pfVar7[1];
    local_8 = fVar10 * pfVar7[1] - fVar11 * *pfVar7;
    FUN_002b73d0(iVar9,&local_10,param_4 + 4);
    param_4[7] = 1.0;
    fVar1 = param_4[5];
    fVar2 = *(float *)(param_3 + 0x38);
    fVar3 = param_4[6];
    fVar4 = *(float *)(param_3 + 0x3c);
    fVar5 = param_4[4];
    fVar6 = *pfVar8;
    param_5[7] = param_4[7] * *(float *)(param_3 + 0x40);
    param_5[4] = fVar5 * fVar6;
    param_5[5] = fVar1 * fVar2;
    param_5[6] = fVar3 * fVar4;
    param_1[0x3a] =
         param_5[4] * param_4[4] +
         param_5[5] * param_4[5] + param_5[6] * param_4[6] + param_5[7] * param_4[7] +
         (float)param_1[0x3a];
    param_1[0x36] =
         *param_4 * param_5[4] + param_5[5] * param_4[1] + param_5[6] * param_4[2] +
         (float)param_1[0x36];
    pfVar7 = (float *)param_1[1];
    param_1[0x42] =
         (*pfVar7 * *(float *)(param_3 + 0xac) +
          *(float *)(param_3 + 0xb0) * pfVar7[1] + *(float *)(param_3 + 0xb4) * pfVar7[2] +
         param_4[4] * *(float *)(param_3 + 0x9c) +
         param_4[5] * *(float *)(param_3 + 0xa0) + param_4[6] * *(float *)(param_3 + 0xa4)) *
         param_6 + (float)param_1[0x42];
    pfVar7 = (float *)param_1[2];
    if (pfVar7 != (float *)0x0) {
      local_4 = 0;
      local_c = fVar12 * *pfVar7 - fVar10 * pfVar7[2];
      local_10 = fVar11 * pfVar7[2] - fVar12 * pfVar7[1];
      local_8 = fVar10 * pfVar7[1] - fVar11 * *pfVar7;
      FUN_002b73d0(iVar9,&local_10,param_4 + 8);
      param_4[0xb] = 1.0;
      fVar1 = param_4[9];
      fVar2 = *(float *)(param_3 + 0x38);
      fVar3 = param_4[10];
      fVar4 = *(float *)(param_3 + 0x3c);
      fVar5 = param_4[8];
      fVar6 = *pfVar8;
      param_5[0xb] = param_4[0xb] * *(float *)(param_3 + 0x40);
      param_5[8] = fVar5 * fVar6;
      param_5[9] = fVar1 * fVar2;
      param_5[10] = fVar3 * fVar4;
      param_1[0x3f] =
           param_5[8] * param_4[8] +
           param_5[9] * param_4[9] + param_5[10] * param_4[10] + param_5[0xb] * param_4[0xb] +
           (float)param_1[0x3f];
      param_1[0x37] =
           param_5[8] * *param_4 + param_5[9] * param_4[1] + param_5[10] * param_4[2] +
           (float)param_1[0x37];
      param_1[0x3b] =
           param_4[4] * param_5[8] + param_4[5] * param_5[9] + param_4[6] * param_5[10] +
           (float)param_1[0x3b];
      pfVar7 = (float *)param_1[2];
      param_1[0x43] =
           (*(float *)(param_3 + 0x9c) * param_4[8] +
            param_4[9] * *(float *)(param_3 + 0xa0) + param_4[10] * *(float *)(param_3 + 0xa4) +
           *(float *)(param_3 + 0xac) * *pfVar7 +
           *(float *)(param_3 + 0xb0) * pfVar7[1] + *(float *)(param_3 + 0xb4) * pfVar7[2]) *
           param_6 + (float)param_1[0x43];
    }
  }
  return;
}
