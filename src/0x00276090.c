/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9E75B7E0A207B582453FA58147F13FC76ACD49357D4611415C27A6C60EE6EC2E
 * Entry: 0x00276090, Ghidra index: 8894, label: FUN_00276090
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00276090(byte param_1)

{
  FUN_002760b0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
