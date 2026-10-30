/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 444C10328B940C673D0E12314D5A8B9D029375679F181703471F356D9BAE261E
 * Entry: 0x002a0000, Ghidra index: 9503, label: FUN_002a0000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a0000(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0x15) == '\0') {
    FUN_002a0000(*(undefined4 *)(param_1 + 8));
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
