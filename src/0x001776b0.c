/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9CE23C365F367EA7531B15BE7EBFEF074A306216921D433743D73EF5209D0413
 * Entry: 0x001776b0, Ghidra index: 4954, label: FUN_001776b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001776b0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  }
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 8) = 1;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
