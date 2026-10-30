/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C06804F753F544E3B77ABDE3ADB920AF83BA5D204454A5877FEA1F44E5E2F364
 * Entry: 0x0022d2e0, Ghidra index: 7703, label: FUN_0022d2e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0022d2e0(void)

{
  int *piVar1;
  int unaff_EDI;
  
  piVar1 = *(int **)(unaff_EDI + 4);
  if (piVar1 != *(int **)(unaff_EDI + 8)) {
    do {
      if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(*piVar1);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)(unaff_EDI + 8));
  }
  if (*(int *)(unaff_EDI + 4) == 0) {
    *(undefined4 *)(unaff_EDI + 4) = 0;
    *(undefined4 *)(unaff_EDI + 8) = 0;
    *(undefined4 *)(unaff_EDI + 0xc) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(int *)(unaff_EDI + 4));
}
