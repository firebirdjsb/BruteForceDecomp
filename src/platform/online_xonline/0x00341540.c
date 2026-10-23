/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 574483DC5CF5F14C03440F118246D3D04D2852C0A2E0DC0838B9A98732479657
 * Entry: 0x00341540, Ghidra index: 12675, label: FUN_00341540
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00341540(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                undefined4 param_5,undefined4 param_6,undefined4 *param_7,int param_8,
                undefined4 param_9,undefined4 param_10,uint *param_11,int *param_12)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 **ppuVar7;
  undefined4 *puVar8;
  undefined4 *local_6c [4];
  undefined4 local_5c [11];
  undefined1 local_30 [24];
  undefined4 *local_18;
  int *local_14;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_c = (uint)(*param_12 == 0);
  puVar1 = (undefined4 *)&stack0xffffff88;
  ppuVar7 = local_6c;
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppuVar7 = (undefined4 *)0x0;
    ppuVar7 = ppuVar7 + 1;
  }
  local_6c[0] = (undefined4 *)0x5;
  local_6c[1] = (undefined4 *)0xe;
  local_8 = FUN_0033f342(param_8);
  local_18 = (undefined4 *)0x0;
  local_6c[2] = (undefined4 *)0x20;
  local_6c[3] = &local_8;
  puVar6 = local_5c;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *param_7;
    param_7 = param_7 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)(param_1 + 0x18 + *(int *)(param_1 + 0x14) * 4) = *(undefined4 *)(param_1 + 8);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  param_8 = FUN_00341459(param_1,param_4,*param_4,param_5,param_6,param_2,param_3,param_9,param_10,
                         local_30);
  if ((param_8 == 0) &&
     (param_8 = FUN_0033fa74(param_1,local_6c,0x20,param_11,param_12), param_8 == 0)) {
    if (local_c != 0) {
      uVar5 = *param_11;
      if (*(uint *)(param_1 + 0x10) < uVar5) {
        FUN_002ebea0();
      }
      else {
        puVar1 = (undefined4 *)0x0;
      }
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = *(undefined4 **)(param_1 + 0xc);
      }
      puVar6 = (undefined4 *)*param_12;
      puVar8 = puVar1;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      local_14 = param_12;
      local_10 = uVar5;
      local_18 = puVar1;
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    puVar1 = *(undefined4 **)(param_1 + 0x18 + *(int *)(param_1 + 0x14) * 4);
    uVar4 = *(int *)(param_1 + 8) - (int)puVar1;
    *(undefined4 **)(param_1 + 8) = puVar1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar1 = 0;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    if (local_18 != (undefined4 *)0x0) {
      puVar1 = *(undefined4 **)(param_1 + 8);
      puVar2 = (undefined1 *)((local_10 + 3 & 0xfffffffc) + (int)puVar1);
      *(undefined1 **)(param_1 + 8) = puVar2;
      if (*(undefined1 **)(param_1 + 4) < puVar2) {
        *(undefined4 **)(param_1 + 8) = puVar1;
        puVar1 = (undefined4 *)0x0;
      }
      *local_14 = (int)puVar1;
      for (uVar5 = local_10 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar1 = *local_18;
        local_18 = local_18 + 1;
        puVar1 = puVar1 + 1;
      }
      for (local_10 = local_10 & 3; local_10 != 0; local_10 = local_10 - 1) {
        *(undefined1 *)puVar1 = *(undefined1 *)local_18;
        local_18 = (undefined4 *)((int)local_18 + 1);
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
    }
  }
  else {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    puVar1 = *(undefined4 **)(param_1 + 0x18 + *(int *)(param_1 + 0x14) * 4);
    uVar4 = *(int *)(param_1 + 8) - (int)puVar1;
    *(undefined4 **)(param_1 + 8) = puVar1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar1 = 0;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
  }
  return param_8;
}
