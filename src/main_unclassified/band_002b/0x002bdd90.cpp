/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 34B6B0C8C0BECCF9CBBB6149B52E7AF7C42BC37D9F12C6980B322519DEF685AF
 * Entry: 0x002bdd90, Ghidra index: 9962, label: FUN_002bdd90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bdd90(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *unaff_EBX;
  int iVar7;
  
  iVar4 = (**(code **)(*unaff_EBX + 8))();
  iVar7 = *(ushort *)(iVar4 + 2) - 1;
  if (-1 < iVar7) {
    do {
      iVar2 = *(int *)(*(int *)(iVar4 + 4) + iVar7 * 4);
      iVar5 = *(ushort *)(iVar2 + 0x162) - 1;
      if (-1 < iVar5) {
        puVar6 = (undefined4 *)(*(int *)(iVar2 + 0x164) + iVar5 * 4);
        do {
          if ((int *)*puVar6 == unaff_EBX) break;
          iVar5 = iVar5 + -1;
          puVar6 = puVar6 + -1;
        } while (-1 < iVar5);
      }
      uVar1 = *(ushort *)(iVar2 + 0x162) - 1;
      *(ushort *)(iVar2 + 0x162) = uVar1;
      if (iVar5 < (int)(uint)uVar1) {
        do {
          *(undefined4 *)(*(int *)(iVar2 + 0x164) + iVar5 * 4) =
               *(undefined4 *)(*(int *)(iVar2 + 0x164) + 4 + iVar5 * 4);
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)(uint)*(ushort *)(iVar2 + 0x162));
      }
      FUN_002be050(*(undefined4 *)(iVar2 + 0x170),iVar2);
      iVar7 = iVar7 + -1;
      puVar3 = *(uint **)(iVar2 + 0x170);
    } while (-1 < iVar7);
    if ((puVar3 != (uint *)0x0) && (*puVar3 = *puVar3 & 0xfffffdff | 0x100, param_1 == 0)) {
      if ('\a' < (char)*puVar3) {
        FUN_002be1c0(*(undefined4 *)(*(int *)puVar3[4] + 0xc));
        return;
      }
      FUN_002be240();
    }
  }
  return;
}
