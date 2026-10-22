/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 09B137EFB304A5AC9A8CCC211B2132980B707036177168622121E8DDB2B23831
 * Entry: 0x000e0810, Ghidra index: 2749, label: FUN_000e0810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e0810(int *param_1)

{
  int *unaff_EBX;
  int unaff_EDI;
  
  if (param_1 != *(int **)(unaff_EDI + 4)) {
    *(int *)param_1[1] = *param_1;
    *(int *)(*param_1 + 4) = param_1[1];
    if (param_1[0x13] != 0) {
      FUN_0008f6e0();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  *unaff_EBX = *param_1;
  return;
}
