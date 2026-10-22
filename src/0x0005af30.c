/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F0DC9F65AA55F87BA44840BD182CFC1F16084877A1154AF9CF08747F588688A3
 * Entry: 0x0005af30, Ghidra index: 914, label: FUN_0005af30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005af30(int param_1,float param_2,float param_3,int *param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  int in_EAX;
  int iVar8;
  int iVar9;
  int *unaff_EBX;
  float fVar10;
  undefined1 in_XMM0 [16];
  undefined1 auVar11 [16];
  
  piVar7 = param_4;
  *param_4 = 0;
  *(undefined1 *)(param_4 + 1) = 0;
  param_4 = (int *)-param_3;
  if (in_EAX != 0) {
    do {
      if ((*(int *)(param_1 + in_EAX + 8) != 1) || (*(char *)(in_EAX + 0x50) == '\0')) break;
      piVar1 = *(int **)(param_1 + in_EAX + 4);
      iVar8 = 0;
      if (piVar1 != (int *)0x0) {
        iVar8 = *piVar1;
      }
      iVar8 = *(int *)(iVar8 + 0xc);
      fVar2 = *(float *)(iVar8 + 0x1c) - *(float *)(in_EAX + 0x1c);
      fVar3 = *(float *)(iVar8 + 0x18) - *(float *)(in_EAX + 0x18);
      fVar4 = *(float *)(iVar8 + 0x14) - *(float *)(in_EAX + 0x14);
      auVar11._4_12_ = in_XMM0._4_12_;
      auVar11._0_4_ = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      param_4 = (int *)(auVar11._0_4_ + (float)param_4);
      in_XMM0 = auVar11;
      if ((param_2 < (float)param_4) &&
         (iVar9 = (**(code **)(*unaff_EBX + 0x40))(),
         fVar10 = *(float *)(iVar9 + 0x2c) - *(float *)(iVar8 + 0x1c),
         fVar5 = *(float *)(iVar9 + 0x28) - *(float *)(iVar8 + 0x18),
         fVar6 = *(float *)(iVar9 + 0x24) - *(float *)(iVar8 + 0x14),
         9.0 < fVar6 * fVar6 + fVar5 * fVar5 + fVar10 * fVar10)) {
        *piVar7 = iVar8;
        if (auVar11._0_4_ <= 1.1920929e-07) {
          piVar7[4] = 0;
          piVar7[3] = 0;
          piVar7[2] = 0;
        }
        else {
          auVar11 = rsqrtss(in_XMM0,fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
          fVar10 = auVar11._0_4_;
          piVar7[4] = (int)(fVar2 * fVar10);
          piVar7[3] = (int)(fVar3 * fVar10);
          piVar7[2] = (int)(fVar10 * fVar4);
        }
        break;
      }
      in_EAX = iVar8;
    } while (iVar8 != 0);
    if (((*piVar7 == 0) && (in_EAX != 0)) && (*(int *)(param_1 + 8 + in_EAX) != 1)) {
      *(undefined1 *)(piVar7 + 1) = 1;
    }
  }
  return;
}
