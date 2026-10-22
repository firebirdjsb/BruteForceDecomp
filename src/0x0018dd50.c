/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CBD02976D9E4C8A797CC1797096B1222A46EFC496B46F8045CDB15267A7752E1
 * Entry: 0x0018dd50, Ghidra index: 5288, label: FUN_0018dd50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0018dd50(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  if (*(int *)(param_2 + 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(param_2 + 0x28));
  }
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(param_2);
}
