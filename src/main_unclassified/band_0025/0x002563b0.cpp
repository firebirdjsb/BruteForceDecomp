/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 50652D4EA7D683FAC73C25719F5242F70EE7489353734264AA5766B118D408ED
 * Entry: 0x002563b0, Ghidra index: 8438, label: FUN_002563b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_002563b0(undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    piVar1 = (int *)*param_4;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *param_4 = 0;
    }
    piVar1 = (int *)*param_2;
    *param_4 = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    param_2 = param_2 + 1;
    param_4 = param_4 + 1;
  } while (param_2 != param_3);
  *param_1 = param_4;
  return param_1;
}
