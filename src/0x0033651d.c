/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 42E350E694E1919041BFC3B499CD96059F1DF0E1E33A94F6E624C01A5F1A4658
 * Entry: 0x0033651d, Ghidra index: 12453, label: FUN_0033651d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f5bc;
undefined4
FUN_0033651d(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5,int param_6,
            undefined4 param_7,ushort param_8,undefined4 *param_9,ushort param_10,
            undefined4 *param_11)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  bool bVar10;
  uint local_8;
  
  if (param_2 == 0 && param_3 == 0) {
    return 0x80070057;
  }
  local_8 = 0;
  uVar1 = *(ushort *)(param_1 + 0xc);
  if (uVar1 != 0) {
    piVar2 = (int *)(param_1 + 0x30);
    do {
      if ((*piVar2 == param_2) && (piVar2[1] == param_3)) break;
      local_8 = local_8 + 1;
      piVar2 = piVar2 + 0x1d;
    } while (local_8 < *(ushort *)(param_1 + 0xc));
  }
  if (local_8 == uVar1) {
    if (uVar1 == 100) {
      local_8 = local_8 - 1;
      iVar4 = local_8 * 0x74 + param_1;
      if (*(int *)(iVar4 + 0xa0) != -1) {
        return 0x80004005;
      }
      puVar9 = (undefined4 *)(iVar4 + 0x30);
      for (iVar3 = 0x1d; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
    }
    else {
      *(ushort *)(param_1 + 0xc) = uVar1 + 1;
    }
    *(undefined4 *)(local_8 * 0x74 + 0xa0 + param_1) = 0xffffffff;
  }
  iVar3 = local_8 * 0x74;
  iVar7 = iVar3 + param_1;
  *(int *)(iVar7 + 0x58) = param_6;
  *(int *)(iVar7 + 0x30) = param_2;
  *(undefined4 *)(iVar7 + 0x5c) = param_7;
  *(int *)(iVar7 + 0x34) = param_3;
  *(undefined4 *)(iVar7 + 0x60) = param_4;
  param_5 = *(uint *)(iVar7 + 0x4c) & 0xfc000000 | param_5;
  *(undefined1 *)(iVar7 + 100) = (undefined1)param_8;
  *(undefined1 *)(iVar7 + 0x6d) = (undefined1)param_10;
  iVar4 = 2;
  bVar10 = true;
  *(uint *)(iVar7 + 0x4c) = param_5;
  piVar2 = (int *)(iVar7 + 0x58);
  piVar8 = (int *)(iVar7 + 0x98);
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar10 = *piVar2 == *piVar8;
    piVar2 = piVar2 + 1;
    piVar8 = piVar8 + 1;
  } while (bVar10);
  if (bVar10) {
    iVar4 = 2;
    bVar10 = true;
    piVar2 = (int *)(iVar7 + 0x58);
    piVar8 = &DAT_0040f5bc;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar10 = *piVar2 == *piVar8;
      piVar2 = piVar2 + 1;
      piVar8 = piVar8 + 1;
    } while (bVar10);
    if (bVar10) goto LAB_0033662b;
    param_5 = param_5 | 0x8000000;
  }
  else {
    param_5 = param_5 & 0xf7ffffff;
  }
  *(uint *)(iVar7 + 0x4c) = param_5;
LAB_0033662b:
  if ((param_8 != 0) && (param_9 != (undefined4 *)0x0)) {
    puVar9 = (undefined4 *)(iVar7 + 0x65);
    for (uVar5 = (uint)(param_8 >> 2); uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = *param_9;
      param_9 = param_9 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar5 = param_8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)param_9;
      param_9 = (undefined4 *)((int)param_9 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
  }
  uVar6 = 8 - param_8;
  puVar9 = (undefined4 *)((uint)param_8 + iVar3 + 0x65 + param_1);
  for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar9 = 0;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  if ((param_10 != 0) && (param_11 != (undefined4 *)0x0)) {
    puVar9 = (undefined4 *)(iVar7 + 0x6e);
    for (uVar5 = (uint)(param_10 >> 2); uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = *param_11;
      param_11 = param_11 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar5 = param_10 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)param_11;
      param_11 = (undefined4 *)((int)param_11 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
  }
  uVar6 = 0x18 - param_10;
  puVar9 = (undefined4 *)((uint)param_10 + iVar3 + 0x6e + param_1);
  for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar9 = 0;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  FUN_0033633a(param_1,local_8);
  return 0;
}
