/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 46E3B946B83B3237765545506759E26DB0141FB28AC9651E9875DE75A8A8AAF6
 * Entry: 0x001e7970, Ghidra index: 6819, label: FUN_001e7970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e7970(byte param_1)

{
  FUN_001e7990();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
