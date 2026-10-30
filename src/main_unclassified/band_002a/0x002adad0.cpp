/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 248677F74B79FEF92BD95E5FC31F4F888307B1B085C7A9CEDB7EE9BE04D078AC
 * Entry: 0x002adad0, Ghidra index: 9695, label: FUN_002adad0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002adad0(int *param_1,int *param_2)

{
  int *piVar1;
  int *unaff_EDI;
  
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *param_1 = 0;
    }
    piVar1 = (int *)*unaff_EDI;
    *param_1 = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    param_1[1] = unaff_EDI[1];
    param_1[2] = unaff_EDI[2];
    param_1[3] = unaff_EDI[3];
  }
  return;
}
