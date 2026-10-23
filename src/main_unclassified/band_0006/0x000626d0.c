/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA03A60D38C29F79BA5CA5D4848EFF4E55EB2E13D1FCA593ECF9B0843E02EDB6
 * Entry: 0x000626d0, Ghidra index: 1059, label: FUN_000626d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000626d0(int param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
    FUN_000625f0();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
