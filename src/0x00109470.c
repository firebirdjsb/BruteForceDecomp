/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ED6FFB403BDCBC10FC2F93461142B81E469AB66D0C08EE326F9AC17F2C3C7CE1
 * Entry: 0x00109470, Ghidra index: 3402, label: FUN_00109470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00109470(byte param_1)

{
  FUN_00109490();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
