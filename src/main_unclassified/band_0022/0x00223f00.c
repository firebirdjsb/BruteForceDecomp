/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B7823C192AC1F8078AF10D9E878D195DB38D9ED02A1D9C78CC17CFE3114CEDA0
 * Entry: 0x00223f00, Ghidra index: 7608, label: FUN_00223f00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00223f00(int param_1,float *param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  float *pfVar6;
  bool bVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *unaff_ESI;
  
  pfVar6 = param_2;
  piVar2 = *(int **)(param_1 + 4);
  cVar1 = *(char *)(piVar2[1] + 0x15);
  bVar7 = true;
  param_2 = (float *)CONCAT31(param_2._1_3_,1);
  piVar4 = piVar2;
  piVar5 = (int *)piVar2[1];
  while (cVar1 == '\0') {
    param_2._1_3_ = (uint3)((uint)param_2 >> 8);
    if ((float)piVar5[3] <= *pfVar6) {
      piVar9 = (int *)piVar5[2];
      param_2 = (float *)((uint)param_2._1_3_ << 8);
    }
    else {
      piVar9 = (int *)*piVar5;
      param_2 = (float *)CONCAT31(param_2._1_3_,1);
    }
    bVar7 = (float)piVar5[3] > *pfVar6;
    piVar4 = piVar5;
    piVar5 = piVar9;
    cVar1 = *(char *)((int)piVar9 + 0x15);
  }
  if (bVar7) {
    if (piVar4 == (int *)*piVar2) {
      puVar8 = (undefined4 *)FUN_00129c60(&param_2,1,pfVar6);
      uVar3 = *puVar8;
      *(undefined1 *)(unaff_ESI + 1) = 1;
      *unaff_ESI = uVar3;
      return;
    }
    FUN_0012a720();
  }
  if (*pfVar6 <= (float)piVar4[3]) {
    *(undefined1 *)(unaff_ESI + 1) = 0;
    *unaff_ESI = piVar4;
    return;
  }
  puVar8 = (undefined4 *)FUN_00129c60(&param_2,param_2,pfVar6);
  uVar3 = *puVar8;
  *(undefined1 *)(unaff_ESI + 1) = 1;
  *unaff_ESI = uVar3;
  return;
}
