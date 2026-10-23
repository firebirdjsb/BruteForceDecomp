/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C9861C4F220355DFEB6820E4A8590990CD1BA38925185D120106946579FCC02F
 * Entry: 0x00255cc0, Ghidra index: 8428, label: FUN_00255cc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00255cc0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00256480(param_1 + 0x18);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 0x1c));
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return 0;
}
