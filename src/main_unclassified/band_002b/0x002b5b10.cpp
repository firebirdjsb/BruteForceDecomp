/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE66580F685C4E2D989FDEEE7FD114E76A7FF74DACEA87049F305E864992AC74
 * Entry: 0x002b5b10, Ghidra index: 9809, label: FUN_002b5b10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b5b10(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *unaff_ESI;
  uint uVar5;
  
  FUN_002b5f80();
  if (unaff_ESI[0xc] != 0) {
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 == *unaff_ESI) {
      iVar4 = *(int *)(param_1 + 0x44);
    }
    uVar1 = FUN_002b2b80();
    iVar2 = FUN_002bee90(iVar4,uVar1);
    if (iVar2 == 0) {
      uVar1 = FUN_002b2b80();
      FUN_002bece0(iVar4,1,uVar1);
      FUN_002b6020();
    }
    else {
      FUN_002beef0(iVar4,iVar2 + 1);
    }
  }
  if (unaff_ESI[0xf] != 0) {
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 == *unaff_ESI) {
      iVar4 = *(int *)(param_1 + 0x44);
    }
    uVar1 = *(undefined4 *)(iVar4 + 0x90);
    uVar3 = FUN_002b2b80();
    iVar4 = FUN_002bee90(uVar1,uVar3);
    if (iVar4 == 0) {
      uVar3 = FUN_002b2b80();
      FUN_002bece0(uVar1,1,uVar3);
      FUN_002b6080();
    }
    else {
      FUN_002beef0(uVar1,iVar4 + 1);
    }
  }
  uVar5 = (uint)*(ushort *)((int)unaff_ESI + 10);
  while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
    (**(code **)**(undefined4 **)(unaff_ESI[3] + uVar5 * 4))();
  }
  return;
}
