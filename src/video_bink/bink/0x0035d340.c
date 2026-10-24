/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 14CE3CEBD198D2CD007D42C9AFA71EB1BDF1FAA64C06BF81BB71C37F43F0A9F4
 * Entry: 0x0035d340, Ghidra index: 13214, label: FUN_0035d340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Matched to C-draft definitions, NOT verified original Xbox callback ABI. */
extern void FUN_0035c660(int *param_1,int *param_2,int param_3);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00387fb0;
extern uint32_t DAT_00387ff0;
extern uint32_t DAT_00388030;
extern uint32_t DAT_00388040;
extern uint32_t DAT_003882f7;
extern uint32_t DAT_0038c2a7;
extern uint32_t UNK_0038c268;
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint * FUN_0035d340(uint *param_1,uint *param_2,uint param_3,uint param_4,uint param_5,
                   undefined4 param_6,uint *param_7,uint param_8,uint *param_9,uint param_10)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  int iVar10;
  uint uVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  ushort *puVar15;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  undefined1 local_428 [388];
  undefined2 local_2a4 [64];
  undefined2 *local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  uint local_1fc;
  undefined4 local_1f8;
  undefined2 *local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  uint local_1cc;
  undefined4 local_1c8;
  undefined1 *local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined1 local_1b4 [16];
  undefined1 local_1a4 [4];
  undefined1 local_1a0 [4];
  uint local_19c;
  undefined4 local_198;
  undefined1 *local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined1 local_184 [16];
  undefined1 local_174 [4];
  undefined1 local_170 [4];
  uint local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  char *local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined1 local_114 [16];
  undefined1 local_104 [4];
  undefined1 local_100 [4];
  uint local_fc;
  undefined4 local_f8;
  char *local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 local_e4 [16];
  undefined1 local_d4 [4];
  undefined1 local_d0 [4];
  uint local_cc;
  undefined4 local_c8;
  byte *local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 local_b4 [16];
  undefined1 local_a4 [4];
  undefined1 local_a0 [4];
  uint local_9c;
  undefined4 local_98;
  int local_94;
  code *local_90;
  int local_8c;
  int local_88;
  byte *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74 [16];
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  uint local_5c;
  undefined4 local_58;
  uint *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_2c;
  undefined4 local_28;
  uint local_24;
  uint *local_20;
  int local_1c;
  uint local_18;
  uint *local_14 [2];
  uint local_c;
  uint local_8;
  
  local_94 = param_5 * 8 - param_3;
  local_20 = param_2;
  local_1c = (int)param_7;
  local_18 = 0;
  local_90 = (code *)(uintptr_t)0x0035c380U;
  local_8c = (int)((ulonglong)param_5 / (0x10 / (ulonglong)param_8));
  local_8 = 0;
  local_c = 0;
  if (-1 < (char)(param_10 >> 8)) {
    local_90 = FUN_0035c660;
  }
  local_168 = *param_9;
  uVar22 = param_3 >> 3;
  uVar14 = uVar22 + 0x1ff;
  if (uVar14 < 0x81) {
    local_16c = (uint)(byte)(&DAT_003882f7)[uVar22];
  }
  else if (uVar14 < 0x800) {
    if (uVar14 < 0x200) {
      local_16c = 9 - (uVar14 < 0x100);
    }
    else {
      local_16c = 0xb - (uVar14 < 0x400);
    }
  }
  else if (uVar14 < 0x2000) {
    local_16c = 0xd - (uVar14 < 0x1000);
  }
  else {
    local_16c = 0xf - (uVar14 < 0x4000);
  }
  local_194 = (undefined1 *)0x0;
  local_190 = 0;
  local_188 = 0;
  local_198 = param_9[1];
  uVar21 = (param_3 >> 4) + 0x1ff;
  local_18c = 4;
  if (uVar21 < 0x81) {
    local_19c = (uint)(byte)(&DAT_003882f7)[param_3 >> 4];
  }
  else if (uVar21 < 0x800) {
    if (uVar21 < 0x200) {
      local_19c = 9 - (uVar21 < 0x100);
    }
    else {
      local_19c = 0xb - (uVar21 < 0x400);
    }
  }
  else if (uVar21 < 0x2000) {
    local_19c = 0xd - (uVar21 < 0x1000);
  }
  else {
    local_19c = 0xf - (uVar21 < 0x4000);
  }
  local_1c4 = (undefined1 *)0x0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_28 = param_9[2];
  uVar21 = uVar22 * 0x40 + 0x1ff;
  local_1bc = 4;
  if (uVar21 < 0x81) {
    local_2c = (uint)(byte)(&DAT_003882f7)[uVar22 * 0x40];
  }
  else if (uVar21 < 0x800) {
    if (uVar21 < 0x200) {
      local_2c = 9 - (uVar21 < 0x100);
    }
    else {
      local_2c = 0xb - (uVar21 < 0x400);
    }
  }
  else if (uVar21 < 0x2000) {
    local_2c = 0xd - (uVar21 < 0x1000);
  }
  else {
    local_2c = 0xf - (uVar21 < 0x4000);
  }
  local_58 = param_9[3];
  uVar21 = uVar22 * 8 + 0x1ff;
  local_54 = (uint *)0x0;
  local_50 = 0;
  local_4c = 8;
  local_48 = 0;
  if (uVar21 < 0x81) {
    local_5c = (uint)(byte)(&DAT_003882f7)[uVar22 * 8];
  }
  else if (uVar21 < 0x800) {
    if (uVar21 < 0x200) {
      local_5c = 9 - (uVar21 < 0x100);
    }
    else {
      local_5c = 0xb - (uVar21 < 0x400);
    }
  }
  else if (uVar21 < 0x2000) {
    local_5c = 0xd - (uVar21 < 0x1000);
  }
  else {
    local_5c = 0xf - (uVar21 < 0x4000);
  }
  local_f8 = param_9[4];
  local_84 = (byte *)0x0;
  local_80 = 0;
  local_7c = 8;
  local_78 = 0;
  if (uVar14 < 0x81) {
    local_fc = (uint)(byte)(&DAT_003882f7)[uVar22];
  }
  else if (uVar14 < 0x800) {
    if (uVar14 < 0x200) {
      local_fc = 9 - (uVar14 < 0x100);
    }
    else {
      local_fc = 0xb - (uVar14 < 0x400);
    }
  }
  else if (uVar14 < 0x2000) {
    local_fc = 0xd - (uVar14 < 0x1000);
  }
  else {
    local_fc = 0xf - (uVar14 < 0x4000);
  }
  local_c8 = param_9[5];
  local_124 = (char *)0x0;
  local_120 = 0;
  local_11c = 5;
  local_118 = 0x10;
  if (uVar14 < 0x81) {
    local_cc = (uint)(byte)(&DAT_003882f7)[uVar22];
  }
  else if (uVar14 < 0x800) {
    if (uVar14 < 0x200) {
      local_cc = 9 - (uVar14 < 0x100);
    }
    else {
      local_cc = 0xb - (uVar14 < 0x400);
    }
  }
  else if (uVar14 < 0x2000) {
    local_cc = 0xd - (uVar14 < 0x1000);
  }
  else {
    local_cc = 0xf - (uVar14 < 0x4000);
  }
  local_1c8 = param_9[6];
  local_f4 = (char *)0x0;
  local_f0 = 0;
  local_ec = 5;
  local_e8 = 0x10;
  if (uVar14 < 0x81) {
    local_1cc = (uint)(byte)(&DAT_003882f7)[uVar22];
  }
  else if (uVar14 < 0x800) {
    if (uVar14 < 0x200) {
      local_1cc = 9 - (uVar14 < 0x100);
    }
    else {
      local_1cc = 0xb - (uVar14 < 0x400);
    }
  }
  else if (uVar14 < 0x2000) {
    local_1cc = 0xd - (uVar14 < 0x1000);
  }
  else {
    local_1cc = 0xf - (uVar14 < 0x4000);
  }
  local_1f8 = param_9[7];
  local_1f4 = (undefined2 *)0x0;
  local_1f0 = 0;
  local_1ec = 0xb;
  local_1e8 = 0;
  if (uVar14 < 0x81) {
    local_1fc = (uint)(byte)(&DAT_003882f7)[uVar22];
  }
  else if (uVar14 < 0x800) {
    if (uVar14 < 0x200) {
      local_1fc = 9 - (uVar14 < 0x100);
    }
    else {
      local_1fc = 0xb - (uVar14 < 0x400);
    }
  }
  else if (uVar14 < 0x2000) {
    local_1fc = 0xd - (uVar14 < 0x1000);
  }
  else {
    local_1fc = 0xf - (uVar14 < 0x4000);
  }
  uVar14 = uVar22 * 0x30 + 0x1ff;
  local_224 = (undefined2 *)0x0;
  local_220 = 0;
  local_98 = param_9[8];
  local_21c = 0xb;
  local_218 = 0x400;
  if (uVar14 < 0x81) {
    local_9c = (uint)(byte)(&DAT_003882f7)[uVar22 * 0x30];
  }
  else if (uVar14 < 0x800) {
    if (uVar14 < 0x200) {
      local_9c = 9 - (uVar14 < 0x100);
    }
    else {
      local_9c = 0xb - (uVar14 < 0x400);
    }
  }
  else if (uVar14 < 0x2000) {
    local_9c = 0xd - (uVar14 < 0x1000);
  }
  else {
    local_9c = 0xf - (uVar14 < 0x4000);
  }
  local_c4 = (byte *)0x0;
  local_c0 = 0;
  local_bc = 4;
  local_b8 = 0;
  FUN_0035bcf0(local_14,local_170,local_174,local_184);
  FUN_0035bcf0(local_14,local_1a0,local_1a4,local_1b4);
  FUN_0035c0b0(&local_54,local_14,local_428);
  FUN_0035bcf0(local_14,local_60,local_64,local_74);
  FUN_0035bcf0(local_14,local_100,local_104,local_114);
  FUN_0035bcf0(local_14,local_d0,local_d4,local_e4);
  FUN_0035bcf0(local_14,local_a0,local_a4,local_b4);
  local_24 = 0;
  if (param_4 != 0) {
    do {
      uVar21 = 0;
      FUN_0035c120(&local_194,local_14);
      FUN_0035c120(&local_1c4,local_14);
      (*local_90)(&local_54,local_14,local_428);
      FUN_0035cb00(local_14);
      FUN_0035cd00(&local_124,local_14);
      FUN_0035cd00(&local_f4,local_14);
      FUN_0035cf70(&local_1f4,local_14);
      FUN_0035cf70(&local_224,local_14);
      FUN_0035c910(&local_c4,local_14);
      puVar19 = local_54;
      uVar11 = local_18;
      uVar14 = local_c;
      uVar22 = local_c;
      for (param_10 = param_3; local_c = uVar22, param_10 != 0; param_10 = param_10 - 8) {
        uVar4 = *local_194;
        local_194 = local_194 + 1;
        bVar12 = (byte)local_8;
        local_18 = uVar11;
        switch(uVar4) {
        case 0:
          uVar14 = local_20[1];
          uVar5 = *(undefined4 *)((int)local_20 + param_5);
          uVar6 = *(undefined4 *)((int)local_20 + param_5 + 4);
          puVar1 = (undefined4 *)((int)local_20 + param_5 * 2);
          *param_1 = *local_20;
          param_1[1] = uVar14;
          *(undefined4 *)((int)param_1 + param_5) = uVar5;
          *(undefined4 *)((int)param_1 + param_5 + 4) = uVar6;
          puVar2 = (undefined4 *)((int)param_1 + param_5 * 2);
          uVar5 = puVar1[1];
          uVar6 = *(undefined4 *)((int)puVar1 + param_5);
          uVar7 = *(undefined4 *)((int)puVar1 + param_5 + 4);
          puVar3 = (undefined4 *)((int)puVar1 + param_5 * 2);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          *(undefined4 *)((int)puVar2 + param_5) = uVar6;
          *(undefined4 *)((int)puVar2 + param_5 + 4) = uVar7;
          puVar2 = (undefined4 *)((int)puVar2 + param_5 * 2);
          uVar5 = puVar3[1];
          uVar6 = *(undefined4 *)((int)puVar3 + param_5);
          uVar7 = *(undefined4 *)((int)puVar3 + param_5 + 4);
          puVar1 = (undefined4 *)((int)puVar3 + param_5 * 2);
          *puVar2 = *puVar3;
          puVar2[1] = uVar5;
          *(undefined4 *)((int)puVar2 + param_5) = uVar6;
          *(undefined4 *)((int)puVar2 + param_5 + 4) = uVar7;
          puVar2 = (undefined4 *)((int)puVar2 + param_5 * 2);
          uVar5 = puVar1[1];
          uVar6 = *(undefined4 *)((int)puVar1 + param_5);
          uVar7 = *(undefined4 *)((int)puVar1 + param_5 + 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          *(undefined4 *)((int)puVar2 + param_5) = uVar6;
          *(undefined4 *)((int)puVar2 + param_5 + 4) = uVar7;
          puVar19 = local_54;
          uVar21 = uVar11;
          uVar14 = uVar22;
          break;
        case 1:
          local_18 = uVar21;
          if ((local_24 & 8) == 0) {
            uVar4 = *local_1c4;
            local_1c4 = local_1c4 + 1;
            switch(uVar4) {
            case 3:
              if (local_8 < 4) {
                uVar14 = *local_14[0] << (bVar12 & 0x1f) | uVar14;
                uVar22 = *local_14[0] >> (4 - bVar12 & 0x1f);
                local_8 = local_8 + 0x1c;
                local_14[0] = local_14[0] + 1;
              }
              else {
                uVar22 = uVar14 >> 4;
                local_8 = local_8 - 4;
              }
              iVar17 = (uVar14 & 0xf) * 0x40;
              iVar23 = 0;
              local_18 = uVar11;
              do {
                if (local_8 == 0) {
                  uVar14 = *local_14[0];
                  local_14[0] = local_14[0] + 1;
                  local_8 = 0x1f;
                }
                else {
                  local_8 = local_8 - 1;
                  uVar14 = uVar22;
                }
                uVar22 = uVar14 >> 1;
                local_c = uVar22;
                if ((uVar14 & 1) == 0) {
                  bVar12 = *local_c4;
                  local_c4 = local_c4 + 1;
                  for (iVar13 = bVar12 + 1; iVar13 != 0; iVar13 = iVar13 + -1) {
                    *(char *)((int)&local_164 + (uint)(byte)(&UNK_0038c268)[iVar23 + iVar17]) =
                         (char)*puVar19;
                    iVar23 = iVar23 + 1;
                    puVar19 = (uint *)((int)puVar19 + 1);
                    local_54 = puVar19;
                  }
                }
                else {
                  uVar14 = *puVar19;
                  puVar19 = (uint *)((int)puVar19 + 1);
                  bVar12 = *local_c4;
                  local_c4 = local_c4 + 1;
                  local_54 = puVar19;
                  for (iVar13 = bVar12 + 1; iVar13 != 0; iVar13 = iVar13 + -1) {
                    *(char *)((int)&local_164 + (uint)(byte)(&UNK_0038c268)[iVar23 + iVar17]) =
                         (char)uVar14;
                    iVar23 = iVar23 + 1;
                  }
                }
              } while (iVar23 < 0x3f);
              if (iVar23 == 0x3f) {
                uVar14 = *puVar19;
                puVar19 = (uint *)((int)puVar19 + 1);
                *(char *)((int)&local_164 + (uint)(byte)(&DAT_0038c2a7)[iVar17]) = (char)uVar14;
                local_54 = puVar19;
              }
              puVar15 = (ushort *)&local_160;
              param_7 = (uint *)0x2;
              puVar20 = param_1;
              do {
                param_9 = (uint *)((int)puVar20 + param_5);
                uVar14 = (uint)puVar15[-2];
                uVar14 = ((uVar14 & 0xffffff00) << 8 | uVar14) << 8 | uVar14 & 0xff;
                *puVar20 = uVar14;
                *param_9 = uVar14;
                uVar14 = (uint)puVar15[-1];
                uVar14 = ((uVar14 & 0xffffff00) << 8 | uVar14) << 8 | uVar14 & 0xff;
                puVar20[1] = uVar14;
                param_9[1] = uVar14;
                uVar14 = (uint)*puVar15;
                uVar14 = ((uVar14 & 0xffffff00) << 8 | uVar14) << 8 | uVar14 & 0xff;
                puVar20[2] = uVar14;
                param_9[2] = uVar14;
                uVar14 = (uint)puVar15[1];
                uVar14 = ((uVar14 & 0xffffff00) << 8 | uVar14) << 8 | uVar14 & 0xff;
                uVar22 = (uint)puVar15[2];
                puVar20[3] = uVar14;
                param_9[3] = uVar14;
                param_9 = (uint *)((int)param_9 + param_5);
                puVar20 = (uint *)((int)param_9 + param_5);
                uVar14 = ((uVar22 & 0xffffff00) << 8 | uVar22) << 8 | uVar22 & 0xff;
                *param_9 = uVar14;
                *puVar20 = uVar14;
                uVar14 = (uint)puVar15[3];
                uVar14 = ((uVar14 & 0xffffff00) << 8 | uVar14) << 8 | uVar14 & 0xff;
                param_9[1] = uVar14;
                puVar20[1] = uVar14;
                uVar14 = (uint)puVar15[4];
                uVar14 = ((uVar14 & 0xffffff00) << 8 | uVar14) << 8 | uVar14 & 0xff;
                param_9[2] = uVar14;
                puVar20[2] = uVar14;
                uVar14 = (uint)puVar15[5];
                uVar14 = ((uVar14 & 0xffffff00) << 8 | uVar14) << 8 | uVar14 & 0xff;
                param_9[3] = uVar14;
                puVar20[3] = uVar14;
                uVar14 = (uint)puVar15[6];
                puVar20 = (uint *)((int)puVar20 + param_5);
                puVar16 = (uint *)((int)puVar20 + param_5);
                uVar14 = ((uVar14 & 0xffffff00) << 8 | uVar14) << 8 | uVar14 & 0xff;
                *puVar20 = uVar14;
                *puVar16 = uVar14;
                uVar14 = (uint)puVar15[7];
                uVar14 = ((uVar14 & 0xffffff00) << 8 | uVar14) << 8 | uVar14 & 0xff;
                puVar20[1] = uVar14;
                puVar16[1] = uVar14;
                uVar14 = (uint)puVar15[8];
                uVar14 = ((uVar14 & 0xffffff00) << 8 | uVar14) << 8 | uVar14 & 0xff;
                puVar20[2] = uVar14;
                puVar16[2] = uVar14;
                uVar14 = (uint)puVar15[9];
                uVar14 = ((uVar14 & 0xffffff00) << 8 | uVar14) << 8 | uVar14 & 0xff;
                uVar22 = (uint)puVar15[10];
                puVar20[3] = uVar14;
                puVar16[3] = uVar14;
                puVar16 = (uint *)((int)puVar16 + param_5);
                puVar20 = (uint *)((int)puVar16 + param_5);
                uVar14 = ((uVar22 & 0xffffff00) << 8 | uVar22) << 8 | uVar22 & 0xff;
                *puVar16 = uVar14;
                *puVar20 = uVar14;
                uVar14 = (uint)puVar15[0xb];
                uVar14 = ((uVar14 & 0xffffff00) << 8 | uVar14) << 8 | uVar14 & 0xff;
                puVar16[1] = uVar14;
                puVar20[1] = uVar14;
                uVar14 = (uint)puVar15[0xc];
                uVar14 = ((uVar14 & 0xffffff00) << 8 | uVar14) << 8 | uVar14 & 0xff;
                puVar16[2] = uVar14;
                puVar20[2] = uVar14;
                uVar14 = (uint)puVar15[0xd];
                uVar14 = ((uVar14 & 0xffffff00) << 8 | uVar14) << 8 | uVar14 & 0xff;
                puVar16[3] = uVar14;
                puVar20[3] = uVar14;
                puVar20 = (uint *)((int)puVar20 + param_5);
                puVar15 = puVar15 + 0x10;
                param_7 = (uint *)((int)param_7 + -1);
                uVar14 = local_c;
              } while (param_7 != (uint *)0x0);
              break;
            case 5:
              local_2a4[0] = *local_1f4;
              local_1f4 = local_1f4 + 1;
              local_18 = uVar11;
              FUN_00363220(local_2a4,local_14);
              if (local_8 < 4) {
                uVar14 = *local_14[0] << ((byte)local_8 & 0x1f) | local_c;
                local_c = *local_14[0] >> (4 - (byte)local_8 & 0x1f);
                local_8 = local_8 + 0x1c;
                local_14[0] = local_14[0] + 1;
              }
              else {
                local_8 = local_8 - 4;
                uVar14 = local_c;
                local_c = local_c >> 4;
              }
              FUN_00362a70(param_1,param_5,local_2a4,uVar14 & 0xf);
              puVar19 = local_54;
              local_18 = uVar21;
              uVar14 = local_c;
              break;
            case 6:
              uVar8 = CONCAT11((char)*puVar19,(char)*puVar19);
              puVar19 = (uint *)((int)puVar19 + 1);
              uVar14 = CONCAT22(uVar8,uVar8);
              *param_1 = uVar14;
              param_1[1] = uVar14;
              param_1[2] = uVar14;
              param_1[3] = uVar14;
              *(uint *)((int)param_1 + param_5) = uVar14;
              *(uint *)((int)param_1 + param_5 + 4) = uVar14;
              *(uint *)((int)param_1 + param_5 + 8) = uVar14;
              *(uint *)((int)param_1 + param_5 + 0xc) = uVar14;
              *(uint *)((int)param_1 + param_5 * 2) = uVar14;
              *(uint *)((int)param_1 + param_5 * 2 + 4) = uVar14;
              *(uint *)((int)param_1 + param_5 * 2 + 8) = uVar14;
              *(uint *)((int)param_1 + param_5 * 2 + 0xc) = uVar14;
              *(uint *)((int)param_1 + param_5 * 3) = uVar14;
              *(uint *)((int)param_1 + param_5 * 3 + 4) = uVar14;
              *(uint *)((int)param_1 + param_5 * 3 + 8) = uVar14;
              *(uint *)((int)param_1 + param_5 * 3 + 0xc) = uVar14;
              param_1[param_5] = uVar14;
              param_1[param_5 + 1] = uVar14;
              param_1[param_5 + 2] = uVar14;
              param_1[param_5 + 3] = uVar14;
              *(uint *)((int)param_1 + param_5 * 5) = uVar14;
              *(uint *)((int)param_1 + param_5 * 5 + 4) = uVar14;
              *(uint *)((int)param_1 + param_5 * 5 + 8) = uVar14;
              *(uint *)((int)param_1 + param_5 * 5 + 0xc) = uVar14;
              *(uint *)((int)param_1 + param_5 * 6) = uVar14;
              *(uint *)((int)param_1 + param_5 * 6 + 4) = uVar14;
              *(uint *)((int)param_1 + param_5 * 6 + 8) = uVar14;
              *(uint *)((int)param_1 + param_5 * 6 + 0xc) = uVar14;
              *(uint *)((int)param_1 + param_5 * 7) = uVar14;
              *(uint *)((int)param_1 + param_5 * 7 + 4) = uVar14;
              *(uint *)((int)param_1 + param_5 * 7 + 8) = uVar14;
              *(uint *)((int)param_1 + param_5 * 7 + 0xc) = uVar14;
              param_1[param_5 * 2] = uVar14;
              param_1[param_5 * 2 + 1] = uVar14;
              param_1[param_5 * 2 + 2] = uVar14;
              param_1[param_5 * 2 + 3] = uVar14;
              *(uint *)((int)param_1 + param_5 * 9) = uVar14;
              *(uint *)((int)param_1 + param_5 * 9 + 4) = uVar14;
              *(uint *)((int)param_1 + param_5 * 9 + 8) = uVar14;
              *(uint *)((int)param_1 + param_5 * 9 + 0xc) = uVar14;
              *(uint *)((int)param_1 + param_5 * 10) = uVar14;
              *(uint *)((int)param_1 + param_5 * 10 + 4) = uVar14;
              *(uint *)((int)param_1 + param_5 * 10 + 8) = uVar14;
              *(uint *)((int)param_1 + param_5 * 10 + 0xc) = uVar14;
              puVar20 = (uint *)((int)param_1 + param_5 * 0xb);
              puVar16 = (uint *)((int)puVar20 + param_5);
              *puVar20 = uVar14;
              puVar20[1] = uVar14;
              puVar20[2] = uVar14;
              puVar20[3] = uVar14;
              puVar20 = (uint *)((int)puVar16 + param_5);
              *puVar16 = uVar14;
              puVar16[1] = uVar14;
              puVar16[2] = uVar14;
              puVar16[3] = uVar14;
              puVar16 = (uint *)((int)puVar20 + param_5);
              *puVar20 = uVar14;
              puVar20[1] = uVar14;
              puVar20[2] = uVar14;
              puVar20[3] = uVar14;
              *puVar16 = uVar14;
              puVar16[1] = uVar14;
              puVar16[2] = uVar14;
              puVar16[3] = uVar14;
              *(uint *)((int)puVar16 + param_5) = uVar14;
              *(uint *)((int)puVar16 + param_5 + 4) = uVar14;
              *(uint *)((int)puVar16 + param_5 + 8) = uVar14;
              *(uint *)((int)puVar16 + param_5 + 0xc) = uVar14;
              uVar14 = uVar22;
              local_54 = puVar19;
              break;
            case 8:
              uVar8 = CONCAT11((char)*puVar19,(char)*puVar19);
              uVar9 = CONCAT11(*(undefined1 *)((int)puVar19 + 1),*(undefined1 *)((int)puVar19 + 1));
              uVar21 = CONCAT22(uVar8,uVar8);
              uVar18 = CONCAT22(uVar9,uVar9);
              puVar19 = (uint *)((int)puVar19 + 2);
              local_88 = 2;
              param_9 = param_1;
              do {
                param_7 = (uint *)((int)param_9 + param_5);
                bVar12 = *local_84;
                iVar23 = (bVar12 & 3) * 4;
                uVar14 = *(uint *)(&DAT_00388030 + iVar23) & uVar18 |
                         *(uint *)(&DAT_00388040 + iVar23) & uVar21;
                *param_9 = uVar14;
                *param_7 = uVar14;
                iVar23 = (bVar12 >> 2 & 3) * 4;
                uVar14 = *(uint *)(&DAT_00388030 + iVar23) & uVar18 |
                         *(uint *)(&DAT_00388040 + iVar23) & uVar21;
                param_9[1] = uVar14;
                param_7[1] = uVar14;
                iVar23 = (bVar12 >> 4 & 3) * 4;
                uVar14 = *(uint *)(&DAT_00388030 + iVar23) & uVar18 |
                         *(uint *)(&DAT_00388040 + iVar23) & uVar21;
                param_9[2] = uVar14;
                param_7[2] = uVar14;
                iVar23 = (uint)(bVar12 >> 6) * 4;
                uVar14 = *(uint *)(&DAT_00388030 + iVar23) & uVar18 |
                         *(uint *)(&DAT_00388040 + iVar23) & uVar21;
                param_9[3] = uVar14;
                param_7[3] = uVar14;
                param_7 = (uint *)((int)param_7 + param_5);
                puVar20 = (uint *)((int)param_7 + param_5);
                bVar12 = local_84[1];
                iVar23 = (bVar12 & 3) * 4;
                uVar14 = *(uint *)(&DAT_00388030 + iVar23) & uVar18 |
                         *(uint *)(&DAT_00388040 + iVar23) & uVar21;
                *param_7 = uVar14;
                *puVar20 = uVar14;
                iVar23 = (bVar12 >> 2 & 3) * 4;
                uVar14 = *(uint *)(&DAT_00388030 + iVar23) & uVar18 |
                         *(uint *)(&DAT_00388040 + iVar23) & uVar21;
                param_7[1] = uVar14;
                puVar20[1] = uVar14;
                iVar23 = (bVar12 >> 4 & 3) * 4;
                uVar14 = *(uint *)(&DAT_00388030 + iVar23) & uVar18 |
                         *(uint *)(&DAT_00388040 + iVar23) & uVar21;
                param_7[2] = uVar14;
                puVar20[2] = uVar14;
                iVar23 = (uint)(bVar12 >> 6) * 4;
                uVar14 = *(uint *)(&DAT_00388030 + iVar23) & uVar18 |
                         *(uint *)(&DAT_00388040 + iVar23) & uVar21;
                param_7[3] = uVar14;
                puVar20[3] = uVar14;
                puVar20 = (uint *)((int)puVar20 + param_5);
                puVar16 = (uint *)((int)puVar20 + param_5);
                bVar12 = local_84[2];
                iVar23 = (bVar12 & 3) * 4;
                uVar14 = *(uint *)(&DAT_00388030 + iVar23) & uVar18 |
                         *(uint *)(&DAT_00388040 + iVar23) & uVar21;
                *puVar20 = uVar14;
                *puVar16 = uVar14;
                iVar23 = (bVar12 >> 2 & 3) * 4;
                uVar14 = *(uint *)(&DAT_00388030 + iVar23) & uVar18 |
                         *(uint *)(&DAT_00388040 + iVar23) & uVar21;
                puVar20[1] = uVar14;
                puVar16[1] = uVar14;
                iVar23 = (bVar12 >> 4 & 3) * 4;
                uVar14 = *(uint *)(&DAT_00388030 + iVar23) & uVar18 |
                         *(uint *)(&DAT_00388040 + iVar23) & uVar21;
                puVar20[2] = uVar14;
                puVar16[2] = uVar14;
                iVar23 = (uint)(bVar12 >> 6) * 4;
                uVar14 = *(uint *)(&DAT_00388030 + iVar23) & uVar18 |
                         *(uint *)(&DAT_00388040 + iVar23) & uVar21;
                puVar20[3] = uVar14;
                puVar16[3] = uVar14;
                puVar16 = (uint *)((int)puVar16 + param_5);
                param_9 = (uint *)((int)puVar16 + param_5);
                bVar12 = local_84[3];
                iVar23 = (bVar12 & 3) * 4;
                local_84 = local_84 + 4;
                uVar14 = *(uint *)(&DAT_00388030 + iVar23) & uVar18 |
                         *(uint *)(&DAT_00388040 + iVar23) & uVar21;
                *puVar16 = uVar14;
                *param_9 = uVar14;
                iVar23 = (bVar12 >> 2 & 3) * 4;
                uVar14 = *(uint *)(&DAT_00388030 + iVar23) & uVar18 |
                         *(uint *)(&DAT_00388040 + iVar23) & uVar21;
                puVar16[1] = uVar14;
                param_9[1] = uVar14;
                iVar23 = (bVar12 >> 4 & 3) * 4;
                uVar14 = *(uint *)(&DAT_00388030 + iVar23) & uVar18 |
                         *(uint *)(&DAT_00388040 + iVar23) & uVar21;
                puVar16[2] = uVar14;
                param_9[2] = uVar14;
                iVar23 = (uint)(bVar12 >> 6) * 4;
                uVar14 = *(uint *)(&DAT_00388030 + iVar23) & uVar18 |
                         *(uint *)(&DAT_00388040 + iVar23) & uVar21;
                puVar16[3] = uVar14;
                param_9[3] = uVar14;
                param_9 = (uint *)((int)param_9 + param_5);
                local_88 = local_88 + -1;
                local_18 = uVar11;
                uVar14 = uVar22;
                local_54 = puVar19;
              } while (local_88 != 0);
              break;
            case 9:
              puVar20 = (uint *)((int)param_1 + param_5);
              param_9 = (uint *)0x2;
              puVar16 = param_1;
              do {
                uVar14 = (uint)(ushort)*puVar19;
                uVar14 = ((uVar14 & 0xffffff00) << 8 | uVar14) << 8 | uVar14 & 0xff;
                *puVar16 = uVar14;
                *puVar20 = uVar14;
                uVar14 = (uint)*(ushort *)((int)puVar19 + 2);
                uVar14 = ((uVar14 & 0xffffff00) << 8 | uVar14) << 8 | uVar14 & 0xff;
                puVar16[1] = uVar14;
                puVar20[1] = uVar14;
                uVar14 = (uint)(ushort)puVar19[1];
                uVar14 = ((uVar14 & 0xffffff00) << 8 | uVar14) << 8 | uVar14 & 0xff;
                puVar16[2] = uVar14;
                puVar20[2] = uVar14;
                uVar14 = (uint)*(ushort *)((int)puVar19 + 6);
                uVar14 = ((uVar14 & 0xffffff00) << 8 | uVar14) << 8 | uVar14 & 0xff;
                puVar16[3] = uVar14;
                puVar20[3] = uVar14;
                uVar14 = (uint)(ushort)puVar19[2];
                puVar16 = (uint *)((int)puVar16 + param_5 * 2);
                puVar20 = (uint *)((int)puVar20 + param_5 * 2);
                uVar14 = ((uVar14 & 0xffffff00) << 8 | uVar14) << 8 | uVar14 & 0xff;
                *puVar16 = uVar14;
                *puVar20 = uVar14;
                uVar14 = (uint)*(ushort *)((int)puVar19 + 10);
                uVar14 = ((uVar14 & 0xffffff00) << 8 | uVar14) << 8 | uVar14 & 0xff;
                puVar16[1] = uVar14;
                puVar20[1] = uVar14;
                uVar14 = (uint)(ushort)puVar19[3];
                uVar14 = ((uVar14 & 0xffffff00) << 8 | uVar14) << 8 | uVar14 & 0xff;
                puVar16[2] = uVar14;
                puVar20[2] = uVar14;
                uVar14 = (uint)*(ushort *)((int)puVar19 + 0xe);
                uVar14 = ((uVar14 & 0xffffff00) << 8 | uVar14) << 8 | uVar14 & 0xff;
                puVar16[3] = uVar14;
                puVar20[3] = uVar14;
                uVar14 = (uint)(ushort)puVar19[4];
                puVar16 = (uint *)((int)puVar16 + param_5 * 2);
                puVar20 = (uint *)((int)puVar20 + param_5 * 2);
                uVar14 = ((uVar14 & 0xffffff00) << 8 | uVar14) << 8 | uVar14 & 0xff;
                *puVar16 = uVar14;
                *puVar20 = uVar14;
                uVar14 = (uint)*(ushort *)((int)puVar19 + 0x12);
                uVar14 = ((uVar14 & 0xffffff00) << 8 | uVar14) << 8 | uVar14 & 0xff;
                puVar16[1] = uVar14;
                puVar20[1] = uVar14;
                uVar14 = (uint)(ushort)puVar19[5];
                uVar14 = ((uVar14 & 0xffffff00) << 8 | uVar14) << 8 | uVar14 & 0xff;
                puVar16[2] = uVar14;
                puVar20[2] = uVar14;
                uVar14 = (uint)*(ushort *)((int)puVar19 + 0x16);
                uVar14 = ((uVar14 & 0xffffff00) << 8 | uVar14) << 8 | uVar14 & 0xff;
                puVar16[3] = uVar14;
                puVar20[3] = uVar14;
                uVar14 = (uint)(ushort)puVar19[6];
                puVar16 = (uint *)((int)puVar16 + param_5 * 2);
                puVar20 = (uint *)((int)puVar20 + param_5 * 2);
                uVar14 = ((uVar14 & 0xffffff00) << 8 | uVar14) << 8 | uVar14 & 0xff;
                *puVar16 = uVar14;
                *puVar20 = uVar14;
                uVar14 = (uint)*(ushort *)((int)puVar19 + 0x1a);
                uVar14 = ((uVar14 & 0xffffff00) << 8 | uVar14) << 8 | uVar14 & 0xff;
                puVar16[1] = uVar14;
                puVar20[1] = uVar14;
                uVar14 = (uint)(ushort)puVar19[7];
                uVar14 = ((uVar14 & 0xffffff00) << 8 | uVar14) << 8 | uVar14 & 0xff;
                puVar16[2] = uVar14;
                puVar20[2] = uVar14;
                uVar14 = (uint)*(ushort *)((int)puVar19 + 0x1e);
                uVar14 = ((uVar14 & 0xffffff00) << 8 | uVar14) << 8 | uVar14 & 0xff;
                puVar16[3] = uVar14;
                puVar20[3] = uVar14;
                puVar16 = (uint *)((int)puVar16 + param_5 * 2);
                puVar20 = (uint *)((int)puVar20 + param_5 * 2);
                puVar19 = puVar19 + 8;
                param_9 = (uint *)((int)param_9 + -1);
                local_18 = uVar11;
                uVar14 = uVar22;
                local_54 = puVar19;
              } while (param_9 != (uint *)0x0);
            }
          }
          param_1 = param_1 + 2;
          local_20 = local_20 + 2;
          param_10 = param_10 - 8;
          *(undefined1 *)((local_18 >> 1) + local_1c) = 1;
          *(undefined1 *)((local_18 + param_8 >> 1) + local_1c) = 1;
          uVar21 = local_18 + param_8;
          break;
        case 2:
          *(undefined1 *)((uVar21 >> 1) + local_1c) = 1;
          puVar19 = (uint *)((int)local_20 + (int)*local_124 + (int)*local_f4 * param_5);
          local_124 = local_124 + 1;
          local_f4 = local_f4 + 1;
          uVar14 = puVar19[1];
          uVar5 = *(undefined4 *)((int)puVar19 + param_5);
          uVar6 = *(undefined4 *)((int)puVar19 + param_5 + 4);
          puVar1 = (undefined4 *)((int)puVar19 + param_5 * 2);
          *param_1 = *puVar19;
          param_1[1] = uVar14;
          *(undefined4 *)((int)param_1 + param_5) = uVar5;
          *(undefined4 *)((int)param_1 + param_5 + 4) = uVar6;
          puVar2 = (undefined4 *)((int)param_1 + param_5 * 2);
          uVar5 = puVar1[1];
          uVar6 = *(undefined4 *)((int)puVar1 + param_5);
          uVar7 = *(undefined4 *)((int)puVar1 + param_5 + 4);
          puVar3 = (undefined4 *)((int)puVar1 + param_5 * 2);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          *(undefined4 *)((int)puVar2 + param_5) = uVar6;
          *(undefined4 *)((int)puVar2 + param_5 + 4) = uVar7;
          puVar2 = (undefined4 *)((int)puVar2 + param_5 * 2);
          uVar5 = puVar3[1];
          uVar6 = *(undefined4 *)((int)puVar3 + param_5);
          uVar7 = *(undefined4 *)((int)puVar3 + param_5 + 4);
          puVar1 = (undefined4 *)((int)puVar3 + param_5 * 2);
          *puVar2 = *puVar3;
          puVar2[1] = uVar5;
          *(undefined4 *)((int)puVar2 + param_5) = uVar6;
          *(undefined4 *)((int)puVar2 + param_5 + 4) = uVar7;
          puVar2 = (undefined4 *)((int)puVar2 + param_5 * 2);
          uVar5 = puVar1[1];
          uVar6 = *(undefined4 *)((int)puVar1 + param_5);
          uVar7 = *(undefined4 *)((int)puVar1 + param_5 + 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          *(undefined4 *)((int)puVar2 + param_5) = uVar6;
          *(undefined4 *)((int)puVar2 + param_5 + 4) = uVar7;
          puVar19 = local_54;
          uVar21 = uVar11;
          uVar14 = uVar22;
          break;
        case 3:
          if (local_8 < 4) {
            uVar14 = *local_14[0] << (bVar12 & 0x1f) | uVar14;
            uVar22 = *local_14[0] >> (4 - bVar12 & 0x1f);
            local_8 = local_8 + 0x1c;
            local_14[0] = local_14[0] + 1;
          }
          else {
            uVar22 = uVar14 >> 4;
            local_8 = local_8 - 4;
          }
          iVar17 = (uVar14 & 0xf) * 0x40;
          *(undefined1 *)((uVar21 >> 1) + local_1c) = 1;
          iVar23 = 0;
          do {
            if (local_8 == 0) {
              uVar14 = *local_14[0];
              local_14[0] = local_14[0] + 1;
              local_8 = 0x1f;
            }
            else {
              local_8 = local_8 - 1;
              uVar14 = uVar22;
            }
            uVar22 = uVar14 >> 1;
            local_c = uVar22;
            if ((uVar14 & 1) == 0) {
              bVar12 = *local_c4;
              local_c4 = local_c4 + 1;
              for (iVar13 = bVar12 + 1; iVar13 != 0; iVar13 = iVar13 + -1) {
                iVar10 = iVar23 + iVar17;
                uVar14 = *puVar19;
                iVar23 = iVar23 + 1;
                puVar19 = (uint *)((int)puVar19 + 1);
                *(char *)((int)&local_164 + (uint)(byte)(&UNK_0038c268)[iVar10]) = (char)uVar14;
                local_54 = puVar19;
              }
            }
            else {
              uVar14 = *puVar19;
              puVar19 = (uint *)((int)puVar19 + 1);
              bVar12 = *local_c4;
              local_c4 = local_c4 + 1;
              local_54 = puVar19;
              for (iVar13 = bVar12 + 1; iVar13 != 0; iVar13 = iVar13 + -1) {
                iVar10 = iVar23 + iVar17;
                iVar23 = iVar23 + 1;
                *(char *)((int)&local_164 + (uint)(byte)(&UNK_0038c268)[iVar10]) = (char)uVar14;
              }
            }
          } while (iVar23 < 0x3f);
          if (iVar23 == 0x3f) {
            *(char *)((int)&local_164 + (uint)(byte)(&DAT_0038c2a7)[iVar17]) = (char)*puVar19;
            local_54 = (uint *)((int)puVar19 + 1);
          }
          *param_1 = local_164;
          param_1[1] = local_160;
          *(undefined4 *)((int)param_1 + param_5) = local_15c;
          *(undefined4 *)((int)param_1 + param_5 + 4) = local_158;
          puVar1 = (undefined4 *)((int)param_1 + param_5 * 2);
          *puVar1 = local_154;
          puVar1[1] = local_150;
          *(undefined4 *)((int)puVar1 + param_5) = local_14c;
          *(undefined4 *)((int)puVar1 + param_5 + 4) = local_148;
          puVar1 = (undefined4 *)((int)puVar1 + param_5 * 2);
          *puVar1 = local_144;
          puVar1[1] = local_140;
          *(undefined4 *)((int)puVar1 + param_5) = local_13c;
          *(undefined4 *)((int)puVar1 + param_5 + 4) = local_138;
          puVar1 = (undefined4 *)((int)puVar1 + param_5 * 2);
          *puVar1 = local_134;
          puVar1[1] = local_130;
          *(undefined4 *)((int)puVar1 + param_5) = local_12c;
          *(undefined4 *)((int)puVar1 + param_5 + 4) = local_128;
          puVar19 = local_54;
          uVar21 = local_18;
          uVar14 = local_c;
          break;
        case 4:
          *(undefined1 *)((uVar21 >> 1) + local_1c) = 1;
          puVar19 = (uint *)((int)local_20 + (int)*local_124 + (int)*local_f4 * param_5);
          local_124 = local_124 + 1;
          local_f4 = local_f4 + 1;
          local_164 = *puVar19;
          local_160 = puVar19[1];
          local_15c = *(undefined4 *)((int)puVar19 + param_5);
          local_158 = *(undefined4 *)((int)puVar19 + param_5 + 4);
          puVar1 = (undefined4 *)((int)puVar19 + param_5 * 2);
          local_154 = *puVar1;
          local_150 = puVar1[1];
          local_14c = *(undefined4 *)((int)puVar1 + param_5);
          local_148 = *(undefined4 *)((int)puVar1 + param_5 + 4);
          puVar1 = (undefined4 *)((int)puVar1 + param_5 * 2);
          local_144 = *puVar1;
          local_140 = puVar1[1];
          local_13c = *(undefined4 *)((int)puVar1 + param_5);
          local_138 = *(undefined4 *)((int)puVar1 + param_5 + 4);
          puVar1 = (undefined4 *)((int)puVar1 + param_5 * 2);
          local_134 = *puVar1;
          local_130 = puVar1[1];
          local_12c = *(undefined4 *)((int)puVar1 + param_5);
          local_128 = *(undefined4 *)((int)puVar1 + param_5 + 4);
          if (local_8 < 7) {
            local_c = *local_14[0] >> (7 - bVar12 & 0x1f);
            uVar22 = *local_14[0] << (bVar12 & 0x1f) | uVar22;
            local_8 = local_8 + 0x19;
            local_14[0] = local_14[0] + 1;
          }
          else {
            local_c = uVar22 >> 7;
            local_8 = local_8 - 7;
          }
          FUN_00364040(param_1,param_5,local_14,uVar22 & 0x7f,&local_164);
          puVar19 = local_54;
          uVar21 = local_18;
          uVar14 = local_c;
          break;
        case 5:
          *(undefined1 *)((uVar21 >> 1) + local_1c) = 1;
          local_2a4[0] = *local_1f4;
          local_1f4 = local_1f4 + 1;
          FUN_00363220(local_2a4,local_14);
          if (local_8 < 4) {
            uVar14 = *local_14[0] << ((byte)local_8 & 0x1f) | local_c;
            local_c = *local_14[0] >> (4 - (byte)local_8 & 0x1f);
            local_8 = local_8 + 0x1c;
            local_14[0] = local_14[0] + 1;
          }
          else {
            local_8 = local_8 - 4;
            uVar14 = local_c;
            local_c = local_c >> 4;
          }
          FUN_00362a40(param_1,param_5,local_2a4,uVar14 & 0xf);
          puVar19 = local_54;
          uVar14 = local_c;
          break;
        case 6:
          uVar14 = *puVar19;
          *(undefined1 *)((uVar21 >> 1) + local_1c) = 1;
          uVar8 = CONCAT11((char)uVar14,(char)uVar14);
          uVar14 = CONCAT22(uVar8,uVar8);
          *param_1 = uVar14;
          param_1[1] = uVar14;
          *(uint *)((int)param_1 + param_5) = uVar14;
          *(uint *)((int)param_1 + param_5 + 4) = uVar14;
          *(uint *)((int)param_1 + param_5 * 2) = uVar14;
          *(uint *)((int)param_1 + param_5 * 2 + 4) = uVar14;
          *(uint *)((int)param_1 + param_5 * 3) = uVar14;
          *(uint *)((int)param_1 + param_5 * 3 + 4) = uVar14;
          puVar20 = param_1 + param_5;
          *puVar20 = uVar14;
          puVar20[1] = uVar14;
          puVar20 = (uint *)((int)puVar20 + param_5);
          *puVar20 = uVar14;
          puVar20[1] = uVar14;
          local_54 = (uint *)((int)puVar19 + 1);
          puVar20 = (uint *)((int)puVar20 + param_5);
          *puVar20 = uVar14;
          puVar20[1] = uVar14;
          *(uint *)((int)puVar20 + param_5) = uVar14;
          *(uint *)((int)puVar20 + param_5 + 4) = uVar14;
          puVar19 = local_54;
          uVar14 = uVar22;
          break;
        case 7:
          *(undefined1 *)((uVar21 >> 1) + local_1c) = 1;
          puVar19 = (uint *)((int)local_20 + (int)*local_124 + (int)*local_f4 * param_5);
          local_124 = local_124 + 1;
          local_f4 = local_f4 + 1;
          local_164 = *puVar19;
          local_160 = puVar19[1];
          local_15c = *(undefined4 *)((int)puVar19 + param_5);
          local_158 = *(undefined4 *)((int)puVar19 + param_5 + 4);
          puVar1 = (undefined4 *)((int)puVar19 + param_5 * 2);
          local_154 = *puVar1;
          local_150 = puVar1[1];
          local_14c = *(undefined4 *)((int)puVar1 + param_5);
          local_148 = *(undefined4 *)((int)puVar1 + param_5 + 4);
          puVar1 = (undefined4 *)((int)puVar1 + param_5 * 2);
          local_144 = *puVar1;
          local_140 = puVar1[1];
          local_13c = *(undefined4 *)((int)puVar1 + param_5);
          local_138 = *(undefined4 *)((int)puVar1 + param_5 + 4);
          puVar1 = (undefined4 *)((int)puVar1 + param_5 * 2);
          local_134 = *puVar1;
          local_130 = puVar1[1];
          local_12c = *(undefined4 *)((int)puVar1 + param_5);
          local_128 = *(undefined4 *)((int)puVar1 + param_5 + 4);
          local_2a4[0] = *local_224;
          local_224 = local_224 + 1;
          FUN_00363220(local_2a4,local_14);
          if (local_8 < 4) {
            uVar14 = *local_14[0];
            bVar12 = (byte)local_8;
            uVar22 = uVar14 << (bVar12 & 0x1f) | local_c;
            local_8 = local_8 + 0x1c;
            local_14[0] = local_14[0] + 1;
            local_c = uVar14 >> (4 - bVar12 & 0x1f);
          }
          else {
            local_8 = local_8 - 4;
            uVar22 = local_c;
            local_c = local_c >> 4;
          }
          FUN_00362aa0(param_1,param_5,local_2a4,uVar22 & 0xf,&local_164);
          puVar19 = local_54;
          uVar21 = local_18;
          uVar14 = local_c;
          break;
        case 8:
          uVar14 = *puVar19;
          uVar4 = *(undefined1 *)((int)puVar19 + 1);
          *(undefined1 *)((uVar21 >> 1) + local_1c) = 1;
          uVar8 = CONCAT11((char)uVar14,(char)uVar14);
          uVar14 = CONCAT22(uVar8,uVar8);
          uVar8 = CONCAT11(uVar4,uVar4);
          local_54 = (uint *)((int)puVar19 + 2);
          uVar21 = CONCAT22(uVar8,uVar8);
          bVar12 = *local_84;
          iVar23 = (bVar12 & 0xf) * 4;
          *param_1 = *(uint *)(&DAT_00387fb0 + iVar23) & uVar21 |
                     *(uint *)(&DAT_00387ff0 + iVar23) & uVar14;
          iVar23 = (uint)(bVar12 >> 4) * 4;
          param_1[1] = *(uint *)(&DAT_00387fb0 + iVar23) & uVar21 |
                       *(uint *)(&DAT_00387ff0 + iVar23) & uVar14;
          bVar12 = local_84[1];
          iVar23 = (bVar12 & 0xf) * 4;
          puVar19 = (uint *)((int)param_1 + param_5 * 2);
          *(uint *)((int)param_1 + param_5) =
               *(uint *)(&DAT_00387fb0 + iVar23) & uVar21 |
               *(uint *)(&DAT_00387ff0 + iVar23) & uVar14;
          iVar23 = (uint)(bVar12 >> 4) * 4;
          *(uint *)((int)param_1 + param_5 + 4) =
               *(uint *)(&DAT_00387fb0 + iVar23) & uVar21 |
               *(uint *)(&DAT_00387ff0 + iVar23) & uVar14;
          bVar12 = local_84[2];
          iVar23 = (bVar12 & 0xf) * 4;
          puVar20 = (uint *)((int)puVar19 + param_5);
          *puVar19 = *(uint *)(&DAT_00387fb0 + iVar23) & uVar21 |
                     *(uint *)(&DAT_00387ff0 + iVar23) & uVar14;
          iVar23 = (uint)(bVar12 >> 4) * 4;
          puVar19[1] = *(uint *)(&DAT_00387fb0 + iVar23) & uVar21 |
                       *(uint *)(&DAT_00387ff0 + iVar23) & uVar14;
          bVar12 = local_84[3];
          iVar23 = (bVar12 & 0xf) * 4;
          puVar19 = (uint *)((int)puVar20 + param_5);
          *puVar20 = *(uint *)(&DAT_00387fb0 + iVar23) & uVar21 |
                     *(uint *)(&DAT_00387ff0 + iVar23) & uVar14;
          iVar23 = (uint)(bVar12 >> 4) * 4;
          puVar20[1] = *(uint *)(&DAT_00387fb0 + iVar23) & uVar21 |
                       *(uint *)(&DAT_00387ff0 + iVar23) & uVar14;
          bVar12 = local_84[4];
          iVar23 = (bVar12 & 0xf) * 4;
          puVar20 = (uint *)((int)puVar19 + param_5);
          *puVar19 = *(uint *)(&DAT_00387fb0 + iVar23) & uVar21 |
                     *(uint *)(&DAT_00387ff0 + iVar23) & uVar14;
          iVar23 = (uint)(bVar12 >> 4) * 4;
          puVar19[1] = *(uint *)(&DAT_00387fb0 + iVar23) & uVar21 |
                       *(uint *)(&DAT_00387ff0 + iVar23) & uVar14;
          bVar12 = local_84[5];
          iVar23 = (bVar12 & 0xf) * 4;
          puVar19 = (uint *)((int)puVar20 + param_5);
          *puVar20 = *(uint *)(&DAT_00387fb0 + iVar23) & uVar21 |
                     *(uint *)(&DAT_00387ff0 + iVar23) & uVar14;
          iVar23 = (uint)(bVar12 >> 4) * 4;
          puVar20[1] = *(uint *)(&DAT_00387fb0 + iVar23) & uVar21 |
                       *(uint *)(&DAT_00387ff0 + iVar23) & uVar14;
          bVar12 = local_84[6];
          iVar23 = (bVar12 & 0xf) * 4;
          *puVar19 = *(uint *)(&DAT_00387fb0 + iVar23) & uVar21 |
                     *(uint *)(&DAT_00387ff0 + iVar23) & uVar14;
          iVar23 = (uint)(bVar12 >> 4) * 4;
          puVar19[1] = *(uint *)(&DAT_00387fb0 + iVar23) & uVar21 |
                       *(uint *)(&DAT_00387ff0 + iVar23) & uVar14;
          bVar12 = local_84[7];
          iVar23 = (bVar12 & 0xf) * 4;
          local_84 = local_84 + 8;
          *(uint *)((int)puVar19 + param_5) =
               *(uint *)(&DAT_00387fb0 + iVar23) & uVar21 |
               *(uint *)(&DAT_00387ff0 + iVar23) & uVar14;
          iVar23 = (uint)(bVar12 >> 4) * 4;
          *(uint *)((int)puVar19 + param_5 + 4) =
               *(uint *)(&DAT_00387fb0 + iVar23) & uVar21 |
               *(uint *)(&DAT_00387ff0 + iVar23) & uVar14;
          puVar19 = local_54;
          uVar21 = uVar11;
          uVar14 = uVar22;
          break;
        case 9:
          *(undefined1 *)((uVar21 >> 1) + local_1c) = 1;
          uVar14 = local_54[1];
          uVar21 = local_54[2];
          uVar18 = local_54[3];
          *param_1 = *local_54;
          param_1[1] = uVar14;
          *(uint *)((int)param_1 + param_5) = uVar21;
          *(uint *)((int)param_1 + param_5 + 4) = uVar18;
          puVar19 = (uint *)((int)param_1 + param_5 * 2);
          uVar14 = local_54[5];
          uVar21 = local_54[6];
          uVar18 = local_54[7];
          *puVar19 = local_54[4];
          puVar19[1] = uVar14;
          *(uint *)((int)puVar19 + param_5) = uVar21;
          *(uint *)((int)puVar19 + param_5 + 4) = uVar18;
          puVar19 = (uint *)((int)puVar19 + param_5 * 2);
          uVar14 = local_54[9];
          uVar21 = local_54[10];
          uVar18 = local_54[0xb];
          *puVar19 = local_54[8];
          puVar19[1] = uVar14;
          *(uint *)((int)puVar19 + param_5) = uVar21;
          *(uint *)((int)puVar19 + param_5 + 4) = uVar18;
          puVar19 = (uint *)((int)puVar19 + param_5 * 2);
          uVar14 = local_54[0xd];
          uVar21 = local_54[0xe];
          uVar18 = local_54[0xf];
          *puVar19 = local_54[0xc];
          puVar19[1] = uVar14;
          *(uint *)((int)puVar19 + param_5) = uVar21;
          *(uint *)((int)puVar19 + param_5 + 4) = uVar18;
          local_54 = local_54 + 0x10;
          puVar19 = local_54;
          uVar21 = uVar11;
          uVar14 = uVar22;
        }
        uVar21 = uVar21 + param_8;
        param_1 = param_1 + 2;
        local_20 = local_20 + 2;
        uVar11 = uVar21;
        uVar22 = local_c;
      }
      if (param_8 == 1) {
        if ((local_24 & 8) != 0) {
          local_1c = local_1c + local_8c;
        }
      }
      else {
        local_1c = local_1c + local_8c;
      }
      param_1 = (uint *)((int)param_1 + local_94);
      local_20 = (uint *)((int)local_20 + local_94);
      local_24 = local_24 + 8;
      local_18 = 0;
    } while (local_24 < param_4);
  }
  return local_14[0];
}
