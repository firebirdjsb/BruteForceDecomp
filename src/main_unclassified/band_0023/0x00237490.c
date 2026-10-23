/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A36205EA3EEE26D04B867330DA7B87C83B90FF20F8196967EB0E9DB5FED832AF
 * Entry: 0x00237490, Ghidra index: 7848, label: FUN_00237490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00237490(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    FUN_00254110();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
