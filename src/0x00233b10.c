/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4911F4E987F45DF85A910E477357C52F90778B138EED1EC08B40AB9D5839C479
 * Entry: 0x00233b10, Ghidra index: 7789, label: FUN_00233b10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float * FUN_00233b10(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar6;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar3 = *param_2;
  fVar6 = param_2[1];
  fVar1 = param_2[2];
  fVar2 = param_2[3];
  fVar7 = *param_3 * param_4;
  fVar8 = param_3[1] * param_4;
  fVar9 = param_3[2] * param_4;
  fVar10 = param_3[3] * param_4;
  if (fVar3 * *param_3 + fVar1 * param_3[2] + fVar6 * param_3[1] + fVar2 * param_3[3] < 0.0) {
    fVar7 = -fVar7;
    fVar8 = -fVar8;
    fVar9 = -fVar9;
    fVar10 = -fVar10;
  }
  fVar7 = (fVar3 - fVar3 * param_4) + fVar7;
  fVar8 = (fVar6 - fVar6 * param_4) + fVar8;
  fVar9 = (fVar1 - fVar1 * param_4) + fVar9;
  fVar10 = (fVar2 - fVar2 * param_4) + fVar10;
  fVar3 = fVar7 * fVar7 + fVar9 * fVar9;
  fVar6 = fVar8 * fVar8 + fVar10 * fVar10;
  auVar5._4_4_ = fVar3;
  auVar5._0_4_ = fVar6;
  auVar5._8_4_ = fVar3;
  auVar5._12_4_ = fVar3;
  auVar4._4_12_ = auVar5._4_12_;
  auVar4._0_4_ = fVar6 + fVar3;
  auVar5 = rsqrtss(auVar4,auVar4);
  fVar3 = auVar5._0_4_;
  *param_1 = fVar7 * fVar3;
  param_1[1] = fVar8 * fVar3;
  param_1[2] = fVar9 * fVar3;
  param_1[3] = fVar10 * fVar3;
  return param_1;
}
