/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E3087A52ACAED011E08CC4732B0BD0988B3EC942B57C08C34345ECEC3585D480
 * Entry: 0x00219860, Ghidra index: 7501, label: FUN_00219860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00219860(byte param_1)

{
  FUN_00219880();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
