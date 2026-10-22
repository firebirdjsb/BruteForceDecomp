/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 21D6732BA6C20E2E2EFAD23F8AEABA0261BAC32F0F68385B3EFEC8F80348EAE2
 * Entry: 0x002bc4d0, Ghidra index: 9921, label: FUN_002bc4d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bc4d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *in_ECX;
  int iVar3;
  uint *puVar4;
  float *pfVar5;
  uint uVar6;
  uint *puVar7;
  float10 fVar8;
  float fVar9;
  float fVar10;
  float local_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float fStack_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  int local_7c [2];
  float local_74;
  int local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  float *local_4c;
  float local_48;
  float local_44;
  float local_40;
  float *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c [5];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_7c[0] = param_2;
  local_7c[1] = param_3;
  uVar6 = (uint)((**(byte **)(param_3 + 0x90) & 0xc) != 0);
  if ((**(byte **)(local_7c[uVar6] + 0x90) & 0xc) == 0) {
    FUN_002bc340(in_ECX,param_2,param_3);
    return;
  }
  if (*(short *)(uVar6 * 0x1c + 0x32 + param_1) < 3) {
    iVar3 = local_7c[1 - uVar6];
    local_50 = 0;
    iVar1 = *(int *)(iVar3 + 0x90);
    local_58 = *(undefined4 *)(iVar1 + 0x130);
    local_5c = *(undefined4 *)(iVar1 + 300);
    local_54 = *(undefined4 *)(iVar1 + 0x134);
    local_7c[0] = iVar3;
    iVar1 = FUN_001509d0();
    local_60 = 0;
    pfVar5 = (float *)(iVar1 + 0x10);
    local_4c = pfVar5;
    FUN_002b7360(pfVar5,&local_5c,&local_6c);
    puVar7 = (uint *)(*(uint *)(uVar6 * 0x1c + 0x2c + param_1) & 0xfffffff0);
    puVar7 = puVar7 + ((*puVar7 & 0xfff) + 1) * -4;
    local_9c = 1.0;
    local_98 = 0.0;
    local_94 = 0.0;
    local_74 = -1e+20;
    local_70 = 0;
    if (0 < (short)puVar7[3]) {
      local_3c = &local_ac;
      puVar4 = puVar7 + 6;
      do {
        puVar2 = local_2c;
        iVar3 = 3;
        do {
          *puVar2 = 0;
          puVar2 = puVar2 + 4;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        uVar6 = *puVar7;
        iVar3 = (puVar4[-1] & 0xffff) * 0x10 + uVar6;
        local_34 = *(undefined4 *)(iVar3 + 4 + (int)puVar7);
        local_38 = *(undefined4 *)(iVar3 + (int)puVar7);
        local_30 = *(undefined4 *)((int)puVar7 + iVar3 + 8);
        puVar2 = (undefined4 *)((*puVar4 & 0xffff) * 0x10 + uVar6 + (int)puVar7);
        local_2c[2] = puVar2[1];
        local_2c[1] = *puVar2;
        local_2c[3] = puVar2[2];
        iVar3 = (puVar4[1] & 0xffff) * 0x10 + uVar6;
        local_18 = *(undefined4 *)(iVar3 + (int)puVar7);
        local_14 = *(undefined4 *)((int)puVar7 + iVar3 + 4);
        local_10 = *(undefined4 *)((int)puVar7 + iVar3 + 8);
        local_a0 = 0.0;
        FUN_002b6830();
        fVar9 = (float)*(undefined8 *)(local_3c + 1);
        fVar10 = (float)((ulonglong)*(undefined8 *)(local_3c + 1) >> 0x20);
        local_48 = fVar9 * fVar9 + fVar10 * fVar10 + *local_3c * *local_3c;
        local_44 = SQRT(local_48);
        fVar9 = 1.0 / local_44;
        local_ac = local_ac * fVar9;
        local_a8 = local_a8 * fVar9;
        fStack_a4 = fStack_a4 * fVar9;
        local_a0 = local_a0 * fVar9;
        fVar9 = local_6c * local_ac + local_68 * local_a8 + local_64 * fStack_a4 + local_a0;
        if (local_74 < fVar9) {
          local_9c = local_ac;
          local_98 = local_a8;
          local_94 = fStack_a4;
          local_74 = fVar9;
        }
        puVar4 = puVar4 + 4;
        local_70 = local_70 + 1;
        pfVar5 = local_4c;
        iVar3 = local_7c[0];
        local_40 = local_48;
      } while (local_70 < (short)puVar7[3]);
    }
    local_8c = local_9c * *pfVar5 + pfVar5[1] * local_98 + pfVar5[2] * local_94;
    local_88 = pfVar5[4] * local_9c + pfVar5[5] * local_98 + pfVar5[6] * local_94;
    local_80 = 0;
    local_94 = pfVar5[8] * local_9c + pfVar5[9] * local_98 + pfVar5[10] * local_94;
    local_84 = local_94;
    fVar8 = (float10)(**(code **)(*in_ECX + 0x14))(param_2,param_3);
    if (*(char *)(*(int *)(iVar3 + 0x90) + 100) < '\b') {
      local_94 = (float)((float10)local_94 * fVar8);
      fStack_90 = (float)((float10)fStack_90 * fVar8);
      local_8c = (float)((float10)local_8c * fVar8);
      FUN_002b3b20(iVar3,&local_94);
      return;
    }
    return;
  }
  FUN_002bc340(in_ECX,param_2,param_3);
  return;
}
