/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CCC5B966CD8F0737FA2D1D1522499E616C5269876E71D26A553B3849EB821274
 * Entry: 0x000d8c70, Ghidra index: 2675, label: FUN_000d8c70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000d8c70(void)

{
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 0x20));
  }
  *(undefined4 *)(unaff_EDI + 0x20) = 0;
  if (*(int *)(unaff_EDI + 0x14) != 0) {
    FUN_00069bb0(*(undefined4 *)(unaff_EDI + 0x18),unaff_EDI + 0x10);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x14));
  }
  *(undefined4 *)(unaff_EDI + 0x14) = 0;
  *(undefined4 *)(unaff_EDI + 0x18) = 0;
  *(undefined4 *)(unaff_EDI + 0x1c) = 0;
  if (*(int *)(unaff_EDI + 4) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 4));
  }
  *(undefined4 *)(unaff_EDI + 4) = 0;
  *(undefined4 *)(unaff_EDI + 8) = 0;
  *(undefined4 *)(unaff_EDI + 0xc) = 0;
  return;
}
