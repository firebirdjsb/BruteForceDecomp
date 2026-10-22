/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6A654A247D475A35925C749B15FC976DEBAE69FB67922F8DC4DE652B5138DC4B
 * Entry: 0x00266990, Ghidra index: 8741, label: FUN_00266990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00266990(int *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [36];
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 local_4;
  
  if (param_1[10] == 1) {
    iVar1 = *param_1;
    uVar2 = *(undefined4 *)(param_1[1] + 0x10);
    if ((*(byte *)(param_1 + 6) & 2) != 0) {
      local_6c = *(undefined4 *)(iVar1 + 0x14);
      local_68 = *(undefined4 *)(iVar1 + 0x20);
      local_64 = *(undefined4 *)(iVar1 + 0x2c);
      local_60 = *(undefined4 *)(iVar1 + 0x18);
      local_5c = *(undefined4 *)(iVar1 + 0x24);
      local_58 = *(undefined4 *)(iVar1 + 0x30);
      local_54 = *(undefined4 *)(iVar1 + 0x1c);
      local_50 = *(undefined4 *)(iVar1 + 0x28);
      local_4c = *(undefined4 *)(iVar1 + 0x34);
      puVar5 = (undefined4 *)FUN_002334b0();
      local_a0 = *puVar5;
      uStack_9c = puVar5[1];
      uStack_98 = puVar5[2];
      uStack_94 = puVar5[3];
      local_80 = puVar5[8];
      local_90 = puVar5[4];
      uStack_8c = puVar5[5];
      uStack_88 = puVar5[6];
      uStack_84 = puVar5[7];
      local_24 = local_a0;
      uStack_20 = uStack_9c;
      uStack_1c = uStack_98;
      uStack_18 = uStack_94;
      local_14 = local_90;
      uStack_10 = uStack_8c;
      uStack_c = uStack_88;
      uStack_8 = uStack_84;
      local_4 = local_80;
      if ((*(byte *)(param_1 + 6) & 4) == 0) {
        puVar5 = (undefined4 *)FUN_00266390(local_48,uVar2,&local_a0);
        local_a0 = *puVar5;
        uStack_9c = puVar5[1];
        uStack_98 = puVar5[2];
        uStack_94 = puVar5[3];
        local_80 = puVar5[8];
        local_90 = puVar5[4];
        uStack_8c = puVar5[5];
        uStack_88 = puVar5[6];
        uStack_84 = puVar5[7];
      }
    }
    FUN_002339d0(&local_7c);
    *param_4 = local_7c;
    param_4[1] = local_78;
    param_4[2] = local_74;
    param_4[3] = local_70;
    return;
  }
  if ((*(byte *)(param_1 + 6) & 0x10) == 0) {
    FUN_00234f00();
    return;
  }
  puVar5 = (undefined4 *)(param_2 * 0x3c + 4 + param_1[9]);
  uVar2 = puVar5[3];
  uVar3 = puVar5[2];
  uVar4 = puVar5[1];
  *param_4 = *puVar5;
  param_4[1] = uVar4;
  param_4[2] = uVar3;
  param_4[3] = uVar2;
  return;
}
