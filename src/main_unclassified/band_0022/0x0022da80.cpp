/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 81706E387F7A91E6A00EC455D78BACC44A7CE7122A85FD27DAE74E2C76C64F0A
 * Entry: 0x0022da80, Ghidra index: 7712, label: FUN_0022da80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0022da80(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_EDX;
  
  iVar1 = *(int *)(in_EDX + 0x1b0);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) == 0) {
      if (*(int *)(iVar1 + 0x10) == 0) {
        return 0;
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 0xb0);
      if (*(int *)(*(int *)(iVar1 + 0xc) + 4) != 3) {
        return 0;
      }
    }
    else {
      iVar1 = *(int *)(*(int *)(iVar1 + 8) + 0x1d4);
    }
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x2e8) != 0)) {
      uVar2 = FUN_0014cc30(1,*(undefined4 *)(*(int *)(in_EDX + 0x228) + 0xec));
      return uVar2;
    }
  }
  return 0;
}
