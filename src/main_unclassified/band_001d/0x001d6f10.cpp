/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 700DE0DB53BD89C5812105320152055F9A2ABBF3D01512386B7DBA257BAFA851
 * Entry: 0x001d6f10, Ghidra index: 6384, label: FUN_001d6f10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001d6f10(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    *in_EAX = *param_1;
    piVar1 = (int *)in_EAX[1];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      in_EAX[1] = 0;
    }
    piVar1 = (int *)param_1[1];
    in_EAX[1] = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    FUN_001d4410();
    in_EAX = in_EAX + 6;
  }
  return in_EAX;
}
