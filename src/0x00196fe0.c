/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D5C0492ECE3BE04E760ABCED24F719E5EFAA7921A4C3EE3EBB08AE2BBB946C48
 * Entry: 0x00196fe0, Ghidra index: 5306, label: FUN_00196fe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00196fe0(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_000e1440();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_2);
  }
  return 0;
}
