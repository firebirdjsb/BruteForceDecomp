/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 384E148FF9AACFBD0B725BA8D809BBF2D010A5596CA8B1013706BF2AA5B54E24
 * Entry: 0x00262da0, Ghidra index: 8666, label: FUN_00262da0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00262da0(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  undefined4 uVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (in_ECX == in_EAX) {
    return;
  }
  iVar1 = *(int *)(in_EAX + 4);
  if (iVar1 != 0) {
    uVar4 = *(int *)(in_EAX + 8) - iVar1 >> 2;
    if (uVar4 != 0) {
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(int *)(in_ECX + 8) - iVar2 >> 2;
      }
      if (uVar4 <= uVar6) {
        FUN_00061c40(iVar1,*(int *)(in_EAX + 8));
        FUN_00256480(in_ECX);
        if (*(int *)(in_EAX + 4) == 0) {
          *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 4);
          return;
        }
        *(int *)(in_ECX + 8) =
             *(int *)(in_ECX + 4) + (*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4) >> 2) * 4;
        return;
      }
      if (iVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(int *)(in_ECX + 0xc) - iVar2 >> 2;
      }
      if (uVar4 <= uVar6) {
        if (iVar2 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(in_ECX + 8) - iVar2 >> 2;
        }
        iVar5 = iVar1 + iVar5 * 4;
        FUN_00061b30(iVar1,iVar5,iVar2);
        uVar3 = FUN_00287fc0(iVar5,*(undefined4 *)(in_EAX + 8),*(undefined4 *)(in_ECX + 8));
        *(undefined4 *)(in_ECX + 8) = uVar3;
        return;
      }
      FUN_00256480(in_ECX);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(in_ECX + 4));
    }
  }
  FUN_00061590();
  return;
}
