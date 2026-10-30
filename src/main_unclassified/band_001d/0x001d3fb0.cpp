/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9A333259D87EC958174D747829FA20B19ECF7D3B10AFE5BE29DDEED8E4FED3A9
 * Entry: 0x001d3fb0, Ghidra index: 6324, label: FUN_001d3fb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d3fb0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int in_EAX;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  uint uVar6;
  
  if (in_ECX == in_EAX) {
    return;
  }
  iVar1 = *(int *)(in_EAX + 4);
  if (iVar1 != 0) {
    uVar3 = (*(int *)(in_EAX + 8) - iVar1) / 0xc;
    if (uVar3 != 0) {
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (*(int *)(in_ECX + 8) - iVar2) / 0xc;
      }
      if (uVar3 <= uVar6) {
        FUN_001e07e0(iVar1,*(undefined4 *)(in_EAX + 8),uVar3);
        if (*(int *)(in_EAX + 4) == 0) {
          *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 4);
          return;
        }
        *(int *)(in_ECX + 8) =
             *(int *)(in_ECX + 4) + ((*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4)) / 0xc) * 0xc;
        return;
      }
      if (iVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (*(int *)(in_ECX + 0xc) - iVar2) / 0xc;
      }
      if (uVar3 <= uVar6) {
        iVar4 = FUN_001aa460();
        iVar4 = iVar1 + iVar4 * 0xc;
        FUN_001dc920(iVar1,iVar4,iVar2);
        uVar5 = FUN_001d1820(in_ECX,iVar4,*(undefined4 *)(in_EAX + 8));
        *(undefined4 *)(in_ECX + 8) = uVar5;
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
