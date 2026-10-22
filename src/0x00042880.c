/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E66DC773E38A802986ED47BF0193386F5A76B49545186A77C106C771A6491541
 * Entry: 0x00042880, Ghidra index: 509, label: FUN_00042880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00042880(void)

{
  int *piVar1;
  int unaff_EDI;
  
  piVar1 = (int *)(*(int **)(unaff_EDI + 4))[1];
  if (piVar1 != *(int **)(unaff_EDI + 4)) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    if (piVar1[3] != 0) {
      FUN_0008f6e0();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(piVar1);
  }
  return;
}
