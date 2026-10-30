/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B99618B81CA07FE4C314FC55420CC40137981D3A0A03D9BB1C89648A260D50F
 * Entry: 0x0021ef20, Ghidra index: 7557, label: FUN_0021ef20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfd8;
/* WARNING: Removing unreachable block (ram,0x0021f375) */
/* WARNING: Removing unreachable block (ram,0x0021f4b3) */
/* WARNING: Removing unreachable block (ram,0x0021f4f3) */
/* WARNING: Removing unreachable block (ram,0x0021f47a) */
/* WARNING: Removing unreachable block (ram,0x0021f757) */
/* WARNING: Removing unreachable block (ram,0x0021f942) */
/* WARNING: Removing unreachable block (ram,0x0021f99d) */
/* WARNING: Removing unreachable block (ram,0x0021f2fd) */
/* WARNING: Removing unreachable block (ram,0x0021f3f5) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0021ef20(int *param_1)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_11c;
  float local_118;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float fStack_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined8 local_dc;
  float fStack_d4;
  uint uStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined8 uStack_c4;
  float fStack_bc;
  undefined8 uStack_b8;
  float fStack_b0;
  undefined8 uStack_ac;
  float fStack_a4;
  undefined8 uStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  undefined8 uStack_8c;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined8 uStack_74;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float *pfStack_30;
  float fStack_2c;
  float *pfStack_28;
  float fStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  int iStack_14;
  float *pfStack_10;
  float fStack_8;
  
  local_e8 = -1.0;
  local_ec = 0.0;
  local_e4 = 0.0;
  local_f4 = (float)param_1[0x26] * 0.5;
  fVar9 = (float)param_1[0x26];
  local_104 = (float)param_1[0x1f];
  local_10c = local_104 * (float)param_1[0x35];
  local_108 = local_104 * (float)*(undefined8 *)(param_1 + 0x36);
  local_104 = local_104 * (float)((ulonglong)*(undefined8 *)(param_1 + 0x36) >> 0x20);
  local_f8 = (float)param_1[0x20];
  local_100 = local_f8 * (float)param_1[0x38];
  local_fc = local_f8 * (float)*(undefined8 *)(param_1 + 0x39);
  local_f8 = local_f8 * (float)((ulonglong)*(undefined8 *)(param_1 + 0x39) >> 0x20);
  local_dc = CONCAT44(local_f8,local_fc);
  local_e0 = local_100;
  iVar2 = (**(code **)(*param_1 + 0x40))();
  fVar8 = *(float *)(iVar2 + 0x28);
  uStack_b8 = *(undefined8 *)(iVar2 + 0x28);
  fStack_bc = *(float *)(iVar2 + 0x24);
  fStack_b0 = local_f4 * (-local_10c - local_100);
  fStack_44 = local_f4 * (-local_108 - local_fc);
  fStack_34 = local_f4 * (-local_104 - local_f8);
  uStack_ac = CONCAT44(fStack_34,fStack_44);
  fStack_40 = fStack_34 + *(float *)(iVar2 + 0x2c);
  fStack_44 = fStack_44 + fVar8;
  fStack_48 = fStack_bc + fStack_b0;
  local_e0 = (float)param_1[0x21] * local_ec;
  fStack_38 = (float)param_1[0x21] * local_e8;
  fStack_a4 = -local_10c + local_100;
  uStack_a0 = CONCAT44(-local_104 + local_f8,-local_108 + local_fc);
  fStack_c8 = local_f4 * fStack_a4;
  fVar7 = local_f4 * (-local_108 + local_fc);
  uStack_c4 = CONCAT44(local_f4 * (-local_104 + local_f8),fVar7);
  fStack_8 = fStack_38 + fVar7 + fVar8;
  iVar2 = 0;
  local_118 = 0.0;
  uStack_d0 = 0;
  if (param_1[0x1e] != 0) {
    pfStack_10 = &local_100;
    pfStack_28 = &local_10c;
    pfStack_30 = &fStack_84;
    local_f4 = 0.0;
    local_11c = -NAN;
    fStack_2c = fVar9 * 0.0001;
    do {
      if (((float)param_1[0x24] == 0.0) && (uStack_d0 != 0)) {
        DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
        iVar5 = 0;
        *(float *)(iVar2 + param_1[0x3b]) = (float)(DAT_0046cfd8 % 10000);
        if (0 < (int)local_11c) {
          do {
            iVar4 = param_1[0x3b];
            if (*(float *)(iVar2 + iVar4) == *(float *)(iVar4 + iVar5 * 4)) {
              *(float *)(iVar2 + iVar4) = *(float *)(iVar2 + iVar4) + 1.0;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)local_11c);
        }
        DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
        iVar5 = 0;
        *(float *)(iVar2 + param_1[0x3c]) = (float)(DAT_0046cfd8 % 10000);
        if (0 < (int)local_11c) {
          do {
            iVar4 = param_1[0x3c];
            if (*(float *)(iVar2 + iVar4) == *(float *)(iVar4 + iVar5 * 4)) {
              *(float *)(iVar2 + iVar4) = *(float *)(iVar2 + iVar4) + 1.0;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)local_11c);
        }
        DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
        iVar5 = 0;
        *(float *)(iVar2 + param_1[0x3d]) = (float)(DAT_0046cfd8 % 10000);
        if (0 < (int)local_11c) {
          do {
            iVar4 = param_1[0x3d];
            if (*(float *)(iVar2 + iVar4) == *(float *)(iVar4 + iVar5 * 4)) {
              *(float *)(iVar2 + iVar4) = *(float *)(iVar2 + iVar4) + 1.0;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)local_11c);
        }
      }
      else {
        DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
        *(float *)(iVar2 + param_1[0x3b]) = (float)(DAT_0046cfd8 % 10000);
        DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
        *(float *)(iVar2 + param_1[0x3c]) = (float)(DAT_0046cfd8 % 10000);
        DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
        *(float *)(iVar2 + param_1[0x3d]) = (float)(DAT_0046cfd8 % 10000);
      }
      fStack_58 = *(float *)(iVar2 + param_1[0x3c]);
      fStack_78 = fStack_58 * *pfStack_10;
      fStack_5c = fStack_58 * (float)*(undefined8 *)(pfStack_10 + 1);
      fStack_58 = fStack_58 * (float)((ulonglong)*(undefined8 *)(pfStack_10 + 1) >> 0x20);
      uStack_74 = CONCAT44(fStack_58,fStack_5c);
      fStack_7c = *(float *)(iVar2 + param_1[0x3b]);
      fStack_b0 = fStack_7c * *pfStack_28;
      fStack_80 = fStack_7c * (float)*(undefined8 *)(pfStack_28 + 1);
      fStack_7c = fStack_7c * (float)((ulonglong)*(undefined8 *)(pfStack_28 + 1) >> 0x20);
      uStack_ac = CONCAT44(fStack_7c,fStack_80);
      fStack_7c = fStack_58 + fStack_7c;
      fStack_80 = fStack_5c + fStack_80;
      fStack_84 = fStack_78 + fStack_b0;
      fStack_90 = fStack_2c * *pfStack_30;
      fVar8 = fStack_2c * (float)*(undefined8 *)(pfStack_30 + 1);
      fVar9 = fStack_2c * (float)((ulonglong)*(undefined8 *)(pfStack_30 + 1) >> 0x20);
      uStack_8c = CONCAT44(fVar9,fVar8);
      fVar9 = fStack_40 + fVar9;
      fVar8 = fStack_44 + fVar8;
      fVar7 = fStack_48 + fStack_90;
      iVar5 = *(int *)(param_1[2] + 0xa40);
      fStack_60 = fStack_78;
      fStack_3c = fVar7;
      fStack_24 = fStack_5c;
      fStack_1c = fStack_58;
      if (iVar5 == 0) {
        fVar6 = (float10)0.0;
      }
      else {
        fStack_18 = -3.4028235e+38;
        cVar1 = FUN_001f4740(iVar5,&iStack_14,&iStack_20,fVar7,fVar9);
        if ((cVar1 == '\0') ||
           ((**(int **)(iVar5 + 0x20) * iStack_20 + iStack_14) * 0x40 + *(int *)(iVar5 + 0x18) == 0)
           ) {
          fVar6 = (float10)fStack_18;
        }
        else {
          fVar6 = (float10)FUN_001f3aa0(fVar7,fVar9);
        }
      }
      fVar6 = (float10)fVar8 - fVar6;
      if (fVar6 <= (float10)0.0) {
        uStack_d0 = uStack_d0 - 1;
        local_11c = (float)((int)local_11c + -1);
        iVar2 = iVar2 + -4;
        local_f4 = (float)((int)local_f4 + -0x24);
      }
      else {
        DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
        *(float *)(param_1[0x34] + 0x1c + (int)local_f4) = (float)(DAT_0046cfd8 % 100) * 0.005 + 0.5
        ;
        if ((float10)(float)param_1[0x21] < fVar6) {
          fVar6 = (float10)(float)param_1[0x21];
        }
        fStack_98 = (float)fVar6;
        fStack_a4 = fStack_98 * local_ec;
        fStack_94 = fStack_98 * local_e8;
        fStack_98 = fStack_98 * local_e4;
        uStack_a0 = CONCAT44(fStack_98,fStack_94);
        fStack_cc = 0.0001;
        fStack_bc = fStack_a4 * 0.0001;
        fStack_d4 = fStack_94 * 0.0001;
        fStack_f0 = fStack_98 * 0.0001;
        uStack_b8 = CONCAT44(fStack_f0,fStack_d4);
        fVar7 = *(float *)(iVar2 + param_1[0x3d]);
        fStack_c8 = fVar7 * fStack_bc;
        uStack_c4 = CONCAT44(fVar7 * fStack_f0,fVar7 * fStack_d4);
        pfVar3 = (float *)(param_1[0x34] + (int)local_f4);
        pfVar3[2] = fVar7 * fStack_f0 + fVar9;
        pfVar3[1] = fVar7 * fStack_d4 + fVar8 + 0.01;
        *pfVar3 = fStack_c8 + fStack_3c;
        DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
        *(float *)(param_1[0x34] + 0xc + (int)local_f4) =
             (float)param_1[0x24] * 0.5 -
             (float)(DAT_0046cfd8 % 1000) * (float)param_1[0x24] * 0.001;
        DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
        *(float *)(param_1[0x34] + 0x14 + (int)local_f4) =
             (float)param_1[0x24] * 0.5 -
             (float)(DAT_0046cfd8 % 1000) * (float)param_1[0x24] * 0.001;
        fStack_6c = fStack_bc;
        fStack_68 = fStack_d4;
        fStack_64 = fStack_f0;
        fStack_54 = fStack_a4;
        fStack_50 = fStack_94;
        fStack_4c = fStack_98;
      }
      local_118 = (float)((int)local_118 + 1);
      if ((uint)(param_1[0x1e] * 10) < (uint)local_118) {
        return;
      }
      uStack_d0 = uStack_d0 + 1;
      local_11c = (float)((int)local_11c + 1);
      local_f4 = (float)((int)local_f4 + 0x24);
      iVar2 = iVar2 + 4;
    } while (uStack_d0 < (uint)param_1[0x1e]);
  }
  param_1[0x3f] = (int)(((float)param_1[0x26] * (float)param_1[0x1f]) / (float)param_1[0x3e]);
  param_1[0x40] = (int)(((float)param_1[0x26] * (float)param_1[0x20]) / (float)param_1[0x3e]);
  iVar2 = FUN_002ebf10();
  iVar2 = iVar2 + 1;
  fVar9 = 1.0 / (float)iVar2;
  if ((float)param_1[0x3f] <= (float)param_1[0x40]) {
    local_118 = fVar9 * (float)param_1[0x3f];
    iVar5 = (int)((float)param_1[0x40] / (fVar9 * (float)param_1[0x40]));
    local_11c = (float)param_1[0x40] / (float)iVar5;
  }
  else {
    local_11c = fVar9 * (float)param_1[0x40];
    iVar4 = (int)((float)param_1[0x3f] / (fVar9 * (float)param_1[0x3f]));
    local_118 = (float)param_1[0x3f] / (float)iVar4;
    iVar5 = iVar2;
    iVar2 = iVar4;
  }
  *(undefined1 *)(param_1 + 0x41) = 1;
  iVar4 = param_1[0x3e];
  uStack_d0 = 0;
  if (0 < iVar4) {
    do {
      local_f4 = 0.0;
      if (0 < iVar4) {
        fStack_f0 = (float)(int)uStack_d0;
        do {
          fStack_94 = fStack_f0 * (float)param_1[0x40];
          fStack_bc = fStack_94 * (float)param_1[0x38];
          fStack_98 = fStack_94 * (float)*(undefined8 *)(param_1 + 0x39);
          fStack_94 = fStack_94 * (float)((ulonglong)*(undefined8 *)(param_1 + 0x39) >> 0x20);
          uStack_b8 = CONCAT44(fStack_94,fStack_98);
          fStack_58 = (float)(int)local_f4 * (float)param_1[0x3f];
          uStack_8c = CONCAT44(fStack_94,fStack_98);
          fStack_c8 = fStack_58 * (float)param_1[0x35];
          fStack_5c = fStack_58 * (float)*(undefined8 *)(param_1 + 0x36);
          fStack_58 = fStack_58 * (float)((ulonglong)*(undefined8 *)(param_1 + 0x36) >> 0x20);
          uStack_c4 = CONCAT44(fStack_58,fStack_5c);
          fStack_58 = fStack_58 + fStack_40;
          fStack_5c = fStack_5c + fStack_44;
          fStack_cc = fStack_94 + fStack_58;
          fStack_d4 = fStack_98 + fStack_5c;
          uStack_ac = CONCAT44(fStack_cc,fStack_d4);
          fStack_b0 = fStack_bc + fStack_c8 + fStack_48;
          fStack_90 = fStack_bc;
          fVar6 = (float10)FUN_0021ed70(param_1,&fStack_b0,iVar2,iVar5,local_118,local_11c,
                                        param_1 + 0x35,param_1 + 0x38);
          if (((char)param_1[0x41] != '\0') &&
             ((float10)fStack_8 < fVar6 + (float10)(float)param_1[0x25])) {
            *(undefined1 *)(param_1 + 0x41) = 0;
            break;
          }
          local_f4 = (float)((int)local_f4 + 1);
        } while ((int)local_f4 < param_1[0x3e]);
      }
      if ((char)param_1[0x41] == '\0') {
        return;
      }
      iVar4 = param_1[0x3e];
      uStack_d0 = uStack_d0 + 1;
    } while ((int)uStack_d0 < iVar4);
  }
  return;
}
