/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F1596C04ED65C9A3C1D04FFF426188FFEC6E5FBE2083DA374260264589CF27E9
 * Entry: 0x00243040, Ghidra index: 8045, label: FUN_00243040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00243040(int param_1)

{
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_0024a7f0(param_1 + 0x30,param_1);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 0x34));
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (0xf < *(uint *)(param_1 + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}
