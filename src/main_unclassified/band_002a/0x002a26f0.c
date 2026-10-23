/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 71C597455CC1D9E7351A0891374AE1A6E98B3F45F0F9CD8BB022BACD44ED3144
 * Entry: 0x002a26f0, Ghidra index: 9520, label: FUN_002a26f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a26f0(byte param_1)

{
  FUN_002a1070();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
