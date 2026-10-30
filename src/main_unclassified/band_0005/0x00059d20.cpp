/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3BF3ECC0609337FD117023E63281FB7EB8BC530D298582F1DBBE30C036B31E69
 * Entry: 0x00059d20, Ghidra index: 899, label: FUN_00059d20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00059d20(byte param_1)

{
  FUN_00059bf0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
