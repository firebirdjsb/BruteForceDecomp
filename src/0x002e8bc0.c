/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AA2D009BC999A9942507DE60EF11EF6CE7ADC91475D01AE69269EC80100EA894
 * Entry: 0x002e8bc0, Ghidra index: 10541, label: FUN_002e8bc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002e8bc0(int *param_1)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = param_1;
  if (param_1[1] == 0) {
    param_1 = (int *)(**(code **)(*in_ECX + 0x14))();
    (**(code **)(*piVar1 + 0x18))(&param_1);
  }
  if ((char)in_ECX[5] != '\0') {
    (**(code **)(*piVar1 + 0x20))(in_ECX + 3);
    (**(code **)(*piVar1 + 0x20))(in_ECX + 4);
  }
  return piVar1[3];
}
