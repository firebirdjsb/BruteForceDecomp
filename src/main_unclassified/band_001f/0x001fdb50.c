/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E034989A553087234AACC93514FF380C21FCA87E914A032145D1BE9E107506D7
 * Entry: 0x001fdb50, Ghidra index: 7208, label: FUN_001fdb50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001fdb50(byte param_1)

{
  FUN_001fdaf0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
