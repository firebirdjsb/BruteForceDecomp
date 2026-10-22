/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7709E978F7B10FA2E6F798E088C1069EC03F15081B23B405EA7B20331A94C00C
 * Entry: 0x00063af0, Ghidra index: 1081, label: FUN_00063af0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00063af0(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = param_3;
  iVar4 = param_1;
  FUN_00061910(&param_1,param_3 + 8,*(undefined4 *)(param_1 + 8),param_3,param_3);
  iVar2 = *(int *)(iVar4 + 8);
  for (iVar5 = iVar2 + -8; iVar5 != iVar2; iVar5 = iVar5 + 8) {
    FUN_00062150();
    iVar3 = param_3;
  }
  piVar1 = (int *)(iVar4 + 8);
  *piVar1 = *piVar1 + -8;
  *param_2 = iVar3;
  return;
}
