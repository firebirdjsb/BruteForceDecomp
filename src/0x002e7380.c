/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 309EAE16A81D8E22FD563640C62BE6913B54D9D80C32A2B6E470392FB869A73A
 * Entry: 0x002e7380, Ghidra index: 10505, label: FUN_002e7380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e7380(byte param_1)

{
  FUN_002e6a40();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
