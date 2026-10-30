/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 72D9C9E56D4F5C7A7FEB918FB8E0B0397126C489C6A689889AA0D99BFBEEE6CE
 * Entry: 0x002acff0, Ghidra index: 9679, label: FUN_002acff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002acff0(int param_1)

{
  if (*(int *)(param_1 + 0x3c) != 0) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x3c) = 1;
  if (*(int *)(param_1 + 0x1c) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(param_1 + 0x1c));
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(param_1);
}
