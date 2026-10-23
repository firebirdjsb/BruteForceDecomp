/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F55CCC69C691B97CFFBEE898FDAB533FCA8F7DA5E11234F3628BA18E4804D4C1
 * Entry: 0x0022e5b0, Ghidra index: 7723, label: FUN_0022e5b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0022e5b0(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float in_XMM1_Da;
  float fVar7;
  float fVar10;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float local_20;
  float local_10;
  float local_c;
  
  if (((*(byte *)(param_1 + 0x224) & 1) != 0) &&
     (*(char *)(*(int *)(param_1 + 0x228) + 0x170) == '\0')) {
    fVar1 = *(float *)(*(int *)(param_1 + 0x228) + 0x38);
    fVar5 = *(float *)(param_1 + 500);
    fVar6 = param_2[2];
    fVar7 = *(float *)(param_1 + 0x1f0);
    fVar10 = param_2[1];
    *param_3 = *(float *)(param_1 + 0x1ec) - *param_2;
    param_3[1] = fVar7 - fVar10;
    param_3[2] = fVar5 - fVar6;
    piVar2 = *(int **)(param_1 + 0x360);
    if ((piVar2 != (int *)0x0) &&
       ((iVar3 = *(int *)(*(int *)(param_1 + 0x228) + 0x40), iVar3 != 1 && (iVar3 != 4)))) {
      pfVar4 = (float *)(**(code **)(*piVar2 + 0x54))();
      local_c = pfVar4[2];
      local_10 = pfVar4[1];
      local_20 = *pfVar4;
      if (*(int *)(piVar2[3] + 4) == 3) {
        local_c = (float)piVar2[0x1c6];
        local_10 = (float)piVar2[0x1c5];
        local_20 = (float)piVar2[0x1c4];
      }
      if (0.0001 < local_20 * local_20 + local_10 * local_10 + local_c * local_c) {
        in_XMM1_Da = SQRT(param_3[2] * param_3[2] + param_3[1] * param_3[1] + *param_3 * *param_3) *
                     (1.0 / fVar1);
        *param_3 = local_20 * in_XMM1_Da + *param_3;
        param_3[1] = local_10 * in_XMM1_Da + param_3[1];
        param_3[2] = local_c * in_XMM1_Da + param_3[2];
      }
    }
    fVar1 = *param_3;
    fVar5 = (float)*(undefined8 *)(param_3 + 1);
    fVar6 = (float)((ulonglong)*(undefined8 *)(param_3 + 1) >> 0x20);
    fVar7 = in_XMM1_Da + fVar1 * fVar1;
    fVar10 = fVar5 * fVar5 + fVar6 * fVar6;
    auVar9._4_4_ = fVar7;
    auVar9._0_4_ = fVar10;
    auVar9._8_4_ = fVar7;
    auVar9._12_4_ = fVar7;
    auVar8._4_12_ = auVar9._4_12_;
    auVar8._0_4_ = fVar10 + fVar1 * fVar1;
    if (2e-05 <= auVar8._0_4_) {
      auVar9 = rsqrtss(auVar8,auVar8);
      fVar7 = auVar9._0_4_;
      *param_3 = fVar1 * fVar7;
      *(ulonglong *)(param_3 + 1) = CONCAT44(fVar6 * fVar7,fVar5 * fVar7);
    }
  }
  return;
}
