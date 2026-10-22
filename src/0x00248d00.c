/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3CDF18544064ACC05ED1C8B63E44C14595BFEF56D1C7C482C5B94AC5284C7D30
 * Entry: 0x00248d00, Ghidra index: 8137, label: FUN_00248d00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00248d00(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int in_EAX;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  uint uVar6;
  
  if (in_ECX == in_EAX) {
    return;
  }
  iVar1 = *(int *)(in_EAX + 4);
  if (iVar1 != 0) {
    uVar3 = (*(int *)(in_EAX + 8) - iVar1) / 0xc;
    if (uVar3 != 0) {
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (*(int *)(in_ECX + 8) - iVar2) / 0xc;
      }
      if (uVar3 <= uVar6) {
        FUN_00050a90(iVar1,*(undefined4 *)(in_EAX + 8),uVar3);
        if (*(int *)(in_EAX + 4) == 0) {
          *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 4);
          return;
        }
        *(int *)(in_ECX + 8) =
             *(int *)(in_ECX + 4) + ((*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4)) / 0xc) * 0xc;
        return;
      }
      if (iVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (*(int *)(in_ECX + 0xc) - iVar2) / 0xc;
      }
      if (uVar3 <= uVar6) {
        iVar4 = FUN_001aa460();
        iVar4 = iVar1 + iVar4 * 0xc;
        FUN_00249a00(iVar1,iVar4,iVar2);
        uVar5 = FUN_00249490(in_ECX,iVar4,*(undefined4 *)(in_EAX + 8));
        *(undefined4 *)(in_ECX + 8) = uVar5;
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar2);
    }
  }
  if (*(int *)(in_ECX + 4) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_ECX + 4));
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}
