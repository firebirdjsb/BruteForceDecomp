/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A8205466ECF6BCFC887F58E97991085CB007F37CEF884B59137C1B03234B519
 * Entry: 0x00123fa0, Ghidra index: 3678, label: FUN_00123fa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00123fa0(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0x2e8);
  if (iVar3 == 0) goto LAB_00124197;
  cVar2 = (**(code **)(*(int *)(iVar3 + 0x144) + 0x20))();
  if (((cVar2 == '\0') || (iVar3 = *(int *)(iVar3 + 0x164), iVar3 == 0)) ||
     (*(int *)(*(int *)(iVar3 + 0xc) + 4) != 0x14)) {
    iVar3 = 0;
  }
  piVar1 = *(int **)(param_1 + 0x2e8);
  cVar2 = (**(code **)(*piVar1 + 0x20))();
  if (cVar2 == '\0') {
    iVar4 = 0;
  }
  else {
    iVar4 = piVar1[8];
  }
  iVar5 = *(int *)(param_1 + 0x2e8);
  cVar2 = (**(code **)(*(int *)(iVar5 + 0x44) + 0x20))();
  if (cVar2 == '\0') {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar5 + 100);
  }
  if (iVar3 == 0) {
    if (iVar4 == 0) {
      if (iVar5 == 0) goto LAB_00124197;
      iVar3 = 2;
    }
    else {
      iVar3 = 1;
    }
  }
  else {
    iVar3 = (*(int *)(*(int *)(param_1 + 0x2e8) + 0x1cc) == 2) + 1;
  }
  if (iVar3 == 1) {
LAB_00124054:
    FUN_0014d020();
  }
  else {
    if (iVar3 != 2) {
      iVar3 = 1;
      goto LAB_00124054;
    }
    iVar4 = *(int *)(param_1 + 0x2e8);
    if (((*(int *)(iVar4 + 0x1d0) == 0) || (*(int *)(iVar4 + 0x1d0) != 2)) &&
       (*(int *)(iVar4 + 0x1cc) != 2)) {
      if (*(int *)(iVar4 + 0x1cc) != 0) {
        FUN_0014d130();
      }
      (**(code **)(*(int *)(iVar4 + 0x44) + 0x50))(iVar4 + 0x144);
      *(undefined4 *)(iVar4 + 0x1cc) = 2;
    }
  }
  iVar4 = *(int *)(param_1 + 0x2e8);
  cVar2 = (**(code **)(*(int *)(iVar4 + 0x144) + 0x20))();
  if (((cVar2 != '\0') && (iVar4 = *(int *)(iVar4 + 0x164), iVar4 != 0)) &&
     ((*(int *)(*(int *)(iVar4 + 0xc) + 4) == 0x14 && (iVar4 != 0)))) {
    iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0x15c);
    if (iVar4 == 1) {
      *(int *)(param_1 + 0x5b0) = iVar3;
    }
    else if ((iVar4 == 0) || (iVar4 == 4)) {
      *(undefined4 *)(param_1 + 0x5b0) = 1;
    }
    else {
      iVar3 = FUN_0014d2e0();
      *(uint *)(param_1 + 0x5b0) = (**(int **)(iVar3 + 0x228) == 2) + 1;
    }
    *(byte *)(param_1 + 0x260) = *(byte *)(param_1 + 0x260) | 8;
    iVar3 = FUN_0014d2e0();
    if (iVar3 != 0) {
      FUN_0010ffe0();
    }
    if (*(int *)(*(int *)(param_1 + 0xc) + 0x15c) != 3) {
      return;
    }
    if ((bool)(*(byte *)(*(int *)(param_1 + 0x2e8) + 0x1c8) >> 1 & 1) ==
        (*(int *)(*(int *)(param_1 + 0x2e8) + 0x1cc) == 1)) {
      return;
    }
    FUN_0014d470();
    return;
  }
LAB_00124197:
  *(byte *)(param_1 + 0x260) = *(byte *)(param_1 + 0x260) & 0xf7;
  *(undefined4 *)(param_1 + 0x5b0) = 1;
  return;
}
