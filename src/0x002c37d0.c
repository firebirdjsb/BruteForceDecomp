/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8992EAE863FC22009B77AE36F8FDB55426C0022671CCC2E3B0B8518C13C42121
 * Entry: 0x002c37d0, Ghidra index: 10048, label: FUN_002c37d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002c37d0(int param_1,float *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 *puVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  float10 fVar14;
  float local_11c;
  float local_118;
  float *local_114;
  float local_104;
  float local_100;
  float local_fc;
  undefined4 local_f8;
  float *local_f4;
  float *local_f0;
  float local_ec;
  float local_e8;
  float fStack_e4;
  undefined4 local_e0;
  undefined4 local_d0;
  float local_cc;
  float local_c8 [4];
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  undefined8 local_ac;
  undefined4 local_a4 [5];
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  undefined8 local_7c;
  undefined4 local_74 [5];
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  undefined8 local_4c;
  undefined4 local_44 [5];
  float local_30 [10];
  float local_8;
  
  iVar13 = 0;
  local_f8 = 0;
  fVar14 = (float10)FUN_002c2e90(param_1,&local_104);
  local_c8[0] = *(float *)(*(int *)(param_1 + 0x10) + 0x94);
  local_cc = *(float *)(param_1 + 0x54) * *(float *)(param_1 + 0x44) * *param_2;
  local_c8[1] = (float)*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x94);
  pfVar11 = local_30 + 3;
  iVar12 = 2;
  do {
    *pfVar11 = 0.0;
    pfVar11 = pfVar11 + 4;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  iVar12 = 0;
  pfVar11 = local_30 + 1;
  do {
    pbVar5 = (byte *)local_c8[iVar12];
    if ((*pbVar5 & 0xc) == 0) {
      FUN_002ba160(pbVar5,*(int *)(param_1 + 0x40) + (0x90 - (int)(local_30 + 1)) + (int)pfVar11,
                   pbVar5 + 0xac,pbVar5 + 0x9c,pfVar11 + -1);
    }
    else {
      pfVar11[1] = 0.0;
      *pfVar11 = 0.0;
      pfVar11[-1] = 0.0;
    }
    iVar12 = iVar12 + 1;
    pfVar11 = pfVar11 + 4;
  } while (iVar12 < 2);
  local_d0 = 0;
  fVar6 = (SUB84(local_30._4_8_,4) - SUB84(local_30._20_8_,4)) * local_fc;
  puVar10 = local_a4;
  fVar8 = ((float)local_30._4_8_ - (float)local_30._20_8_) * local_100;
  fVar7 = (local_30[0] - local_30[4]) * local_104;
  iVar12 = 2;
  do {
    *puVar10 = 0;
    puVar10 = puVar10 + 4;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  puVar10 = local_74;
  iVar12 = 2;
  do {
    *puVar10 = 0;
    puVar10 = puVar10 + 4;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  puVar10 = local_44;
  iVar12 = 2;
  do {
    *puVar10 = 0;
    puVar10 = puVar10 + 4;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  local_114 = local_c8;
  local_11c = 0.0;
  local_118 = 1.0;
  iVar12 = 0;
  do {
    pbVar5 = (byte *)*local_114;
    *(undefined4 *)((int)local_a4 + iVar12 + -4) = 0;
    *(undefined4 *)((int)&local_ac + iVar12) = 0;
    *(undefined4 *)((int)&local_b0 + iVar12) = 0;
    *(undefined4 *)((int)local_74 + iVar12 + -4) = 0;
    *(undefined4 *)((int)&local_7c + iVar12) = 0;
    *(undefined4 *)((int)&local_80 + iVar12) = 0;
    if ((*pbVar5 & 0xc) == 0) {
      local_f4 = (float *)((int)&local_50 + iVar12);
      local_ec = local_104 * local_118;
      local_f0 = (float *)(pbVar5 + 0xfc);
      local_e0 = 0;
      local_e8 = local_100 * local_118;
      fStack_e4 = local_fc * local_118;
      uVar2 = *(undefined8 *)(pbVar5 + 0x100);
      uVar3 = *(undefined8 *)(pbVar5 + 0x110);
      uVar4 = *(undefined8 *)(pbVar5 + 0x120);
      *local_f4 = *local_f0 * local_ec + *(float *)(pbVar5 + 0x10c) * local_e8 +
                  *(float *)(pbVar5 + 0x11c) * fStack_e4;
      *(ulonglong *)((int)&local_4c + iVar12) =
           CONCAT44((float)((ulonglong)uVar2 >> 0x20) * local_ec +
                    (float)((ulonglong)uVar3 >> 0x20) * local_e8 +
                    (float)((ulonglong)uVar4 >> 0x20) * fStack_e4,
                    (float)uVar2 * local_ec + (float)uVar3 * local_e8 + (float)uVar4 * fStack_e4);
      local_b4 = 0;
      local_84 = 0;
      iVar1 = iVar12 + 0x90;
      pfVar11 = (float *)(*(int *)(param_1 + 0x40) + iVar1);
      local_8 = *pfVar11 * *(float *)((int)&local_4c + iVar12) - pfVar11[1] * *local_f4;
      local_90 = (*(float *)(*(int *)(param_1 + 0x40) + 4 + iVar1) *
                  *(float *)((int)local_44 + iVar12 + -4) -
                 pfVar11[2] * *(float *)((int)&local_4c + iVar12)) * *(float *)(pbVar5 + 0x34);
      fVar9 = (pfVar11[2] * *local_f4 - *pfVar11 * *(float *)((int)local_44 + iVar12 + -4)) *
              *(float *)(pbVar5 + 0x38);
      local_88 = local_8 * *(float *)(pbVar5 + 0x3c);
      local_b8 = *(float *)(pbVar5 + 0x40);
      local_c8[2] = local_ec * local_b8;
      local_c8[3] = local_e8 * local_b8;
      local_b8 = fStack_e4 * local_b8;
      *(float *)((int)&local_ac + iVar12) = local_c8[3];
      *(float *)((int)&local_b0 + iVar12) = local_c8[2];
      local_8c = fVar9;
      *(float *)((int)local_a4 + iVar12 + -4) = local_b8;
      *(float *)((int)&local_7c + iVar12) = fVar9;
      *(float *)((int)&local_80 + iVar12) = local_90;
      *(float *)((int)local_74 + iVar12 + -4) = local_88;
      local_54 = 0;
      FUN_002ba160(pbVar5,*(int *)(param_1 + 0x40) + iVar1,local_c8 + 2,&local_90,&local_60);
      local_11c = local_60 * local_ec + local_5c * local_e8 + local_58 * fStack_e4 + local_11c;
    }
    local_118 = local_118 * -1.0;
    local_114 = local_114 + 1;
    iVar12 = iVar12 + 0x10;
  } while (iVar12 < 0x20);
  if (1e-10 < local_11c) {
    local_11c = ((float)fVar14 * *param_2 - (fVar7 + fVar8 + fVar6)) / local_11c;
    if (local_cc < ABS(local_11c)) {
      local_11c = local_cc;
    }
    pfVar11 = local_c8;
    do {
      pbVar5 = (byte *)*pfVar11;
      if ((*pbVar5 & 0xc) == 0) {
        uVar2 = *(undefined8 *)((int)&local_ac + iVar13);
        *(float *)(pbVar5 + 0xac) =
             *(float *)(pbVar5 + 0xac) + *(float *)((int)&local_b0 + iVar13) * local_11c;
        *(ulonglong *)(pbVar5 + 0xb0) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(pbVar5 + 0xb0) >> 0x20) +
                      (float)((ulonglong)uVar2 >> 0x20) * local_11c,
                      (float)*(undefined8 *)(pbVar5 + 0xb0) + (float)uVar2 * local_11c);
        uVar2 = *(undefined8 *)((int)&local_7c + iVar13);
        *(float *)(pbVar5 + 0x9c) =
             *(float *)(pbVar5 + 0x9c) + *(float *)((int)&local_80 + iVar13) * local_11c;
        *(ulonglong *)(pbVar5 + 0xa0) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(pbVar5 + 0xa0) >> 0x20) +
                      (float)((ulonglong)uVar2 >> 0x20) * local_11c,
                      (float)*(undefined8 *)(pbVar5 + 0xa0) + (float)uVar2 * local_11c);
      }
      iVar13 = iVar13 + 0x10;
      pfVar11 = pfVar11 + 1;
    } while (iVar13 < 0x20);
  }
  return;
}
