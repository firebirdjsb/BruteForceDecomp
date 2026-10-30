/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B84F519BC070EC6E334C45E8F9C18F5CDCC351009BF03E59720FD871335E3D51
 * Entry: 0x00220120, Ghidra index: 7560, label: FUN_00220120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <xmmintrin.h>
_Static_assert(sizeof(int) == 4, "Recursive code output is one guest DWORD");
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
  /* S is ESP after SUB 0x68 and four saved registers. Original vector
   * pointers survive in EBX/ESI/EDI and output-code pointer in EBP.
   * S+0x80 and S+0x94 hold F32 coefficients after those pointer saves;
   * S+0x84 becomes a signed 32-bit recursive output at 0x0022064a.
   * These objects model separate lifetimes, not the host call stack ABI. */
  float coefficient_2;
  float coefficient_7;
  int recursive_code;
  float saved_norm_4;
  float reused_flag_f32;
  float auVar18;
  float auVar19;
  float local_3c[3];
  float local_30[3];
  float local_24[3];
  float local_18[3];
  /* Recursive output span S+0x6c..+0x74: three F32 writes, not 4 bytes.
   * The two other recursive vector inputs are S+0x48 and S+0x3c. */
  float local_c[3];
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
          coefficient_7 = -(fVar3 / fVar6);
          if (coefficient_7 < 0.0) goto LAB_00220449;
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
          coefficient_7 = (fVar17 / ((fVar5 - (fVar7 + fVar7)) + fVar6));
          if (0.0 <= coefficient_7) {
            if (1.0 < coefficient_7) {
              coefficient_7 = 1.0f;
            }
            coefficient_2 = (1.0 - coefficient_7);
          }
          else {
            coefficient_7 = 0.0f;
            coefficient_2 = 1.0f;
          }
          goto LAB_00220641;
        }
        coefficient_7 = 0.0f;
        if (0.0 < fVar4 + fVar5) {
          coefficient_2 = -(fVar4 / fVar5);
          if (coefficient_2 < 0.0) {
            coefficient_2 = 0.0f;
            goto LAB_00220641;
          }
          goto LAB_0022059d;
        }
        goto LAB_002205ae;
      }
      *param_7 = 1;
      fVar17 = (((fVar7 - fVar6) + fVar4) - fVar3) / ((fVar5 - (fVar7 + fVar7)) + fVar6);
    }
    coefficient_2 = -fVar17;
    if (0.0 <= coefficient_2) {
      if (1.0 < coefficient_2) {
        coefficient_2 = 1.0f;
      }
    }
    else {
      coefficient_2 = 0.0f;
    }
    coefficient_7 = (1.0 - coefficient_2);
  }
  else {
    if (fVar2 < 0.0) {
      if (0.0 <= fVar8) {
        *param_7 = 3;
        coefficient_2 = 0.0f;
        coefficient_7 = -(fVar3 / fVar6);
        if (coefficient_7 < 0.0) {
          coefficient_7 = 0.0f;
          goto LAB_00220641;
        }
      }
      else {
        *param_7 = 4;
        if (fVar4 < 0.0) {
          coefficient_2 = -(fVar4 / fVar5);
          goto LAB_0022059d;
        }
        if (0.0 <= fVar3) {
LAB_00220449:
          coefficient_2 = 0.0f;
          coefficient_7 = 0.0f;
          goto LAB_00220641;
        }
        coefficient_7 = -(fVar3 / fVar6);
      }
LAB_00220460:
      coefficient_2 = 0.0f;
      if (coefficient_7 <= 1.0) goto LAB_00220641;
LAB_00220471:
      coefficient_2 = 0.0f;
      coefficient_7 = 1.0f;
      goto LAB_00220641;
    }
    if (0.0 <= fVar8) {
      *param_7 = 0;
      coefficient_2 = (fVar2 * (1.0 / fVar17));
      coefficient_7 = ((1.0 / fVar17) * fVar8);
      goto LAB_00220641;
    }
    *param_7 = 5;
    coefficient_7 = 0.0f;
    coefficient_2 = -(fVar4 / fVar5);
    if (coefficient_2 < 0.0) {
      coefficient_2 = 0.0f;
      goto LAB_00220641;
    }
LAB_0022059d:
    coefficient_7 = 0.0f;
    if (coefficient_2 <= 1.0) goto LAB_00220641;
LAB_002205ae:
    coefficient_7 = 0.0f;
    coefficient_2 = 1.0f;
  }
LAB_00220641:
  recursive_code = -1;
  if ((param_8 != '\0') &&
     ((((iVar1 = *piVar15, iVar1 == 0 || (iVar1 == 1)) || (iVar1 == 3)) || (iVar1 == 5)))) {
    fVar17 = pfVar13[2];
    fVar8 = *param_4 - *pfVar13;
    local_30[1] = pfVar13[1];
    local_30[0] = *pfVar13;
    local_8 = param_4[1] - pfVar13[1];
    local_4 = param_4[2] - pfVar13[2];
    auVar18 = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(local_30[0] * local_30[0] + local_30[1] * local_30[1] + fVar17 * fVar17)));
    local_30[2] = auVar18;
    fVar2 = param_4[2];
    local_30[0] = local_30[2] * local_30[0];
    local_3c[1] = param_4[1];
    local_3c[0] = *param_4;
    local_30[1] = local_30[2] * local_30[1];
    local_30[2] = local_30[2] * fVar17;
    auVar18 = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(local_3c[0] * local_3c[0] + local_3c[1] * local_3c[1] + fVar2 * fVar2)));
    local_3c[2] = auVar18;
    local_3c[0] = local_3c[2] * local_3c[0];
    local_3c[1] = local_3c[2] * local_3c[1];
    local_3c[2] = local_3c[2] * fVar2;
    auVar18 = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(local_8 * local_8 + local_4 * local_4 + fVar8 * fVar8)));
    fVar17 = auVar18;
    fVar9 = local_3c[0] * local_30[0] + local_3c[1] * local_30[1] + local_3c[2] * local_30[2];
    fVar2 = -(fVar17 * fVar8 * local_30[0] + local_8 * fVar17 * local_30[1] + local_30[2] * local_4 * fVar17)
    ;
    fVar17 = fVar17 * fVar8 * local_3c[0] + local_8 * fVar17 * local_3c[1] + local_4 * fVar17 * local_3c[2];
    if (((fVar9 * fVar9 < 0.999) && (fVar2 * fVar2 < 0.999)) && (fVar17 * fVar17 < 0.999)) {
      auVar18 = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(1.0 - fVar9 * fVar9)));
      fVar9 = (fVar9 + 1.0) * auVar18 * param_5;
      auVar18 = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(1.0 - fVar2 * fVar2)));
      fVar2 = (fVar2 + 1.0) * auVar18 * param_5;
      auVar18 = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(1.0 - fVar17 * fVar17)));
      fVar17 = (fVar17 + 1.0) * auVar18 * param_5;
      fVar11 = fVar2 + fVar9;
      fVar10 = fVar9 + fVar17;
      fVar17 = fVar17 + fVar2;
      if (((fVar11 * fVar11 < fVar5) && (fVar10 * fVar10 < fVar6)) &&
         (fVar17 * fVar17 < local_8 * local_8 + local_4 * local_4 + fVar8 * fVar8)) {
        local_24[0] = *pfVar13 + *param_4;
        local_24[1] = pfVar13[1] + param_4[1];
        local_24[2] = pfVar13[2] + param_4[2];
        auVar18 = _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(param_5 * param_5 + fVar9 * fVar9)));
        auVar19 = _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(local_24[0] * local_24[0] + local_24[1] * local_24[1] + local_24[2] * local_24[2])));
        fVar17 = auVar19 * auVar18;
        local_24[1] = fVar17 * local_24[1];
        local_24[2] = fVar17 * local_24[2];
        local_18[0] = local_24[0] * fVar17 + *pfVar12;
        local_18[1] = local_24[1] + pfVar12[1];
        local_18[2] = local_24[2] + pfVar12[2];
        fVar11 = _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(fVar5))) - fVar11;
        local_30[0] = local_30[0] * fVar11;
        local_30[1] = local_30[1] * fVar11;
        local_30[2] = local_30[2] * fVar11;
        reused_flag_f32 = fVar6; /* 0x220ac0 MOV F+0x98; flag no longer live. */
        fVar10 = _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(reused_flag_f32))) - fVar10;
        local_3c[0] = local_3c[0] * fVar10;
        local_3c[1] = local_3c[1] * fVar10;
        local_3c[2] = local_3c[2] * fVar10;
        saved_norm_4 = fVar6;
        FUN_00220120(param_1,local_18,local_30,local_3c,0,local_c,&recursive_code,0);
        fVar6 = saved_norm_4;
        if (*piVar15 == 0) {
          if (recursive_code == 0x0) {
            *piVar15 = 7;
          }
        }
        else {
          *piVar15 = recursive_code;
        }
      }
    }
  }
  saved_norm_4 = fVar6;
  *param_6 = coefficient_7 * *pfVar14 + coefficient_2 * *pfVar13 + *pfVar12;
  param_6[1] = coefficient_7 * pfVar14[1] + coefficient_2 * pfVar13[1] + pfVar12[1];
  fVar16 = (float10)coefficient_7 * (float10)pfVar14[2] +
           (float10)coefficient_2 * (float10)pfVar13[2] + (float10)pfVar12[2];
  param_6[2] = (float)fVar16;
  fVar16 = fVar16 - (float10)param_1[2];
  fVar16 = (float10)(*param_6 - *param_1) * (float10)(*param_6 - *param_1) +
           (float10)(param_6[1] - param_1[1]) * (float10)(param_6[1] - param_1[1]) + fVar16 * fVar16
  ;
  if (*piVar15 == 0) {
    if (recursive_code == 0x1) {
      fVar3 = -((((fVar7 - saved_norm_4) + fVar4) - fVar3) /
               ((fVar5 - (fVar7 + fVar7)) + saved_norm_4));
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
      if (recursive_code == 0x3) {
        fVar3 = -(fVar3 / saved_norm_4);
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
      if (recursive_code == 0x5) {
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
