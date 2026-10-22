/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 61D89E1A4C1AC4578347C8E52673094D4BA971BCF9D78A312CD2F1622A93ACBE
 * Entry: 0x00216050, Ghidra index: 7457, label: FUN_00216050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00216050(float *param_1,float *param_2,float param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *in_ECX;
  float *in_EDX;
  float *unaff_ESI;
  float *unaff_EDI;
  float fVar7;
  undefined1 in_XMM0 [16];
  undefined1 auVar8 [16];
  
  fVar3 = *unaff_ESI - *in_ECX;
  fVar4 = unaff_ESI[1] - in_ECX[1];
  fVar5 = unaff_ESI[2] - in_ECX[2];
  auVar8 = rsqrtss(in_XMM0,fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5);
  fVar7 = auVar8._0_4_;
  fVar3 = fVar7 * fVar3;
  fVar4 = fVar7 * fVar4;
  fVar7 = fVar7 * fVar5;
  fVar5 = param_3 * param_3;
  fVar6 = (*in_EDX - *in_ECX) * (*in_EDX - *in_ECX) +
          (in_EDX[1] - in_ECX[1]) * (in_EDX[1] - in_ECX[1]) +
          (in_EDX[2] - in_ECX[2]) * (in_EDX[2] - in_ECX[2]);
  if (fVar6 <= fVar5) {
    fVar1 = in_ECX[2];
    fVar2 = in_ECX[1];
    *unaff_EDI = *in_ECX;
    unaff_EDI[1] = fVar2;
    unaff_EDI[2] = fVar1;
  }
  else {
    *unaff_EDI = *in_EDX - fVar3 * param_3;
    unaff_EDI[1] = in_EDX[1] - fVar4 * param_3;
    unaff_EDI[2] = in_EDX[2] - fVar7 * param_3;
  }
  if ((*in_EDX - *unaff_ESI) * (*in_EDX - *unaff_ESI) +
      (in_EDX[1] - unaff_ESI[1]) * (in_EDX[1] - unaff_ESI[1]) +
      (in_EDX[2] - unaff_ESI[2]) * (in_EDX[2] - unaff_ESI[2]) <= fVar5) {
    fVar3 = unaff_ESI[1];
    fVar4 = unaff_ESI[2];
    *param_4 = *unaff_ESI;
    param_4[1] = fVar3;
    param_4[2] = fVar4;
  }
  else {
    *param_4 = fVar3 * param_3 + *in_EDX;
    param_4[1] = fVar4 * param_3 + in_EDX[1];
    param_4[2] = fVar7 * param_3 + in_EDX[2];
    if (fVar5 < fVar6) {
      fVar5 = fVar4 * *param_2 - fVar3 * param_2[1];
      fVar3 = fVar3 * param_2[2] - fVar7 * *param_2;
      fVar4 = fVar7 * param_2[1] - fVar4 * param_2[2];
      auVar8 = rsqrtss(auVar8,fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5);
      fVar7 = auVar8._0_4_;
      fVar4 = fVar7 * fVar4;
      fVar3 = fVar7 * fVar3;
      fVar7 = fVar7 * fVar5;
      if (param_3 < fVar4 * (*param_1 - *in_EDX) +
                    fVar3 * (param_1[1] - in_EDX[1]) + fVar7 * (param_1[2] - in_EDX[2])) {
        auVar8 = rsqrtss(auVar8,fVar4 * fVar4 + fVar3 * fVar3 + fVar7 * fVar7);
        param_3 = auVar8._0_4_ * param_3;
        *param_5 = fVar4 * param_3 + *in_EDX;
        param_5[1] = param_3 * fVar3 + in_EDX[1];
        param_5[2] = param_3 * fVar7 + in_EDX[2];
        return;
      }
    }
  }
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  *param_5 = *param_1;
  param_5[1] = fVar3;
  param_5[2] = fVar4;
  return;
}
