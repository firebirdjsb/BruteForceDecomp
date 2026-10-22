/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7330387F55E9BB5D5351DE06A1FDB514E04A5EE6EBA8971698F2C9089267CB2D
 * Entry: 0x001fe8a0, Ghidra index: 7236, label: FUN_001fe8a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001fe8a0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 auStack_8 [4];
  int iStack_4;
  
  cVar2 = (**(code **)(*param_1 + 0x3c))();
  if (cVar2 == '\0') {
    iVar3 = 0;
    if ((int *)param_1[9] != (int *)0x0) {
      iVar3 = *(int *)param_1[9];
    }
    iVar3 = iVar3 + 8;
LAB_001fe96f:
    if (*(int *)(iVar3 + 4) != param_2) {
      FUN_0008f6a0(param_2);
    }
  }
  else {
    iVar3 = FUN_001fb020();
    if (iVar3 == 0) {
      iVar3 = 0;
      if ((int *)param_1[9] != (int *)0x0) {
        iVar3 = *(int *)param_1[9];
      }
      if (((*(int **)(iVar3 + 0xc) == (int *)0x0) ||
          (piVar4 = (int *)(**(code **)(**(int **)(iVar3 + 0xc) + 0xc))(), piVar4 == (int *)0x0)) ||
         (iVar3 = (**(code **)(*piVar4 + 0x20))(), iVar3 != 7)) {
        if ((int *)param_1[9] == (int *)0x0) {
          iVar3 = 8;
        }
        else {
          iVar3 = *(int *)param_1[9] + 8;
        }
        goto LAB_001fe96f;
      }
    }
    iStack_4 = 0;
    if (param_2 != 0) {
      FUN_0008f6a0(param_2);
    }
    iVar3 = param_1[9];
    iVar6 = FUN_000e1910(param_1 + 8,iVar3,*(undefined4 *)(iVar3 + 4),auStack_8);
    FUN_000389d0();
    *(int *)(iVar3 + 4) = iVar6;
    **(int **)(iVar6 + 4) = iVar6;
    if (iStack_4 != 0) {
      FUN_0008f6e0();
    }
  }
  puVar1 = *(undefined4 **)(param_2 + 0xf4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)*puVar1;
  }
  if (puVar5 != puVar1) {
    do {
      if ((int *)puVar5[3] == param_1) break;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != puVar1);
    if (puVar5 != puVar1) {
      return;
    }
  }
  iStack_4 = 0;
  FUN_0008f6a0(param_1);
  iVar3 = *(int *)(param_2 + 0xf4);
  iVar6 = FUN_000e1910(param_2 + 0xf0,iVar3,*(undefined4 *)(iVar3 + 4),auStack_8);
  FUN_000389d0();
  *(int *)(iVar3 + 4) = iVar6;
  **(int **)(iVar6 + 4) = iVar6;
  if (iStack_4 != 0) {
    FUN_0008f6e0();
  }
  return;
}
