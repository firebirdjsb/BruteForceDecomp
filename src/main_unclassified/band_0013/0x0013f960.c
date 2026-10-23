/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E63385FEE30F7FFABAF561239CD1602BC13CAD2BDECB8C6A12C7FF9228529205
 * Entry: 0x0013f960, Ghidra index: 4064, label: FUN_0013f960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined2 FUN_0013f960(float param_1,int param_2)

{
  undefined2 uVar1;
  int *in_ECX;
  
  if ((char)in_ECX[7] == '\0') {
    param_1 = (float)in_ECX[1] - param_1;
    in_ECX[1] = (int)param_1;
    if (param_1 < 0.0 != (param_1 == 0.0)) {
      *(undefined1 *)(in_ECX + 7) = 1;
      if (*(int **)(param_2 + 0x48) != (int *)0x0) {
        (**(code **)(**(int **)(param_2 + 0x48) + 4))(param_2);
      }
      uVar1 = (**(code **)(*in_ECX + 8))(param_2);
      return uVar1;
    }
  }
  else {
    param_1 = (float)in_ECX[2] - param_1;
    in_ECX[2] = (int)param_1;
    if (param_1 < 0.0 != (param_1 == 0.0)) {
      (**(code **)(*in_ECX + 0xc))(param_2);
      if (*(int **)(param_2 + 0x48) != (int *)0x0) {
        (**(code **)(**(int **)(param_2 + 0x48) + 8))(param_2);
      }
      return 1;
    }
  }
  return 0;
}
