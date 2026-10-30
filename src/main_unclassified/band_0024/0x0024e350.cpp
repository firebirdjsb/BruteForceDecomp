/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 375415253E5C7739349603B67705C73345C4C922DEFD2A4AC944E6C4649B4A6E
 * Entry: 0x0024e350, Ghidra index: 8302, label: FUN_0024e350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0024e350(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = *(int **)(param_1 + 0xc);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != param_2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    *(int **)(param_1 + 0xc) = param_2;
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))(param_2);
    }
  }
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
    return 0;
  }
  return 0x80004005;
}
