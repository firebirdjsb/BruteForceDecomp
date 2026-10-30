/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0ECAED147835BF341DA44026451E39CE78A2969D035C84C7CDBD7EA78550602D
 * Entry: 0x0025d7d0, Ghidra index: 8571, label: FUN_0025d7d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0025d7d0(int param_1)

{
  if (*(char *)(param_1 + 0x25) == '\0') {
    FUN_0025d7d0(*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 0x10));
  }
  return;
}
