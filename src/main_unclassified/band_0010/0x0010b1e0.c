/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CBCA7D9636007F35B81327A0A734D7313CFDBDBEF3CDCA4CD3FAB7FF0F296941
 * Entry: 0x0010b1e0, Ghidra index: 3443, label: FUN_0010b1e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010b1e0(void)

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
        FUN_001d6530(iVar1,*(int *)(in_EAX + 8));
        FUN_00087630(*(undefined4 *)(in_ECX + 8));
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
        FUN_0010bc00(iVar1,iVar5,iVar2);
        uVar3 = FUN_001dd4f0(iVar5,*(undefined4 *)(in_EAX + 8),*(undefined4 *)(in_ECX + 8));
        *(undefined4 *)(in_ECX + 8) = uVar3;
        return;
      }
      FUN_00087630(*(undefined4 *)(in_ECX + 8));
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(in_ECX + 4));
    }
  }
  FUN_000875b0();
  return;
}
