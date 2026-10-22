/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 252F6B68FAC278C48B30599FFC6E0E3904ABA780B304D307F561F89CADD6F390
 * Entry: 0x00255ea0, Ghidra index: 8430, label: FUN_00255ea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00255ea0(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 != param_2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    *(int **)(param_1 + 0x14) = param_2;
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))(param_2);
    }
  }
  return 0;
}
