/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EC384E009223D347E76FC20A7D1D4A8F5313134550C00308BA75A18C92C35194
 * Entry: 0x00077c30, Ghidra index: 1408, label: FUN_00077c30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00077c30(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != param_2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(int **)(param_1 + 0x10) = param_2;
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 4))(param_2);
    }
  }
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_2);
    return uVar2;
  }
  return 0;
}
