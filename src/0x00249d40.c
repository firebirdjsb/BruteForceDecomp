/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41B4CE0B11C84B22DF4C3ABA6264A417EBAC5D4BD3A880BFB2A8FBEF68CA11E4
 * Entry: 0x00249d40, Ghidra index: 8204, label: FUN_00249d40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00249d40(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  undefined4 uVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  
  if (in_ECX == in_EAX) {
    return;
  }
  iVar1 = *(int *)(in_EAX + 4);
  if (iVar1 != 0) {
    iVar2 = *(int *)(in_EAX + 8);
    if (iVar2 != iVar1) {
      iVar5 = *(int *)(in_ECX + 4);
      if (iVar5 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(int *)(in_ECX + 8) - iVar5;
      }
      if ((uint)(iVar2 - iVar1) <= uVar4) {
        FUN_0024ba50(iVar1,iVar2);
        if (*(int *)(in_EAX + 4) == 0) {
          *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 4);
          return;
        }
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 4) + (*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4));
        return;
      }
      if (iVar5 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(int *)(in_ECX + 0xc) - iVar5;
      }
      if ((uint)(iVar2 - iVar1) <= uVar4) {
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(in_ECX + 8) - iVar5;
        }
        FUN_0024ba50(iVar1,iVar1 + iVar5);
        uVar3 = FUN_00071fa0(iVar1 + iVar5,*(undefined4 *)(in_EAX + 8),*(undefined4 *)(in_ECX + 8));
        *(undefined4 *)(in_ECX + 8) = uVar3;
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar5);
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
