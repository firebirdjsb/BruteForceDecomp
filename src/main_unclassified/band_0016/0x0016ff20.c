/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2B04DAE3D54B4BD694C09AA94D74417C55DCEA35BE32087B0307FF7509DC510D
 * Entry: 0x0016ff20, Ghidra index: 4837, label: FUN_0016ff20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0016ff20(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float10 fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  char cVar22;
  float10 fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  cVar22 = FUN_0016fa00(param_1);
  if (cVar22 == '\0') {
    fVar7 = param_3[3];
    fVar8 = param_4[3];
    fVar9 = param_3[2];
    fVar10 = param_4[2];
    fVar11 = *param_3;
    fVar12 = *param_4;
    fVar1 = param_3[1];
    fVar13 = param_4[1];
    fVar2 = param_2[3];
    fVar3 = param_4[3];
    fVar4 = param_2[2];
    fVar25 = param_4[2];
    fVar5 = param_2[1];
    fVar26 = param_4[1];
    fVar6 = *param_2;
    fVar24 = *param_4;
    if (ABS((*param_2 * *param_3 +
            param_3[1] * param_2[1] + param_2[2] * param_3[2] + param_2[3] * param_3[3]) - 1.0) <
        1e-05) {
      *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) | 1;
    }
    if (ABS((fVar1 * fVar13 + fVar11 * fVar12 + fVar9 * fVar10 + fVar7 * fVar8) - 1.0) < 1e-05) {
      *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) | 2;
    }
    if (ABS((fVar6 * fVar24 + fVar5 * fVar26 + fVar4 * fVar25 + fVar2 * fVar3) - 1.0) < 1e-05) {
      *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) | 4;
    }
    if ((*(byte *)(param_1 + 0x15) & 7) == 0) {
      *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) | 8;
    }
  }
  else {
    FUN_0016fa00(param_1);
    FUN_0016fa00(param_1);
  }
  if (((uint)param_1[0x15] & 0xf) == 0) {
    fVar7 = param_2[1] * param_3[1] +
            *param_2 * *param_3 + param_3[3] * param_2[3] + param_2[2] * param_3[2];
    fVar8 = param_3[2] * 0.0 + param_3[1] * 0.0 + param_3[3] * 0.0 + *param_3 * 0.0;
    fVar9 = param_3[2] * 0.0 + param_3[1] * 0.0 + param_3[3] * 0.0 + *param_3 * 0.0;
    fVar10 = *param_2 * *param_4 +
             param_2[2] * param_4[2] + param_4[3] * param_2[3] + param_4[1] * param_2[1];
    fVar11 = param_4[1] * 0.0 + param_4[2] * 0.0 + param_4[3] * 0.0 + *param_4 * 0.0;
    fVar12 = param_4[1] * 0.0 + param_4[2] * 0.0 + param_4[3] * 0.0 + *param_4 * 0.0;
    fVar1 = fVar7 - 1.0;
    fVar2 = fVar10 - 1.0;
    fVar13 = fVar11 * fVar1 - fVar8 * fVar2;
    fVar1 = fVar9 * fVar2 - fVar12 * fVar1;
    fVar2 = fVar12 * fVar8 - fVar9 * fVar11;
    FUN_0001fd40();
    fVar3 = fVar2 * fVar2;
    fVar4 = fVar1 * fVar2;
    fVar5 = fVar13 * fVar2;
    fVar24 = 1.0 - fVar3;
    fVar25 = -fVar4;
    fVar26 = -fVar5;
    fVar6 = SQRT(fVar24 * fVar24 + fVar25 * fVar25 + fVar26 * fVar26);
    fVar15 = 1.0 / fVar6;
    fVar24 = fVar24 * fVar15;
    fVar25 = fVar25 * fVar15;
    fVar26 = fVar26 * fVar15;
    fVar16 = fVar25 * fVar2 - fVar24 * fVar1;
    fVar2 = fVar24 * fVar13 - fVar26 * fVar2;
    fVar1 = fVar26 * fVar1 - fVar25 * fVar13;
    fVar13 = fVar1 * fVar15;
    fVar17 = fVar2 * fVar15;
    fVar18 = fVar16 * fVar15;
    fVar19 = fVar6 * fVar24;
    fVar1 = fVar1 * fVar6;
    fVar20 = fVar6 * fVar25;
    fVar2 = fVar2 * fVar6;
    fVar21 = fVar6 * fVar26;
    fVar16 = fVar16 * fVar6;
    fVar23 = (float10)fVar7 - (float10)fVar3;
    fVar10 = fVar10 - fVar3;
    fVar23 = (float10)fpatan((float10)(float)(fVar23 * (float10)fVar13 +
                                             (float10)(fVar8 - fVar4) * (float10)fVar17 +
                                             (float10)(fVar9 - fVar5) * (float10)fVar18),
                             (float10)(float)(fVar23 * (float10)fVar15 * (float10)fVar24 +
                                             (float10)(fVar8 - fVar4) *
                                             (float10)fVar15 * (float10)fVar25 +
                                             (float10)(fVar9 - fVar5) *
                                             (float10)fVar15 * (float10)fVar26));
    param_1[0xe] = (float)fVar23;
    fVar23 = (float10)fpatan((float10)fVar10 * (float10)fVar13 +
                             (float10)(fVar11 - fVar4) * (float10)fVar17 +
                             (float10)(fVar12 - fVar5) * (float10)fVar18,
                             (float10)fVar10 * (float10)fVar15 * (float10)fVar24 +
                             (float10)(fVar11 - fVar4) * (float10)fVar15 * (float10)fVar25 +
                             (float10)(fVar12 - fVar5) * (float10)fVar15 * (float10)fVar26);
    param_1[0xf] = (float)fVar23;
    if (param_1[0xe] < 0.0) {
      param_1[0xe] = param_1[0xe] + 6.2831855;
    }
    if (param_1[0xf] < 0.0) {
      param_1[0xf] = param_1[0xf] + 6.2831855;
    }
    if (param_1[0xe] < 1e-05) {
      *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) | 1;
    }
    if (param_1[0xf] - param_1[0xe] < 1e-05) {
      *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) | 2;
    }
    param_1[0x13] = (1.0 / param_1[0xf]) * param_1[0xe];
    param_1[0x10] =
         (param_1[0x13] - param_1[0x12]) / (param_1[0x12] * param_1[0x12] - param_1[0x12]);
    param_1[0x11] = 1.0 - param_1[0x10];
    fVar7 = param_1[0x12] * param_1[0x12];
    if ((fVar7 < param_1[0x13] == (fVar7 == param_1[0x13])) ||
       ((param_1[0x12] + param_1[0x12]) - fVar7 < param_1[0x13])) {
      if ((fVar7 * param_1[0x12] < param_1[0x13] == (fVar7 * param_1[0x12] == param_1[0x13])) ||
         (param_1[0x13] < fVar7 == (param_1[0x13] == fVar7))) {
        param_1[0x17] = 2.8026e-45;
        fVar23 = (float10)log2((float10)param_1[0x13]);
        fVar14 = (float10)log2((float10)param_1[0x12]);
        param_1[0x14] =
             (float)(((float10)0.6931471805599453 * fVar23) / ((float10)0.6931471805599453 * fVar14)
                    );
      }
      else {
        param_1[0x17] = 1.4013e-45;
      }
    }
    else {
      param_1[0x17] = 0.0;
    }
    fVar7 = param_2[1];
    fVar8 = param_2[1];
    fVar9 = param_2[2];
    fVar10 = param_2[2];
    fVar11 = param_2[3];
    fVar12 = param_2[3];
    fVar13 = *param_2;
    fVar25 = *param_2;
    param_1[1] = fVar4 * 0.0 + fVar5 * 0.0 + fVar3 * param_2[1];
    param_1[2] = fVar4 * 0.0 + fVar5 * 0.0 + fVar3 * param_2[2];
    param_1[3] = fVar4 * 0.0 + fVar5 * 0.0 + fVar3 * param_2[3];
    *param_1 = fVar4 * 0.0 + fVar5 * 0.0 + fVar3 * *param_2;
    param_1[5] = fVar20 * 0.0 + fVar21 * 0.0 + fVar19 * fVar7;
    param_1[6] = fVar19 * fVar9 + fVar20 * 0.0 + fVar21 * 0.0;
    param_1[7] = fVar19 * fVar11 + fVar20 * 0.0 + fVar21 * 0.0;
    param_1[4] = fVar20 * 0.0 + fVar21 * 0.0 + fVar19 * fVar13;
    param_1[9] = fVar2 * 0.0 + fVar16 * 0.0 + fVar1 * fVar8;
    param_1[10] = fVar1 * fVar10 + fVar2 * 0.0 + fVar16 * 0.0;
    param_1[0xb] = fVar1 * fVar12 + fVar2 * 0.0 + fVar16 * 0.0;
    param_1[8] = fVar2 * 0.0 + fVar16 * 0.0 + fVar1 * fVar25;
  }
  return;
}
