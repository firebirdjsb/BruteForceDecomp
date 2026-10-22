/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8815A5CB754FAC1D47218F0CBAE083D148B7D101D8319C76E0613DFD84F15B5F
 * Entry: 0x00263940, Ghidra index: 8686, label: FUN_00263940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00263940(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int unaff_EDI;
  
  piVar1 = (int *)(unaff_EDI + 4);
  piVar2 = piVar1;
  if (0xf < *(uint *)(unaff_EDI + 0x18)) {
    piVar2 = (int *)*piVar1;
  }
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_2 - (int)piVar2;
  }
  if (param_3 != 0) {
    param_3 = param_3 - param_2;
  }
  FUN_0001f5a0(iVar3,param_3);
  if (*(uint *)(unaff_EDI + 0x18) < 0x10) {
    *param_1 = (int)piVar1 + iVar3;
    return;
  }
  *param_1 = *piVar1 + iVar3;
  return;
}
