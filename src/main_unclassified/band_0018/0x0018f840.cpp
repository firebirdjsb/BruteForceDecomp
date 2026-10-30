/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 83D6EEC20D5800F4814F31E4FDC8C1BE1EEB929E40D30D22D2B7754669BF8A12
 * Entry: 0x0018f840, Ghidra index: 5294, label: FUN_0018f840
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0018f840(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00160220();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  return 0;
}
