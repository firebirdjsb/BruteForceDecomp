/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 606145F75986AE945C50E84FB6C10CACFD68B4A1D020F2F79AF5694C3985AEED
 * Entry: 0x00157e10, Ghidra index: 4491, label: FUN_00157e10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00157e10(int *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float local_8;
  
  fVar1 = 0.0;
  iVar2 = *param_1;
  uVar4 = param_1[0x1c];
  if ((((iVar2 != 0) && (iVar5 = *(int *)(iVar2 + 0x18), iVar5 != 0)) && (*(int *)(iVar5 + 4) != 0))
     && (uVar4 < (uint)((*(int *)(iVar5 + 8) - *(int *)(iVar5 + 4)) / 0xc))) {
    fVar1 = *(float *)(*(int *)(iVar5 + 4) + 8 + uVar4 * 0xc);
  }
  if ((uVar4 != 0) || (fVar1 != 0.0)) {
    uVar4 = 0;
    if ((iVar2 != 0) && ((iVar5 = *(int *)(iVar2 + 0x18), iVar5 != 0 && (*(int *)(iVar5 + 4) != 0)))
       ) {
      uVar4 = (*(int *)(iVar5 + 8) - *(int *)(iVar5 + 4)) / 0xc;
    }
    uVar6 = 0;
    if (0 < (int)uVar4) {
      iVar5 = 0;
      do {
        local_8 = 0.0;
        if ((((iVar2 != 0) && (iVar3 = *(int *)(iVar2 + 0x18), iVar3 != 0)) &&
            (*(int *)(iVar3 + 4) != 0)) &&
           (uVar6 < (uint)((*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0xc))) {
          local_8 = *(float *)(*(int *)(iVar3 + 4) + 8 + iVar5);
        }
        if (local_8 <= param_2) {
          if (uVar6 != 0xffffffff) goto LAB_00157f1c;
          break;
        }
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 0xc;
      } while ((int)uVar6 < (int)uVar4);
    }
    local_8 = 0.0;
    uVar6 = uVar4;
LAB_00157f1c:
    if (param_1[0x1c] < (int)uVar6) {
      if (param_2 + 0.05 < fVar1) {
        param_1[0x1c] = uVar6;
        return;
      }
    }
    else if (((int)uVar6 < param_1[0x1c]) && ((local_8 < param_2 - 0.05 || (param_2 == 1.0)))) {
      param_1[0x1c] = uVar6;
      return;
    }
  }
  return;
}
