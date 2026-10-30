/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 91CF2C0C291F445F86DE73E1EE82254978F7C55D7264105ADC3BBE222A5B8ABC
 * Entry: 0x00222ac0, Ghidra index: 7589, label: FUN_00222ac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00222ac0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x228);
  if (param_2 == 1) {
    iVar1 = *(int *)(iVar2 + 0xc);
  }
  else {
    if (param_2 != 2) goto LAB_00222aed;
    iVar1 = *(int *)(iVar2 + 8);
  }
  *(float *)(param_1 + 0x10) = (float)iVar1;
LAB_00222aed:
  fVar3 = *(float *)(param_1 + 0xc);
  if (*(float *)(param_1 + 0xc) <= (float)*(int *)(iVar2 + 4)) {
    fVar3 = (float)*(int *)(iVar2 + 4);
  }
  if (*(float *)(param_1 + 0x10) <= fVar3) {
    fVar3 = *(float *)(param_1 + 0x10);
  }
  *(float *)(param_1 + 0xc) = fVar3;
  return;
}
