/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 725BEFC6C84F1205CA6F718F51BE7E73A6121AB833152F216205FB85714AE09E
 * Entry: 0x002bd910, Ghidra index: 9954, label: FUN_002bd910
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002bd910(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  
  iVar5 = *(ushort *)(param_1 + 0xe) - 1;
  while (-1 < iVar5) {
    iVar5 = iVar5 + -1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 4 + iVar5 * 4) + 0x1c8) = 0;
  }
  uVar7 = (uint)*(ushort *)(param_1 + 0x22);
  while (uVar7 = uVar7 - 1, -1 < (int)uVar7) {
    iVar5 = (**(code **)(*(int *)**(undefined4 **)(*(int *)(param_1 + 0x24) + uVar7 * 4) + 8))();
    iVar8 = *(ushort *)(iVar5 + 2) - 1;
    if (-1 < iVar8) {
      iVar1 = **(int **)(iVar5 + 4);
      iVar2 = **(int **)(iVar5 + 4);
      while (iVar4 = iVar1, iVar4 != 0) {
        iVar2 = iVar4;
        iVar1 = *(int *)(iVar4 + 0x1c8);
      }
      do {
        iVar1 = *(int *)(*(int *)(iVar5 + 4) + iVar8 * 4);
        iVar4 = iVar1;
        while (iVar3 = iVar1, iVar3 != 0) {
          iVar4 = iVar3;
          iVar1 = *(int *)(iVar3 + 0x1c8);
        }
        if (iVar2 != iVar4) {
          *(int *)(iVar4 + 0x1c8) = iVar2;
        }
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
    }
  }
  piVar6 = *(int **)(param_1 + 0x10);
  iVar8 = *piVar6;
  iVar5 = *piVar6;
  while (iVar2 = iVar8, iVar2 != 0) {
    iVar5 = iVar2;
    iVar8 = *(int *)(iVar2 + 0x1c8);
  }
  iVar8 = 0;
  if (*(ushort *)(param_1 + 0xe) != 0) {
    do {
      iVar1 = *piVar6;
      iVar2 = *piVar6;
      while (iVar4 = iVar1, iVar4 != 0) {
        iVar2 = iVar4;
        iVar1 = *(int *)(iVar4 + 0x1c8);
      }
      if (iVar2 != iVar5) {
        return iVar2;
      }
      iVar8 = iVar8 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar8 < (int)(uint)*(ushort *)(param_1 + 0xe));
  }
  return 0;
}
