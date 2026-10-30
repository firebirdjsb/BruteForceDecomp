/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B66EE9CE46F5621B2494593CFDBD459386AC1F50167A45232AA6E7A28F97F774
 * Entry: 0x002ad450, Ghidra index: 9685, label: FUN_002ad450
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002ad450(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0x1d) == '\0') {
    FUN_002ad450(*(undefined4 *)(param_1 + 8));
    piVar1 = *(int **)(param_1 + 0x18);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
