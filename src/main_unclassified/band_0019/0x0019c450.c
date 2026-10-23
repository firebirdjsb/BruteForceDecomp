/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 34D4387DB9C2F9E4209399C32B6F7023292C769FEAF75347070CB821597DF5DC
 * Entry: 0x0019c450, Ghidra index: 5319, label: FUN_0019c450
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0019c450(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00069f10();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  return 0;
}
