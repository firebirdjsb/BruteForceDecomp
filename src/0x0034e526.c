/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2665058DAA05552182417CE85626179196D15116867D6DA937FFDA55ACBC9ACD
 * Entry: 0x0034e526, Ghidra index: 13023, label: FUN_0034e526
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034e526(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int in_ECX;
  uint uVar7;
  undefined4 *puVar8;
  undefined1 local_34 [8];
  undefined4 *local_2c;
  int local_28;
  int *local_24;
  uint local_20;
  byte *local_1c;
  undefined4 *local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_24 = (int *)param_1[3];
  local_18 = (undefined4 *)param_1[2];
  *(ushort *)((int)local_18 + 10) = *(ushort *)((int)local_18 + 10) & 0xfbf7;
  puVar6 = (undefined4 *)*local_18;
  local_1c = (byte *)*param_1;
  if ((param_1[1] == 0) || (*(char *)(param_2 + 0x2b) == '\x03')) {
    local_14 = param_1[0xc];
    local_10 = 1;
  }
  else {
    local_10 = 0;
    local_14 = 0;
  }
  local_c = local_14 + 7 & 0xfffffff8;
  local_28 = local_c + 0x27;
  local_20 = local_c + 0x47;
  *(short *)(local_18 + 1) = (short)local_20;
  local_2c = puVar6;
  if ((*local_1c & 0xc0) == 0) {
    local_18[2] = local_18[2] | 0x4000000;
    local_8 = in_ECX;
    puVar4 = (undefined4 *)FUN_0034c841();
    *puVar4 = *(undefined4 *)(param_2 + 0x32);
    *(undefined2 *)(puVar4 + 1) = *(undefined2 *)(param_2 + 0x36);
    *(undefined4 *)((int)puVar4 + 6) = *(undefined4 *)(local_8 + 0x1e0);
    *(undefined2 *)((int)puVar4 + 10) = *(undefined2 *)(local_8 + 0x1e4);
    *(undefined2 *)(puVar4 + 3) = 8;
    *(undefined2 *)(puVar6 + 5) = 0x20c;
    in_ECX = local_8;
  }
  else {
    *(undefined2 *)(puVar6 + 5) = *(undefined2 *)(in_ECX + 0x8c6);
  }
  FUN_00347fe3(local_18,*(undefined4 *)(param_2 + 0x2c),0x11);
  uVar5 = 0x1000000;
  if (*(int *)(param_2 + 0x2c) != 0x1000000) {
    uVar5 = *(undefined4 *)(in_ECX + 0x268);
  }
  puVar6[3] = uVar5;
  uVar1 = *(undefined2 *)(param_2 + 0x30);
  puVar6[7] = 0;
  *(undefined2 *)((int)puVar6 + 0x16) = uVar1;
  *(undefined2 *)(puVar6 + 9) = 0;
  *(undefined2 *)((int)puVar6 + 0x22) = (undefined2)local_28;
  *(undefined2 *)(puVar6 + 8) = 0x5807;
  *(undefined4 *)((int)puVar6 + 0x26) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((int)puVar6 + 0x2a) = *(undefined4 *)(param_2 + 0x24);
  *(undefined2 *)((int)puVar6 + 0x2e) = *(undefined2 *)(param_2 + 0x28);
  *(undefined1 *)(puVar6 + 0xc) = *(undefined1 *)(param_2 + 0x2a);
  *(byte *)((int)puVar6 + 0x31) = (param_1[1] != 0) - 1U & 0x10 | (local_10 == 0) - 1U & 4;
  *(char *)((int)puVar6 + 0x3a) = (char)local_c - (char)local_14;
  if (local_c != 0) {
    puVar4 = (undefined4 *)param_1[0xd];
    puVar8 = (undefined4 *)((int)puVar6 + 0x47);
    for (uVar7 = local_14 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar8 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar7 = local_14 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    FUN_00347c42(1,local_1c + 0x18,0x18,(undefined4 *)((int)puVar6 + 0x26),
                 (undefined1 *)((int)puVar6 + 0x47),local_c);
  }
  FUN_0034e276(local_34);
  local_28 = param_2 + 0x10;
  uVar5 = FUN_0034e296(local_34,local_28);
  *(undefined4 *)((int)puVar6 + 0x32) = uVar5;
  local_1c = local_1c + 8;
  *(undefined4 *)((int)puVar6 + 0x36) = 0;
  FUN_0034c461(local_1c,0x10,puVar6 + 8,0x1b,(undefined1 *)((int)puVar6 + 0x47),local_c,
               (undefined1 *)((int)puVar6 + 0x3b),0xc);
  piVar3 = local_24;
  if (local_10 == 0) {
    *(ushort *)((int)local_24 + 10) = *(ushort *)((int)local_24 + 10) & 0xfbf7;
    *(undefined2 *)(local_24 + 1) = (undefined2)local_20;
    if ((local_18[2] & 0x4000000) != 0) {
      local_24[2] = local_24[2] | 0x4000000;
      puVar6 = (undefined4 *)FUN_0034c841();
      puVar4 = (undefined4 *)FUN_0034c841();
      *puVar4 = *puVar6;
      puVar4[1] = puVar6[1];
      puVar4[2] = puVar6[2];
      *(undefined2 *)(puVar4 + 3) = *(undefined2 *)(puVar6 + 3);
    }
    puVar6 = local_2c;
    puVar4 = (undefined4 *)*piVar3;
    for (uVar7 = local_20 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar4 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar7 = local_20 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    iVar2 = *piVar3;
    *(byte *)(iVar2 + 0x31) = *(byte *)(iVar2 + 0x31) | (param_1[0xc] != 0) - 1U & 8 | 1;
    uVar5 = FUN_0034e296(local_34,param_2 + 0x18);
    *(undefined4 *)(iVar2 + 0x32) = uVar5;
    uVar5 = FUN_0034e296(param_2 + 0x18,local_28);
    *(undefined4 *)(iVar2 + 0x36) = uVar5;
    FUN_0034c461(local_1c,0x10,iVar2 + 0x20,0x1b,0,0,iVar2 + 0x3b,0xc);
  }
  local_18[5] = 1;
  FUN_00348b9a(local_18,0);
  if (local_10 == 0) {
    piVar3[5] = 1;
    FUN_00348b9a(piVar3,0);
  }
  return;
}
