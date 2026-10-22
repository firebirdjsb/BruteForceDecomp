/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1A409BDC8B8CFE610AFCCA7DA972B3FBB5B6E3EBD4C54FCD0223EC6D7FF80C86
 * Entry: 0x002ad780, Ghidra index: 9688, label: FUN_002ad780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002ad780(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 1;
    FUN_002ad0b0();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
