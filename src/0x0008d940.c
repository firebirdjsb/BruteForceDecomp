/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CDD72DE6641F92ABA43F8F591490FF9A8E73527B05553230F4D1E0F1FA31C82E
 * Entry: 0x0008d940, Ghidra index: 1716, label: FUN_0008d940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_0008d940(undefined4 param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  float *unaff_EBX;
  uint uVar7;
  
  iVar3 = (int)param_2;
  piVar6 = (int *)((int)param_2 + 4);
  param_2 = 1e+06;
  if (*piVar6 != 0) {
    if (*piVar6 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = **(int **)(iVar3 + 8);
    }
    piVar6 = *(int **)(iVar4 + 4);
    if (piVar6 != (int *)0x0) {
      iVar4 = 0;
      uVar7 = 1;
      do {
        if ((*(byte *)(piVar6 + 0x1c) & 1) == 0) {
          iVar5 = (**(code **)(*piVar6 + 0x40))();
          fVar1 = *(float *)(iVar5 + 0x2c) - unaff_EBX[2];
          fVar2 = *(float *)(iVar5 + 0x24) - *unaff_EBX;
          fVar1 = fVar2 * fVar2 + fVar1 * fVar1;
          if (fVar1 < param_2) {
            param_2 = fVar1;
          }
        }
        if (*(uint *)(iVar3 + 4) <= uVar7) break;
        iVar4 = iVar4 + 4;
        if (uVar7 < *(uint *)(iVar3 + 4)) {
          iVar5 = *(int *)(iVar4 + *(int *)(iVar3 + 8));
        }
        else {
          iVar5 = 0;
        }
        piVar6 = *(int **)(iVar5 + 4);
        uVar7 = uVar7 + 1;
      } while (piVar6 != (int *)0x0);
    }
  }
  return (float10)param_2;
}
