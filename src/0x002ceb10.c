/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CDD83C103F5DDB9E79591D0E7A8E540006EED1383676BBAC9D15EED94D83B776
 * Entry: 0x002ceb10, Ghidra index: 10182, label: FUN_002ceb10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00402560;
extern uint32_t DAT_00402564;
extern uint32_t PTR_DAT_00402570;
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002ceb10(float *param_1)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  int *in_ECX;
  byte *extraout_ECX;
  byte *pbVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  float fVar17;
  float fVar18;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float local_4f8 [8];
  float afStack_4d8 [6];
  float local_4c0;
  float local_4b0;
  float local_4a8 [4];
  float local_498;
  float local_494;
  float local_490;
  float local_488;
  float local_484;
  float local_480;
  float afStack_478 [12];
  float afStack_448 [12];
  float local_418 [12];
  float afStack_3e8 [12];
  undefined1 local_3b8 [12];
  undefined4 local_3ac [9];
  float local_388 [3];
  undefined4 local_37c [9];
  float local_358;
  float local_354;
  float fStack_350;
  float local_34c [5];
  float local_338;
  float local_334;
  float fStack_330;
  float *local_328;
  float local_324 [4];
  float local_314;
  float local_310;
  float local_30c;
  float local_304;
  float local_300;
  float local_2fc;
  float *local_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4 [5];
  float local_2d0;
  float local_2cc;
  float local_2c8;
  float local_2c0;
  float local_2bc;
  float fStack_2b8;
  byte *local_2b4;
  float local_2b0;
  float local_2ac;
  float fStack_2a8;
  float local_2a4 [5];
  float local_290;
  float local_28c;
  float fStack_288;
  float local_280;
  float local_27c;
  float fStack_278;
  byte *local_274;
  float local_270;
  float local_26c;
  float local_268;
  byte *local_264;
  byte *local_260;
  float *local_25c;
  byte *local_258;
  float local_254;
  float local_250;
  float fStack_24c;
  byte *local_248;
  undefined4 local_238;
  undefined4 local_228;
  float *local_224;
  undefined1 local_220 [12];
  undefined4 local_214;
  undefined1 local_210 [12];
  undefined4 local_204;
  undefined1 local_200 [12];
  undefined4 local_1f4;
  undefined1 local_1f0 [12];
  undefined4 local_1e4;
  float local_1e0;
  undefined8 local_1dc;
  undefined4 local_1d4;
  undefined1 local_1d0 [12];
  undefined4 local_1c4;
  undefined1 local_1c0 [12];
  undefined4 local_1b4;
  float local_1b0;
  undefined8 local_1ac;
  byte *local_1a4;
  undefined1 local_1a0 [12];
  undefined4 local_194;
  float local_190 [3];
  undefined4 local_184;
  float local_180;
  float local_17c;
  float local_178;
  undefined4 local_174;
  float local_170;
  float local_16c;
  float local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  uint local_14c;
  uint local_148;
  byte *local_144;
  byte *local_140;
  byte *local_13c;
  float *local_138;
  float local_134;
  float local_130;
  float fStack_12c;
  byte *local_128;
  float local_124;
  float local_120;
  float fStack_11c;
  byte *local_118;
  float local_114;
  undefined8 local_110;
  byte *local_108;
  float local_104;
  float local_100;
  float fStack_fc;
  byte *local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  byte *local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  byte *local_d8;
  float local_d4 [7];
  byte *local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  float local_94 [3];
  byte *local_88;
  float local_84;
  float local_80;
  float fStack_7c;
  undefined4 local_78;
  float local_74 [5];
  undefined8 local_60;
  byte *local_58;
  float local_54;
  float local_50;
  float local_4c;
  float fStack_48;
  byte *local_44;
  float local_40;
  float local_3c;
  float fStack_38;
  undefined4 local_34;
  float *local_30;
  float *local_2c;
  float *local_28;
  float local_24 [3];
  byte *local_18;
  float *local_14;
  float *local_10;
  float *local_c;
  int *local_8;
  
  local_110 = (ulonglong)(uint)local_110._4_4_ << 0x20;
  local_54 = *param_1;
  if (in_ECX[0x2c] == 0) {
    local_260 = (byte *)0x0;
  }
  else {
    local_260 = *(byte **)(in_ECX[0x2c] + 0x90);
  }
  if (in_ECX[0x3e] == 0) {
    local_258 = (byte *)0x0;
  }
  else {
    local_258 = *(byte **)(in_ECX[0x3e] + 0x90);
  }
  if (local_260 == (byte *)0x0) {
    local_25c = (float *)PTR_DAT_00402570;
  }
  else {
    local_25c = (float *)(local_260 + 0xfc);
  }
  if (local_258 == (byte *)0x0) {
    local_224 = (float *)PTR_DAT_00402570;
  }
  else {
    local_224 = (float *)(local_258 + 0xfc);
  }
  local_328 = (float *)(in_ECX + 0x1c);
  pfVar7 = local_2a4;
  iVar10 = 3;
  local_8 = in_ECX;
  do {
    *pfVar7 = 0.0;
    pfVar7 = pfVar7 + 4;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  FUN_002b6df0();
  pfVar7 = local_34c;
  iVar10 = 3;
  do {
    *pfVar7 = 0.0;
    pfVar7 = pfVar7 + 4;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  FUN_002b6240(&local_2b0,local_224,&local_358);
  piVar9 = local_8;
  pfVar7 = (float *)local_8[0x2d];
  if (pfVar7 == (float *)0x0) {
    pfVar7 = (float *)(local_8 + 0x1c);
    pfVar5 = local_4f8;
    for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
      *pfVar5 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar5 = pfVar5 + 1;
    }
    pfVar7 = local_4f8;
  }
  pfVar5 = local_324;
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *pfVar5 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    pfVar5 = pfVar5 + 1;
  }
  pfVar7 = (float *)piVar9[0x3f];
  if (pfVar7 == (float *)0x0) {
    pfVar7 = (float *)(piVar9 + 0x2e);
    pfVar5 = local_4f8;
    for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
      *pfVar5 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar5 = pfVar5 + 1;
    }
    pfVar7 = local_4f8;
  }
  pfVar5 = local_4a8;
  for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
    *pfVar5 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    pfVar5 = pfVar5 + 1;
  }
  puVar4 = local_37c;
  iVar10 = 3;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 4;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  local_2f4 = local_324;
  puVar4 = local_3ac;
  iVar10 = 3;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 4;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  pfVar7 = local_2e4;
  iVar10 = 3;
  do {
    *pfVar7 = 0.0;
    pfVar7 = pfVar7 + 4;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  if ((uint)*(byte *)((int)local_8 + 0x109) + (uint)*(byte *)((int)local_8 + 0x107) == 1) {
    iVar10 = (int)*(char *)((int)local_8 + 0x103);
    local_2f4 = local_388;
    fVar14 = local_4a8[iVar10 * 4];
    fVar17 = local_4a8[iVar10 * 4 + 1];
    fVar18 = local_4a8[iVar10 * 4 + 2];
    local_128 = (byte *)0x0;
    local_58 = (byte *)0x0;
    local_134 = fVar14 * *local_224 + local_224[1] * fVar17 + local_224[2] * fVar18;
    local_130 = local_224[5] * fVar17 + local_224[6] * fVar18 + local_224[4] * fVar14;
    fStack_12c = local_224[9] * fVar17 + local_224[10] * fVar18 + local_224[8] * fVar14;
    FUN_002b73d0(local_25c,&local_134,local_74 + 4);
    local_b8 = (byte *)0x0;
    iVar10 = (int)*(char *)((int)local_8 + 0x103);
    local_d4[5] = local_324[iVar10 * 4 + 1];
    local_d4[6] = local_324[iVar10 * 4 + 2];
    local_d4[4] = local_324[iVar10 * 4];
    local_50 = (float)local_60 * local_d4[6] - local_d4[5] * local_60._4_4_;
    local_f8 = (byte *)0x0;
    local_10 = local_d4 + 4;
    local_28 = local_74 + 4;
    local_c = &local_104;
    local_4c = local_d4[4] * local_60._4_4_ - local_74[4] * local_d4[6];
    fStack_48 = local_74[4] * local_d4[5] - local_d4[4] * (float)local_60;
    FUN_002b6ac0();
    FUN_002b6ed0();
    pfVar7 = local_25c;
    FUN_002b6df0();
    pfVar5 = local_224;
    FUN_002b6240(local_3b8,local_224,&local_2f0);
    local_1a4 = (byte *)0x0;
    local_1b0 = local_4c * local_324[1] + local_50 * local_324[0] + local_324[2] * fStack_48;
    local_1ac._0_4_ = fStack_48 * local_30c + local_4c * local_310 + local_50 * local_314;
    local_1ac._4_4_ = fStack_48 * local_2fc + local_4c * local_300 + local_50 * local_304;
    local_10 = (float *)(&local_1b0)[*(char *)((int)local_8 + 0x105)];
    local_18 = (byte *)0x0;
    local_c = (float *)(&local_1b0)[(char)local_8[0x41]];
    local_1a4 = (byte *)0x0;
    local_248 = (byte *)0x0;
    local_254 = local_50 * *pfVar7 + pfVar7[1] * local_4c + pfVar7[2] * fStack_48;
    local_250 = pfVar7[5] * local_4c + pfVar7[6] * fStack_48 + pfVar7[4] * local_50;
    fStack_24c = pfVar7[9] * local_4c + pfVar7[10] * fStack_48 + pfVar7[8] * local_50;
    FUN_002b73d0(pfVar5,&local_254,local_24);
    piVar9 = local_8;
    local_1b0 = local_24[1] * local_4a8[1] + local_24[2] * local_4a8[2] + local_4a8[0] * local_24[0]
    ;
    local_1ac._0_4_ = local_24[1] * local_494 + local_24[2] * local_490 + local_498 * local_24[0];
    local_1ac._4_4_ = local_24[1] * local_484 + local_24[2] * local_480 + local_488 * local_24[0];
    iVar10 = local_8[0x41];
    cVar1 = *(char *)((int)local_8 + 0x105);
    fVar12 = (float10)fpatan((float10)(&local_1b0)[(char)iVar10],(float10)(&local_1b0)[cVar1]);
    fVar13 = (float10)fpatan((float10)(float)local_c,(float10)(float)local_10);
    fVar12 = fVar12 - fVar13;
    if ((float10)3.1415927 < fVar12) {
      fVar12 = fVar12 - (float10)6.2831855;
    }
    if (fVar12 < (float10)-3.1415927) {
      fVar12 = fVar12 + (float10)6.2831855;
    }
    local_94[*(char *)((int)local_8 + 0x103)] = (float)fVar12;
    local_94[(char)iVar10] = 0.0;
    local_94[cVar1] = 0.0;
  }
  else {
    FUN_002b6df0();
    FUN_002b6240(local_3b8,local_224,&local_2f0);
    piVar9 = local_8;
    pfVar7 = local_25c;
  }
  iVar10 = (uint)*(byte *)((int)piVar9 + 0x109) + (uint)*(byte *)((int)piVar9 + 0x107);
  if (iVar10 == 3) {
    pfVar5 = local_4f8 + 3;
    iVar10 = 3;
    do {
      *pfVar5 = 0.0;
      pfVar5 = pfVar5 + 4;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    FUN_002b6df0();
    FUN_002b41e0(local_24,local_4f8);
    fVar14 = local_24[2] * local_24[2] * local_24[2];
    fVar17 = local_24[1] * local_24[1] * local_24[1];
    fVar18 = local_24[0] * local_24[0] * local_24[0];
    local_94[0] = fVar18 * 0.24 +
                  local_24[0] + local_24[0] + fVar18 * local_24[0] * local_24[0] * 0.58;
    local_94[1] = fVar17 * 0.24 +
                  local_24[1] + local_24[1] + fVar17 * local_24[1] * local_24[1] * 0.58;
    local_94[2] = fVar14 * 0.24 +
                  local_24[2] + local_24[2] + local_24[2] * local_24[2] * fVar14 * 0.58;
    piVar9 = local_8;
    if ((float)local_18 < 0.0) {
      local_94[0] = local_94[0] * -1.0;
      local_94[1] = local_94[1] * -1.0;
      local_94[2] = local_94[2] * -1.0;
    }
  }
  else if (iVar10 == 2) {
    pfVar5 = local_4f8 + 3;
    iVar10 = 3;
    do {
      *pfVar5 = 0.0;
      pfVar5 = pfVar5 + 4;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    FUN_002b6df0();
    piVar9 = local_8;
    iVar6 = (int)*(char *)((int)local_8 + 0x105);
    iVar10 = local_8[0x41];
    local_24[0] = local_4f8[iVar6];
    local_18 = (byte *)0x0;
    local_24[1] = local_4f8[iVar6 + 4];
    cVar1 = *(char *)((int)local_8 + 0x103);
    local_24[2] = afStack_4d8[iVar6];
    fVar12 = (float10)fpatan((float10)local_24[(char)iVar10],(float10)local_24[iVar6]);
    local_94[2] = 0.0;
    local_94[1] = 0.0;
    local_94[0] = 0.0;
    local_94[cVar1] = (float)-fVar12;
    fVar12 = (float10)fpatan((float10)local_24[cVar1],(float10)local_24[iVar6]);
    local_94[(char)iVar10] = (float)fVar12;
  }
  else if (iVar10 == 0) {
    local_94[2] = 0.0;
    local_94[1] = 0.0;
    local_94[0] = 0.0;
  }
  local_154 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_184 = 0;
  local_1d4 = 0;
  local_214 = 0;
  local_158 = 0;
  local_15c = 0;
  local_160 = 0;
  FUN_002b7360(piVar9 + 0x1c,&local_160,&local_b4);
  FUN_002b7360(local_8 + 0x2e,&local_160,&local_a4);
  FUN_00150930();
  pfVar5 = local_224;
  FUN_00150930();
  FUN_002b7360(pfVar5,local_190,local_220);
  local_10 = (float *)param_1[1];
  local_78 = 0;
  local_34 = 0;
  local_e8 = (byte *)0x0;
  local_d8 = (byte *)0x0;
  if (local_260 == (byte *)0x0) {
    local_ec = 0.0;
    local_f0 = 0.0;
    local_f4 = 0.0;
  }
  else {
    FUN_002ba160(local_260,&local_b4,local_260 + 0xac,local_260 + 0x9c,&local_f4);
  }
  if (local_258 == (byte *)0x0) {
    local_dc = 0.0;
    local_e0 = 0.0;
    local_e4 = 0.0;
  }
  else {
    FUN_002ba160(local_258,&local_a4,local_258 + 0xac,local_258 + 0x9c,&local_e4);
  }
  pbVar8 = (byte *)0x0;
  local_58 = (byte *)0x0;
  local_b8 = (byte *)0x0;
  local_f8 = (byte *)0x0;
  local_74[4] = local_2b0 * local_f4 + fStack_2a8 * local_ec + local_2ac * local_f0;
  local_60._0_4_ = local_2a4[1] * local_f4 + local_2a4[3] * local_ec + local_2a4[2] * local_f0;
  local_60._4_4_ = local_290 * local_f4 + fStack_288 * local_ec + local_28c * local_f0;
  local_d4[4] = local_2b0 * local_e4 + fStack_2a8 * local_dc + local_2ac * local_e0;
  local_d4[5] = local_2a4[1] * local_e4 + local_2a4[3] * local_dc + local_2a4[2] * local_e0;
  local_d4[6] = local_290 * local_e4 + fStack_288 * local_dc + local_28c * local_e0;
  local_104 = local_1e0 - local_190[0];
  local_100 = (float)local_1dc - (float)local_190._4_8_;
  fStack_fc = (float)((ulonglong)local_1dc >> 0x20) - SUB84(local_190._4_8_,4);
  local_134 = local_100 * local_2ac + fStack_fc * fStack_2a8 + local_2b0 * local_104;
  local_130 = local_100 * local_2a4[2] + fStack_fc * local_2a4[3] + local_2a4[1] * local_104;
  fStack_12c = local_100 * local_28c + fStack_fc * fStack_288 + local_290 * local_104;
  fVar14 = local_d4[4] - local_74[4];
  fVar17 = local_d4[5] - (float)local_60;
  fVar18 = local_d4[6] - local_60._4_4_;
  local_84 = local_134 + fVar14 * local_54;
  local_80 = local_130 + fVar17 * local_54;
  fStack_7c = fStack_12c + fVar18 * local_54;
  if ((local_8[8] & 2U) != 0) {
    if ((float)local_8[0xe] <= local_84) {
      if (local_84 <= (float)local_8[0x14]) {
        local_8[8] = local_8[8] & 0xfffffffe;
      }
      else {
        local_84 = fVar14 * local_54 + (local_134 - (float)local_8[0x14]) * (float)local_8[0x1a];
        local_8[8] = local_8[8] | 1;
      }
    }
    else {
      local_84 = fVar14 * local_54 + (local_134 - (float)local_8[0xe]) * (float)local_8[0x1a];
      local_8[8] = local_8[8] | 1;
    }
  }
  if ((local_8[9] & 2U) != 0) {
    if ((float)local_8[0xf] <= local_80) {
      if (local_80 <= (float)local_8[0x15]) {
        local_8[9] = local_8[9] & 0xfffffffe;
      }
      else {
        local_80 = fVar17 * local_54 + (local_130 - (float)local_8[0x15]) * (float)local_8[0x1a];
        local_8[9] = local_8[9] | 1;
      }
    }
    else {
      local_80 = fVar17 * local_54 + (local_130 - (float)local_8[0xf]) * (float)local_8[0x1a];
      local_8[9] = local_8[9] | 1;
    }
  }
  if ((local_8[10] & 2U) != 0) {
    if ((float)local_8[0x10] <= fStack_7c) {
      if (fStack_7c <= (float)local_8[0x16]) {
        local_8[10] = local_8[10] & 0xfffffffe;
      }
      else {
        fStack_7c = fVar18 * local_54 + (fStack_12c - (float)local_8[0x16]) * (float)local_8[0x1a];
        local_8[10] = local_8[10] | 1;
      }
    }
    else {
      fStack_7c = fVar18 * local_54 + (fStack_12c - (float)local_8[0x10]) * (float)local_8[0x1a];
      local_8[10] = local_8[10] | 1;
    }
  }
  local_108 = (byte *)0x0;
  local_118 = (byte *)0x0;
  fVar14 = -((float)local_10 * (float)local_8[7]);
  local_84 = local_84 * fVar14;
  local_80 = local_80 * fVar14;
  fStack_7c = fStack_7c * fVar14;
  if (local_260 == (byte *)0x0) {
    local_110._4_4_ = 0.0;
    local_110._0_4_ = 0.0;
    local_110._0_4_ = 0.0;
    local_110._4_4_ = 0.0;
    local_114 = 0.0;
  }
  else {
    local_114 = *(float *)(local_260 + 0x9c) * *local_2f4 +
                local_2f4[1] * *(float *)(local_260 + 0xa0) +
                local_2f4[2] * *(float *)(local_260 + 0xa4);
    local_110._0_4_ =
         local_2f4[5] * *(float *)(local_260 + 0xa0) +
         local_2f4[6] * *(float *)(local_260 + 0xa4) + local_2f4[4] * *(float *)(local_260 + 0x9c);
    local_110._4_4_ =
         local_2f4[9] * *(float *)(local_260 + 0xa0) +
         local_2f4[10] * *(float *)(local_260 + 0xa4) + local_2f4[8] * *(float *)(local_260 + 0x9c);
  }
  if (local_258 == (byte *)0x0) {
    fStack_11c = 0.0;
    local_120 = 0.0;
    local_124 = 0.0;
  }
  else {
    local_124 = local_2f0 * *(float *)(local_258 + 0x9c) +
                local_2ec * *(float *)(local_258 + 0xa0) + local_2e8 * *(float *)(local_258 + 0xa4);
    local_120 = local_2e4[1] * *(float *)(local_258 + 0x9c) +
                local_2e4[2] * *(float *)(local_258 + 0xa0) +
                local_2e4[3] * *(float *)(local_258 + 0xa4);
    fStack_11c = local_2d0 * *(float *)(local_258 + 0x9c) +
                 local_2cc * *(float *)(local_258 + 0xa0) + local_2c8 * *(float *)(local_258 + 0xa4)
    ;
  }
  local_18 = (byte *)0x0;
  local_24[0] = local_124 - local_114;
  local_24[1] = local_120 - (float)local_110;
  local_24[2] = fStack_11c - local_110._4_4_;
  local_14 = (float *)local_54;
  local_28 = local_24;
  local_c = &local_40;
  local_30 = &local_40;
  local_40 = local_94[0] + local_24[0] * local_54;
  local_3c = local_94[1] + local_24[1] * local_54;
  fStack_38 = local_94[2] + local_24[2] * local_54;
  if ((local_8[0xb] & 2U) != 0) {
    if ((float)local_8[0x11] <= local_40) {
      if (local_40 <= (float)local_8[0x17]) {
        local_8[0xb] = local_8[0xb] & 0xfffffffe;
      }
      else {
        local_40 = local_24[0] * local_54 +
                   (local_94[0] - (float)local_8[0x17]) * (float)local_8[0x1a];
        local_8[0xb] = local_8[0xb] | 1;
      }
    }
    else {
      local_40 = local_24[0] * local_54 +
                 (local_94[0] - (float)local_8[0x11]) * (float)local_8[0x1a];
      local_8[0xb] = local_8[0xb] | 1;
    }
  }
  if ((local_8[0xc] & 2U) != 0) {
    if ((float)local_8[0x12] <= local_3c) {
      if (local_3c <= (float)local_8[0x18]) {
        local_8[0xc] = local_8[0xc] & 0xfffffffe;
      }
      else {
        local_3c = local_24[1] * local_54 +
                   (local_94[1] - (float)local_8[0x18]) * (float)local_8[0x1a];
        local_8[0xc] = local_8[0xc] | 1;
      }
    }
    else {
      local_3c = local_24[1] * local_54 +
                 (local_94[1] - (float)local_8[0x12]) * (float)local_8[0x1a];
      local_8[0xc] = local_8[0xc] | 1;
    }
  }
  if ((local_8[0xd] & 2U) != 0) {
    if ((float)local_8[0x13] <= fStack_38) {
      if (fStack_38 <= (float)local_8[0x19]) {
        local_8[0xd] = local_8[0xd] & 0xfffffffe;
      }
      else {
        fStack_38 = local_24[2] * local_54 +
                    (local_94[2] - (float)local_8[0x19]) * (float)local_8[0x1a];
        local_8[0xd] = local_8[0xd] | 1;
      }
    }
    else {
      fStack_38 = local_24[2] * local_54 +
                  (local_94[2] - (float)local_8[0x13]) * (float)local_8[0x1a];
      local_8[0xd] = local_8[0xd] | 1;
    }
  }
  fVar14 = -((float)local_10 * (float)local_8[7]);
  local_40 = local_40 * fVar14;
  local_3c = local_3c * fVar14;
  fStack_38 = fStack_38 * fVar14;
  *(undefined1 *)((int)local_8 + 0x10a) = 0;
  *(byte *)((int)local_8 + 0x10a) = *(char *)((int)local_8 + 0x10a) + (*(byte *)(local_8 + 8) & 1);
  *(byte *)((int)local_8 + 0x10a) = *(char *)((int)local_8 + 0x10a) + (*(byte *)(local_8 + 9) & 1);
  *(byte *)((int)local_8 + 0x10a) = *(char *)((int)local_8 + 0x10a) + (*(byte *)(local_8 + 10) & 1);
  *(byte *)((int)local_8 + 0x10a) = *(char *)((int)local_8 + 0x10a) + (*(byte *)(local_8 + 0xb) & 1)
  ;
  *(byte *)((int)local_8 + 0x10a) = *(char *)((int)local_8 + 0x10a) + (*(byte *)(local_8 + 0xc) & 1)
  ;
  *(byte *)((int)local_8 + 0x10a) = *(char *)((int)local_8 + 0x10a) + (*(byte *)(local_8 + 0xd) & 1)
  ;
  if (*(char *)((int)local_8 + 0x107) == '\x01') {
    iVar10 = (int)*(char *)((int)local_8 + 0x103);
    local_10 = local_24;
    fVar14 = local_4a8[iVar10 * 4];
    local_c = pfVar7;
    fVar17 = local_4a8[iVar10 * 4 + 1];
    fVar18 = local_4a8[iVar10 * 4 + 2];
    local_18 = (byte *)0x0;
    local_58 = (byte *)0x0;
    local_24[0] = fVar14 * *local_224 + local_224[1] * fVar17 + local_224[2] * fVar18;
    local_24[1] = local_224[4] * fVar14 + local_224[5] * fVar17 + local_224[6] * fVar18;
    local_30 = local_74 + 4;
    local_24[2] = local_224[8] * fVar14 + local_224[9] * fVar17 + local_224[10] * fVar18;
    local_74[4] = *pfVar7 * local_24[0] + pfVar7[4] * local_24[1] + pfVar7[8] * local_24[2];
    fVar14 = (float)*(undefined8 *)(pfVar7 + 1) * local_24[0] +
             (float)*(undefined8 *)(pfVar7 + 5) * local_24[1] +
             (float)*(undefined8 *)(pfVar7 + 9) * local_24[2];
    fVar17 = (float)((ulonglong)*(undefined8 *)(pfVar7 + 1) >> 0x20) * local_24[0] +
             (float)((ulonglong)*(undefined8 *)(pfVar7 + 5) >> 0x20) * local_24[1] +
             (float)((ulonglong)*(undefined8 *)(pfVar7 + 9) >> 0x20) * local_24[2];
    local_60 = CONCAT44(fVar17,fVar14);
    iVar10 = (int)*(char *)((int)local_8 + 0x103);
    local_30 = (float *)(local_324[iVar10 * 4] * local_74[4] +
                        fVar14 * local_324[iVar10 * 4 + 1] + fVar17 * local_324[iVar10 * 4 + 2]);
    if ((float)local_30 < 1.0) {
      fVar12 = (float10)FUN_002b72a0(local_30);
      pbVar8 = extraout_ECX;
    }
    else {
      fVar12 = (float10)0.0;
    }
    fVar12 = (float10)3.1415927 - ABS(fVar12);
    if (fVar12 < (float10)1.0) {
      local_40 = (float)((float10)local_40 * fVar12);
      local_3c = (float)((float10)local_3c * fVar12);
      fStack_38 = (float)((float10)fStack_38 * fVar12);
    }
  }
  pfVar7 = local_418 + 3;
  iVar10 = 6;
  do {
    *pfVar7 = (float)pbVar8;
    pfVar7 = pfVar7 + 4;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  pfVar7 = afStack_478 + 3;
  iVar10 = 6;
  do {
    *pfVar7 = (float)pbVar8;
    pfVar5 = local_2f4;
    pfVar7 = pfVar7 + 4;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  local_14 = &local_50;
  local_30 = (float *)(0x20 - (int)&local_50);
  piVar9 = local_8;
  local_28 = (float *)pbVar8;
  do {
    pbVar3 = local_258;
    if ((((byte *)((int)local_30 + (int)local_14))[(int)piVar9] & 1) != 0) {
      fStack_48 = 0.0;
      local_4c = 0.0;
      local_50 = 0.0;
      local_44 = pbVar8;
      *local_14 = 1.0;
      local_104 = -local_50;
      local_100 = -local_4c;
      fStack_fc = -fStack_48;
      local_114 = *local_328 * local_50 + local_328[4] * local_4c + local_328[8] * fStack_48;
      local_110._0_4_ =
           (float)*(undefined8 *)(local_328 + 1) * local_50 +
           (float)*(undefined8 *)(local_328 + 5) * local_4c +
           (float)*(undefined8 *)(local_328 + 9) * fStack_48;
      local_110._4_4_ =
           (float)((ulonglong)*(undefined8 *)(local_328 + 1) >> 0x20) * local_50 +
           (float)((ulonglong)*(undefined8 *)(local_328 + 5) >> 0x20) * local_4c +
           (float)((ulonglong)*(undefined8 *)(local_328 + 9) >> 0x20) * fStack_48;
      local_280 = local_358 * local_104 + local_34c[1] * local_100 + local_338 * fStack_fc;
      local_27c = local_354 * local_104 + local_34c[2] * local_100 + local_334 * fStack_fc;
      fStack_278 = fStack_350 * local_104 + local_34c[3] * local_100 + fStack_330 * fStack_fc;
      local_134 = local_2b0 * local_50 + local_2a4[1] * local_4c + local_290 * fStack_48;
      local_130 = local_2ac * local_50 + local_2a4[2] * local_4c + local_28c * fStack_48;
      fStack_12c = fStack_2a8 * local_50 + local_2a4[3] * local_4c + fStack_288 * fStack_48;
      local_2c = &local_1b0;
      local_10 = &local_104;
      local_c = &local_2b0;
      local_1b0 = local_2b0 * local_104 + local_2a4[1] * local_100 + local_290 * fStack_fc;
      local_2bc = local_2ac * local_104 + local_2a4[2] * local_100 + local_28c * fStack_fc;
      fStack_2b8 = fStack_2a8 * local_104 + local_2a4[3] * local_100 + fStack_288 * fStack_fc;
      local_1ac = CONCAT44(fStack_2b8,local_2bc);
      if ((local_260 == pbVar8) || ((*local_260 & 0xc) != 0)) {
        fStack_11c = 0.0;
        local_120 = 0.0;
        local_124 = 0.0;
        local_94[2] = 0.0;
        local_94[1] = 0.0;
        local_94[0] = 0.0;
      }
      else {
        local_4b0 = (float)local_110 * local_b4 - local_b0 * local_114;
        local_94[0] = (local_110._4_4_ * local_b0 - local_ac * (float)local_110) *
                      *(float *)(local_260 + 0x34);
        local_94[1] = (local_ac * local_114 - local_110._4_4_ * local_b4) *
                      *(float *)(local_260 + 0x38);
        local_94[2] = local_4b0 * *(float *)(local_260 + 0x3c);
        fStack_11c = *(float *)(local_260 + 0x40);
        local_124 = local_134 * fStack_11c;
        local_120 = local_130 * fStack_11c;
        fStack_11c = fStack_12c * fStack_11c;
      }
      if ((local_258 == pbVar8) || ((*local_258 & 0xc) != 0)) {
        fStack_2b8 = 0.0;
        local_2bc = 0.0;
        local_2c0 = 0.0;
        local_268 = 0.0;
        local_26c = 0.0;
        local_270 = 0.0;
      }
      else {
        local_4c0 = local_a4 * local_27c - local_280 * local_a0;
        local_270 = (fStack_278 * local_a0 - local_9c * local_27c) * *(float *)(local_258 + 0x34);
        local_26c = (local_280 * local_9c - local_a4 * fStack_278) * *(float *)(local_258 + 0x38);
        local_268 = local_4c0 * *(float *)(local_258 + 0x3c);
        fVar14 = *(float *)(local_258 + 0x40);
        local_2c0 = local_1b0 * fVar14;
        local_2bc = local_2bc * fVar14;
        fStack_2b8 = fStack_2b8 * fVar14;
      }
      local_2b4 = pbVar8;
      local_274 = pbVar8;
      local_264 = pbVar8;
      local_248 = pbVar8;
      local_1a4 = pbVar8;
      local_128 = pbVar8;
      local_118 = pbVar8;
      local_108 = pbVar8;
      local_f8 = pbVar8;
      local_e8 = pbVar8;
      local_d8 = pbVar8;
      local_b8 = pbVar8;
      local_88 = pbVar8;
      local_58 = pbVar8;
      local_18 = pbVar8;
      if (local_260 == pbVar8) {
        local_ec = 0.0;
        local_f0 = 0.0;
        local_f4 = 0.0;
      }
      else {
        FUN_002ba160(local_260,&local_b4,&local_124,local_94,&local_f4);
        pbVar8 = (byte *)0x0;
      }
      if (pbVar3 == pbVar8) {
        local_dc = 0.0;
        local_e0 = 0.0;
        local_e4 = 0.0;
      }
      else {
        FUN_002ba160(pbVar3,&local_a4,&local_2c0,&local_270,&local_e4);
        pbVar8 = (byte *)0x0;
      }
      pfVar7 = local_28;
      local_74[4] = local_f4 * local_2b0 + local_f0 * local_2ac + local_ec * fStack_2a8;
      fVar14 = local_f4 * local_2a4[1] + local_f0 * local_2a4[2] + local_ec * local_2a4[3];
      fVar17 = local_f4 * local_290 + local_f0 * local_28c + local_ec * fStack_288;
      local_60 = CONCAT44(fVar17,fVar14);
      local_d4[4] = local_e4 * local_2b0 + local_e0 * local_2ac + local_dc * fStack_2a8;
      local_d4[5] = local_e4 * local_2a4[1] + local_e0 * local_2a4[2] + local_dc * local_2a4[3];
      local_d4[6] = local_e4 * local_290 + local_e0 * local_28c + local_dc * fStack_288;
      fVar14 = local_d4[5] - fVar14;
      fVar17 = local_d4[6] - fVar17;
      *(float *)((int)local_418 + (int)local_28) = local_d4[4] - local_74[4];
      *(float *)((int)pfVar7 + (int)(local_418 + 1)) = fVar14;
      *(float *)((int)pfVar7 + (int)(local_418 + 2)) = fVar17;
      local_254 = local_94[0] * *pfVar5 + pfVar5[1] * local_94[1] + pfVar5[2] * local_94[2];
      local_c = &local_254;
      local_10 = local_24;
      local_250 = pfVar5[4] * local_94[0] + pfVar5[5] * local_94[1] + pfVar5[6] * local_94[2];
      fStack_24c = pfVar5[8] * local_94[0] + pfVar5[9] * local_94[1] + pfVar5[10] * local_94[2];
      local_24[0] = local_2f0 * local_270 + local_26c * local_2ec + local_268 * local_2e8;
      local_24[1] = local_2e4[1] * local_270 + local_26c * local_2e4[2] + local_268 * local_2e4[3];
      local_24[2] = local_2d0 * local_270 + local_26c * local_2cc + local_268 * local_2c8;
      fVar14 = local_24[1] - local_250;
      fVar17 = local_24[2] - fStack_24c;
      *(float *)((int)afStack_478 + (int)pfVar7) = local_24[0] - local_254;
      *(float *)((int)pfVar7 + (int)(afStack_478 + 1)) = fVar14;
      *(float *)((int)pfVar7 + (int)(afStack_478 + 2)) = fVar17;
      piVar9 = local_8;
    }
    local_14 = local_14 + 1;
    local_28 = (float *)((int)local_28 + 0x10);
  } while ((int)local_28 < 0x30);
  local_2c = local_94 + 1;
  local_28 = (float *)0x2c;
  local_14 = (float *)pbVar8;
  do {
    if ((*(byte *)((int)local_28 + (int)piVar9) & 1) != 0) {
      local_60 = 0;
      local_74[4] = 0.0;
      *(undefined4 *)((int)local_2c + (int)local_28) = 0x3f800000;
      local_124 = -0.0;
      local_120 = -0.0;
      fStack_11c = -0.0;
      local_274 = pbVar8;
      local_248 = pbVar8;
      local_118 = pbVar8;
      local_58 = pbVar8;
      FUN_002b73d0(pfVar5,local_74 + 4,&local_280);
      FUN_002b73d0(&local_2f0,&local_124,&local_254);
      pfVar7 = local_14;
      local_18 = (byte *)0x0;
      if ((local_260 == (byte *)0x0) || ((*local_260 & 0xc) != 0)) {
        local_24[2] = 0.0;
        local_24[1] = 0.0;
        local_24[0] = 0.0;
      }
      else {
        local_24[0] = local_280 * *(float *)(local_260 + 0x34);
        local_24[1] = local_27c * *(float *)(local_260 + 0x38);
        local_4c0 = fStack_278 * *(float *)(local_260 + 0x3c);
        local_24[2] = local_4c0;
      }
      if ((local_258 == (byte *)0x0) || ((*local_258 & 0xc) != 0)) {
        fStack_48 = 0.0;
        local_4c = 0.0;
        local_50 = 0.0;
      }
      else {
        local_50 = local_254 * *(float *)(local_258 + 0x34);
        local_4c = local_250 * *(float *)(local_258 + 0x38);
        local_4b0 = fStack_24c * *(float *)(local_258 + 0x3c);
        fStack_48 = local_4b0;
      }
      local_f8 = (byte *)0x0;
      local_1a4 = (byte *)0x0;
      local_2b4 = (byte *)0x0;
      local_108 = (byte *)0x0;
      if (local_260 == (byte *)0x0) {
        fVar14 = 0.0;
        local_d4[5] = 0.0;
        local_d4[4] = 0.0;
      }
      else {
        local_d4[4] = local_24[1] * local_ac - local_24[2] * local_b0;
        local_d4[5] = local_24[2] * local_b4 - local_ac * local_24[0];
        fVar14 = local_b0 * local_24[0] - local_24[1] * local_b4;
      }
      if (local_258 == (byte *)0x0) {
        fVar17 = 0.0;
        local_130 = 0.0;
        local_134 = 0.0;
      }
      else {
        local_134 = local_4c * local_9c - fStack_48 * local_a0;
        local_130 = fStack_48 * local_a4 - local_9c * local_50;
        fVar17 = local_a0 * local_50 - local_4c * local_a4;
      }
      local_c = &local_104;
      local_10 = &local_1b0;
      local_104 = local_d4[4] * *local_328 + local_328[1] * local_d4[5] + local_328[2] * fVar14;
      local_100 = local_328[4] * local_d4[4] + local_328[5] * local_d4[5] + local_328[6] * fVar14;
      local_30 = (float *)((int)afStack_3e8 + (int)local_14);
      fStack_fc = local_328[8] * local_d4[4] + local_328[9] * local_d4[5] + local_328[10] * fVar14;
      local_1b0 = local_358 * local_134 + local_354 * local_130 + fStack_350 * fVar17;
      fVar18 = local_34c[1] * local_134 + local_34c[2] * local_130 + local_34c[3] * fVar17;
      fVar14 = local_338 * local_134 + local_334 * local_130 + fStack_330 * fVar17;
      local_1ac = CONCAT44(fVar14,fVar18);
      fVar18 = fVar18 - local_100;
      fVar14 = fVar14 - fStack_fc;
      *local_30 = local_1b0 - local_104;
      *(float *)((int)pfVar7 + (int)(afStack_3e8 + 1)) = fVar18;
      *(float *)((int)pfVar7 + (int)(afStack_3e8 + 2)) = fVar14;
      FUN_002b7070();
      local_c = &local_2c0;
      local_10 = &local_114;
      local_30 = (float *)((int)afStack_448 + (int)pfVar7);
      local_114 = local_2f0 * local_50 + local_4c * local_2ec + fStack_48 * local_2e8;
      local_110._0_4_ = local_2e4[1] * local_50 + local_4c * local_2e4[2] + fStack_48 * local_2e4[3]
      ;
      local_110._4_4_ = local_2d0 * local_50 + local_4c * local_2cc + fStack_48 * local_2c8;
      fVar14 = (float)local_110 - local_2bc;
      fVar17 = local_110._4_4_ - fStack_2b8;
      *local_30 = local_114 - local_2c0;
      *(float *)((int)pfVar7 + (int)(afStack_448 + 1)) = fVar14;
      *(float *)((int)pfVar7 + (int)(afStack_448 + 2)) = fVar17;
      pbVar8 = (byte *)0x0;
      piVar9 = local_8;
    }
    local_28 = (float *)((int)local_28 + 4);
    local_14 = (float *)((int)local_14 + 0x10);
  } while ((int)local_28 < 0x38);
  local_14c = (uint)*(byte *)((int)piVar9 + 0x10a);
  uVar11 = local_14c + 3 & 0xfffffffc;
  local_150 = 0x3089705f;
  local_148 = uVar11;
  local_144 = pbVar8;
  local_140 = pbVar8;
  local_13c = pbVar8;
  local_28 = (float *)uVar11;
  FUN_002ebea0();
  local_2c = (float *)(uVar11 << 2);
  local_144 = &stack0xfffffafc;
  FUN_002ebea0();
  local_13c = &stack0xfffffafc;
  FUN_002ebea0();
  local_138 = local_74 + 2;
  local_144 = (byte *)((uint)(local_144 + 0xc) & 0xfffffff0);
  iVar10 = 0;
  pfVar7 = local_418 + 1;
  local_14 = (float *)0x20;
  local_30 = &local_a4;
  local_140 = &stack0xfffffafc;
  local_10 = pfVar7;
  do {
    if ((*(byte *)((int)local_14 + (int)piVar9) & 1) != 0) {
      pfVar5 = (float *)0;
      if ((*(byte *)(piVar9 + 8) & 1) != 0) {
        *(float *)((int)local_144 + iVar10 * 4) = pfVar7[-1];
        pfVar5 = local_28;
        piVar9 = local_8;
      }
      if ((*(byte *)(piVar9 + 9) & 1) != 0) {
        *(float *)((int)local_144 + ((int)pfVar5 + iVar10) * 4) = *pfVar7;
        pfVar5 = (float *)((int)pfVar5 + (int)local_28);
        piVar9 = local_8;
      }
      if ((*(byte *)(piVar9 + 10) & 1) != 0) {
        *(float *)((int)local_144 + ((int)pfVar5 + iVar10) * 4) = pfVar7[1];
        pfVar5 = (float *)((int)pfVar5 + (int)local_28);
        piVar9 = local_8;
      }
      local_10 = (float *)0x3;
      iVar6 = ((int)pfVar5 + iVar10) * 4;
      local_c = (float *)0x2c;
      do {
        if ((*(byte *)((int)local_c + (int)piVar9) & 1) != 0) {
          *(float *)((int)local_144 + iVar6) = local_4f8[(int)local_10 + (int)local_14 + -3];
          iVar6 = iVar6 + (int)local_2c;
          piVar9 = local_8;
        }
        local_10 = (float *)((int)local_10 + 1);
        local_c = local_c + 1;
      } while ((int)local_c < 0x38);
      pfVar5 = &local_a4;
      if (0x2b < (int)local_14) {
        pfVar5 = local_74 + 2;
      }
      local_4f8[iVar10 + -3] = *(float *)((int)pfVar5 + (int)local_14);
      iVar10 = iVar10 + 1;
      piVar9 = local_8;
    }
    local_14 = (float *)((int)local_14 + 4);
    pfVar7 = pfVar7 + 4;
    local_10 = pfVar7;
  } while ((int)local_14 < 0x38);
  FUN_002d9e70(&local_150);
  iVar10 = FUN_002d9fb0();
  if (iVar10 == 0) {
    return;
  }
  iVar6 = 0;
  local_74[3] = 0.0;
  local_d4[3] = 0.0;
  local_164 = 0;
  local_174 = 0;
  iVar10 = 0;
  pbVar8 = (byte *)(local_8 + 8);
  do {
    if ((*pbVar8 & 1) == 0) {
      local_74[iVar10] = 0.0;
    }
    else {
      local_74[iVar10] = *(float *)(local_13c + iVar6 * 4);
      iVar6 = iVar6 + 1;
    }
    iVar10 = iVar10 + 1;
    pbVar8 = pbVar8 + 4;
  } while (iVar10 < 3);
  pfVar5 = (float *)(local_13c + iVar6 * 4);
  pfVar7 = local_d4;
  pbVar8 = (byte *)(local_8 + 0xb);
  iVar10 = 3;
  piVar9 = local_8;
  do {
    if ((*pbVar8 & 1) == 0) {
      *pfVar7 = 0.0;
    }
    else {
      *pfVar7 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      piVar9 = local_8;
    }
    pbVar8 = pbVar8 + 4;
    pfVar7 = pfVar7 + 1;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  local_144 = (byte *)0x0;
  local_13c = (byte *)0x0;
  local_140 = (byte *)0x0;
  pfVar7 = (float *)piVar9[0x1b];
  if (pfVar7 != (float *)0x0) {
    cVar1 = (char)piVar9[0x43];
    local_10 = (float *)0x0;
    if (cVar1 == '\0') {
      local_138 = (float *)0x40400000;
      auVar16._4_4_ = 0;
      auVar16._0_4_ = *pfVar7;
      auVar16._8_8_ = *(undefined8 *)(pfVar7 + 1);
      rcpps(auVar16,auVar16);
      local_10 = (float *)0x0;
      piVar9 = local_8;
    }
    else if (cVar1 == '\x01') {
      local_138 = pfVar7;
      auVar15._4_4_ = 0;
      auVar15._0_4_ = *pfVar7;
      auVar15._8_8_ = *(undefined8 *)(pfVar7 + 1);
      rcpps(auVar15,auVar15);
      local_10 = (float *)0x0;
      piVar9 = local_8;
    }
    else if (((((cVar1 == '\x02') && (ABS(local_74[0]) < *pfVar7)) && (ABS(local_74[1]) < pfVar7[1])
              ) && ((ABS(local_74[2]) < pfVar7[2] && (ABS(local_d4[0]) < pfVar7[3])))) &&
            ((ABS(local_d4[1]) < pfVar7[4] && (ABS(local_d4[2]) < pfVar7[5])))) goto LAB_002d0ed6;
    local_10 = (float *)0x0;
    iVar10 = 0;
    local_14 = (float *)0x3f800000;
    local_2c = (float *)0xffbfdaac;
    do {
      cVar1 = (char)piVar9[0x43];
      fVar14 = 0.0;
      local_c = (float *)0x0;
      if (cVar1 == '\0') {
        fVar14 = ABS(local_74[1]) + ABS(local_74[2]);
        local_138 = (float *)ABS(local_74[0]);
LAB_002d0dff:
        fVar14 = (float)local_138 + fVar14;
      }
      else {
        if (cVar1 == '\x01') {
          fVar14 = (ABS(local_74[(&DAT_00402560)[iVar10]]) + ABS(local_74[(&DAT_00402564)[iVar10]]))
                   * 0.41493773;
          local_138 = (float *)ABS(local_74[*(int *)(iVar10 * 4 + 0x40255c)]);
          goto LAB_002d0dff;
        }
        if (cVar1 == '\x02') {
          fVar14 = ABS(local_74[iVar10]);
          local_c = (float *)ABS(local_d4[iVar10]);
        }
      }
      iVar6 = piVar9[0x1b];
      if (*(float *)(iVar6 + iVar10 * 4) < fVar14) {
        iVar2 = *(int *)(iVar10 * 4 + 0x18 + iVar6);
        if (iVar2 == 1) {
          fVar14 = (*(float *)(iVar6 + iVar10 * 4) / fVar14) * local_54;
          if (fVar14 < (float)local_14) {
            local_14 = (float *)fVar14;
          }
        }
        else if (iVar2 == 2) {
          (**(code **)(*piVar9 + 0x18))(1);
          return;
        }
      }
      if ((*(float *)((int)&DAT_00402560 + iVar6 + iVar10 * 4 + (int)local_2c) / (float)local_c <
           1.0) && (*(int *)(iVar10 * 4 + 0x18 + iVar6) == 2)) {
        (**(code **)(*piVar9 + 0x48))(iVar10);
        piVar9 = local_8;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 3);
    local_74[0] = (float)local_14 * local_74[0];
    local_74[1] = (float)local_14 * local_74[1];
    local_74[2] = (float)local_14 * local_74[2];
    local_d4[0] = (float)local_14 * local_d4[0];
    local_d4[1] = (float)local_14 * local_d4[1];
    local_d4[2] = (float)local_14 * local_d4[2];
  }
LAB_002d0ed6:
  local_170 = -local_74[0];
  local_16c = -local_74[1];
  local_168 = -local_74[2];
  local_1e4 = 0;
  local_180 = -local_d4[0];
  local_194 = 0;
  local_204 = 0;
  local_17c = -local_d4[1];
  local_1f4 = 0;
  local_1b4 = 0;
  local_178 = -local_d4[2];
  local_1c4 = 0;
  FUN_002b73d0(local_328,local_74,local_1a0);
  FUN_002b73d0(&local_358,&local_170,local_1c0);
  FUN_002b7070();
  FUN_002b7070();
  FUN_002b73d0(local_2f4,local_d4,local_210);
  FUN_002b73d0(&local_2f0,&local_180,local_1d0);
  pbVar8 = local_260;
  local_228 = 0;
  local_238 = 0;
  if ((local_260 != (byte *)0x0) && ((*local_260 & 0xc) == 0)) {
    FUN_002bacc0(local_260,&local_b4,local_1a0,local_1f0);
    FUN_002baea0(pbVar8,local_210);
  }
  pbVar8 = local_258;
  if ((local_258 != (byte *)0x0) && ((*local_258 & 0xc) == 0)) {
    FUN_002bacc0(local_258,&local_a4,local_1c0,local_200);
    FUN_002baea0(pbVar8,local_1d0);
  }
  return;
}
