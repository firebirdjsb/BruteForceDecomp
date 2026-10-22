/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41428479ED5D0CBB5891956C62DD13E53908A2AAA703B0361ADF05883533BB6F
 * Entry: 0x002557e0, Ghidra index: 8422, label: FUN_002557e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002557e0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))(piVar1);
  }
  (**(code **)(**(int **)(param_1 + 0x10) + 0x2c))(*(int **)(param_1 + 0x10));
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return 0;
}
