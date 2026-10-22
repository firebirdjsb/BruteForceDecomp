/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 357DCB0319793269175FAAA263711F95219B62FB7BAAF54D9DF65C9F89C81BD7
 * Entry: 0x00262ee0, Ghidra index: 8667, label: FUN_00262ee0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00262ee0(void)

{
  int iVar1;
  uint uVar2;
  int in_EAX;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  uint uVar5;
  
  if (in_ECX == in_EAX) {
    return;
  }
  iVar1 = *(int *)(in_EAX + 4);
  if (iVar1 != 0) {
    uVar2 = (*(int *)(in_EAX + 8) - iVar1) / 0x14;
    if (uVar2 != 0) {
      iVar3 = *(int *)(in_ECX + 4);
      if (iVar3 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (*(int *)(in_ECX + 8) - iVar3) / 0x14;
      }
      if (uVar2 <= uVar5) {
        FUN_001dcab0(iVar1,*(undefined4 *)(in_EAX + 8));
        if (*(int *)(in_EAX + 4) == 0) {
          *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 4);
          return;
        }
        *(int *)(in_ECX + 8) =
             *(int *)(in_ECX + 4) + ((*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4)) / 0x14) * 0x14;
        return;
      }
      if (iVar3 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (*(int *)(in_ECX + 0xc) - iVar3) / 0x14;
      }
      if (uVar2 <= uVar5) {
        iVar3 = FUN_0017c210();
        iVar3 = iVar1 + iVar3 * 0x14;
        FUN_001dcab0(iVar1,iVar3);
        uVar4 = FUN_00263440(in_ECX,iVar3,*(undefined4 *)(in_EAX + 8));
        *(undefined4 *)(in_ECX + 8) = uVar4;
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar3);
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
