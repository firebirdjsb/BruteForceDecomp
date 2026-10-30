/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6A26E6FD59D72C56B955C640AB9B200CFE319F5FFC0E0D9CDD146275C503F261
 * Entry: 0x000a78d0, Ghidra index: 1991, label: FUN_000a78d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000a78d0(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0x19) == '\0') {
    FUN_000a78d0(*(undefined4 *)(param_1 + 8));
    piVar1 = *(int **)(param_1 + 0x10);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    piVar1 = *(int **)(param_1 + 0x14);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    piVar1 = *(int **)(param_1 + 0x14);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    piVar1 = *(int **)(param_1 + 0x10);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
