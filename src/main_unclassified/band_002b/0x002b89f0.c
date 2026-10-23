/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E9BBC789C614857A0AEA41D819FB5518378BA2095DEFC76A37EB172E8DB3E273
 * Entry: 0x002b89f0, Ghidra index: 9860, label: FUN_002b89f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002b89f0(undefined4 *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  float local_70;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  float fStack_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float fStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_18;
  float local_14 [3];
  undefined4 local_8;
  
  if (*(int *)(param_2 + 0x3c) == 0) {
    uVar3 = FUN_002bbeb0();
    *(undefined4 *)(param_2 + 0x3c) = uVar3;
  }
  if ((*(char *)(param_2 + 0x70) < '\b') &&
     (*(int *)(*(int *)(param_2 + 0x3c) + 0x60) < *(int *)(*(int *)(param_2 + 0x14) + 0x120))) {
    FUN_002bbf70();
  }
  iVar4 = *(int *)(param_2 + 0x3c);
  local_48 = 0;
  local_50 = *(float *)(iVar4 + 0x44);
  fStack_4c = *(float *)(iVar4 + 0x48);
  local_54 = *(float *)(iVar4 + 0x40);
  fVar1 = *(float *)(param_2 + 0x88) * *(float *)(param_2 + 0x88);
  fVar2 = (float)param_1[4] - local_54;
  local_2c = fVar2 * fVar2 +
             ((float)param_1[5] - local_50) * ((float)param_1[5] - local_50) +
             ((float)param_1[6] - fStack_4c) * ((float)param_1[6] - fStack_4c);
  if (fVar1 <= local_2c) {
    local_28 = 0;
    local_18 = 0;
    local_34 = 0x3f800000;
    local_58 = 0;
    local_30 = ((float)param_1[4] - local_54) * (float)param_1[0x10] +
               ((float)((ulonglong)*(undefined8 *)(param_1 + 5) >> 0x20) - fStack_4c) *
               (float)param_1[0x12] +
               ((float)*(undefined8 *)(param_1 + 5) - local_50) * (float)param_1[0x11];
    local_30 = local_30 + local_30;
    local_2c = local_2c - fVar1;
    FUN_002b66f0(&local_64,&local_34);
    if ((0.0 <= local_64) &&
       ((local_70 = local_60, 0.0 <= local_60 || (local_70 = local_5c, 0.0 <= local_5c)))) {
      local_8 = 0;
      FUN_002b3e60(local_14,param_1 + 4,param_1 + 0x10,local_70);
      local_38 = 0;
      local_44 = local_14[0] - local_54;
      local_40 = (float)local_14._4_8_ - local_50;
      fStack_3c = SUB84(local_14._4_8_,4) - fStack_4c;
      iVar4 = FUN_002b65a0(&local_44);
      if (iVar4 != 1) {
        local_44 = 1.0;
        local_40 = 0.0;
        fStack_3c = 0.0;
      }
      (**(code **)*param_1)(param_2,0,0,local_70,&local_44);
    }
  }
  return;
}
