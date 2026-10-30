/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 70469F737C214CDF488BD4D95693A2CDF3BD96DEE7C8386B409094828AB5E930
 * Entry: 0x00105c30, Ghidra index: 3349, label: FUN_00105c30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00105c30(byte param_1)

{
  FUN_00105c50();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
