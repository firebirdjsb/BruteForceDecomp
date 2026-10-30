/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 736FCF13EB0409462DBD75FB3EC5305D8EE6A115A099FB63ED721B27F2EB957D
 * Entry: 0x00269870, Ghidra index: 8749, label: FUN_00269870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00269870(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  float *pfVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  float10 fVar21;
  float local_94;
  float local_90;
  float local_8c;
  uint local_88;
  float local_84;
  uint local_80;
  float local_7c;
  int local_78;
  float local_74;
  int local_6c;
  float local_68;
  int local_60;
  float local_4c [19];
  
  local_94 = 0.0;
  local_60 = 0;
  local_68 = 0.0;
  local_90 = 0.0;
  local_7c = 0.0;
  local_88 = 0;
  if (*(int *)(param_1 + 0x514) != 0) {
    local_78 = 0;
    local_84 = 0.0;
    do {
      uVar12 = *(uint *)(param_1 + 0x510);
      local_94 = (float)(local_88 + 1);
      local_4c[local_88 + 1] = local_90 * local_7c;
      fVar9 = 0.0;
      local_90 = 0.0;
      local_7c = 0.0;
      if (local_88 < uVar12) {
        pfVar4 = (float *)((int)local_84 + param_2);
        iVar11 = uVar12 - local_88;
        do {
          fVar15 = *pfVar4;
          pfVar4 = pfVar4 + 0x12;
          iVar11 = iVar11 + -1;
          local_90 = ABS(fVar15) + local_90;
        } while (iVar11 != 0);
        if (local_90 != 0.0) {
          fVar15 = local_84;
          uVar12 = local_88;
          do {
            uVar12 = uVar12 + 1;
            *(float *)((int)fVar15 + param_2) = (1.0 / local_90) * *(float *)((int)fVar15 + param_2)
            ;
            fVar9 = *(float *)((int)fVar15 + param_2) * *(float *)((int)fVar15 + param_2) + fVar9;
            fVar15 = (float)((int)fVar15 + 0x48);
          } while (uVar12 < *(uint *)(param_1 + 0x510));
          fVar15 = *(float *)((int)local_84 + param_2);
          if (fVar15 < 0.0) {
            local_7c = -ABS(SQRT(fVar9));
          }
          else {
            local_7c = ABS(SQRT(fVar9));
          }
          local_7c = -local_7c;
          *(float *)((int)local_84 + param_2) = fVar15 - local_7c;
          if ((uint)local_94 < *(uint *)(param_1 + 0x514)) {
            uVar12 = *(uint *)(param_1 + 0x510);
            uVar14 = (uint)local_94;
            do {
              fVar1 = 0.0;
              if (local_88 < uVar12) {
                pfVar4 = (float *)((int)local_84 + param_2);
                iVar11 = uVar12 - local_88;
                pfVar13 = (float *)(param_2 + (local_78 + uVar14) * 4);
                do {
                  fVar16 = *pfVar4;
                  pfVar4 = pfVar4 + 0x12;
                  iVar11 = iVar11 + -1;
                  fVar1 = fVar16 * *pfVar13 + fVar1;
                  pfVar13 = pfVar13 + 0x12;
                } while (iVar11 != 0);
              }
              if (local_88 < uVar12) {
                iVar11 = (local_78 + uVar14) * 4;
                fVar16 = local_84;
                uVar18 = local_88;
                do {
                  uVar18 = uVar18 + 1;
                  pfVar4 = (float *)((int)fVar16 + param_2);
                  fVar16 = (float)((int)fVar16 + 0x48);
                  *(float *)(iVar11 + param_2) =
                       (1.0 / (fVar15 * local_7c - fVar9)) * fVar1 * *pfVar4 +
                       *(float *)(iVar11 + param_2);
                  uVar12 = *(uint *)(param_1 + 0x510);
                  iVar11 = iVar11 + 0x48;
                } while (uVar18 < uVar12);
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < *(uint *)(param_1 + 0x514));
          }
          fVar9 = local_84;
          uVar12 = local_88;
          if (local_88 < *(uint *)(param_1 + 0x510)) {
            do {
              uVar12 = uVar12 + 1;
              *(float *)((int)fVar9 + param_2) = local_90 * *(float *)((int)fVar9 + param_2);
              fVar9 = (float)((int)fVar9 + 0x48);
            } while (uVar12 < *(uint *)(param_1 + 0x510));
          }
        }
      }
      fVar9 = local_90 * local_7c;
      local_90 = 0.0;
      local_7c = 0.0;
      *(float *)(param_3 + local_88 * 4) = fVar9;
      fVar9 = 0.0;
      if (((local_88 < *(uint *)(param_1 + 0x510)) &&
          (uVar12 = *(uint *)(param_1 + 0x514), local_88 != uVar12)) && ((uint)local_94 < uVar12)) {
        iVar11 = (local_78 + (int)local_94) * 4;
        pfVar4 = (float *)(iVar11 + param_2);
        iVar5 = uVar12 - (int)local_94;
        do {
          fVar15 = *pfVar4;
          pfVar4 = pfVar4 + 1;
          iVar5 = iVar5 + -1;
          local_90 = ABS(fVar15) + local_90;
        } while (iVar5 != 0);
        if (local_90 != 0.0) {
          iVar5 = iVar11;
          uVar12 = (uint)local_94;
          do {
            uVar12 = uVar12 + 1;
            *(float *)(iVar5 + param_2) = (1.0 / local_90) * *(float *)(iVar5 + param_2);
            fVar9 = *(float *)(iVar5 + param_2) * *(float *)(iVar5 + param_2) + fVar9;
            iVar5 = iVar5 + 4;
          } while (uVar12 < *(uint *)(param_1 + 0x514));
          fVar15 = *(float *)(iVar11 + param_2);
          if (fVar15 < 0.0) {
            local_7c = -ABS(SQRT(fVar9));
          }
          else {
            local_4c[0] = SQRT(fVar9);
            local_7c = ABS(local_4c[0]);
          }
          local_7c = -local_7c;
          *(float *)(iVar11 + param_2) = fVar15 - local_7c;
          uVar12 = *(uint *)(param_1 + 0x514);
          if ((uint)local_94 < uVar12) {
            pfVar4 = (float *)(iVar11 + param_2);
            uVar14 = (uint)local_94;
            do {
              uVar14 = uVar14 + 1;
              fVar1 = *pfVar4;
              pfVar4 = pfVar4 + 1;
              local_4c[uVar14] = (1.0 / (fVar15 * local_7c - fVar9)) * fVar1;
            } while (uVar14 < uVar12);
          }
          if ((uint)local_94 < *(uint *)(param_1 + 0x510)) {
            local_8c = (float)((int)local_84 + 0x4c);
            local_80 = (uint)local_94;
            do {
              fVar9 = 0.0;
              if ((uint)local_94 < uVar12) {
                iVar5 = uVar12 - (int)local_94;
                pfVar4 = (float *)(iVar11 + param_2);
                pfVar13 = (float *)((int)local_8c + param_2);
                do {
                  fVar15 = *pfVar4;
                  pfVar4 = pfVar4 + 1;
                  iVar5 = iVar5 + -1;
                  fVar9 = fVar15 * *pfVar13 + fVar9;
                  pfVar13 = pfVar13 + 1;
                } while (iVar5 != 0);
              }
              uVar14 = (uint)local_94;
              fVar15 = local_8c;
              if ((uint)local_94 < uVar12) {
                do {
                  uVar14 = uVar14 + 1;
                  *(float *)((int)fVar15 + param_2) =
                       fVar9 * local_4c[uVar14] + *(float *)((int)fVar15 + param_2);
                  uVar12 = *(uint *)(param_1 + 0x514);
                  fVar15 = (float)((int)fVar15 + 4);
                } while (uVar14 < uVar12);
              }
              local_80 = local_80 + 1;
              local_8c = (float)((int)local_8c + 0x48);
            } while (local_80 < *(uint *)(param_1 + 0x510));
          }
          uVar12 = (uint)local_94;
          if ((uint)local_94 < *(uint *)(param_1 + 0x514)) {
            do {
              uVar12 = uVar12 + 1;
              *(float *)(iVar11 + param_2) = local_90 * *(float *)(iVar11 + param_2);
              iVar11 = iVar11 + 4;
            } while (uVar12 < *(uint *)(param_1 + 0x514));
          }
        }
      }
      fVar9 = ABS(local_4c[local_88 + 1]) + ABS(*(float *)(param_3 + local_88 * 4));
      if (local_68 <= fVar9) {
        local_68 = fVar9;
      }
      local_84 = (float)((int)local_84 + 0x4c);
      local_78 = local_78 + 0x12;
      local_88 = (uint)local_94;
    } while ((uint)local_94 < *(uint *)(param_1 + 0x514));
  }
  local_88 = *(int *)(param_1 + 0x514) - 1;
  if (-1 < (int)local_88) {
    local_90 = (float)(local_88 * 0x4c);
    local_78 = (int)local_94 * 0x12;
    local_84 = (float)(local_88 * 0x12);
    do {
      if (local_88 < *(uint *)(param_1 + 0x514)) {
        if (local_7c != 0.0) {
          iVar11 = ((int)local_84 + (int)local_94) * 4;
          fVar9 = *(float *)(iVar11 + param_2);
          if ((uint)local_94 < *(uint *)(param_1 + 0x514)) {
            iVar5 = (local_88 + local_78) * 4;
            fVar15 = local_94;
            iVar19 = iVar11;
            do {
              fVar15 = (float)((int)fVar15 + 1);
              pfVar4 = (float *)(iVar19 + param_2);
              iVar19 = iVar19 + 4;
              *(float *)(iVar5 + param_4) = (1.0 / (local_7c * fVar9)) * *pfVar4;
              iVar5 = iVar5 + 0x48;
            } while ((uint)fVar15 < *(uint *)(param_1 + 0x514));
          }
          uVar12 = *(uint *)(param_1 + 0x514);
          local_80 = (uint)local_94;
          if ((uint)local_94 < uVar12) {
            do {
              fVar9 = 0.0;
              if ((uint)local_94 < uVar12) {
                pfVar4 = (float *)(iVar11 + param_2);
                pfVar13 = (float *)(param_4 + (local_78 + local_80) * 4);
                iVar5 = uVar12 - (int)local_94;
                do {
                  fVar15 = *pfVar4;
                  pfVar4 = pfVar4 + 1;
                  fVar1 = *pfVar13;
                  pfVar13 = pfVar13 + 0x12;
                  iVar5 = iVar5 + -1;
                  fVar9 = fVar15 * fVar1 + fVar9;
                } while (iVar5 != 0);
              }
              if ((uint)local_94 < uVar12) {
                iVar19 = (local_78 + local_88) * 4;
                iVar5 = (local_78 + local_80) * 4;
                fVar15 = local_94;
                do {
                  fVar15 = (float)((int)fVar15 + 1);
                  pfVar4 = (float *)(iVar19 + param_4);
                  iVar19 = iVar19 + 0x48;
                  *(float *)(iVar5 + param_4) = fVar9 * *pfVar4 + *(float *)(iVar5 + param_4);
                  iVar5 = iVar5 + 0x48;
                } while ((uint)fVar15 < *(uint *)(param_1 + 0x514));
              }
              uVar12 = *(uint *)(param_1 + 0x514);
              local_80 = local_80 + 1;
            } while (local_80 < uVar12);
          }
        }
        if ((uint)local_94 < *(uint *)(param_1 + 0x514)) {
          iVar11 = ((int)local_84 + (int)local_94) * 4;
          iVar5 = (local_78 + local_88) * 4;
          do {
            *(undefined4 *)(iVar5 + param_4) = 0;
            *(undefined4 *)(iVar11 + param_4) = 0;
            local_94 = (float)((int)local_94 + 1);
            iVar11 = iVar11 + 4;
            iVar5 = iVar5 + 0x48;
          } while ((uint)local_94 < *(uint *)(param_1 + 0x514));
        }
      }
      local_94 = (float)local_88;
      local_7c = local_4c[local_88 + 1];
      *(undefined4 *)((int)local_90 + param_4) = 0x3f800000;
      local_78 = (int)local_84;
      local_84 = (float)((int)local_84 + -0x12);
      local_90 = (float)((int)local_90 + -0x4c);
      local_88 = local_88 - 1;
    } while (-1 < (int)local_88);
  }
  puVar6 = (uint *)(param_1 + 0x514);
  if (*(uint *)(param_1 + 0x510) <= *(uint *)(param_1 + 0x514)) {
    puVar6 = (uint *)(param_1 + 0x510);
  }
  local_84 = (float)*puVar6;
  uVar12 = (int)local_84 - 1;
  if (-1 < (int)uVar12) {
    local_90 = (float)(uVar12 * 0x4c);
    local_78 = uVar12 * 0x12;
    do {
      fVar9 = *(float *)(param_3 + uVar12 * 4);
      if ((uint)local_84 < *(uint *)(param_1 + 0x514)) {
        iVar11 = (local_78 + (int)local_84) * 4;
        fVar15 = local_84;
        do {
          *(undefined4 *)(iVar11 + param_2) = 0;
          fVar15 = (float)((int)fVar15 + 1);
          iVar11 = iVar11 + 4;
        } while ((uint)fVar15 < *(uint *)(param_1 + 0x514));
      }
      if (fVar9 == 0.0) {
        uVar14 = uVar12;
        fVar9 = local_90;
        if (uVar12 < *(uint *)(param_1 + 0x510)) {
          do {
            *(undefined4 *)((int)fVar9 + param_2) = 0;
            uVar14 = uVar14 + 1;
            fVar9 = (float)((int)fVar9 + 0x48);
          } while (uVar14 < *(uint *)(param_1 + 0x510));
        }
      }
      else {
        fVar15 = *(float *)((int)local_90 + param_2);
        local_80 = (uint)local_84;
        if ((uint)local_84 < *(uint *)(param_1 + 0x514)) {
          uVar14 = *(uint *)(param_1 + 0x510);
          do {
            fVar1 = 0.0;
            if ((uint)local_84 < uVar14) {
              pfVar4 = (float *)(param_2 + (local_78 + 0x12 + uVar12) * 4);
              iVar11 = uVar14 - (int)local_84;
              pfVar13 = (float *)(param_2 + (local_78 + 0x12 + local_80) * 4);
              do {
                fVar16 = *pfVar4;
                pfVar4 = pfVar4 + 0x12;
                iVar11 = iVar11 + -1;
                fVar1 = fVar16 * *pfVar13 + fVar1;
                pfVar13 = pfVar13 + 0x12;
              } while (iVar11 != 0);
            }
            if (uVar12 < uVar14) {
              iVar11 = (local_80 + local_78) * 4;
              uVar18 = uVar12;
              fVar16 = local_90;
              do {
                uVar18 = uVar18 + 1;
                pfVar4 = (float *)((int)fVar16 + param_2);
                fVar16 = (float)((int)fVar16 + 0x48);
                *(float *)(iVar11 + param_2) =
                     (1.0 / (fVar9 * fVar15)) * fVar1 * *pfVar4 + *(float *)(iVar11 + param_2);
                uVar14 = *(uint *)(param_1 + 0x510);
                iVar11 = iVar11 + 0x48;
              } while (uVar18 < uVar14);
            }
            local_80 = local_80 + 1;
          } while (local_80 < *(uint *)(param_1 + 0x514));
        }
        fVar15 = local_90;
        uVar14 = uVar12;
        if (uVar12 < *(uint *)(param_1 + 0x510)) {
          do {
            uVar14 = uVar14 + 1;
            *(float *)((int)fVar15 + param_2) = (1.0 / fVar9) * *(float *)((int)fVar15 + param_2);
            fVar15 = (float)((int)fVar15 + 0x48);
          } while (uVar14 < *(uint *)(param_1 + 0x510));
        }
      }
      uVar12 = uVar12 - 1;
      local_78 = local_78 + -0x12;
      *(float *)((int)local_90 + param_2) = *(float *)((int)local_90 + param_2) + 1.0;
      local_84 = (float)((int)local_84 - 1);
      local_90 = (float)((int)local_90 + -0x4c);
    } while (-1 < (int)uVar12);
  }
  iVar11 = *(int *)(param_1 + 0x514);
  do {
    iVar5 = iVar11;
    iVar11 = iVar5 + -1;
    if (iVar11 < 0) {
      return;
    }
    local_6c = 1;
    do {
      iVar19 = iVar11;
      if (-1 < iVar11) {
        pfVar4 = (float *)(param_3 + -4 + iVar11 * 4);
        do {
          local_60 = iVar19 + -1;
          if (ABS(local_4c[iVar19 + 1]) + local_68 == local_68) goto LAB_0026a3df;
        } while ((ABS(*pfVar4) + local_68 != local_68) &&
                (pfVar4 = pfVar4 + -1, iVar19 = local_60, -1 < local_60));
      }
      fVar21 = (float10)1.0;
      local_94 = 0.0;
      for (iVar7 = iVar19; iVar7 <= iVar11; iVar7 = iVar7 + 1) {
        iVar8 = iVar7 * 4;
        fVar9 = (float)(fVar21 * (float10)local_4c[iVar7 + 1]);
        local_4c[iVar7 + 1] = local_94 * local_4c[iVar7 + 1];
        if (ABS(fVar9) + local_68 == local_68) break;
        fVar15 = *(float *)(iVar8 + param_3);
        fVar21 = (float10)FUN_0026a900(param_1,fVar9,fVar15);
        *(float *)(iVar8 + param_3) = (float)fVar21;
        uVar12 = 0;
        local_94 = (float)((float10)fVar15 * ((float10)1.0 / fVar21));
        fVar21 = -(((float10)1.0 / fVar21) * (float10)fVar9);
        if (*(int *)(param_1 + 0x510) != 0) {
          iVar17 = local_60 << 2;
          do {
            fVar9 = *(float *)(iVar17 + param_2);
            uVar12 = uVar12 + 1;
            fVar15 = *(float *)(iVar8 + param_2);
            *(float *)(iVar17 + param_2) =
                 (float)((float10)fVar15 * fVar21 + (float10)fVar9 * (float10)local_94);
            *(float *)(iVar8 + param_2) =
                 (float)((float10)fVar15 * (float10)local_94 - (float10)fVar9 * fVar21);
            iVar17 = iVar17 + 0x48;
            iVar8 = iVar8 + 0x48;
          } while (uVar12 < *(uint *)(param_1 + 0x510));
        }
      }
LAB_0026a3df:
      iVar7 = iVar11 * 4;
      fVar9 = *(float *)(iVar7 + param_3);
      if (iVar19 == iVar11) {
        if (fVar9 < 0.0) {
          uVar12 = 0;
          *(float *)(iVar7 + param_3) = -fVar9;
          if (*(int *)(param_1 + 0x514) != 0) {
            do {
              uVar12 = uVar12 + 1;
              *(float *)(iVar7 + param_4) = -*(float *)(iVar7 + param_4);
              iVar7 = iVar7 + 0x48;
            } while (uVar12 < *(uint *)(param_1 + 0x514));
          }
        }
        break;
      }
      if (local_6c == 0x1e) break;
      iVar7 = iVar19 * 4;
      local_84 = *(float *)(iVar7 + param_3);
      local_60 = iVar5 + -2;
      fVar15 = *(float *)(param_3 + local_60 * 4);
      fVar1 = local_4c[iVar5];
      fVar16 = ((fVar1 + local_4c[iVar5 + -1]) * (local_4c[iVar5 + -1] - fVar1) +
               (fVar9 + fVar15) * (fVar15 - fVar9)) / (fVar15 * fVar1 + fVar15 * fVar1);
      fVar21 = (float10)FUN_0026a900(param_1,fVar16,0x3f800000);
      fVar21 = ABS(fVar21);
      if (fVar16 < 0.0) {
        fVar21 = -fVar21;
      }
      local_74 = 1.0;
      local_94 = 1.0;
      local_8c = (float)((((float10)local_84 + (float10)fVar9) *
                          ((float10)local_84 - (float10)fVar9) +
                         ((float10)fVar15 / (fVar21 + (float10)fVar16) - (float10)fVar1) *
                         (float10)fVar1) / (float10)local_84);
      if (iVar19 <= local_60) {
        iVar17 = (local_60 - iVar19) + 1;
        iVar8 = iVar7;
        do {
          iVar20 = iVar8 + 4;
          fVar9 = *(float *)((int)local_4c + iVar8 + 8);
          fVar15 = *(float *)(iVar20 + param_3);
          local_74 = local_74 * fVar9;
          fVar9 = local_94 * fVar9;
          fVar21 = (float10)FUN_0026a900(param_1,local_8c,local_74);
          *(float *)((int)local_4c + iVar7 + 4) = (float)fVar21;
          uVar12 = 0;
          local_94 = (float)((float10)local_8c * ((float10)1.0 / fVar21));
          local_74 = (float)(((float10)1.0 / fVar21) * (float10)local_74);
          fVar1 = local_74 * fVar9 + local_84 * local_94;
          fVar9 = local_94 * fVar9 - local_84 * local_74;
          fVar16 = fVar15 * local_74;
          fVar15 = fVar15 * local_94;
          iVar8 = iVar7;
          iVar10 = iVar20;
          if (*(int *)(param_1 + 0x514) != 0) {
            do {
              fVar2 = *(float *)(iVar8 + param_4);
              uVar12 = uVar12 + 1;
              fVar3 = *(float *)(iVar10 + param_4);
              *(float *)(iVar8 + param_4) = fVar3 * local_74 + fVar2 * local_94;
              *(float *)(iVar10 + param_4) = fVar3 * local_94 - fVar2 * local_74;
              iVar8 = iVar8 + 0x48;
              iVar10 = iVar10 + 0x48;
            } while (uVar12 < *(uint *)(param_1 + 0x514));
          }
          fVar21 = (float10)FUN_0026a900(param_1,fVar1,fVar16);
          *(float *)(param_3 + iVar7) = (float)fVar21;
          if (fVar21 != (float10)0.0) {
            local_94 = (float)((float10)fVar1 * ((float10)1.0 / fVar21));
            local_74 = (float)(((float10)1.0 / fVar21) * (float10)fVar16);
          }
          uVar12 = 0;
          local_8c = local_94 * fVar9 + fVar15 * local_74;
          local_84 = fVar15 * local_94 - local_74 * fVar9;
          iVar8 = iVar7;
          iVar10 = iVar20;
          if (*(int *)(param_1 + 0x510) != 0) {
            do {
              fVar9 = *(float *)(iVar8 + param_2);
              uVar12 = uVar12 + 1;
              fVar15 = *(float *)(iVar10 + param_2);
              *(float *)(iVar8 + param_2) = fVar15 * local_74 + fVar9 * local_94;
              *(float *)(iVar10 + param_2) = fVar15 * local_94 - fVar9 * local_74;
              iVar8 = iVar8 + 0x48;
              iVar10 = iVar10 + 0x48;
            } while (uVar12 < *(uint *)(param_1 + 0x510));
          }
          iVar7 = iVar7 + 4;
          iVar17 = iVar17 + -1;
          iVar8 = iVar20;
        } while (iVar17 != 0);
      }
      local_4c[iVar19 + 1] = 0.0;
      *(float *)(param_3 + iVar11 * 4) = local_84;
      local_4c[iVar5] = local_8c;
      local_6c = local_6c + 1;
    } while (local_6c < 0x1f);
  } while( true );
}
