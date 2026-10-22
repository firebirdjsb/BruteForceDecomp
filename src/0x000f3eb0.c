/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5E42CEF34D396F6B201EB2E5486B156F295DEF73CD6B3F2CA7B324F290F2D8E4
 * Entry: 0x000f3eb0, Ghidra index: 3053, label: FUN_000f3eb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000f3eb0(byte param_1)

{
  FUN_000f3ed0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
