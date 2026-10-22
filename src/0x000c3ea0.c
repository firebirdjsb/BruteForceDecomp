/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 951E7330A41C0C49905D88ACAE786A5AB46255C11DAC8AA6750CBDD4C06E477F
 * Entry: 0x000c3ea0, Ghidra index: 2400, label: FUN_000c3ea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c3ea0(byte param_1)

{
  FUN_000c3ec0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
