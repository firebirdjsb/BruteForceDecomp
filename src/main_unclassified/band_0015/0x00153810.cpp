/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 151EF4297196AA073B402EB94759E11D0DF16A560F061C1B75282452CA2003C4
 * Entry: 0x00153810, Ghidra index: 4428, label: FUN_00153810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004699b4;
extern uint32_t DAT_004699b8;
extern uint32_t DAT_004699bc;
extern uint32_t DAT_004699c0;
void FUN_00153810(byte *param_1,undefined4 param_2,int param_3,undefined4 param_4,float param_5,
                 float param_6,float param_7,float *param_8,float *param_9,float *param_10)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  float10 fVar13;
  float local_60;
  float local_5c;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 0xa4) = param_2;
  *(undefined1 *)(param_3 + 0x43d) = 0;
  param_1[0xe4] = 0xff;
  param_1[0xe5] = 0xff;
  param_1[0xe6] = 0xff;
  param_1[0xe7] = 0xff;
  *param_1 = *param_1 ^ (*(byte *)(param_3 + 0x262) >> 2 ^ *param_1) & 1;
  bVar1 = *param_1;
  *param_1 = (bVar1 << 2 ^ bVar1) & 4 ^ bVar1;
  if (*(int *)(param_3 + 0x1f0) != 0) {
    *param_1 = *param_1 | 1;
  }
  fVar2 = param_9[2];
  fVar3 = param_9[1];
  *(float *)(param_1 + 0x30) = *param_9;
  *(float *)(param_1 + 0x34) = fVar3;
  *(float *)(param_1 + 0x38) = fVar2;
  *(float *)(param_1 + 8) = param_5 + 0.1;
  *(float *)(param_1 + 0xc) = param_6;
  *(float *)(param_1 + 0x10) = param_6 * 0.5;
  *(float *)(param_1 + 0x14) = param_6 * 0.15;
  fVar3 = param_8[2];
  fVar2 = param_8[1];
  *(float *)(param_1 + 0x18) = *param_8;
  *(float *)(param_1 + 0x20) = fVar3;
  *(float *)(param_1 + 0x1c) = fVar2 + *(float *)(param_1 + 0x10);
  *(float *)(param_1 + 0x24) = *param_9 + *(float *)(param_1 + 0x18);
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x1c) + param_9[1];
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x20) + param_9[2];
  iVar10 = FUN_001525f0(param_1,param_2,param_4);
  if (iVar10 == 0) {
    *param_10 = *param_8 + *param_9;
    param_10[1] = param_8[1] + param_9[1];
    param_10[2] = param_8[2] + param_9[2];
    *(byte *)(param_3 + 0x262) = *(byte *)(param_3 + 0x262) | 4;
    return;
  }
  *(float *)(param_1 + 8) = param_5;
  *(float *)(param_1 + 0xc) = param_6;
  *(float *)(param_1 + 0x10) = param_6 * 0.5;
  if (((*param_1 & 4) == 0) &&
     (param_9[2] * param_9[2] + param_9[1] * param_9[1] + *param_9 * *param_9 < 1.4210855e-14)) {
    fVar2 = param_8[2];
    fVar3 = param_8[1];
    *param_10 = *param_8;
    param_10[1] = fVar3;
    param_10[2] = fVar2;
    return;
  }
  FUN_00168880();
  if (*(int *)(DAT_004699b4 + 4) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(int *)(DAT_004699b4 + 8) - *(int *)(DAT_004699b4 + 4) >> 2;
  }
  if (uVar11 < DAT_004699bc) {
    FUN_0014c470(0);
    FUN_0024a600(0);
  }
  uVar11 = DAT_004699bc;
  iVar10 = DAT_004699b8;
  bVar8 = false;
  iVar12 = 0;
  if (0 < (int)DAT_004699bc) {
    do {
      *(undefined1 *)(iVar12 + *(int *)(iVar10 + 4)) = 0;
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)uVar11);
  }
  local_34 = param_8[2];
  local_38 = param_8[1];
  local_3c = *param_8;
  local_c = *param_8 + *param_9;
  local_60 = 0.0;
  local_8 = param_9[1] + param_8[1];
  local_4 = param_9[2] + param_8[2];
  *param_1 = *param_1 | 4;
  local_28 = param_9[2];
  local_2c = param_9[1];
  local_30 = *param_9;
  fVar2 = local_28 * local_28;
  fVar4 = local_2c * local_2c;
  local_5c = 0.0;
  iVar10 = 0;
  fVar3 = local_30 * local_30;
  while( true ) {
    fVar13 = (float10)FUN_00152f20(param_1,&local_3c,&local_30,param_7 - local_60,&local_24);
    if ((*param_1 & 4) == 0) {
      bVar8 = true;
    }
    local_60 = (float)((float10)local_60 + fVar13);
    fVar5 = local_24 - local_3c;
    local_3c = local_24;
    fVar7 = local_20 - local_38;
    local_38 = local_20;
    fVar6 = local_1c - local_34;
    local_34 = local_1c;
    local_5c = SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6) + local_5c;
    local_30 = local_c - local_24;
    local_2c = local_8 - local_20;
    local_28 = local_4 - local_1c;
    if (DAT_004699c0 < 1) break;
    local_18 = local_30;
    local_14 = local_2c;
    local_10 = local_28;
    FUN_00153210(param_1,param_9[1],&local_24);
    FUN_00153410(param_3,param_9[1]);
    FUN_00150f90(param_1,&local_18,0);
    cVar9 = FUN_00151170(param_1,0);
    if (cVar9 == '\0') goto LAB_00153d92;
    local_c = local_18 + local_3c;
    local_2c = local_14;
    local_8 = local_14 + local_38;
    iVar10 = iVar10 + 1;
    local_30 = local_18;
    local_28 = local_10;
    local_4 = local_10 + local_34;
    if (((SQRT(fVar3 + fVar4 + fVar2) <= local_5c) || (param_7 <= local_60)) ||
       (*(int *)(param_1 + 0xb4) <= iVar10)) goto LAB_00153d92;
  }
  *param_1 = *param_1 | 4;
LAB_00153d92:
  if ((*param_1 & 0x20) == 0) {
    if (!bVar8) goto LAB_00153e20;
  }
  else if ((!bVar8) &&
          ((0.001 <= SQRT((local_3c - *param_8) * (local_3c - *param_8) +
                          (local_38 - param_8[1]) * (local_38 - param_8[1]) +
                          (local_34 - param_8[2]) * (local_34 - param_8[2])) || (-0.2 <= param_9[1])
           ))) goto LAB_00153e20;
  *param_1 = *param_1 & 0xfb;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
LAB_00153e20:
  *param_10 = local_3c;
  param_10[1] = local_38;
  param_10[2] = local_34;
  *(byte *)(param_3 + 0x262) =
       *(byte *)(param_3 + 0x262) ^ (*param_1 ^ *(byte *)(param_3 + 0x262)) & 4;
  return;
}
