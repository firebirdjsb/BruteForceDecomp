/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B84F519BC070EC6E334C45E8F9C18F5CDCC351009BF03E59720FD871335E3D51
 * Entry: 0x00220120, Ghidra index: 7560, label: FUN_00220120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00220120(float *param_1,float *param_2,float *param_3,float *param_4,float param_5,
                    float *param_6,int *param_7,char param_8)

{
  int iVar1;
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
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  int *piVar15;
  float10 fVar16;
  float fVar17;
  undefined1 in_XMM0 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [4];
  float local_8;
  float local_4;
  
  piVar15 = param_7;
  pfVar14 = param_4;
  pfVar13 = param_3;
  pfVar12 = param_2;
  fVar5 = param_3[2] * param_3[2] + param_3[1] * param_3[1] + *param_3 * *param_3;
  fVar6 = param_4[2] * param_4[2] + param_4[1] * param_4[1] + *param_4 * *param_4;
  fVar7 = *param_3 * *param_4 + param_3[1] * param_4[1] + param_3[2] * param_4[2];
  fVar4 = (*param_2 - *param_1) * *param_3 +
          (param_2[1] - param_1[1]) * param_3[1] + (param_2[2] - param_1[2]) * param_3[2];
  fVar3 = (param_2[1] - param_1[1]) * param_4[1] +
          (param_2[2] - param_1[2]) * param_4[2] + (*param_2 - *param_1) * *param_4;
  fVar17 = fVar6 * fVar5 - fVar7 * fVar7;
  fVar2 = fVar3 * fVar7 - fVar4 * fVar6;
  fVar8 = fVar4 * fVar7 - fVar3 * fVar5;
  if (fVar2 + fVar8 < fVar17 == (fVar2 + fVar8 == fVar17)) {
    if (fVar2 < 0.0) {
      *param_7 = 2;
      fVar17 = ((fVar7 - fVar6) + fVar4) - fVar3;
      if (0.0 <= fVar17) {
        if (0.0 < fVar3 + fVar6) {
          param_7 = (int *)-(fVar3 / fVar6);
          if ((float)param_7 < 0.0) goto LAB_00220449;
          goto LAB_00220460;
        }
        goto LAB_00220471;
      }
      fVar17 = fVar17 / ((fVar5 - (fVar7 + fVar7)) + fVar6);
    }
    else {
      if (fVar8 < 0.0) {
        *param_7 = 6;
        fVar17 = ((fVar5 - fVar7) + fVar4) - fVar3;
        if (0.0 < fVar17) {
          param_7 = (int *)(fVar17 / ((fVar5 - (fVar7 + fVar7)) + fVar6));
          if (0.0 <= (float)param_7) {
            if (1.0 < (float)param_7) {
              param_7 = (int *)0x3f800000;
            }
            param_2 = (float *)(1.0 - (float)param_7);
          }
          else {
            param_7 = (int *)0x0;
            param_2 = (float *)0x3f800000;
          }
          goto LAB_00220641;
        }
        param_7 = (int *)0x0;
        if (0.0 < fVar4 + fVar5) {
          param_2 = (float *)-(fVar4 / fVar5);
          if ((float)param_2 < 0.0) {
            param_2 = (float *)0x0;
            goto LAB_00220641;
          }
          goto LAB_0022059d;
        }
        goto LAB_002205ae;
      }
      *param_7 = 1;
      fVar17 = (((fVar7 - fVar6) + fVar4) - fVar3) / ((fVar5 - (fVar7 + fVar7)) + fVar6);
    }
    param_2 = (float *)-fVar17;
    if (0.0 <= (float)param_2) {
      if (1.0 < (float)param_2) {
        param_2 = (float *)0x3f800000;
      }
    }
    else {
      param_2 = (float *)0x0;
    }
    param_7 = (int *)(1.0 - (float)param_2);
  }
  else {
    if (fVar2 < 0.0) {
      if (0.0 <= fVar8) {
        *param_7 = 3;
        param_2 = (float *)0x0;
        param_7 = (int *)-(fVar3 / fVar6);
        if ((float)param_7 < 0.0) {
          param_7 = (int *)0x0;
          goto LAB_00220641;
        }
      }
      else {
        *param_7 = 4;
        if (fVar4 < 0.0) {
          param_2 = (float *)-(fVar4 / fVar5);
          goto LAB_0022059d;
        }
        if (0.0 <= fVar3) {
LAB_00220449:
          param_2 = (float *)0x0;
          param_7 = (int *)0x0;
          goto LAB_00220641;
        }
        param_7 = (int *)-(fVar3 / fVar6);
      }
LAB_00220460:
      param_2 = (float *)0x0;
      if ((float)param_7 <= 1.0) goto LAB_00220641;
LAB_00220471:
      param_2 = (float *)0x0;
      param_7 = (int *)0x3f800000;
      goto LAB_00220641;
    }
    if (0.0 <= fVar8) {
      *param_7 = 0;
      param_2 = (float *)(fVar2 * (1.0 / fVar17));
      param_7 = (int *)((1.0 / fVar17) * fVar8);
      goto LAB_00220641;
    }
    *param_7 = 5;
    param_7 = (int *)0x0;
    param_2 = (float *)-(fVar4 / fVar5);
    if ((float)param_2 < 0.0) {
      param_2 = (float *)0x0;
      goto LAB_00220641;
    }
LAB_0022059d:
    param_7 = (int *)0x0;
    if ((float)param_2 <= 1.0) goto LAB_00220641;
LAB_002205ae:
    param_7 = (int *)0x0;
    param_2 = (float *)0x3f800000;
  }
LAB_00220641:
  param_3 = (float *)0xffffffff;
  if ((param_8 != '\0') &&
     ((((iVar1 = *piVar15, iVar1 == 0 || (iVar1 == 1)) || (iVar1 == 3)) || (iVar1 == 5)))) {
    fVar17 = pfVar13[2];
    fVar8 = *param_4 - *pfVar13;
    local_2c = pfVar13[1];
    local_30 = *pfVar13;
    local_8 = param_4[1] - pfVar13[1];
    local_4 = param_4[2] - pfVar13[2];
    auVar18 = rsqrtss(in_XMM0,local_30 * local_30 + local_2c * local_2c + fVar17 * fVar17);
    local_28 = auVar18._0_4_;
    fVar2 = param_4[2];
    local_30 = local_28 * local_30;
    local_38 = param_4[1];
    local_3c = *param_4;
    local_2c = local_28 * local_2c;
    local_28 = local_28 * fVar17;
    auVar18 = rsqrtss(auVar18,local_3c * local_3c + local_38 * local_38 + fVar2 * fVar2);
    local_34 = auVar18._0_4_;
    local_3c = local_34 * local_3c;
    local_38 = local_34 * local_38;
    local_34 = local_34 * fVar2;
    auVar18 = rsqrtss(auVar18,local_8 * local_8 + local_4 * local_4 + fVar8 * fVar8);
    fVar17 = auVar18._0_4_;
    fVar9 = local_3c * local_30 + local_38 * local_2c + local_34 * local_28;
    fVar2 = -(fVar17 * fVar8 * local_30 + local_8 * fVar17 * local_2c + local_28 * local_4 * fVar17)
    ;
    fVar17 = fVar17 * fVar8 * local_3c + local_8 * fVar17 * local_38 + local_4 * fVar17 * local_34;
    if (((fVar9 * fVar9 < 0.999) && (fVar2 * fVar2 < 0.999)) && (fVar17 * fVar17 < 0.999)) {
      auVar18 = rsqrtss(auVar18,1.0 - fVar9 * fVar9);
      fVar9 = (fVar9 + 1.0) * auVar18._0_4_ * param_5;
      auVar18 = rsqrtss(auVar18,1.0 - fVar2 * fVar2);
      fVar2 = (fVar2 + 1.0) * auVar18._0_4_ * param_5;
      auVar18 = rsqrtss(auVar18,1.0 - fVar17 * fVar17);
      fVar17 = (fVar17 + 1.0) * auVar18._0_4_ * param_5;
      fVar11 = fVar2 + fVar9;
      fVar10 = fVar9 + fVar17;
      fVar17 = fVar17 + fVar2;
      if (((fVar11 * fVar11 < fVar5) && (fVar10 * fVar10 < fVar6)) &&
         (fVar17 * fVar17 < local_8 * local_8 + local_4 * local_4 + fVar8 * fVar8)) {
        local_24 = *pfVar13 + *param_4;
        local_20 = pfVar13[1] + param_4[1];
        local_1c = pfVar13[2] + param_4[2];
        auVar18._0_4_ = SQRT(param_5 * param_5 + fVar9 * fVar9);
        auVar19 = rsqrtss(auVar18,local_24 * local_24 + local_20 * local_20 + local_1c * local_1c);
        fVar17 = auVar19._0_4_ * auVar18._0_4_;
        local_20 = fVar17 * local_20;
        local_1c = fVar17 * local_1c;
        local_18 = local_24 * fVar17 + *pfVar12;
        local_14 = local_20 + pfVar12[1];
        local_10 = local_1c + pfVar12[2];
        fVar11 = SQRT(fVar5) - fVar11;
        local_30 = local_30 * fVar11;
        local_2c = local_2c * fVar11;
        local_28 = local_28 * fVar11;
        fVar10 = SQRT(fVar6) - fVar10;
        local_3c = local_3c * fVar10;
        local_38 = local_38 * fVar10;
        local_34 = local_34 * fVar10;
        param_4 = (float *)fVar6;
        _param_8 = fVar6;
        FUN_00220120(param_1,&local_18,&local_30,&local_3c,0,local_c,&param_3,0);
        fVar6 = (float)param_4;
        if (*piVar15 == 0) {
          if (param_3 == (float *)0x0) {
            *piVar15 = 7;
          }
        }
        else {
          *piVar15 = (int)param_3;
        }
      }
    }
  }
  param_4 = (float *)fVar6;
  *param_6 = (float)param_7 * *pfVar14 + (float)param_2 * *pfVar13 + *pfVar12;
  param_6[1] = (float)param_7 * pfVar14[1] + (float)param_2 * pfVar13[1] + pfVar12[1];
  fVar16 = (float10)(float)param_7 * (float10)pfVar14[2] +
           (float10)(float)param_2 * (float10)pfVar13[2] + (float10)pfVar12[2];
  param_6[2] = (float)fVar16;
  fVar16 = fVar16 - (float10)param_1[2];
  fVar16 = (float10)(*param_6 - *param_1) * (float10)(*param_6 - *param_1) +
           (float10)(param_6[1] - param_1[1]) * (float10)(param_6[1] - param_1[1]) + fVar16 * fVar16
  ;
  if (*piVar15 == 0) {
    if (param_3 == (float *)0x1) {
      fVar3 = -((((fVar7 - (float)param_4) + fVar4) - fVar3) /
               ((fVar5 - (fVar7 + fVar7)) + (float)param_4));
      if (0.0 <= fVar3) {
        if (1.0 < fVar3) {
          fVar3 = 1.0;
        }
      }
      else {
        fVar3 = 0.0;
      }
      fVar4 = 1.0 - fVar3;
      *param_6 = fVar4 * *pfVar14 + fVar3 * *pfVar13 + *pfVar12;
      param_6[1] = fVar4 * pfVar14[1] + fVar3 * pfVar13[1] + pfVar12[1];
      param_6[2] = fVar4 * pfVar14[2] + fVar3 * pfVar13[2] + pfVar12[2];
      *piVar15 = 1;
    }
    else {
      if (param_3 == (float *)0x3) {
        fVar3 = -(fVar3 / (float)param_4);
        if (0.0 <= fVar3) {
          if (1.0 < fVar3) {
            fVar3 = 1.0;
          }
        }
        else {
          fVar3 = 0.0;
        }
        *param_6 = *pfVar13 * 0.0 + fVar3 * *pfVar14 + *pfVar12;
        param_6[1] = pfVar13[1] * 0.0 + fVar3 * pfVar14[1] + pfVar12[1];
        param_6[2] = pfVar13[2] * 0.0 + fVar3 * pfVar14[2] + pfVar12[2];
        *piVar15 = 3;
        return fVar16;
      }
      if (param_3 == (float *)0x5) {
        fVar3 = -(fVar4 / fVar5);
        if (0.0 <= fVar3) {
          if (1.0 < fVar3) {
            fVar3 = 1.0;
          }
        }
        else {
          fVar3 = 0.0;
        }
        *param_6 = *pfVar14 * 0.0 + fVar3 * *pfVar13 + *pfVar12;
        param_6[1] = pfVar14[1] * 0.0 + fVar3 * pfVar13[1] + pfVar12[1];
        param_6[2] = pfVar14[2] * 0.0 + fVar3 * pfVar13[2] + pfVar12[2];
        *piVar15 = 5;
        return fVar16;
      }
    }
  }
  return fVar16;
}
