/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1ECE1ABD976115D0194E4293A1B51122432D5C36CFA6414C211ED8AC0E26B2A6
 * Entry: 0x000e3cd0, Ghidra index: 2830, label: FUN_000e3cd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e3cd0(byte param_1)

{
  FUN_000e3cf0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
