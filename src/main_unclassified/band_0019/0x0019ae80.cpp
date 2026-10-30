/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AEE2F281F99427B4D0C9F09FB6381D82E40BA49798CE18ED1BC9125CC8C208EA
 * Entry: 0x0019ae80, Ghidra index: 5317, label: FUN_0019ae80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0019ae80(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00069e30();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  return 0;
}
