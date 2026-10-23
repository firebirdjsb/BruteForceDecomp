/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F06059B687118C97636A5FC762D1976CAD7A99875CA2CC5DC1BAE69803192792
 * Entry: 0x00103150, Ghidra index: 3289, label: FUN_00103150
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00103150(byte param_1)

{
  FUN_00103170();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
