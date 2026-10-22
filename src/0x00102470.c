/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 54E9B35B31809E06696CF4AE65ACF0D45550AA86077E6407113F2EF6E88218AE
 * Entry: 0x00102470, Ghidra index: 3269, label: FUN_00102470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00102470(byte param_1)

{
  FUN_00102490();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
