/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AC1FF6D42D0F8396F2723E54C1D327C5319BE979C5B24D665E4A9D704EDA5D25
 * Entry: 0x000660c0, Ghidra index: 1110, label: FUN_000660c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000660c0(byte param_1)

{
  FUN_00065260();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
