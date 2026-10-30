/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 79263D4D5412F2E90A2847E6B3937593D27E75D4C54B6E8510743E79AEDFC454
 * Entry: 0x001f2b70, Ghidra index: 7013, label: FUN_001f2b70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f2b70(byte param_1)

{
  FUN_001f2b90();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
