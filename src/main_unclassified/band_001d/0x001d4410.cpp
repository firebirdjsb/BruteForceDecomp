/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 43B695CD8D86806606ADEFA7F93C05A1FAAF84A6385E9DC518D0FDAA3FB6C6E4
 * Entry: 0x001d4410, Ghidra index: 6327, label: FUN_001d4410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d4410(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (in_ECX == in_EAX) {
    return;
  }
  iVar1 = *(int *)(in_EAX + 4);
  if (iVar1 != 0) {
    iVar4 = *(int *)(in_EAX + 8) - iVar1;
    iVar2 = iVar4 >> 0x1f;
    iVar4 = iVar4 / 0x14 + iVar2;
    uVar5 = iVar4 - iVar2;
    if (iVar4 != iVar2) {
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (*(int *)(in_ECX + 8) - iVar2) / 0x14;
      }
      if (uVar5 <= uVar6) {
        FUN_001e0820(iVar1,*(undefined4 *)(in_EAX + 8));
        FUN_000e3c30(*(undefined4 *)(in_ECX + 8));
        if (*(int *)(in_EAX + 4) == 0) {
          *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 4);
          return;
        }
        *(int *)(in_ECX + 8) =
             *(int *)(in_ECX + 4) + ((*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4)) / 0x14) * 0x14;
        return;
      }
      if (iVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (*(int *)(in_ECX + 0xc) - iVar2) / 0x14;
      }
      if (uVar5 <= uVar6) {
        iVar4 = FUN_0017c210();
        iVar4 = iVar1 + iVar4 * 0x14;
        FUN_001dc970(iVar1,iVar4,iVar2);
        uVar3 = FUN_001dd850(iVar4,*(undefined4 *)(in_EAX + 8),*(undefined4 *)(in_ECX + 8));
        *(undefined4 *)(in_ECX + 8) = uVar3;
        return;
      }
      FUN_000e3c30(*(undefined4 *)(in_ECX + 8));
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(in_ECX + 4));
    }
  }
  FUN_0024a5c0();
  return;
}
