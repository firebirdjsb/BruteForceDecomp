/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 634830E0D000C2DBE8BBB0C31354A7775E528408AA43160E87409DD38B707A62
 * Entry: 0x0021d9b0, Ghidra index: 7546, label: FUN_0021d9b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0021d9b0(byte param_1)

{
  FUN_0021dd20();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
