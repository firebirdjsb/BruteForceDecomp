/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8FAAE944B72D30726325A3D529510F9351B1BC789857273D50FECEB4C8239589
 * Entry: 0x00145e10, Ghidra index: 4203, label: FUN_00145e10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00145e10(byte param_1)

{
  FUN_00145e30();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
