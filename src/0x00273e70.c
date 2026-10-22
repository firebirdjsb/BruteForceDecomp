/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D1D05AC98B55406FDCD799F24175578CD76C21BB73A0D98FBDD0E401B33668AD
 * Entry: 0x00273e70, Ghidra index: 8870, label: FUN_00273e70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00273e70(byte param_1)

{
  FUN_00273e90();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
