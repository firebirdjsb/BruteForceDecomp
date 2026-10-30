/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA697307731817F2B16BAFCC8F2F9A4E2A4BB428B99EA516A4D33357C15DA0C0
 * Entry: 0x0023e7c0, Ghidra index: 7980, label: FUN_0023e7c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0023e7c0(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  if (*(int *)(param_2 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(param_2 + 8));
  }
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(param_2);
}
