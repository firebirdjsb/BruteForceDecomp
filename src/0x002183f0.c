/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B1189A9C078C775F2B6EF5D27BBD2385B78102CE3ECD7954DC613AF1AF3CA0C
 * Entry: 0x002183f0, Ghidra index: 7470, label: FUN_002183f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002183f0(int *param_1)

{
  int unaff_ESI;
  int *unaff_EDI;
  
  if (param_1 != *(int **)(unaff_ESI + 4)) {
    *(int *)param_1[1] = *param_1;
    *(int *)(*param_1 + 4) = param_1[1];
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  *unaff_EDI = *param_1;
  return;
}
