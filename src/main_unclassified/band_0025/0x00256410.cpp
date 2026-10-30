/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A41190BB6EF5C65AD708865C91FEE340EDB52BEA7F02429EDC660F1C4B138663
 * Entry: 0x00256410, Ghidra index: 8439, label: FUN_00256410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_00256410(undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    piVar1 = (int *)param_4[-1];
    param_4 = param_4 + -1;
    param_3 = param_3 + -1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *param_4 = 0;
    }
    piVar1 = (int *)*param_3;
    *param_4 = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
