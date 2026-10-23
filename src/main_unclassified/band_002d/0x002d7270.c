/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 397859D86B5779D7A84A7F27DB91101B4202A176AE3DA98FD00FE65F759BF97C
 * Entry: 0x002d7270, Ghidra index: 10247, label: FUN_002d7270
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b86e0;
extern uint32_t DAT_003b86f0;
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
FUN_002d7270(int *param_1,int *param_2,int *param_3,undefined4 *param_4,float *param_5,int param_6,
            int param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  float *pfVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  float10 fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int local_16c;
  uint local_168;
  float local_160;
  float local_15c;
  float local_154;
  float local_150;
  float local_14c;
  undefined4 local_148;
  float local_144;
  undefined8 local_140;
  undefined4 local_138;
  float local_134;
  float local_130;
  float local_12c;
  undefined4 local_128;
  undefined1 local_124 [12];
  undefined4 local_118;
  float *local_114;
  float local_110;
  float local_10c;
  float fStack_108;
  undefined4 local_104;
  float local_100;
  uint local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec [5];
  float local_d8;
  float local_d4;
  float local_d0;
  undefined4 local_cc;
  uint local_c8 [4];
  float local_b8;
  float local_b4;
  float *local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  int *local_a0;
  int local_9c;
  float *local_98;
  int local_94 [2];
  undefined1 *local_8c;
  float local_88 [3];
  undefined4 local_7c;
  int *local_78;
  int *local_74;
  float *local_70;
  int local_6c;
  int local_68;
  undefined1 *local_64;
  int *local_50;
  undefined4 local_4c;
  undefined4 *local_48;
  int local_44;
  int local_40;
  float *local_3c;
  int *local_28;
  int *local_24;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  float *local_14;
  
  param_1[1] = param_1[1] + -1;
  iVar14 = 0;
  if ((param_1[1] < 0) && (iVar4 = FUN_002c15b0(param_2,param_3), iVar4 != 0)) {
    return 2;
  }
  local_118 = 0;
  local_148 = 0;
  local_128 = 0;
  local_138 = 0;
  uVar1 = *(undefined8 *)((float *)*param_4 + 1);
  local_144 = *(float *)*param_4 - (float)param_4[2];
  fVar20 = (float)uVar1 - (float)*(undefined8 *)(param_4 + 3);
  fVar22 = (float)((ulonglong)uVar1 >> 0x20) -
           (float)((ulonglong)*(undefined8 *)(param_4 + 3) >> 0x20);
  local_140 = CONCAT44(fVar22,fVar20);
  fVar22 = local_144 * (float)param_4[0x16] +
           fVar22 * (float)param_4[0x18] + fVar20 * (float)param_4[0x17];
  fVar20 = (float)param_4[0x16];
  auVar16._0_4_ = fVar20 * fVar20;
  auVar16._4_4_ = 0;
  fVar20 = (float)*(undefined8 *)(param_4 + 0x17);
  fVar21 = (float)((ulonglong)*(undefined8 *)(param_4 + 0x17) >> 0x20);
  auVar16._8_4_ = fVar20 * fVar20;
  auVar16._12_4_ = fVar21 * fVar21;
  local_fc = (uint)fVar22 >> 0x1f;
  auVar16 = rsqrtss(auVar16,auVar16._8_4_ + auVar16._12_4_ + auVar16._0_4_);
  local_150 = (float)param_4[0x17];
  local_14c = (float)param_4[0x18];
  local_154 = (float)param_4[0x16];
  iVar4 = *(int *)(param_7 + 8);
  local_134 = local_154 * *(float *)(iVar4 + 0x10) +
              *(float *)(iVar4 + 0x14) * local_150 + *(float *)(iVar4 + 0x18) * local_14c;
  local_130 = *(float *)(iVar4 + 0x24) * local_150 +
              *(float *)(iVar4 + 0x28) * local_14c + *(float *)(iVar4 + 0x20) * local_154;
  local_12c = *(float *)(iVar4 + 0x34) * local_150 +
              *(float *)(iVar4 + 0x38) * local_14c + *(float *)(iVar4 + 0x30) * local_154;
  FUN_002b73d0(*(int *)(param_6 + 8) + 0x10,&local_134,local_124);
  *(float *)(*param_1 + 0x54) = ABS(auVar16._0_4_ * fVar22);
  iVar4 = *param_1;
  *(float *)(iVar4 + 0x54) = *(float *)(iVar4 + 0x54) - *(float *)(iVar4 + 0x50);
  iVar4 = *param_1;
  fVar20 = ((float)(int)local_fc - 0.5) * auVar16._0_4_;
  fVar20 = fVar20 + fVar20;
  *(float *)(iVar4 + 0x60) = local_134 * fVar20;
  *(float *)(iVar4 + 100) = local_130 * fVar20;
  *(float *)(iVar4 + 0x68) = local_12c * fVar20;
  local_104 = 0;
  uVar1 = *(undefined8 *)(*(int *)(param_6 + 8) + 0x54);
  uVar2 = *(undefined8 *)(*(int *)(param_7 + 8) + 0x54);
  local_110 = *(float *)(*(int *)(param_6 + 8) + 0x50) - *(float *)(*(int *)(param_7 + 8) + 0x50);
  local_10c = (float)uVar1 - (float)uVar2;
  fStack_108 = (float)((ulonglong)uVar1 >> 0x20) - (float)((ulonglong)uVar2 >> 0x20);
  iVar4 = *param_1;
  iVar10 = 4;
  *(float *)(iVar4 + 0x58) =
       local_110 * *(float *)(iVar4 + 0x60) +
       local_10c * *(float *)(iVar4 + 100) + fStack_108 * *(float *)(iVar4 + 0x68);
  puVar5 = &local_7c;
  do {
    *puVar5 = 0;
    puVar5 = puVar5 + 10;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  pfVar6 = local_ec;
  iVar4 = 2;
  do {
    *pfVar6 = 0.0;
    pfVar6 = pfVar6 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FUN_002cd120(param_6,&local_f8);
  FUN_002cd120(param_6,local_ec + 1);
  local_a0 = param_2 + ((*param_2 << 1) >> 0x11);
  local_9c = param_4[0x13];
  local_78 = param_2;
  local_98 = &local_f8;
  local_94[1] = param_6;
  local_94[0] = param_7;
  local_8c = local_124;
  local_74 = (int *)param_4[0x13] + ((*(int *)param_4[0x13] << 1) >> 0x11);
  local_70 = local_ec + 1;
  local_64 = local_124;
  local_68 = param_6;
  local_6c = param_7;
  local_50 = param_3 + ((*param_3 << 1) >> 0x11);
  local_4c = param_4[0x12];
  local_48 = param_4 + 2;
  local_3c = &local_154;
  local_40 = param_7;
  local_44 = param_6;
  local_28 = param_3;
  local_18 = param_7;
  local_1c = param_6;
  local_24 = (int *)param_4[0x12] + ((*(int *)param_4[0x12] << 1) >> 0x11);
  local_20 = param_4 + 6;
  local_14 = &local_154;
  pfVar6 = local_88;
  do {
    puVar3 = (uint *)pfVar6[-6];
    puVar7 = (uint *)((uint)puVar3 & 0xfffffff0) +
             ((*(uint *)((uint)puVar3 & 0xfffffff0) & 0xfff) + 1) * -4;
    uVar8 = *puVar7;
    pfVar12 = (float *)((*puVar3 & 0xffff) * 0x10 + uVar8 + (int)puVar7);
    pfVar13 = (float *)((*(uint *)((int)puVar3 + *(int *)(&DAT_003b86e0 + ((uint)puVar3 & 0xc))) &
                        0xffff) * 0x10 + uVar8 + (int)puVar7);
    pfVar11 = (float *)((*(uint *)((int)puVar3 + *(int *)(&DAT_003b86f0 + ((uint)puVar3 & 0xc))) &
                        0xffff) * 0x10 + uVar8 + (int)puVar7);
    fVar20 = *pfVar12;
    uVar1 = *(undefined8 *)(pfVar12 + 1);
    uVar2 = *(undefined8 *)(pfVar13 + 1);
    fVar22 = *pfVar13 - fVar20;
    fVar24 = (float)uVar1;
    fVar21 = (float)uVar2 - fVar24;
    fVar25 = (float)((ulonglong)uVar1 >> 0x20);
    fVar23 = (float)((ulonglong)uVar2 >> 0x20) - fVar25;
    uVar1 = *(undefined8 *)(pfVar11 + 1);
    fVar20 = *pfVar11 - fVar20;
    fVar24 = (float)uVar1 - fVar24;
    fVar25 = (float)((ulonglong)uVar1 >> 0x20) - fVar25;
    auVar17._0_4_ = fVar21 * fVar25 - fVar23 * fVar24;
    auVar17._4_4_ = fVar22 * fVar20 - fVar22 * fVar25;
    auVar17._8_4_ = fVar23 * fVar20 - fVar22 * fVar25;
    auVar17._12_4_ = fVar22 * fVar24 - fVar21 * fVar20;
    *pfVar6 = auVar17._0_4_;
    *(longlong *)(pfVar6 + 1) = auVar17._8_8_;
    pfVar11 = (float *)pfVar6[-1];
    local_c8[iVar14] =
         (uint)(*pfVar11 * *pfVar6 + pfVar11[1] * pfVar6[1] + pfVar11[2] * pfVar6[2]) >> 0x1f ^
         iVar14 >> 1 ^ local_fc;
    iVar14 = iVar14 + 1;
    pfVar6 = pfVar6 + 10;
  } while (iVar14 < 4);
  fVar20 = 0.0;
  iVar14 = 0;
  local_15c = -4e-06;
  local_16c = 0;
  local_160 = 0.0;
  local_168 = 0;
  local_b0 = &local_144;
  pfVar6 = local_88;
  do {
    pfVar11 = local_b0;
    uVar8 = local_c8[local_168] ^ local_168 ^ local_fc;
    local_138 = 0;
    local_114 = (&local_98)[(local_168 ^ local_fc) * 10];
    uVar1 = *(undefined8 *)(local_114 + 1);
    uVar2 = *(undefined8 *)((&local_98)[(local_168 ^ local_fc ^ 1) * 10] + 1);
    *local_b0 = *local_114 - *(&local_98)[(local_168 ^ local_fc ^ 1) * 10];
    *(ulonglong *)(pfVar11 + 1) =
         CONCAT44((float)((ulonglong)uVar1 >> 0x20) - (float)((ulonglong)uVar2 >> 0x20),
                  (float)uVar1 - (float)uVar2);
    fVar22 = local_140._4_4_ * pfVar6[2] + local_144 * *pfVar6 + (float)local_140 * pfVar6[1];
    if (fVar22 < 0.0) {
      auVar18._0_4_ = *pfVar6 * *pfVar6;
      auVar18._4_4_ = 0;
      fVar21 = (float)*(undefined8 *)(pfVar6 + 1);
      fVar23 = (float)((ulonglong)*(undefined8 *)(pfVar6 + 1) >> 0x20);
      auVar18._8_4_ = fVar21 * fVar21;
      auVar18._12_4_ = fVar23 * fVar23;
      local_ac = auVar18._8_4_ + auVar18._12_4_ + auVar18._0_4_;
      local_b4 = local_ac;
      auVar16 = rsqrtss(auVar18,local_ac);
      local_100 = auVar16._0_4_;
      local_114 = &local_144;
      auVar19._0_4_ = local_144 * local_144;
      auVar19._4_4_ = 0;
      auVar19._8_4_ = (float)local_140 * (float)local_140;
      auVar19._12_4_ = local_140._4_4_ * local_140._4_4_;
      local_b8 = auVar19._8_4_ + auVar19._12_4_ + auVar19._0_4_;
      local_a8 = local_b8;
      auVar16 = rsqrtss(auVar19,local_b8);
      local_a4 = auVar16._0_4_;
      fVar22 = auVar16._0_4_ * fVar22 * local_100;
      if ((fVar22 < local_15c) && (FUN_002cd2b0((&local_98)[uVar8 * 10]), 0.0 < local_d8)) {
        local_16c = (&local_9c)[uVar8 * 10];
        iVar14 = local_94[uVar8 * 10];
        fVar20 = pfVar6[-6];
        local_160 = pfVar6[-2];
        local_110 = local_d8;
        local_10c = local_d4;
        fStack_108 = local_d0;
        local_104 = local_cc;
        local_15c = fVar22;
      }
    }
    local_168 = local_168 + 1;
    pfVar6 = pfVar6 + 10;
  } while ((int)local_168 < 4);
  if (local_16c == 0) {
    iVar14 = *(int *)(param_6 + 0x10);
    *(int **)(iVar14 + 0x14) = param_2;
    uVar9 = 1;
    *(undefined2 *)(iVar14 + 0x1a) = 1;
    iVar14 = *(int *)(param_7 + 0x10);
    *(int **)(iVar14 + 0x14) = param_3;
    *(undefined2 *)(iVar14 + 0x1a) = 1;
    if (local_c8[1] + local_c8[0] == 2) {
      iVar14 = *(int *)(param_6 + 0x10);
      *(int **)(iVar14 + 0x14) = param_2;
      *(undefined2 *)(iVar14 + 0x1a) = 5;
      iVar14 = *(int *)(param_7 + 0x10);
      *(int **)(iVar14 + 0x14) = param_3;
      *(undefined2 *)(iVar14 + 0x1a) = 2;
      fVar20 = param_5[2] / (param_5[3] + param_5[2]);
      fVar22 = 1.0 - fVar20;
      param_1[2] = (int)(local_f8 * fVar22 + local_ec[1] * fVar20);
      param_1[3] = (int)(local_f4 * fVar22 + local_ec[2] * fVar20);
      param_1[4] = (int)(local_ec[3] * fVar20 + local_f0 * fVar22);
      return 3;
    }
    if (local_c8[3] + local_c8[2] == 2) {
      iVar14 = *(int *)(param_6 + 0x10);
      *(undefined2 *)(iVar14 + 0x1a) = 2;
      *(int **)(iVar14 + 0x14) = param_2;
      fVar24 = *param_5 / (param_5[1] + *param_5);
      fVar25 = 1.0 - fVar24;
      fVar20 = (float)param_4[4];
      fVar22 = (float)param_4[8];
      fVar21 = (float)param_4[7];
      fVar23 = (float)param_4[3];
      param_1[2] = (int)(fVar24 * (float)param_4[6] + fVar25 * (float)param_4[2]);
      param_1[3] = (int)(fVar25 * fVar23 + fVar24 * fVar21);
      param_1[4] = (int)(fVar24 * fVar22 + fVar25 * fVar20);
      iVar14 = *(int *)(param_7 + 0x10);
      *(int **)(iVar14 + 0x14) = param_3;
      *(undefined2 *)(iVar14 + 0x1a) = 5;
      return 3;
    }
  }
  else {
    iVar4 = *param_1;
    if (*(int *)(iVar14 + 0x10) != (*(uint *)(iVar4 + 0x14) >> 8 & 3) * 0x1c + 0x18 + iVar4) {
      *(uint *)(iVar4 + 0x14) = *(uint *)(iVar4 + 0x14) ^ 0x100;
    }
    if (-1 < (int)((uint)fStack_108 | (uint)local_10c | (uint)local_110)) {
      local_cc = 0;
      local_c8[3] = 0;
      FUN_00150930();
      FUN_002b7360(*(int *)((int)local_160 + 8) + 0x10,local_c8,&local_d8);
      uVar9 = FUN_002d6910(local_16c,&local_d8,fVar20,iVar14,local_160);
      return uVar9;
    }
    if (0.0 <= fStack_108) {
      uVar9 = FUN_002d6f30(local_16c,*(int *)(&DAT_003b86e0 + ((uint)fVar20 & 0xc)) + (int)fVar20,
                           iVar14,local_160);
      return uVar9;
    }
    if (local_10c < 0.0) {
      uVar8 = (uint)fVar20 & 0xc;
      fVar15 = (float10)FUN_002cdfb0(local_16c,*(int *)(&DAT_003b86e0 + uVar8) + (int)fVar20,iVar14)
      ;
      local_100 = (float)fVar15;
      fVar15 = (float10)FUN_002cdfb0(local_16c,
                                     *(int *)(&DAT_003b86f0 + uVar8) + (int)fVar20 +
                                     ((*(int *)(*(int *)(&DAT_003b86f0 + uVar8) + (int)fVar20) << 1)
                                     >> 0x11) * 4,iVar14);
      if (fVar15 < (float10)local_100) {
        uVar9 = FUN_002d6f30(local_16c,*(int *)(&DAT_003b86f0 + uVar8) + (int)fVar20,iVar14,
                             local_160);
        return uVar9;
      }
      iVar4 = *(int *)(&DAT_003b86e0 + uVar8);
    }
    else {
      iVar4 = *(int *)(&DAT_003b86f0 + ((uint)fVar20 & 0xc));
    }
    uVar9 = FUN_002d6f30(local_16c,iVar4 + (int)fVar20,iVar14,local_160);
  }
  return uVar9;
}
