/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B89064C4183BCCB5F728B8F9F3C4461DF183C632FE70E9285B9FC78BD46C8951
 * Entry: 0x00061d60, Ghidra index: 1039, label: FUN_00061d60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00061d60(int param_1)

{
  undefined4 uVar1;
  
  (**(code **)(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8));
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(param_1 + 0x1c));
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar1 = FUN_00238430();
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return 0;
}
