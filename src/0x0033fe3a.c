/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 868FE53126CB7DC8B0FEB55546F3F1ECBF5332AED1250EA170E3C51948C7A8F8
 * Entry: 0x0033fe3a, Ghidra index: 12661, label: FUN_0033fe3a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0033fe3a(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 local_80 [92];
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  iVar1 = *(int *)(param_1 + 8);
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  *(uint *)(param_1 + 8) = iVar1 + 0x10U;
  if (*(uint *)(param_1 + 4) < iVar1 + 0x10U) {
    *(int *)(param_1 + 8) = iVar1;
    iVar1 = 0;
  }
  param_3[2] = iVar1;
  if (iVar1 == 0) {
    local_8 = 0xc000009a;
  }
  else {
    param_3[1] = 0x10;
    *param_3 = 7;
    *(undefined4 *)(param_1 + 0x18 + *(int *)(param_1 + 0x14) * 4) = *(undefined4 *)(param_1 + 8);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    iVar1 = FUN_0033fa74(param_1,param_2,0x2a,&local_10,&local_c);
    if (iVar1 == 0) {
      FUN_00356778(local_80);
      FUN_003567b6(local_80,local_c,local_10);
      FUN_003568e4(local_80);
      puVar4 = (undefined4 *)param_3[2];
      *puVar4 = local_24;
      puVar4[1] = uStack_20;
      puVar4[2] = uStack_1c;
      puVar4[3] = uStack_18;
    }
    else {
      local_8 = 0xc000009a;
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    puVar4 = *(undefined4 **)(param_1 + 0x18 + *(int *)(param_1 + 0x14) * 4);
    uVar2 = *(int *)(param_1 + 8) - (int)puVar4;
    *(undefined4 **)(param_1 + 8) = puVar4;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  return local_8;
}
