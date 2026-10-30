/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 197CB24E1E296E0F27B4B4BB486112983CAB9DD7CD442EB4A74EB90D776DCF3E
 * Entry: 0x002adb50, Ghidra index: 9697, label: FUN_002adb50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_002adb50(undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    piVar1 = (int *)param_4[-4];
    piVar2 = param_4 + -4;
    piVar3 = param_3 + -4;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *piVar2 = 0;
    }
    piVar1 = (int *)*piVar3;
    *piVar2 = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    param_4[-3] = param_3[-3];
    param_4[-2] = param_3[-2];
    param_4[-1] = param_3[-1];
    param_4 = piVar2;
    param_3 = piVar3;
  } while (piVar3 != param_2);
  *param_1 = piVar2;
  return param_1;
}
