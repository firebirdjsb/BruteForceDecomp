/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2A505BC42EC01536815C0D1890FB1D92AE0953014D951C9E15099492B059E98B
 * Entry: 0x0015e620, Ghidra index: 4549, label: FUN_0015e620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0015e620(void)

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
    uVar4 = *(int *)(in_EAX + 8) - iVar1 >> 5;
    if (uVar4 != 0) {
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(int *)(in_ECX + 8) - iVar2 >> 5;
      }
      if (uVar4 <= uVar6) {
        FUN_0015eaf0(iVar1,*(int *)(in_EAX + 8));
        if (*(int *)(in_EAX + 4) == 0) {
          *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 4);
          return;
        }
        *(int *)(in_ECX + 8) =
             (*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4) >> 5) * 0x20 + *(int *)(in_ECX + 4);
        return;
      }
      if (iVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(int *)(in_ECX + 0xc) - iVar2 >> 5;
      }
      if (uVar4 <= uVar6) {
        if (iVar2 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(in_ECX + 8) - iVar2 >> 5;
        }
        iVar5 = iVar5 * 0x20 + iVar1;
        FUN_0015ea60(iVar1,iVar5,iVar2);
        uVar3 = FUN_0015ea80(in_ECX,iVar5,*(undefined4 *)(in_EAX + 8));
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
