/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7429694F43824B067EE379B4D38ACAF69442ADAFA8E9EA4FED7155DD71B3913C
 * Entry: 0x0010cd20, Ghidra index: 3480, label: FUN_0010cd20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010cd20(byte param_1)

{
  FUN_0010cd40();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
