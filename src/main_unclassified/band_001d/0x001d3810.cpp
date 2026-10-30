/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AF387210864452FFBC674ED95E4F2A8D65F4FD08F6AAAB7502D773122C00A755
 * Entry: 0x001d3810, Ghidra index: 6318, label: FUN_001d3810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d3810(void)

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
    uVar4 = *(int *)(in_EAX + 8) - iVar1 >> 4;
    if (uVar4 != 0) {
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(int *)(in_ECX + 8) - iVar2 >> 4;
      }
      if (uVar4 <= uVar6) {
        FUN_001e0760(iVar1,*(int *)(in_EAX + 8));
        if (*(int *)(in_EAX + 4) == 0) {
          *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 4);
          return;
        }
        *(int *)(in_ECX + 8) =
             (*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4) >> 4) * 0x10 + *(int *)(in_ECX + 4);
        return;
      }
      if (iVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(int *)(in_ECX + 0xc) - iVar2 >> 4;
      }
      if (uVar4 <= uVar6) {
        if (iVar2 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(in_ECX + 8) - iVar2 >> 4;
        }
        iVar5 = iVar5 * 0x10 + iVar1;
        FUN_001dc820(iVar1,iVar5,iVar2);
        uVar3 = FUN_001d1740(in_ECX,iVar5,*(undefined4 *)(in_EAX + 8));
        *(undefined4 *)(in_ECX + 8) = uVar3;
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
