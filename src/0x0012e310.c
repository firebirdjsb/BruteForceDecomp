/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 10F414796076C8C9679793E4705C42111157D36EB0FF25A40CA8ECC9B9E2C53A
 * Entry: 0x0012e310, Ghidra index: 3810, label: FUN_0012e310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0012e310(byte param_1)

{
  FUN_0012e330();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
