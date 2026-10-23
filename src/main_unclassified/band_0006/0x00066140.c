/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A2F2E9710BA75FC889C596DF00415EBD540612CCA8104A6A74583A057F802D36
 * Entry: 0x00066140, Ghidra index: 1113, label: FUN_00066140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00066140(byte param_1)

{
  FUN_000656e0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
