/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4B0EB3174FFCA797139A3D9EB0B6AFE3DCA8EFF9D1381B5BD093C4F7EC3FEDD8
 * Entry: 0x00167e00, Ghidra index: 4734, label: FUN_00167e00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00167e00(void)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  int unaff_EDI;
  
  iVar1 = 0;
  if (0 < *(int *)(in_EAX + 0x10)) {
    piVar2 = *(int **)(in_EAX + 4);
    while (iVar1 = iVar1 + 1, *piVar2 != unaff_EDI) {
      piVar2 = piVar2 + 1;
      if (*(int *)(in_EAX + 0x10) <= iVar1) {
        return;
      }
    }
    if (iVar1 < *(int *)(in_EAX + 0x10)) {
      do {
        *(undefined4 *)(*(int *)(in_EAX + 4) + iVar1 * 4 + -4) =
             *(undefined4 *)(*(int *)(in_EAX + 4) + iVar1 * 4);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(in_EAX + 0x10));
    }
    *(int *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) + -1;
  }
  return;
}
