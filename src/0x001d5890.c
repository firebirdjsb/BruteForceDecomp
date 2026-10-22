/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D7163E3C49C54347A977E8C5DA6E314FA86400BCB8A40A8A56767B7699843D64
 * Entry: 0x001d5890, Ghidra index: 6341, label: FUN_001d5890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d5890(void)

{
  int iVar1;
  int in_EAX;
  undefined4 uVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (in_ECX == in_EAX) {
    return;
  }
  iVar1 = *(int *)(in_EAX + 4);
  if (iVar1 != 0) {
    uVar3 = *(int *)(in_EAX + 8) - iVar1 >> 4;
    if (uVar3 != 0) {
      iVar4 = *(int *)(in_ECX + 4);
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(int *)(in_ECX + 8) - iVar4 >> 4;
      }
      if (uVar3 <= uVar5) {
        FUN_001dcb60(iVar1,*(int *)(in_EAX + 8));
        FUN_000518b0(*(undefined4 *)(in_ECX + 8));
        if (*(int *)(in_EAX + 4) == 0) {
          *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 4);
          return;
        }
        *(int *)(in_ECX + 8) =
             (*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4) >> 4) * 0x10 + *(int *)(in_ECX + 4);
        return;
      }
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(int *)(in_ECX + 0xc) - iVar4 >> 4;
      }
      if (uVar3 <= uVar5) {
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(in_ECX + 8) - iVar4 >> 4;
        }
        iVar4 = iVar4 * 0x10 + iVar1;
        FUN_001dcb60(iVar1,iVar4);
        uVar2 = FUN_001e0590(iVar4,*(undefined4 *)(in_EAX + 8),*(undefined4 *)(in_ECX + 8));
        *(undefined4 *)(in_ECX + 8) = uVar2;
        return;
      }
      FUN_000518b0(*(undefined4 *)(in_ECX + 8));
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(in_ECX + 4));
    }
  }
  FUN_000517c0();
  return;
}
