/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 00C49FF5331F8E69BB59161B1533CE6E0128868D7790849C2F66C6B0ABAA8411
 * Entry: 0x001e7ef0, Ghidra index: 6828, label: FUN_001e7ef0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e7ef0(void)

{
  int iVar1;
  undefined4 *unaff_ESI;
  uint uVar2;
  
  uVar2 = 0;
  if (unaff_ESI[1] != 0) {
    do {
      iVar1 = *(int *)(unaff_ESI[2] + uVar2 * 4);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(iVar1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)unaff_ESI[1]);
  }
  if (unaff_ESI[2] == 0) {
    *unaff_ESI = 0;
    unaff_ESI[1] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(unaff_ESI[2]);
}
