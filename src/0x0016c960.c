/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8338AF5A7B09307DF6AE1A95E0D7B0273540290D22FF1E811CFD5A74868D119C
 * Entry: 0x0016c960, Ghidra index: 4786, label: FUN_0016c960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016c960(byte param_1)

{
  FUN_0016c980();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
