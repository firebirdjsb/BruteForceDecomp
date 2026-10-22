/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4F689B08F4AE440D0B5B4841748529D86BA30B94A54866EABB433ECB9659E73C
 * Entry: 0x000ff850, Ghidra index: 3197, label: FUN_000ff850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ff850(byte param_1)

{
  FUN_000ff870();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
