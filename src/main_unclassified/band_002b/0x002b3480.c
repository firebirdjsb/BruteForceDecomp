/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5984C47081A39D2C83C7A81ABE074310FAF0CA97572DF55C0E0DE08AF4172799
 * Entry: 0x002b3480, Ghidra index: 9762, label: FUN_002b3480
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b3480(byte param_1)

{
  FUN_002b34a0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
