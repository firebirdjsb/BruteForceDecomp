/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AB6176B6BB0D3989653A4799FE07AE763952A69185347F0AB3E5AF35AFBD4D99
 * Entry: 0x001d5710, Ghidra index: 6340, label: FUN_001d5710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d5710(int param_1)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (in_EAX == param_1) {
    return;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    iVar4 = *(int *)(param_1 + 8) - iVar1;
    iVar2 = iVar4 >> 0x1f;
    iVar4 = iVar4 / 0xc + iVar2;
    uVar5 = iVar4 - iVar2;
    if (iVar4 != iVar2) {
      iVar2 = *(int *)(in_EAX + 4);
      if (iVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (*(int *)(in_EAX + 8) - iVar2) / 0xc;
      }
      if (uVar5 <= uVar6) {
        FUN_001e0b70(iVar1,*(undefined4 *)(param_1 + 8),param_1);
        FUN_00051870(in_EAX);
        if (*(int *)(param_1 + 4) == 0) {
          *(undefined4 *)(in_EAX + 8) = *(undefined4 *)(in_EAX + 4);
          return;
        }
        *(int *)(in_EAX + 8) =
             *(int *)(in_EAX + 4) + ((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc) * 0xc;
        return;
      }
      if (iVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (*(int *)(in_EAX + 0xc) - iVar2) / 0xc;
      }
      if (uVar5 <= uVar6) {
        iVar4 = FUN_001aa460();
        iVar4 = iVar1 + iVar4 * 0xc;
        FUN_001dcb40(iVar1,iVar4,iVar2);
        uVar3 = FUN_001df240(iVar4,*(undefined4 *)(param_1 + 8),*(undefined4 *)(in_EAX + 8));
        *(undefined4 *)(in_EAX + 8) = uVar3;
        return;
      }
      FUN_00051870(in_EAX);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 4));
    }
  }
  FUN_00051710(in_EAX);
  return;
}
