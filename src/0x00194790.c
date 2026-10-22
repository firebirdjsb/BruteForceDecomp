/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1771A87C524F584A02C5088D1DD372DC3449538C53DBDBEC20D414872ED5BF33
 * Entry: 0x00194790, Ghidra index: 5302, label: FUN_00194790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00194790(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00160320();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  return 0;
}
