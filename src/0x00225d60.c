/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5ADD01B222A8DE6B1E850030ADB9DA8026E1019EF01C54A42D7D67D2D5C1AE7C
 * Entry: 0x00225d60, Ghidra index: 7634, label: FUN_00225d60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00225d60(int param_1)

{
  if (*(char *)(param_1 + 0x15) == '\0') {
    FUN_00225d60(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
