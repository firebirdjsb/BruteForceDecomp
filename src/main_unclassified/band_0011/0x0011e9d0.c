/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D500DE61C69517CCD74E13AA3A0A82E8EC4C365170F96B24917FF6C742A9F452
 * Entry: 0x0011e9d0, Ghidra index: 3633, label: FUN_0011e9d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0011e9d0(int *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  char cVar2;
  float *pfVar3;
  undefined1 (*pauVar4) [16];
  int iVar5;
  int iVar6;
  undefined1 in_XMM0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 *puVar9;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined8 uStack_a4;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined8 uStack_74;
  undefined1 auStack_6c [16];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [16];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar6 = 0;
  param_1[0x165] = 0;
  param_1[0x201] = (int)param_2;
  param_1[0x203] = (int)param_4;
  param_1[0x202] = (int)param_3;
  *(byte *)(param_1 + 0x204) = *(byte *)(param_1 + 0x204) | 1;
  local_b8 = param_3;
  if (param_1[0x9a] != -1) {
    iVar5 = param_1[0xba];
    cVar2 = (**(code **)(*(int *)(iVar5 + 0x144) + 0x20))();
    if (((cVar2 != '\0') && (iVar5 = *(int *)(iVar5 + 0x164), iVar5 != 0)) &&
       (*(int *)(*(int *)(iVar5 + 0xc) + 4) == 0x14)) {
      iVar5 = param_1[0xba];
      cVar2 = (**(code **)(*(int *)(iVar5 + 0x144) + 0x20))();
      if (((cVar2 != '\0') && (iVar5 = *(int *)(iVar5 + 0x164), iVar5 != 0)) &&
         (*(int *)(*(int *)(iVar5 + 0xc) + 4) == 0x14)) {
        iVar6 = iVar5;
      }
      if (iVar6 != 0) {
        iVar5 = param_1[0xfa];
        if ((iVar5 == 0) || (iVar5 == -1)) {
          iVar5 = param_1[0x1b];
          fStack_88 = *(float *)(iVar5 + 0x40);
          fVar1 = *(float *)(iVar5 + 0x38);
          fStack_8c = *(float *)(iVar5 + 0x3c);
        }
        else {
          fStack_88 = *(float *)(iVar5 + 0x40);
          fVar1 = *(float *)(iVar5 + 0x38);
          fStack_8c = *(float *)(iVar5 + 0x3c);
        }
        fStack_88 = (float)param_1[0x203] - fStack_88;
        fStack_8c = (float)param_1[0x202] - fStack_8c;
        local_b8 = fStack_8c * fStack_8c +
                   fStack_88 * fStack_88 +
                   ((float)param_1[0x201] - fVar1) * ((float)param_1[0x201] - fVar1);
        if (local_b8 < 6.25) {
          pfVar3 = (float *)FUN_0001fdd0();
          fStack_bc = -pfVar3[2];
          fStack_c0 = -pfVar3[1];
          fStack_c4 = -*pfVar3;
        }
        else {
          FUN_00232180(0);
          iVar5 = param_1[0xff];
          if ((iVar5 == 0) || (iVar5 == -1)) {
            iVar5 = (**(code **)(*param_1 + 0x40))();
            pfVar3 = (float *)(iVar5 + 0x24);
          }
          else {
            pfVar3 = (float *)(iVar5 + 0x38);
          }
          uStack_74 = *(undefined8 *)(pfVar3 + 1);
          fStack_ac = param_4 - pfVar3[2];
          fStack_b0 = param_3 - pfVar3[1];
          fStack_b4 = param_2 - *pfVar3;
          fVar1 = fStack_b0 * fStack_b0 + fStack_ac * fStack_ac + fStack_b4 * fStack_b4;
          if (1.4210855e-14 <= fVar1) {
            auVar8 = rsqrtss(in_XMM0,fVar1);
            fStack_94 = auVar8._0_4_;
            fStack_c4 = fStack_94 * fStack_b4;
            fStack_98 = fStack_94 * fStack_b0;
            fStack_94 = fStack_94 * fStack_ac;
            fStack_90 = fStack_c4;
            fStack_8c = fStack_98;
            fStack_88 = fStack_94;
          }
          else {
            fStack_b4 = fStack_a8;
            fStack_b0 = (float)uStack_a4;
            fStack_ac = uStack_a4._4_4_;
            fStack_98 = (float)uStack_a4;
            fStack_94 = uStack_a4._4_4_;
            fStack_c4 = fStack_a8;
          }
          fStack_9c = fStack_c4;
          if (25.0 <= local_b8) {
            fStack_c0 = fStack_98;
            fStack_bc = fStack_94;
          }
          else {
            local_b8 = (SQRT(local_b8) - 2.5) * 0.4;
            pfVar3 = (float *)FUN_0001fdd0();
            fStack_7c = -pfVar3[2];
            fStack_80 = -pfVar3[1];
            fStack_84 = -*pfVar3;
            fStack_90 = local_b8 * fStack_9c;
            fStack_8c = local_b8 * fStack_98;
            fVar1 = 1.0 - local_b8;
            uStack_74 = CONCAT44(local_b8 * fStack_94,fStack_8c);
            auVar8._0_4_ = fVar1 * fStack_84;
            auVar8._4_4_ = fVar1 * 0.0;
            auVar8._8_4_ = fVar1 * fStack_80;
            auVar8._12_4_ = fVar1 * fStack_7c;
            uStack_a4 = auVar8._8_8_;
            fStack_bc = local_b8 * fStack_94 + auVar8._12_4_;
            fStack_c0 = fStack_8c + auVar8._8_4_;
            fStack_c4 = fStack_90 + auVar8._0_4_;
            auVar7 = rsqrtss(auVar8,fStack_c0 * fStack_c0 +
                                    fStack_bc * fStack_bc + fStack_c4 * fStack_c4);
            local_b8 = auVar7._0_4_;
            fStack_c4 = local_b8 * fStack_c4;
            fStack_c0 = fStack_c0 * local_b8;
            fStack_bc = fStack_bc * local_b8;
            fStack_a8 = auVar8._0_4_;
            fStack_88 = auVar8._12_4_;
            fStack_78 = fStack_90;
          }
        }
        if ((param_1[0x102] == 0) || (param_1[0x102] == -1)) {
          pfVar3 = (float *)FUN_0001fdd0();
          fVar1 = -(fStack_c4 * *pfVar3 + fStack_c0 * pfVar3[1] + fStack_bc * pfVar3[2]);
        }
        else {
          pfVar3 = (float *)FUN_0001fdd0();
          fVar1 = fStack_c4 * *pfVar3 + fStack_c0 * pfVar3[1] + fStack_bc * pfVar3[2];
        }
        if (fVar1 <= 0.0) {
          pfVar3 = (float *)FUN_0001fdd0();
          fStack_bc = -pfVar3[2];
          fStack_c0 = -pfVar3[1];
          fStack_c4 = -*pfVar3;
          FUN_00232290(iVar6,0,auStack_48,&fStack_c4);
          pauVar4 = (undefined1 (*) [16])FUN_002334b0();
          in_XMM0 = *pauVar4;
          uStack_4c = *(undefined4 *)pauVar4[2];
          uStack_5c = *(undefined4 *)pauVar4[1];
          uStack_58 = *(undefined4 *)(pauVar4[1] + 4);
          uStack_54 = *(undefined4 *)(pauVar4[1] + 8);
          uStack_50 = *(undefined4 *)(pauVar4[1] + 0xc);
          puVar9 = auStack_6c;
          auStack_6c = in_XMM0;
        }
        else {
          FUN_00232290(iVar6,0,auStack_6c,&fStack_c4);
          pauVar4 = (undefined1 (*) [16])FUN_002334b0();
          in_XMM0 = *pauVar4;
          uStack_28 = *(undefined4 *)pauVar4[2];
          uStack_38 = *(undefined4 *)pauVar4[1];
          uStack_34 = *(undefined4 *)(pauVar4[1] + 4);
          uStack_30 = *(undefined4 *)(pauVar4[1] + 8);
          uStack_2c = *(undefined4 *)(pauVar4[1] + 0xc);
          puVar9 = auStack_48;
          auStack_48 = in_XMM0;
        }
        FUN_0003d7a0(param_1 + 0xbb,puVar9);
      }
    }
  }
  if (param_1[0x9b] != -1) {
    iVar6 = param_1[0xba];
    cVar2 = (**(code **)(*(int *)(iVar6 + 0x178) + 0x20))();
    if ((cVar2 != '\0') && (*(int *)(iVar6 + 0x198) != 0)) {
      iVar6 = param_1[0xba];
      cVar2 = (**(code **)(*(int *)(iVar6 + 0x178) + 0x20))();
      if (cVar2 == '\0') {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(iVar6 + 0x198);
      }
      if (iVar6 != 0) {
        iVar5 = param_1[0xfa];
        if ((iVar5 == 0) || (iVar5 == -1)) {
          iVar5 = param_1[0x1b];
          local_c8 = *(float *)(iVar5 + 0x40);
          fVar1 = *(float *)(iVar5 + 0x38);
          fStack_cc = *(float *)(iVar5 + 0x3c);
        }
        else {
          local_c8 = *(float *)(iVar5 + 0x40);
          fVar1 = *(float *)(iVar5 + 0x38);
          fStack_cc = *(float *)(iVar5 + 0x3c);
        }
        local_c8 = (float)param_1[0x203] - local_c8;
        fStack_cc = (float)param_1[0x202] - fStack_cc;
        uStack_a4 = CONCAT44(local_c8,fStack_cc);
        local_b8 = fStack_cc * fStack_cc +
                   local_c8 * local_c8 +
                   ((float)param_1[0x201] - fVar1) * ((float)param_1[0x201] - fVar1);
        if (local_b8 < 6.25) {
          pfVar3 = (float *)FUN_0001fdd0();
          fStack_bc = -pfVar3[2];
          fStack_c0 = -pfVar3[1];
          fStack_c4 = -*pfVar3;
        }
        else {
          FUN_00232180(0);
          iVar5 = param_1[0xfe];
          if ((iVar5 == 0) || (iVar5 == -1)) {
            iVar5 = (**(code **)(*param_1 + 0x40))();
            pfVar3 = (float *)(iVar5 + 0x24);
          }
          else {
            pfVar3 = (float *)(iVar5 + 0x38);
          }
          uStack_74 = *(undefined8 *)(pfVar3 + 1);
          fStack_ac = param_4 - pfVar3[2];
          fStack_b0 = param_3 - pfVar3[1];
          fStack_b4 = param_2 - *pfVar3;
          fVar1 = fStack_b0 * fStack_b0 + fStack_ac * fStack_ac + fStack_b4 * fStack_b4;
          if (1.4210855e-14 <= fVar1) {
            auVar8 = rsqrtss(in_XMM0,fVar1);
            fStack_94 = auVar8._0_4_;
            fStack_a8 = fStack_94 * fStack_b4;
            fStack_98 = fStack_94 * fStack_b0;
            fStack_94 = fStack_94 * fStack_ac;
            uStack_a4 = CONCAT44(fStack_94,fStack_98);
          }
          else {
            fStack_b4 = fStack_a8;
            fStack_b0 = (float)uStack_a4;
            fStack_ac = uStack_a4._4_4_;
            fStack_98 = (float)uStack_a4;
            fStack_94 = uStack_a4._4_4_;
          }
          fStack_9c = fStack_a8;
          if (25.0 <= local_b8) {
            fStack_c4 = fStack_a8;
            fStack_c0 = fStack_98;
            fStack_bc = fStack_94;
          }
          else {
            local_b8 = (SQRT(local_b8) - 2.5) * 0.4;
            pfVar3 = (float *)FUN_0001fdd0();
            fStack_7c = -pfVar3[2];
            fStack_80 = -pfVar3[1];
            fStack_84 = -*pfVar3;
            fStack_a8 = local_b8 * fStack_9c;
            fStack_8c = local_b8 * fStack_98;
            fVar1 = 1.0 - local_b8;
            uStack_a4 = CONCAT44(local_b8 * fStack_94,fStack_8c);
            auVar7._0_4_ = fVar1 * fStack_84;
            auVar7._4_4_ = fVar1 * 0.0;
            auVar7._8_4_ = fVar1 * fStack_80;
            auVar7._12_4_ = fVar1 * fStack_7c;
            uStack_74 = auVar7._8_8_;
            fStack_bc = local_b8 * fStack_94 + auVar7._12_4_;
            fStack_c0 = fStack_8c + auVar7._8_4_;
            fStack_c4 = fStack_a8 + auVar7._0_4_;
            auVar8 = rsqrtss(auVar7,fStack_c0 * fStack_c0 +
                                    fStack_bc * fStack_bc + fStack_c4 * fStack_c4);
            local_b8 = auVar8._0_4_;
            fStack_c4 = local_b8 * fStack_c4;
            fStack_c0 = fStack_c0 * local_b8;
            fStack_bc = fStack_bc * local_b8;
            fStack_90 = fStack_a8;
            fStack_88 = auVar7._12_4_;
            fStack_78 = auVar7._0_4_;
          }
        }
        if ((param_1[0x102] == 0) || (param_1[0x102] == -1)) {
          pfVar3 = (float *)FUN_0001fdd0();
          fVar1 = -(fStack_c4 * *pfVar3 + fStack_c0 * pfVar3[1] + fStack_bc * pfVar3[2]);
        }
        else {
          pfVar3 = (float *)FUN_0001fdd0();
          fVar1 = fStack_c4 * *pfVar3 + fStack_c0 * pfVar3[1] + fStack_bc * pfVar3[2];
        }
        if (0.0 < fVar1) {
          FUN_00232290(iVar6,0,auStack_48,&fStack_c4);
          pauVar4 = (undefined1 (*) [16])FUN_002334b0();
          auStack_6c = *pauVar4;
          uStack_4c = *(undefined4 *)pauVar4[2];
          uStack_5c = *(undefined4 *)pauVar4[1];
          uStack_58 = *(undefined4 *)(pauVar4[1] + 4);
          uStack_54 = *(undefined4 *)(pauVar4[1] + 8);
          uStack_50 = *(undefined4 *)(pauVar4[1] + 0xc);
          FUN_0003d7a0(param_1 + 199,auStack_6c);
          return;
        }
        pfVar3 = (float *)FUN_0001fdd0();
        fStack_bc = -pfVar3[2];
        fStack_c0 = -pfVar3[1];
        fStack_c4 = -*pfVar3;
        FUN_00232290(iVar6,0,auStack_48,&fStack_c4);
        pauVar4 = (undefined1 (*) [16])FUN_002334b0();
        auStack_6c = *pauVar4;
        uStack_4c = *(undefined4 *)pauVar4[2];
        uStack_5c = *(undefined4 *)pauVar4[1];
        uStack_58 = *(undefined4 *)(pauVar4[1] + 4);
        uStack_54 = *(undefined4 *)(pauVar4[1] + 8);
        uStack_50 = *(undefined4 *)(pauVar4[1] + 0xc);
        FUN_0003d7a0(param_1 + 199,auStack_6c);
      }
    }
  }
  return;
}
