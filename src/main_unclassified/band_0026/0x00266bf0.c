/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FD08E6DA3F0E5A2EA4CD9DA6BAAA2D9D7F0D3FF10510A18A8BB480FB7BEFB71A
 * Entry: 0x00266bf0, Ghidra index: 8742, label: FUN_00266bf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698a4;
extern uint32_t DAT_004698a8;
extern uint32_t DAT_0046b048;
extern uint32_t DAT_0046b04c;
extern uint32_t DAT_0046b050;
extern uint32_t DAT_0046b05c;
extern uint32_t DAT_0046b084;
extern uint32_t DAT_0046b088;
extern uint32_t DAT_0046b08c;
extern uint32_t DAT_0046b0c0;
extern uint32_t DAT_0046b0e0;
extern uint32_t DAT_0046b0e4;
extern uint32_t DAT_0046b178;
extern uint32_t DAT_0046b17c;
extern uint32_t DAT_0046b180;
extern uint32_t DAT_0046b184;
extern uint32_t DAT_0046b188;
extern uint32_t DAT_0046b18c;
extern uint32_t DAT_0046b190;
extern uint32_t DAT_0046b194;
extern uint32_t DAT_0046b198;
extern uint32_t DAT_0046b19c;
extern uint32_t DAT_0046b1a0;
extern uint32_t DAT_0046b1a4;
extern uint32_t DAT_0046b1a8;
extern uint32_t DAT_0046b1ac;
extern uint32_t DAT_0046b1b0;
extern uint32_t DAT_0046b1b4;
extern uint32_t DAT_0046b1b8;
extern uint32_t DAT_0046b1bc;
extern uint32_t DAT_004a5b34;
extern uint32_t _DAT_0046b048;
extern uint32_t _DAT_0046b04c;
extern uint32_t _DAT_0046b050;
extern uint32_t _DAT_0046b0c0;
/* XBE data region contains contiguous DWORDs; +4 is the guest field at
 * 0x0046b0c4. ABI and global layout remain unverified. */
extern uint32_t uRam0046b0c4;
extern uint32_t _DAT_0046b0d0;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00266bf0(int *param_1,float *param_2,undefined4 *param_3,undefined4 param_4,int *param_5,
                 int *param_6,undefined4 *param_7,char *param_8,float *param_9,float *param_10,
                 int *param_11,float *param_12,float *param_13,float *param_14,float *param_15,
                 float param_16,float param_17,float param_18,undefined4 *param_19,float param_20,
                 undefined4 *param_21,undefined4 *param_22,uint param_23,undefined4 param_24,
                 float param_25,int param_26,undefined4 *param_27,undefined4 *param_28,int *param_29
                 ,float *param_30,int param_31,undefined4 *param_32,undefined4 *param_33,
                 float param_34,float param_35,float param_36,float param_37,undefined4 *param_38,
                 undefined4 *param_39,undefined4 param_40,undefined4 param_41,undefined4 param_42,
                 undefined4 param_43,undefined4 param_44,undefined4 param_45,undefined4 param_46,
                 undefined4 param_47,undefined4 param_48,undefined4 param_49,float param_50,
                 float param_51,float param_52,undefined4 *param_53,float param_54,
                 undefined4 param_55,undefined4 param_56,undefined4 param_57,undefined4 param_58,
                 undefined4 param_59,undefined4 param_60,undefined4 param_61,undefined4 param_62,
                 undefined4 param_63,float param_64,float param_65,float param_66,float param_67,
                 undefined8 param_68,float param_69,float param_70,float param_71,float param_72,
                 undefined4 param_73,float param_74,int *param_75,undefined4 param_76,
                 undefined4 param_77,undefined4 param_78,undefined4 param_79,undefined4 param_80,
                 undefined4 param_81)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  float *pfVar19;
  byte bVar20;
  uint uVar21;
  float fVar22;
  float *pfVar23;
  int *piVar24;
  int iVar25;
  int iVar26;
  undefined4 *puVar27;
  float *pfVar28;
  float fVar29;
  int iVar30;
  int iVar31;
  float *pfVar32;
  undefined4 *puVar33;
  undefined1 auVar34 [16];
  float *pfVar35;
  int in_stack_00000170;
  int in_stack_00000174;
  int in_stack_00000178;
  int in_stack_0000017c;
  int in_stack_00000180;
  int in_stack_00000184;
  int in_stack_00000188;
  int in_stack_0000018c;
  int in_stack_00000190;
  float in_stack_00000194;
  float in_stack_00000198;
  float in_stack_0000019c;
  float *in_stack_000001dc;
  float in_stack_0000030c;
  byte bVar36;
  char cVar37;
  
  FUN_002ebea0();
  iVar31 = param_1[10];
  uVar21 = (uint)param_1[6] >> 1;
  uVar17 = (CONCAT11(*(byte *)(param_1 + 6),(byte)uVar21) & 0x1ff) & 0xff01;
  iVar26 = iVar31;
  if ((uVar21 & 1) == 0) {
    iVar26 = iVar31 + -1;
  }
  param_25 = (float)(iVar26 * 3);
  param_23 = -(uint)((*(byte *)(param_1 + 6) & 1) != 0) & 3;
  param_30 = (float *)((-(uint)((uVar21 & 1) != 0) & 3) + param_23);
  cVar37 = (char)(uVar17 >> 8);
  if ((uVar21 & 1) == 0) {
    if (cVar37 == '\0') goto LAB_00266c80;
    iVar26 = param_1[0xb];
    if ((0 < iVar26) && (*(char *)(iVar31 * 0x3c + -4 + param_1[9]) != '\0')) {
      iVar26 = iVar26 + -1;
    }
  }
  else {
    iVar26 = param_1[0xb];
  }
  param_25 = (float)((int)param_25 + iVar26 * -3);
LAB_00266c80:
  iVar26 = *param_1;
  _DAT_0046b050 = *(undefined4 *)(iVar26 + 0x40);
  _DAT_0046b048 = *(undefined4 *)(iVar26 + 0x38);
  _DAT_0046b04c = *(undefined4 *)(iVar26 + 0x3c);
  iVar26 = *param_1;
  _DAT_0046b0c0 = *(undefined4 *)(iVar26 + 0x14);
  uRam0046b0c4 = *(undefined4 *)(iVar26 + 0x18);
  uRam0046b0c8 = *(undefined4 *)(iVar26 + 0x1c);
  uRam0046b0cc = *(undefined4 *)(iVar26 + 0x20);
  DAT_0046b0e0 = *(undefined4 *)(iVar26 + 0x34);
  _DAT_0046b0d0 = *(undefined4 *)(iVar26 + 0x24);
  uRam0046b0d4 = *(undefined4 *)(iVar26 + 0x28);
  uRam0046b0d8 = *(undefined4 *)(iVar26 + 0x2c);
  uRam0046b0dc = *(undefined4 *)(iVar26 + 0x30);
  param_3 = (undefined4 *)&DAT_0046b0c0;
  param_7 = &DAT_0046b178;
  iVar26 = 0;
  bVar36 = (byte)uVar17;
  bVar20 = (byte)uVar21 & 1;
  DAT_0046b084 = _DAT_0046b048;
  DAT_0046b088 = _DAT_0046b04c;
  DAT_0046b08c = _DAT_0046b050;
  DAT_0046b178 = _DAT_0046b0c0;
  DAT_0046b17c = uRam0046b0c4;
  DAT_0046b180 = uRam0046b0c8;
  DAT_0046b184 = uRam0046b0cc;
  DAT_0046b188 = _DAT_0046b0d0;
  DAT_0046b18c = uRam0046b0d4;
  DAT_0046b190 = uRam0046b0d8;
  DAT_0046b194 = uRam0046b0dc;
  DAT_0046b198 = DAT_0046b0e0;
  if (0 < param_1[10]) {
    iVar31 = 0;
    param_19 = (undefined4 *)&DAT_0046b0e4;
    puVar27 = &DAT_0046b05c;
    do {
      FUN_00234f00();
      iVar25 = *(int *)(iVar31 + param_1[9]);
      param_7 = *(undefined4 **)(iVar25 + 0x40);
      param_3 = *(undefined4 **)(iVar25 + 0x3c);
      puVar27[-2] = *(undefined4 *)(iVar25 + 0x38);
      puVar27[-1] = param_3;
      *puVar27 = param_7;
      iVar25 = *(int *)(iVar31 + param_1[9]);
      param_27 = param_19;
      param_28 = (undefined4 *)(iVar25 + 0x14);
      uVar12 = *(undefined4 *)(iVar25 + 0x18);
      uVar13 = *(undefined4 *)(iVar25 + 0x1c);
      uVar14 = *(undefined4 *)(iVar25 + 0x20);
      uVar2 = *(undefined4 *)(iVar25 + 0x34);
      uVar8 = *(undefined4 *)(iVar25 + 0x24);
      uVar9 = *(undefined4 *)(iVar25 + 0x28);
      uVar10 = *(undefined4 *)(iVar25 + 0x2c);
      uVar11 = *(undefined4 *)(iVar25 + 0x30);
      *param_19 = *param_28;
      param_19[1] = uVar12;
      param_19[2] = uVar13;
      param_19[3] = uVar14;
      param_19[8] = uVar2;
      param_19[4] = uVar8;
      param_19[5] = uVar9;
      param_19[6] = uVar10;
      param_19[7] = uVar11;
      param_19 = param_19 + 9;
      iVar26 = iVar26 + 1;
      puVar27 = puVar27 + 3;
      iVar31 = iVar31 + 0x3c;
      bVar20 = bVar36;
    } while (iVar26 < param_1[10]);
  }
  param_28 = (undefined4 *)param_1[10];
  if (cVar37 != '\0') {
    pfVar28 = (float *)param_1[2];
    param_7 = (undefined4 *)pfVar28[2];
    param_3 = (undefined4 *)pfVar28[1];
    param_37 = *pfVar28;
    param_38 = param_3;
    param_39 = param_7;
  }
  if (bVar20 != 0) {
    param_7 = (undefined4 *)param_1[3];
    param_3 = &param_40;
    param_40 = *param_7;
    param_41 = param_7[1];
    param_42 = param_7[2];
    param_43 = param_7[3];
    param_48 = param_7[8];
    param_44 = param_7[4];
    param_45 = param_7[5];
    param_46 = param_7[6];
    param_47 = param_7[7];
  }
  bVar7 = false;
  if (cVar37 != '\0') {
    param_7 = (undefined4 *)((float)param_39 - *(float *)(&DAT_0046b050 + (int)param_28 * 0xc));
    param_3 = (undefined4 *)((float)param_38 - *(float *)(&DAT_0046b04c + (int)param_28 * 0xc));
    param_21 = param_3;
    param_22 = param_7;
    if (SQRT((param_37 - *(float *)(&DAT_0046b048 + (int)param_28 * 0xc)) *
             (param_37 - *(float *)(&DAT_0046b048 + (int)param_28 * 0xc)) +
             (float)param_3 * (float)param_3 + (float)param_7 * (float)param_7) <= 0.001) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
  }
  FUN_002339d0();
  if (!bVar7) {
    if (bVar36 == 0) {
      return;
    }
    FUN_002339d0();
    FUN_00266050();
    if (SQRT(param_20 * param_20 +
             (float)param_21 * (float)param_21 + (float)param_22 * (float)param_22) <= 0.01) {
      return;
    }
  }
  fVar18 = param_25;
  fVar1 = (float)((int)param_30 + (int)param_25);
  param_31 = 1;
  param_7 = (undefined4 *)0x3f800000;
  param_19 = (undefined4 *)0x0;
  param_3 = (undefined4 *)fVar1;
  pfVar28 = (float *)&param_3;
  if ((uint)fVar1 <= (uint)DAT_004a5b34) {
    pfVar28 = &DAT_004a5b34;
  }
  DAT_004a5b34 = *pfVar28;
  if (bVar36 == 0) {
    param_29 = (int *)(param_1[10] + -1);
  }
  else {
    param_29 = (int *)param_1[10];
  }
  param_26 = 0;
  do {
    if (9 < param_26) break;
    iVar26 = 0;
    param_15 = (float *)param_1[10];
    param_27 = (undefined4 *)0x40000000;
    param_3 = (undefined4 *)0x7f7fffff;
    param_2 = param_15;
    if (bVar36 != 0) {
      param_2 = (float *)((int)param_15 + 1);
    }
    param_14 = (float *)0x1;
    if (3 < (int)param_2 + -1) {
      param_13 = (float *)&stack0x0000039c;
      param_9 = (float *)&stack0x00000398;
      pfVar32 = (float *)&stack0x00000310;
      pfVar19 = (float *)&stack0x0000030c;
      param_12 = (float *)&stack0x00000358;
      param_8 = (char *)(param_1[9] + 0x38);
      pfVar35 = (float *)0x4;
      param_10 = (float *)&stack0x00000350;
      pfVar28 = (float *)0x46b0e8;
      do {
        if (cVar37 != '\0') {
          if (param_14 == param_15) {
            fVar29 = 0.0;
            param_6 = (int *)0x0;
            param_5 = (int *)0x0;
          }
          else {
            iVar31 = *(int *)(*(int *)(param_8 + 4) + 0x10);
            pfVar23 = (float *)(iVar31 + 4);
            fVar29 = *pfVar28 * *(float *)(iVar31 + 8) +
                     pfVar28[-1] * *pfVar23 + pfVar28[1] * *(float *)(iVar31 + 0xc);
            param_11 = (int *)(pfVar28[2] * *pfVar23 +
                              pfVar28[3] * *(float *)(iVar31 + 8) +
                              pfVar28[4] * *(float *)(iVar31 + 0xc));
            param_1 = (int *)(pfVar28[5] * *pfVar23 +
                             pfVar28[6] * *(float *)(iVar31 + 8) +
                             pfVar28[7] * *(float *)(iVar31 + 0xc));
            param_5 = param_11;
            param_6 = param_1;
          }
          if (*param_8 == '\0') {
            *(int **)(&stack0x00000318 + iVar26 * 4) = param_6;
            *(undefined4 *)(&stack0x000003ac + iVar26 * 4) = 0;
            *(undefined4 *)(&stack0x00000360 + iVar26 * 4) = 0;
            *(float *)(&stack0x0000031c + iVar26 * 4) = -(float)param_5;
            *(undefined4 *)(&stack0x00000314 + iVar26 * 4) = 0;
            *(float *)(&stack0x0000035c + iVar26 * 4) = -(float)param_6;
            *(float *)(&stack0x00000364 + iVar26 * 4) = fVar29;
            *(int **)(&stack0x000003a4 + iVar26 * 4) = param_5;
            *(float *)(&stack0x000003a8 + iVar26 * 4) = -fVar29;
          }
          else {
            *pfVar19 = (float)param_6 + *pfVar19;
            *pfVar32 = *pfVar32 - (float)param_5;
            *param_10 = *param_10 - (float)param_6;
            *param_12 = fVar29 + *param_12;
            *param_9 = (float)param_5 + *param_9;
            *param_13 = *param_13 - fVar29;
          }
        }
        if (bVar36 == 0) {
LAB_00267235:
          if (*param_8 == '\0') {
            param_10 = param_10 + 3;
            param_12 = param_12 + 3;
            param_9 = param_9 + 3;
            iVar26 = iVar26 + 3;
            pfVar19 = pfVar19 + 3;
            pfVar32 = pfVar32 + 3;
            param_13 = param_13 + 3;
          }
        }
        else if (*param_8 == '\0') {
          iVar31 = (iVar26 + param_23 * 0x12) * 4;
          *(undefined4 *)(&stack0x00000314 + iVar31) = 0x3f800000;
          *(undefined4 *)(&stack0x00000318 + iVar31) = 0;
          *(undefined4 *)(&stack0x0000031c + iVar31) = 0;
          *(undefined4 *)(&stack0x0000035c + iVar31) = 0;
          *(undefined4 *)(&stack0x00000360 + iVar31) = 0x3f800000;
          *(undefined4 *)(&stack0x00000364 + iVar31) = 0;
          *(undefined4 *)(&stack0x000003a4 + iVar31) = 0;
          *(undefined4 *)(&stack0x000003a8 + iVar31) = 0;
          *(undefined4 *)(&stack0x000003ac + iVar31) = 0x3f800000;
          goto LAB_00267235;
        }
        if (cVar37 != '\0') {
          if ((float *)((int)pfVar35 + -2) == param_15) {
            fVar29 = 0.0;
            param_6 = (int *)0x0;
            param_5 = (int *)0x0;
          }
          else {
            iVar31 = *(int *)(*(int *)(param_8 + 0x40) + 0x10);
            pfVar23 = (float *)(iVar31 + 4);
            fVar29 = pfVar28[8] * *pfVar23 +
                     pfVar28[9] * *(float *)(iVar31 + 8) + pfVar28[10] * *(float *)(iVar31 + 0xc);
            param_11 = (int *)(pfVar28[0xb] * *pfVar23 +
                              pfVar28[0xc] * *(float *)(iVar31 + 8) +
                              pfVar28[0xd] * *(float *)(iVar31 + 0xc));
            param_1 = (int *)(pfVar28[0xe] * *pfVar23 +
                             pfVar28[0xf] * *(float *)(iVar31 + 8) +
                             pfVar28[0x10] * *(float *)(iVar31 + 0xc));
            param_5 = param_11;
            param_6 = param_1;
          }
          if (param_8[0x3c] == '\0') {
            *(int **)(&stack0x00000318 + iVar26 * 4) = param_6;
            *(undefined4 *)(&stack0x000003ac + iVar26 * 4) = 0;
            *(undefined4 *)(&stack0x00000360 + iVar26 * 4) = 0;
            *(float *)(&stack0x0000031c + iVar26 * 4) = -(float)param_5;
            *(undefined4 *)(&stack0x00000314 + iVar26 * 4) = 0;
            *(float *)(&stack0x0000035c + iVar26 * 4) = -(float)param_6;
            *(float *)(&stack0x00000364 + iVar26 * 4) = fVar29;
            *(int **)(&stack0x000003a4 + iVar26 * 4) = param_5;
            *(float *)(&stack0x000003a8 + iVar26 * 4) = -fVar29;
          }
          else {
            *pfVar19 = (float)param_6 + *pfVar19;
            *pfVar32 = *pfVar32 - (float)param_5;
            *param_10 = *param_10 - (float)param_6;
            *param_12 = fVar29 + *param_12;
            *param_9 = (float)param_5 + *param_9;
            *param_13 = *param_13 - fVar29;
          }
        }
        if ((bVar36 != 0) && (param_8[0x3c] == '\0')) {
          iVar31 = (iVar26 + param_23 * 0x12) * 4;
          *(undefined4 *)(&stack0x00000314 + iVar31) = 0x3f800000;
          *(undefined4 *)(&stack0x00000318 + iVar31) = 0;
          *(undefined4 *)(&stack0x0000031c + iVar31) = 0;
          *(undefined4 *)(&stack0x0000035c + iVar31) = 0;
          *(undefined4 *)(&stack0x00000360 + iVar31) = 0x3f800000;
          *(undefined4 *)(&stack0x00000364 + iVar31) = 0;
          *(undefined4 *)(&stack0x000003a4 + iVar31) = 0;
          *(undefined4 *)(&stack0x000003a8 + iVar31) = 0;
          *(undefined4 *)(&stack0x000003ac + iVar31) = 0x3f800000;
        }
        if (param_8[0x3c] == '\0') {
          param_10 = param_10 + 3;
          param_12 = param_12 + 3;
          param_9 = param_9 + 3;
          iVar26 = iVar26 + 3;
          pfVar19 = pfVar19 + 3;
          pfVar32 = pfVar32 + 3;
          param_13 = param_13 + 3;
        }
        if (cVar37 != '\0') {
          if ((float *)((int)pfVar35 + -1) == param_15) {
            fVar29 = 0.0;
            param_6 = (int *)0x0;
            param_5 = (int *)0x0;
          }
          else {
            iVar31 = *(int *)(*(int *)(param_8 + 0x7c) + 0x10);
            pfVar23 = (float *)(iVar31 + 4);
            fVar29 = pfVar28[0x11] * *pfVar23 +
                     pfVar28[0x12] * *(float *)(iVar31 + 8) +
                     pfVar28[0x13] * *(float *)(iVar31 + 0xc);
            param_11 = (int *)(pfVar28[0x14] * *pfVar23 +
                              pfVar28[0x15] * *(float *)(iVar31 + 8) +
                              pfVar28[0x16] * *(float *)(iVar31 + 0xc));
            param_1 = (int *)(pfVar28[0x17] * *pfVar23 +
                             pfVar28[0x18] * *(float *)(iVar31 + 8) +
                             pfVar28[0x19] * *(float *)(iVar31 + 0xc));
            param_5 = param_11;
            param_6 = param_1;
          }
          if (param_8[0x78] == '\0') {
            *(int **)(&stack0x00000318 + iVar26 * 4) = param_6;
            *(undefined4 *)(&stack0x000003ac + iVar26 * 4) = 0;
            *(undefined4 *)(&stack0x00000360 + iVar26 * 4) = 0;
            *(float *)(&stack0x0000031c + iVar26 * 4) = -(float)param_5;
            *(undefined4 *)(&stack0x00000314 + iVar26 * 4) = 0;
            *(float *)(&stack0x0000035c + iVar26 * 4) = -(float)param_6;
            *(float *)(&stack0x00000364 + iVar26 * 4) = fVar29;
            *(int **)(&stack0x000003a4 + iVar26 * 4) = param_5;
            *(float *)(&stack0x000003a8 + iVar26 * 4) = -fVar29;
          }
          else {
            *pfVar19 = (float)param_6 + *pfVar19;
            *pfVar32 = *pfVar32 - (float)param_5;
            *param_10 = *param_10 - (float)param_6;
            *param_12 = fVar29 + *param_12;
            *param_9 = (float)param_5 + *param_9;
            *param_13 = *param_13 - fVar29;
          }
        }
        if ((bVar36 != 0) && (param_8[0x78] == '\0')) {
          iVar31 = (iVar26 + param_23 * 0x12) * 4;
          *(undefined4 *)(&stack0x00000314 + iVar31) = 0x3f800000;
          *(undefined4 *)(&stack0x00000318 + iVar31) = 0;
          *(undefined4 *)(&stack0x0000031c + iVar31) = 0;
          *(undefined4 *)(&stack0x0000035c + iVar31) = 0;
          *(undefined4 *)(&stack0x00000360 + iVar31) = 0x3f800000;
          *(undefined4 *)(&stack0x00000364 + iVar31) = 0;
          *(undefined4 *)(&stack0x000003a4 + iVar31) = 0;
          *(undefined4 *)(&stack0x000003a8 + iVar31) = 0;
          *(undefined4 *)(&stack0x000003ac + iVar31) = 0x3f800000;
        }
        if (param_8[0x78] == '\0') {
          param_10 = param_10 + 3;
          param_12 = param_12 + 3;
          param_9 = param_9 + 3;
          iVar26 = iVar26 + 3;
          pfVar19 = pfVar19 + 3;
          pfVar32 = pfVar32 + 3;
          param_13 = param_13 + 3;
        }
        if (cVar37 != '\0') {
          if (pfVar35 == param_15) {
            fVar29 = 0.0;
            param_6 = (int *)0x0;
            param_5 = (int *)0x0;
          }
          else {
            iVar31 = *(int *)(*(int *)(param_8 + 0xb8) + 0x10);
            pfVar23 = (float *)(iVar31 + 4);
            fVar29 = pfVar28[0x1a] * *pfVar23 +
                     pfVar28[0x1b] * *(float *)(iVar31 + 8) +
                     pfVar28[0x1c] * *(float *)(iVar31 + 0xc);
            param_11 = (int *)(pfVar28[0x1d] * *pfVar23 +
                              pfVar28[0x1e] * *(float *)(iVar31 + 8) +
                              pfVar28[0x1f] * *(float *)(iVar31 + 0xc));
            param_1 = (int *)(pfVar28[0x20] * *pfVar23 +
                             pfVar28[0x21] * *(float *)(iVar31 + 8) +
                             pfVar28[0x22] * *(float *)(iVar31 + 0xc));
            param_5 = param_11;
            param_6 = param_1;
          }
          if (param_8[0xb4] == '\0') {
            *(int **)(&stack0x00000318 + iVar26 * 4) = param_6;
            *(undefined4 *)(&stack0x000003ac + iVar26 * 4) = 0;
            *(undefined4 *)(&stack0x00000360 + iVar26 * 4) = 0;
            *(float *)(&stack0x0000031c + iVar26 * 4) = -(float)param_5;
            *(undefined4 *)(&stack0x00000314 + iVar26 * 4) = 0;
            *(float *)(&stack0x0000035c + iVar26 * 4) = -(float)param_6;
            *(float *)(&stack0x00000364 + iVar26 * 4) = fVar29;
            *(int **)(&stack0x000003a4 + iVar26 * 4) = param_5;
            *(float *)(&stack0x000003a8 + iVar26 * 4) = -fVar29;
          }
          else {
            *pfVar19 = (float)param_6 + *pfVar19;
            *pfVar32 = *pfVar32 - (float)param_5;
            *param_10 = *param_10 - (float)param_6;
            *param_12 = fVar29 + *param_12;
            *param_9 = (float)param_5 + *param_9;
            *param_13 = *param_13 - fVar29;
          }
        }
        if ((bVar36 != 0) && (param_8[0xb4] == '\0')) {
          iVar31 = (iVar26 + param_23 * 0x12) * 4;
          *(undefined4 *)(&stack0x00000314 + iVar31) = 0x3f800000;
          *(undefined4 *)(&stack0x00000318 + iVar31) = 0;
          *(undefined4 *)(&stack0x0000031c + iVar31) = 0;
          *(undefined4 *)(&stack0x0000035c + iVar31) = 0;
          *(undefined4 *)(&stack0x00000360 + iVar31) = 0x3f800000;
          *(undefined4 *)(&stack0x00000364 + iVar31) = 0;
          *(undefined4 *)(&stack0x000003a4 + iVar31) = 0;
          *(undefined4 *)(&stack0x000003a8 + iVar31) = 0;
          *(undefined4 *)(&stack0x000003ac + iVar31) = 0x3f800000;
        }
        if (param_8[0xb4] == '\0') {
          param_10 = param_10 + 3;
          param_12 = param_12 + 3;
          param_9 = param_9 + 3;
          iVar26 = iVar26 + 3;
          pfVar19 = pfVar19 + 3;
          pfVar32 = pfVar32 + 3;
          param_13 = param_13 + 3;
        }
        param_14 = param_14 + 1;
        param_8 = param_8 + 0xf0;
        pfVar35 = pfVar35 + 1;
        pfVar28 = pfVar28 + 0x24;
      } while ((int)pfVar35 < (int)param_2);
    }
    if ((int)param_14 < (int)param_2) {
      piVar24 = (int *)((int)param_14 * 0x3c + param_1[9]);
      pfVar35 = (float *)(&stack0x00000310 + iVar26 * 4);
      pfVar28 = (float *)(&uRam0046b0c4 + (int)param_14 * 9);
      do {
        if (cVar37 != '\0') {
          if (param_14 == param_15) {
            fVar29 = 0.0;
            param_6 = (int *)0x0;
            param_5 = (int *)0x0;
          }
          else {
            iVar31 = *(int *)(*piVar24 + 0x10);
            pfVar19 = (float *)(iVar31 + 4);
            fVar29 = *pfVar28 * *(float *)(iVar31 + 8) +
                     pfVar28[-1] * *pfVar19 + pfVar28[1] * *(float *)(iVar31 + 0xc);
            param_11 = (int *)(pfVar28[2] * *pfVar19 +
                              pfVar28[3] * *(float *)(iVar31 + 8) +
                              pfVar28[4] * *(float *)(iVar31 + 0xc));
            param_1 = (int *)(pfVar28[5] * *pfVar19 +
                             pfVar28[6] * *(float *)(iVar31 + 8) +
                             pfVar28[7] * *(float *)(iVar31 + 0xc));
            param_5 = param_11;
            param_6 = param_1;
          }
          if ((char)piVar24[-1] == '\0') {
            pfVar35[2] = (float)param_6;
            pfVar35[3] = -(float)param_5;
            pfVar35[0x27] = 0.0;
            pfVar35[0x14] = 0.0;
            pfVar35[0x13] = -(float)param_6;
            pfVar35[1] = 0.0;
            pfVar35[0x25] = (float)param_5;
            pfVar35[0x15] = fVar29;
            pfVar35[0x26] = -fVar29;
          }
          else {
            pfVar35[-1] = (float)param_6 + pfVar35[-1];
            *pfVar35 = *pfVar35 - (float)param_5;
            pfVar35[0x10] = pfVar35[0x10] - (float)param_6;
            pfVar35[0x12] = fVar29 + pfVar35[0x12];
            pfVar35[0x22] = (float)param_5 + pfVar35[0x22];
            pfVar35[0x23] = pfVar35[0x23] - fVar29;
          }
        }
        if (bVar36 == 0) {
LAB_002679d0:
          if ((char)piVar24[-1] == '\0') {
            iVar26 = iVar26 + 3;
            pfVar35 = pfVar35 + 3;
          }
        }
        else if ((char)piVar24[-1] == '\0') {
          iVar31 = (iVar26 + param_23 * 0x12) * 4;
          *(undefined4 *)(&stack0x00000314 + iVar31) = 0x3f800000;
          *(undefined4 *)(&stack0x00000318 + iVar31) = 0;
          *(undefined4 *)(&stack0x0000031c + iVar31) = 0;
          *(undefined4 *)(&stack0x0000035c + iVar31) = 0;
          *(undefined4 *)(&stack0x00000360 + iVar31) = 0x3f800000;
          *(undefined4 *)(&stack0x00000364 + iVar31) = 0;
          *(undefined4 *)(&stack0x000003a4 + iVar31) = 0;
          *(undefined4 *)(&stack0x000003a8 + iVar31) = 0;
          *(undefined4 *)(&stack0x000003ac + iVar31) = 0x3f800000;
          goto LAB_002679d0;
        }
        piVar24 = piVar24 + 0xf;
        param_14 = (float *)((int)param_14 + 1);
        pfVar28 = pfVar28 + 9;
      } while ((int)param_14 < (int)param_2);
    }
    puVar27 = (undefined4 *)FUN_00269580();
    puVar33 = (undefined4 *)&stack0x00000e5c;
    for (iVar26 = 0x146; iVar26 != 0; iVar26 = iVar26 + -1) {
      *puVar33 = *puVar27;
      puVar27 = puVar27 + 1;
      puVar33 = puVar33 + 1;
    }
    puVar27 = (undefined4 *)FUN_00269780();
    puVar33 = (undefined4 *)&stack0x000008f4;
    for (iVar26 = 0x146; iVar26 != 0; iVar26 = iVar26 + -1) {
      *puVar33 = *puVar27;
      puVar27 = puVar27 + 1;
      puVar33 = puVar33 + 1;
    }
    param_2 = (float *)((float)param_1[8] * (float)param_1[8]);
    fVar29 = 0.0;
    if (fVar1 != 0.0) {
      iVar26 = 0;
      do {
        fVar22 = 0.0;
        if (fVar18 != 0.0) {
          do {
            if (fVar29 == fVar22) {
              *(float *)(&stack0x000008f4 + (iVar26 + (int)fVar22) * 4) =
                   (float)param_2 + *(float *)(&stack0x000008f4 + (iVar26 + (int)fVar22) * 4);
            }
            fVar22 = (float)((int)fVar22 + 1);
          } while ((uint)fVar22 < (uint)fVar18);
        }
        fVar29 = (float)((int)fVar29 + 1);
        iVar26 = iVar26 + 0x12;
      } while ((uint)fVar29 < (uint)fVar1);
    }
    FUN_00269600();
    param_24._3_1_ = ~(byte)((uint)param_1[6] >> 2) & 1;
    if ((param_24._3_1_ != 0) && (0 < (int)param_29)) {
      param_2 = (float *)0x0;
      puVar27 = (undefined4 *)&stack0x00000858;
      param_15 = (float *)param_29;
      piVar24 = param_1;
      do {
        if (*(char *)((int)param_2 + 0x38 + piVar24[9]) == '\0') {
          piVar24 = &stack0x00000170;
          param_11 = (int *)FUN_002334b0();
          in_stack_00000170 = *param_11;
          in_stack_00000174 = param_11[1];
          in_stack_00000178 = param_11[2];
          in_stack_0000017c = param_11[3];
          in_stack_00000190 = param_11[8];
          in_stack_00000180 = param_11[4];
          in_stack_00000184 = param_11[5];
          in_stack_00000188 = param_11[6];
          in_stack_0000018c = param_11[7];
          FUN_002339d0();
          FUN_002339d0();
          FUN_00266050();
          puVar27[-1] = param_76;
          *puVar27 = param_77;
          puVar27[1] = param_78;
          puVar27 = puVar27 + 3;
          param_1 = piVar24;
        }
        param_2 = (float *)((int)param_2 + 0x3c);
        param_15 = (float *)((int)param_15 + -1);
      } while (param_15 != (float *)0x0);
    }
    param_2 = (float *)0x0;
    param_15 = (float *)((int)param_28 * 0xc);
    do {
      iVar26 = (int)param_15;
      in_stack_000001dc = param_30;
      param_27 = (undefined4 *)((float)param_27 * 0.5);
      if (cVar37 != '\0') {
        param_18 = (float)param_39 - *(float *)(&DAT_0046b050 + (int)param_15);
        param_17 = (float)param_38 - *(float *)(&DAT_0046b04c + (int)param_15);
        param_16 = param_37 - *(float *)(&DAT_0046b048 + (int)param_15);
        piVar24 = (int *)register0x00000010;
        if (0 < param_31) {
          piVar24 = &param_31;
        }
        param_1 = (int *)(float)*piVar24;
        auVar34 = rcpss(ZEXT416(param_1),ZEXT416(param_1));
        in_stack_0000019c = auVar34._0_4_;
        param_16 = (param_37 - *(float *)(&DAT_0046b048 + (int)param_15)) * in_stack_0000019c;
        in_stack_00000198 = param_17 * in_stack_0000019c;
        in_stack_0000019c = param_18 * in_stack_0000019c;
        _param_17 = CONCAT44(in_stack_0000019c,in_stack_00000198);
        in_stack_00000194 = param_16;
      }
      param_31 = param_31 + -1;
      if (bVar36 != 0) {
        FUN_002339d0();
        FUN_00266050();
        (&stack0x00000194)[param_23] = (float)param_79;
        (&stack0x00000198)[param_23] = (float)param_80;
        (&stack0x0000019c)[param_23] = (float)param_81;
      }
      FUN_00269700();
      if (param_24._3_1_ != 0) {
        fVar29 = (float)param_1[8];
        fVar22 = 0.0;
        if (in_stack_0000030c != 0.0) {
          do {
            fVar22 = (float)((int)fVar22 + 1);
            *(float *)(&stack0x000002c0 + (int)fVar22 * 4) =
                 fVar29 * 0.25 * *(float *)(&stack0x00000850 + (int)fVar22 * 4) +
                 *(float *)(&stack0x000002c0 + (int)fVar22 * 4);
          } while ((uint)fVar22 < (uint)in_stack_0000030c);
        }
      }
      puVar27 = (undefined4 *)FUN_00269700();
      param_66 = *(float *)(&DAT_0046b04c + iVar26);
      param_72 = *(float *)(&DAT_0046b050 + iVar26);
      param_65 = *(float *)(&DAT_0046b050 + iVar26);
      puVar33 = (undefined4 *)&stack0x000008a4;
      for (iVar31 = 0x13; iVar31 != 0; iVar31 = iVar31 + -1) {
        *puVar33 = *puVar27;
        puVar27 = puVar27 + 1;
        puVar33 = puVar33 + 1;
      }
      param_63 = *(undefined4 *)(&DAT_0046b048 + iVar26);
      param_64 = param_66;
      if (0 < (int)param_29) {
        param_14 = &param_20;
        param_13 = &param_54;
        param_1 = (int *)&stack0x000008a8;
        param_34 = 0.5;
        param_12 = &param_54;
        iVar31 = 0;
        param_11 = param_29;
        pfVar28 = (float *)&DAT_0046b088;
        iVar26 = 0;
        do {
          iVar25 = *(int *)(*(int *)(iVar31 + param_1[9]) + 0x10);
          if ((char)((int *)(iVar31 + param_1[9]))[0xe] == '\0') {
            param_22 = (undefined4 *)param_1[1];
            param_21 = (undefined4 *)*param_1;
            param_20 = (float)param_1[-1];
            param_1 = param_1 + 3;
            param_53 = param_21;
          }
          param_67 = param_34 * *param_14;
          param_36 = param_34 * (float)*(undefined8 *)(param_14 + 1);
          param_35 = param_34 * (float)((ulonglong)*(undefined8 *)(param_14 + 1) >> 0x20);
          param_68 = CONCAT44(param_35,param_36);
          param_69 = param_67;
          param_70 = param_36;
          param_71 = param_35;
          FUN_00265f50();
          FUN_002333b0();
          pfVar35 = (float *)FUN_002334b0();
          fVar22 = pfVar35[1];
          fVar3 = pfVar35[2];
          fVar4 = pfVar35[3];
          fVar29 = pfVar35[8];
          fVar5 = pfVar35[4];
          fVar6 = pfVar35[5];
          fVar15 = pfVar35[6];
          fVar16 = pfVar35[7];
          *param_13 = *pfVar35;
          param_13[1] = fVar22;
          param_13[2] = fVar3;
          param_13[3] = fVar4;
          param_13[8] = fVar29;
          param_13[4] = fVar5;
          param_13[5] = fVar6;
          param_13[6] = fVar15;
          param_13[7] = fVar16;
          fVar6 = param_12[1];
          fVar15 = param_12[2];
          fVar16 = param_12[3];
          fVar29 = param_12[8];
          fVar22 = param_12[4];
          fVar3 = param_12[5];
          fVar4 = param_12[6];
          fVar5 = param_12[7];
          *(float *)((int)&DAT_0046b19c + iVar26) = *param_12;
          *(float *)((int)&DAT_0046b1a0 + iVar26) = fVar6;
          *(float *)((int)&DAT_0046b1a4 + iVar26) = fVar15;
          *(float *)((int)&DAT_0046b1a8 + iVar26) = fVar16;
          *(float *)((int)&DAT_0046b1bc + iVar26) = fVar29;
          *(float *)((int)&DAT_0046b1ac + iVar26) = fVar22;
          *(float *)((int)&DAT_0046b1b0 + iVar26) = fVar3;
          *(float *)((int)&DAT_0046b1b4 + iVar26) = fVar4;
          *(float *)((int)&DAT_0046b1b8 + iVar26) = fVar5;
          fVar29 = *(float *)((int)&DAT_0046b178 + iVar26);
          fVar22 = *(float *)(iVar25 + 4);
          fVar3 = *(float *)((int)&DAT_0046b180 + iVar26);
          fVar4 = *(float *)(iVar25 + 0xc);
          fVar5 = *(float *)((int)&DAT_0046b17c + iVar26);
          fVar6 = *(float *)(iVar25 + 8);
          param_10 = (float *)(*(float *)((int)&DAT_0046b190 + iVar26) * *(float *)(iVar25 + 4) +
                               *(float *)((int)&DAT_0046b198 + iVar26) * *(float *)(iVar25 + 0xc) +
                               *(float *)((int)&DAT_0046b194 + iVar26) * *(float *)(iVar25 + 8) +
                              pfVar28[1]);
          param_9 = (float *)(*(float *)((int)&DAT_0046b184 + iVar26) * *(float *)(iVar25 + 4) +
                              *(float *)((int)&DAT_0046b18c + iVar26) * *(float *)(iVar25 + 0xc) +
                              *(float *)((int)&DAT_0046b188 + iVar26) * *(float *)(iVar25 + 8) +
                             *pfVar28);
          pfVar28[3] = (float)param_9;
          pfVar28[2] = fVar5 * fVar6 + fVar3 * fVar4 + fVar29 * fVar22 + pfVar28[-1];
          pfVar28[4] = (float)param_10;
          iVar31 = iVar31 + 0x3c;
          param_11 = (int *)((int)param_11 + -1);
          pfVar28 = pfVar28 + 3;
          iVar26 = iVar26 + 0x24;
        } while (param_11 != (int *)0x0);
      }
      if (cVar37 != '\0') {
        param_1 = (int *)(*(float *)((int)&DAT_0046b08c + (int)param_15) - param_65);
        param_75 = param_1;
        param_74 = *(float *)((int)&DAT_0046b088 + (int)param_15) - param_64;
      }
      if (bVar36 != 0) {
        FUN_002339d0();
        FUN_00266050();
        *(undefined4 *)(&stack0x0000020c + param_23 * 4) = param_49;
        *(float *)(&stack0x00000210 + param_23 * 4) = param_50;
        *(float *)(&stack0x00000214 + param_23 * 4) = param_51;
      }
      fVar29 = 0.0;
      param_14 = (float *)0x0;
      pfVar28 = param_14;
      if (3 < (int)param_30) {
        iVar30 = 3;
        iVar26 = 4;
        iVar31 = 8;
        iVar25 = 0xc;
        do {
          iVar30 = iVar30 + 4;
          fVar5 = *(float *)((int)&stack0x00000190 + iVar26) - *(float *)(&stack0x00000208 + iVar26)
          ;
          param_14 = param_14 + 1;
          fVar4 = *(float *)((int)&stack0x00000194 + iVar26) - *(float *)(&stack0x0000020c + iVar26)
          ;
          fVar3 = *(float *)((int)&stack0x00000194 + iVar31) - *(float *)(&stack0x0000020c + iVar31)
          ;
          fVar22 = *(float *)((int)&stack0x00000194 + iVar25) -
                   *(float *)(&stack0x0000020c + iVar25);
          fVar29 = fVar22 * fVar22 + fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5 + fVar29;
          iVar26 = iVar26 + 0x10;
          iVar31 = iVar31 + 0x10;
          iVar25 = iVar25 + 0x10;
          pfVar28 = param_14;
        } while (iVar30 < (int)param_30);
      }
      while (pfVar28 < param_30) {
        fVar29 = ((&stack0x00000194)[(int)pfVar28] -
                 *(float *)(&stack0x00000208 + ((int)pfVar28 + 1) * 4)) *
                 ((&stack0x00000194)[(int)pfVar28] -
                 *(float *)(&stack0x00000208 + ((int)pfVar28 + 1) * 4)) + fVar29;
        pfVar28 = (float *)((int)pfVar28 + 1);
      }
      fVar22 = fVar29 - (float)param_3;
      param_2 = (float *)((int)param_2 + 1);
      param_3 = (undefined4 *)fVar29;
    } while (((0.01 < fVar29) && (fVar22 < -1e-05)) && ((int)param_2 < 10));
    piVar24 = (int *)&param_2;
    if ((int)param_2 <= DAT_004698a8) {
      piVar24 = &DAT_004698a8;
    }
    DAT_004698a8 = *piVar24;
    param_33 = param_7;
    param_19 = (undefined4 *)((float)param_27 * (float)param_7 + (float)param_19);
    param_2 = (float *)(1.0 - (float)param_19);
    if ((float)param_2 <= (float)param_7) {
      param_7 = param_2;
    }
    param_32 = param_7;
    if ((ABS((float)param_19 - 1.0) < 0.01 != (ABS((float)param_19 - 1.0) == 0.01)) ||
       (-1e-05 <= fVar22)) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    param_26 = param_26 + 1;
  } while (!bVar7);
  piVar24 = &param_26;
  if (param_26 <= DAT_004698a4) {
    piVar24 = &DAT_004698a4;
  }
  DAT_004698a4 = *piVar24;
  if (0 < (int)param_29) {
    iVar26 = 0;
    puVar27 = &DAT_0046b190;
    piVar24 = param_29;
    do {
      if (*(char *)(param_1[9] + 0x38 + iVar26) == '\0') {
        param_55 = puVar27[-3];
        param_54 = (float)puVar27[-6];
        param_56 = *puVar27;
        param_57 = puVar27[-5];
        param_32 = &stack0x00000170;
        param_58 = puVar27[-2];
        param_59 = puVar27[1];
        param_60 = puVar27[-4];
        param_61 = puVar27[-1];
        param_62 = puVar27[2];
        param_33 = (undefined4 *)FUN_002334b0();
        puVar33 = param_32;
        uVar12 = param_33[1];
        uVar13 = param_33[2];
        uVar14 = param_33[3];
        uVar2 = param_33[8];
        uVar8 = param_33[4];
        uVar9 = param_33[5];
        uVar10 = param_33[6];
        uVar11 = param_33[7];
        *param_32 = *param_33;
        puVar33[1] = uVar12;
        puVar33[2] = uVar13;
        puVar33[3] = uVar14;
        puVar33[8] = uVar2;
        puVar33[4] = uVar8;
        puVar33[5] = uVar9;
        puVar33[6] = uVar10;
        puVar33[7] = uVar11;
        FUN_002339d0();
        puVar33 = (undefined4 *)(param_1[9] + 4 + iVar26);
        param_34 = param_52;
        param_36 = param_51;
        param_35 = param_50;
        *puVar33 = param_49;
        puVar33[1] = param_50;
        puVar33[2] = param_51;
        puVar33[3] = param_52;
      }
      puVar27 = puVar27 + 9;
      iVar26 = iVar26 + 0x3c;
      piVar24 = (int *)((int)piVar24 + -1);
    } while (piVar24 != (int *)0x0);
  }
  return;
}
