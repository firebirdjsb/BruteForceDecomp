/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE46A6C852F2BB5B2109E0FE6664EAB1170F8313C430C68FB8166098490614B1
 * Entry: 0x001cd7d0, Ghidra index: 5976, label: FUN_001cd7d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cd7d0(int param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (in_EAX == param_1) {
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    uVar3 = (*(int *)(param_1 + 8) - iVar2) / 0x70;
    if (uVar3 != 0) {
      if (*(int *)(in_EAX + 4) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4)) / 0x70;
      }
      if (uVar3 <= uVar5) {
        iVar1 = FUN_001d1ac0(iVar2,*(int *)(param_1 + 8));
        iVar2 = *(int *)(in_EAX + 8);
        for (; iVar1 != iVar2; iVar1 = iVar1 + 0x70) {
          FUN_00051630();
        }
        iVar2 = FUN_0004f500();
        *(int *)(in_EAX + 8) = iVar2 * 0x70 + *(int *)(in_EAX + 4);
        return;
      }
      uVar3 = FUN_001b4ff0();
      uVar5 = FUN_0004f500();
      if (uVar5 <= uVar3) {
        iVar1 = FUN_0004f500();
        iVar1 = iVar1 * 0x70 + iVar2;
        FUN_001d1ac0(iVar2,iVar1);
        uVar4 = FUN_001df2d0(iVar1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(in_EAX + 8));
        *(undefined4 *)(in_EAX + 8) = uVar4;
        return;
      }
      FUN_00051330(in_EAX);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 4));
    }
  }
  FUN_000512f0();
  return;
}
