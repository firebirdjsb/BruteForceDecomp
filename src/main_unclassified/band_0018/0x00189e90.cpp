/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A9BCDCBC198F164835CB2F45E45FAF75E747BD5C23D7E1FF4C37B9D7B30C595B
 * Entry: 0x00189e90, Ghidra index: 5263, label: FUN_00189e90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00189e90(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  if (*(int *)(param_2 + 0x30) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(param_2 + 0x30));
  }
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(param_2);
}
