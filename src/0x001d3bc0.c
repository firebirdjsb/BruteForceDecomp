/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 82CCAF7C525337C60F85D2AF926A07ED995BDE8EA191CBD16B7624F09099D11A
 * Entry: 0x001d3bc0, Ghidra index: 6321, label: FUN_001d3bc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d3bc0(void)

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
    uVar3 = *(int *)(in_EAX + 8) - iVar1 >> 5;
    if (uVar3 != 0) {
      iVar4 = *(int *)(in_ECX + 4);
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(int *)(in_ECX + 8) - iVar4 >> 5;
      }
      if (uVar3 <= uVar5) {
        FUN_001dc890(iVar1,*(int *)(in_EAX + 8));
        if (*(int *)(in_EAX + 4) == 0) {
          *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 4);
          return;
        }
        *(int *)(in_ECX + 8) =
             (*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4) >> 5) * 0x20 + *(int *)(in_ECX + 4);
        return;
      }
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(int *)(in_ECX + 0xc) - iVar4 >> 5;
      }
      if (uVar3 <= uVar5) {
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(in_ECX + 8) - iVar4 >> 5;
        }
        iVar4 = iVar4 * 0x20 + iVar1;
        FUN_001dc890(iVar1,iVar4);
        uVar2 = FUN_001d17a0(in_ECX,iVar4,*(undefined4 *)(in_EAX + 8));
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
