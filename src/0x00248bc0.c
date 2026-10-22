/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C51FCAEEF3184C4EB204D379C8D83795830B4C367A591D2E4A482491D7D6A27
 * Entry: 0x00248bc0, Ghidra index: 8136, label: FUN_00248bc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00248bc0(void)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  uint uVar5;
  
  if (in_ECX == in_EAX) {
    return;
  }
  iVar1 = *(int *)(in_EAX + 4);
  if (iVar1 != 0) {
    uVar2 = (*(int *)(in_EAX + 8) - iVar1) / 0x38;
    if (uVar2 != 0) {
      if (*(int *)(in_ECX + 4) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x38;
      }
      if (uVar2 <= uVar5) {
        FUN_00249460(iVar1,*(undefined4 *)(in_EAX + 8));
        iVar1 = FUN_00240d90();
        *(int *)(in_ECX + 8) = iVar1 * 0x38 + *(int *)(in_ECX + 4);
        return;
      }
      uVar2 = FUN_0023c610();
      uVar5 = FUN_00240d90();
      if (uVar5 <= uVar2) {
        iVar3 = FUN_00240d90();
        iVar3 = iVar3 * 0x38 + iVar1;
        FUN_00249460(iVar1,iVar3);
        uVar4 = FUN_0024c210(iVar3,*(undefined4 *)(in_EAX + 8),*(undefined4 *)(in_ECX + 8));
        *(undefined4 *)(in_ECX + 8) = uVar4;
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(in_ECX + 4));
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
