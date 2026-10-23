/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E791EA00B036593532EF36E76949EE24FE92872A1C000B261A9B2588DAF97E43
 * Entry: 0x002a9de0, Ghidra index: 9641, label: FUN_002a9de0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a9de0(byte param_1)

{
  FUN_002a9e00();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
