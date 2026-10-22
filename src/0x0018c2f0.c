/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9E8FCEB02C094EEBEFDAC3191801C890797D0208540A54C37415DBC0B4230569
 * Entry: 0x0018c2f0, Ghidra index: 5275, label: FUN_0018c2f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0018c2f0(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  if (*(int *)(param_2 + 4) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(param_2 + 4));
  }
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(param_2);
}
