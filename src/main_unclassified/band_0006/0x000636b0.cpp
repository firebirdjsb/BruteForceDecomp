/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FE5B25A476CEEE60903BACAFEBCEAE8521E29F4B0EE7F82D185FDB65B08A0600
 * Entry: 0x000636b0, Ghidra index: 1076, label: FUN_000636b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000636b0(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 0;
}
