/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C7365B6CC3F66E1B39EFEF35AC2C0074666296FF12CDCCFC74661EAF21B92949
 * Entry: 0x0013ff30, Ghidra index: 4071, label: FUN_0013ff30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0013ff30(byte param_1)

{
  FUN_0013ff50();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
