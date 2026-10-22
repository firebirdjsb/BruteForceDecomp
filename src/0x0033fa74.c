/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1887D95A6576F22A26249023BE961860E83B5CE9A7F63577488431D44A2CAAE2
 * Entry: 0x0033fa74, Ghidra index: 12655, label: FUN_0033fa74
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0033fa74(int param_1,undefined4 param_2,undefined4 param_3,uint *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *local_14;
  int *local_10;
  uint local_c;
  int local_8;
  
  iVar1 = param_1;
  local_8 = 0;
  iVar2 = FUN_0033fa33(param_1,&local_8,0);
  if (iVar2 != 0) {
    return iVar2;
  }
  *(undefined4 *)(param_1 + 0x18 + *(int *)(param_1 + 0x14) * 4) = *(undefined4 *)(param_1 + 8);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  iVar2 = *param_5;
  local_14 = (undefined4 *)0x0;
  if (iVar2 == 0) {
    uVar5 = 0;
    iVar2 = 0;
    uVar8 = 0x10;
  }
  else {
    uVar5 = *param_4;
    uVar8 = 8;
  }
  iVar2 = FUN_00344af4(local_8,param_2,param_3,uVar8,iVar2,uVar5);
  if (iVar2 < 0) {
    param_1 = 0x3c;
LAB_0033fb07:
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + -1;
    puVar7 = *(undefined4 **)(iVar1 + 0x18 + *(int *)(iVar1 + 0x14) * 4);
    uVar4 = *(int *)(iVar1 + 8) - (int)puVar7;
    *(undefined4 **)(iVar1 + 8) = puVar7;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = uVar4 & 3; iVar1 = param_1, uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
  }
  else {
    if (*param_5 == 0) {
      *param_4 = *(uint *)(local_8 + 0x18);
      puVar7 = *(undefined4 **)(local_8 + 0x10);
      *param_5 = (int)puVar7;
      local_c = *param_4;
      local_14 = (undefined4 *)0x0;
      if (*(uint *)(param_1 + 0x10) < local_c) {
        FUN_002ebea0();
        local_14 = (undefined4 *)&stack0xffffffdc;
      }
      if (local_14 == (undefined4 *)0x0) {
        local_14 = *(undefined4 **)(param_1 + 0xc);
      }
      puVar6 = local_14;
      for (uVar5 = local_c >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar6 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar5 = local_c & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      local_10 = param_5;
    }
    else {
      if (*param_5 != *(int *)(local_8 + 0x10)) {
        *param_4 = 0;
        *param_5 = 0;
        param_1 = -0x3fffff66;
        goto LAB_0033fb07;
      }
      *param_4 = *(uint *)(local_8 + 0x18);
    }
    FUN_0033f31d(local_8,0);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    puVar7 = *(undefined4 **)(param_1 + 0x18 + *(int *)(param_1 + 0x14) * 4);
    uVar4 = *(int *)(param_1 + 8) - (int)puVar7;
    *(undefined4 **)(param_1 + 8) = puVar7;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    iVar1 = 0;
    if (local_14 != (undefined4 *)0x0) {
      puVar7 = *(undefined4 **)(param_1 + 8);
      puVar3 = (undefined1 *)((local_c + 3 & 0xfffffffc) + (int)puVar7);
      *(undefined1 **)(param_1 + 8) = puVar3;
      if (*(undefined1 **)(param_1 + 4) < puVar3) {
        *(undefined4 **)(param_1 + 8) = puVar7;
        puVar7 = (undefined4 *)0x0;
      }
      *local_10 = (int)puVar7;
      for (uVar5 = local_c >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *local_14;
        local_14 = local_14 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = local_c & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)local_14;
        local_14 = (undefined4 *)((int)local_14 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
    }
  }
  param_1 = iVar1;
  return param_1;
}
