/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 89B0EDBC782400ACB00ED449DFBDA965734B7F2AA311C9FAF64CF580E2279C80
 * Entry: 0x0012aa80, Ghidra index: 3768, label: FUN_0012aa80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0012aa80(int param_1)

{
  if (*(char *)(param_1 + 0x15) == '\0') {
    FUN_0012aa80(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
