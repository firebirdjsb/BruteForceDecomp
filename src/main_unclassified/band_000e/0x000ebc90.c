/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B873347CB40348A19A5C0C27237505E5BBDE82BCC9F0AF929CBD3C8BD0D0E50C
 * Entry: 0x000ebc90, Ghidra index: 2908, label: FUN_000ebc90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ebc90(byte param_1)

{
  FUN_000ebcb0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
