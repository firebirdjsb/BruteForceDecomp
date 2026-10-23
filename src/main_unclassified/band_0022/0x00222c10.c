/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 208845866611D446003D4BA075D134F272BD53BF470CCB2B6649D16B559842EE
 * Entry: 0x00222c10, Ghidra index: 7591, label: FUN_00222c10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00222c10(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  int local_10;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x228);
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x1b0);
  fVar4 = (float)*(int *)(iVar3 + 4);
  local_10 = *(int *)(iVar3 + 0x10);
  fVar2 = fVar4;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) == 0) {
      if ((*(int *)(iVar1 + 0x10) == 0) ||
         (iVar3 = *(int *)(*(int *)(iVar1 + 0x10) + 0xb0), *(int *)(*(int *)(iVar3 + 0xc) + 4) != 3)
         ) goto LAB_00222c9e;
    }
    else {
      iVar3 = *(int *)(*(int *)(iVar1 + 8) + 0x1d4);
    }
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1f8) == 6)) {
      local_10 = local_10 / 2;
      fVar2 = fVar4 + 15.0;
      if (*(float *)(param_1 + 0x10) <= fVar4 + 15.0) {
        fVar2 = *(float *)(param_1 + 0x10);
      }
    }
  }
LAB_00222c9e:
  *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) - (float)local_10;
  fVar4 = *(float *)(param_1 + 0xc);
  if (*(float *)(param_1 + 0xc) <= fVar2) {
    fVar4 = fVar2;
  }
  if (*(float *)(param_1 + 0x10) <= fVar4) {
    fVar4 = *(float *)(param_1 + 0x10);
  }
  *(float *)(param_1 + 0xc) = fVar4;
  return;
}
