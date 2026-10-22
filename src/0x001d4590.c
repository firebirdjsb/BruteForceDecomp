/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0A58B681DE408AC22AE788994682F1B3F6CA7B5C1B68C05D0C414006D980E59F
 * Entry: 0x001d4590, Ghidra index: 6328, label: FUN_001d4590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d4590(void)

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
    uVar3 = *(int *)(in_EAX + 8) - iVar1 >> 1;
    if (uVar3 != 0) {
      iVar4 = *(int *)(in_ECX + 4);
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(int *)(in_ECX + 8) - iVar4 >> 1;
      }
      if (uVar3 <= uVar5) {
        FUN_001dc990(iVar1,*(int *)(in_EAX + 8));
        if (*(int *)(in_EAX + 4) == 0) {
          *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 4);
          return;
        }
        *(int *)(in_ECX + 8) =
             *(int *)(in_ECX + 4) + (*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4) >> 1) * 2;
        return;
      }
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(int *)(in_ECX + 0xc) - iVar4 >> 1;
      }
      if (uVar3 <= uVar5) {
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(in_ECX + 8) - iVar4 >> 1;
        }
        iVar4 = iVar1 + iVar4 * 2;
        FUN_001dc990(iVar1,iVar4);
        uVar2 = FUN_001e0cf0(iVar4,*(undefined4 *)(in_EAX + 8),*(undefined4 *)(in_ECX + 8));
        *(undefined4 *)(in_ECX + 8) = uVar2;
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar4);
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
