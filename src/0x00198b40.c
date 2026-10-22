/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3440786FEE2A0CDFADEB9E0523CB9A9615BA6CD6F7BDEA4C71546A2421441412
 * Entry: 0x00198b40, Ghidra index: 5310, label: FUN_00198b40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00198b40(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_000d4b30();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  return 0;
}
