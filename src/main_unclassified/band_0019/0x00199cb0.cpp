/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4288364C5CD99ABDDF709DAFE15C06D469241A9E314905ED11F322FA5458B9CA
 * Entry: 0x00199cb0, Ghidra index: 5315, label: FUN_00199cb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00199cb0(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_0006a3d0();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  return 0;
}
