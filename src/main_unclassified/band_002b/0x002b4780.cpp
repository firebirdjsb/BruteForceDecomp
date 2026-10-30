/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 920C8454E85C99488F83FCDAF8F0EC28ED3B242EEC2A136AC707D3FCC9FDB0C8
 * Entry: 0x002b4780, Ghidra index: 9789, label: FUN_002b4780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
_Static_assert(sizeof(double) == 8 && sizeof(float) == 4,
               "Original stack slot requires m64fp and m32fp storage");
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e7c4;
extern uint32_t PTR_FUN_0038e7f4;
extern uint32_t PTR_FUN_003bc650;
extern uint32_t PTR_FUN_003bc654;
extern uint32_t PTR_LAB_0038e5e4;
extern uint32_t PTR_LAB_0038e648;
extern uint32_t PTR_LAB_0038e7a0;
extern uint32_t PTR_LAB_0038e7a8;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_002b4780(int *param_1,int param_2,int *param_3,char *param_4,int param_5)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  float10 fVar10;
  float10 fVar11;
  double local_b8;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  int aiStack_98 [4];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 *puStack_54;
  undefined4 auStack_48 [10];
  undefined4 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  piVar3 = param_1 + 0xe;
  for (iVar8 = 0x16; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  param_1[0x24] = 0x3e99999a;
  param_1[0x32] = 0;
  *(undefined2 *)(param_1 + 0x34) = 0;
  *(undefined2 *)((int)param_1 + 0xd2) = 0;
  param_1[0x35] = 0;
  *(undefined2 *)(param_1 + 0x36) = 1;
  *(undefined2 *)(param_1 + 0x37) = 0;
  *(undefined2 *)((int)param_1 + 0xde) = 0;
  *(undefined2 *)(param_1 + 0x39) = 1;
  param_1[0x38] = 0;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  *(undefined2 *)((int)param_1 + 0xea) = 0;
  *(undefined2 *)(param_1 + 0x3c) = 1;
  param_1[0x3b] = 0;
  *(undefined2 *)(param_1 + 0x4d) = 0;
  *(undefined2 *)((int)param_1 + 0x136) = 0;
  *(undefined2 *)(param_1 + 0x4f) = 1;
  param_1[0x4e] = 0;
  *(undefined2 *)(param_1 + 0x50) = 0;
  *(undefined2 *)((int)param_1 + 0x142) = 0;
  *(undefined2 *)(param_1 + 0x52) = 1;
  param_1[0x51] = 0;
  piVar3 = param_1;
  for (iVar8 = 0x58; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  param_1[0x24] = 0x3e99999a;
  param_1[0x4b] = 5;
  param_1[0xe] = (int)param_1;
  param_1[0x29] = param_3[3];
  param_1[0x28] = param_3[10];
  if (param_1[0x28] == 0) {
    iVar8 = FUN_002ea01d(0x30);
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = FUN_002c70d0(1);
    }
    param_1[0x28] = iVar8;
  }
  param_1[6] = param_3[4];
  if (param_1[6] == 0) {
    puVar2 = (undefined4 *)FUN_002ea01d(8);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = &PTR_FUN_0038e7c4;
      puVar2[1] = 1;
    }
    param_1[6] = (int)puVar2;
  }
  param_1[8] = param_3[7];
  if (param_1[8] == 0) {
    puVar2 = (undefined4 *)FUN_002ea01d(8);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = &PTR_LAB_0038e7a8;
      puVar2[1] = 1;
    }
    param_1[8] = (int)puVar2;
  }
  param_1[9] = param_3[8];
  if (param_1[9] == 0) {
    puVar2 = (undefined4 *)FUN_002ea01d(0x1c);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = &PTR_LAB_0038e7a0;
      puVar2[1] = 1;
      puVar2[2] = 0x44fa0000;
      puVar2[4] = 0x3fc90fdb;
      /* 0x2B497F stores the literal DWORD 0x11170, not a host symbol. */
      puVar2[3] = UINT32_C(0x00011170);
    }
    param_1[9] = (int)puVar2;
  }
  puVar2 = (undefined4 *)param_3[9];
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_002ea01d(4);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = &PTR_LAB_0038e648;
    }
  }
  if (*(ushort *)(param_1 + 0x50) <= *(ushort *)((int)param_1 + 0x142)) {
    FUN_002ccf80();
  }
  *(undefined4 **)(param_1[0x51] + (uint)*(ushort *)((int)param_1 + 0x142) * 4) = puVar2;
  *(short *)((int)param_1 + 0x142) = *(short *)((int)param_1 + 0x142) + 1;
  param_1[0xb] = param_3[5];
  puVar2 = (undefined4 *)FUN_002ea01d(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_0038e7f4;
    puVar2[4] = 0;
  }
  *param_1 = (int)puVar2;
  local_ac = 0;
  local_a8 = 0x411d47ae;
  uStack_a4 = 0;
  local_a0 = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0x411d47ae;
  param_1[0x31] = 0;
  /* 0x2B4A6B MOVSS [ESP+10],XMM1 writes four bytes, not a double.
   * The existing folded SIMD value remains a draft (guest MXCSR unverified).
   * Do not read or initialize the unwritten upper four bytes. */
  {
    const uint32_t low_word = UINT32_C(0x42c141ff);
    memcpy(&local_b8, &low_word, 4);
  }
  local_9c = 0x411d47ae;
  param_1[0x33] = 0x411d47ae;
  iVar8 = *param_1;
  *(undefined4 *)(iVar8 + 4) = 0;
  *(undefined4 *)(iVar8 + 8) = 0x411d47ae;
  *(undefined4 *)(iVar8 + 0xc) = 0;
  iVar8 = *param_1;
  *(undefined4 *)(iVar8 + 8) = 0x411d47ae;
  *(undefined4 *)(iVar8 + 4) = 0;
  *(undefined4 *)(iVar8 + 0xc) = 0;
  if (*(ushort *)(param_2 + 4) <= *(ushort *)(param_2 + 6)) {
    FUN_002ccf80();
  }
  *(int **)(*(int *)(param_2 + 8) + (uint)*(ushort *)(param_2 + 6) * 4) = param_1;
  *(short *)(param_2 + 6) = *(short *)(param_2 + 6) + 1;
  puVar2 = (undefined4 *)FUN_002ea01d(4);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = param_1;
  }
  param_1[0x26] = (int)puVar2;
  param_1[0x2d] = 0x3c783e10;
  param_1[0x2e] = (int)(1.0 / (float)param_1[0x2d]);
  iVar8 = FUN_002ea01d(0x18);
  if (iVar8 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = FUN_002bc9f0();
  }
  param_1[3] = iVar8;
  iVar8 = FUN_002ea01d(0x1b0);
  if (iVar8 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = FUN_002be170();
  }
  param_1[2] = iVar8;
  iVar8 = FUN_002ea01d(0x20);
  if (iVar8 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = FUN_002c7f40();
  }
  param_1[1] = iVar8;
  puVar2 = (undefined4 *)FUN_002ea01d(0x1c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *(undefined2 *)(puVar2 + 3) = 0;
    *(undefined2 *)((int)puVar2 + 0xe) = 0;
    *(undefined2 *)(puVar2 + 5) = 1;
    puVar2[4] = 0;
    puVar5 = puVar2;
    for (iVar8 = 7; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar2[1] = param_1;
  }
  param_1[4] = (int)puVar2;
  iVar8 = FUN_002ea01d(0x184);
  if (iVar8 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = FUN_002c8490();
  }
  param_1[5] = iVar8;
  puVar2 = (undefined4 *)FUN_002ea01d(0x28);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *(undefined2 *)(puVar2 + 1) = 0;
    *(undefined2 *)((int)puVar2 + 6) = 0;
    *(undefined2 *)(puVar2 + 3) = 1;
    puVar2[2] = 0;
    *(undefined2 *)(puVar2 + 4) = 0;
    *(undefined2 *)((int)puVar2 + 0x12) = 0;
    *(undefined2 *)(puVar2 + 6) = 1;
    puVar2[5] = 0;
    *puVar2 = 1;
    puVar2[9] = 0x3f800000;
    puVar2[8] = 1;
  }
  param_1[0x25] = (int)puVar2;
  param_1[7] = param_3[0xb];
  if (param_3[0xb] == 0) {
    iVar8 = FUN_002ea01d(0x34);
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = FUN_002c9320();
    }
    param_1[7] = iVar8;
  }
  if (param_3[6] == 0) {
    puVar2 = (undefined4 *)FUN_002ea01d(0xa8);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = &PTR_LAB_0038e5e4;
      puVar5 = puVar2;
      for (iVar8 = 0x29; puVar5 = puVar5 + 1, iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar5 = 0;
      }
    }
    param_1[10] = (int)puVar2;
  }
  else {
    param_1[10] = param_3[6];
  }
  piVar3 = (int *)FUN_002ea01d(0xc);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    iVar8 = *param_3;
    *piVar3 = iVar8;
    uVar4 = iVar8 * 0x70;
    puVar5 = (undefined4 *)(*(code *)PTR_FUN_003bc650)(uVar4);
    puVar2 = puVar5;
    for (uVar4 = uVar4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    piVar3[2] = (int)puVar5;
    piVar3[1] = 0;
  }
  param_1[0x27] = (int)piVar3;
  param_1[0x40] = param_2;
  param_1[0x48] = 1;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  /* 0x2B4D5A FLD m32fp, then PUSH changes ESP by four before
   * 0x2B4D62 FSTP m64fp to the same slot. No integer-to-float conversion.
   * The two following DWORD loads/stores copy the complete double bits.
   * Guest x87 control, exceptions and NaN payload behavior remain unverified. */
  {
    float value;
    memcpy(&value, param_1 + 0x2d, 4);
    local_b8 = (double)value;
    memcpy(param_1 + 0x44, &local_b8, 8);
  }
  puVar2 = (undefined4 *)FUN_002ea01d(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *(undefined2 *)(puVar2 + 4) = 3;
    *(undefined2 *)((int)puVar2 + 0x12) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  param_1[0x2a] = (int)puVar2;
  puVar2 = (undefined4 *)FUN_002ea01d(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *(undefined2 *)(puVar2 + 4) = 3;
    *(undefined2 *)((int)puVar2 + 0x12) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  param_1[0x2b] = (int)puVar2;
  iVar8 = param_3[2];
  FUN_002bbd60(iVar8 >> 1);
  FUN_002bbd60(iVar8 >> 1);
  *(undefined2 *)(param_1 + 0x4a) = 10;
  fVar10 = (float10)log2((float10)0.8999999761581421);
  fVar11 = (float10)1.4426950408889634 *
           (float10)0.6931471805599453 * fVar10 * (float10)(float)param_1[0x2d];
  fVar10 = ROUND(fVar11);
  fVar11 = (float10)f2xm1(fVar11 - fVar10);
  fVar10 = (float10)fscale((float10)1 + fVar11,fVar10);
  param_1[0x4c] = (int)(float)fVar10;
  FUN_002c2630();
  FUN_002ccb80();
  if (param_4 == (char *)0x0) {
    pcVar7 = (char *)0x0;
  }
  else {
    pcVar6 = param_4;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + (1 - (int)(param_4 + 1));
    pcVar7 = (char *)(*(code *)PTR_FUN_003bc650)(pcVar6);
    pcVar9 = pcVar7;
    for (uVar4 = (uint)pcVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)param_4;
      param_4 = param_4 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar4 = (uint)pcVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar9 = *param_4;
      param_4 = param_4 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  param_1[0x3d] = (int)pcVar7;
  param_1[0x3e] = param_5;
  param_1[0x3f] = 10;
  aiStack_98[0] = 0;
  uStack_74 = 0;
  uStack_5c = 0;
  piVar3 = aiStack_98;
  for (iVar8 = 0x13; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  /* 0x2B4ED7 MOV [ESP+10],3F800000 replaces only the low DWORD.
   * Retain the high DWORD left by FSTP m64fp; no numeric uint64->double
   * conversion or whole-slot zero fill occurs in the original. */
  {
    const uint32_t low_word = UINT32_C(0x3f800000);
    memcpy(&local_b8, &low_word, 4);
  }
  uStack_88 = 0x3f800000;
  uStack_84 = 1;
  uStack_80 = 0x3f800000;
  uStack_7c = 0x3f800000;
  uStack_78 = 0x3f800000;
  uStack_70 = 0x3cf5c28f;
  uStack_6c = 0x3c23d70a;
  uStack_68 = 0x3c23d70a;
  uStack_64 = 0x3c23d70a;
  uStack_60 = 0x3c23d70a;
  FUN_002b46b0();
  aiStack_98[1] = 1;
  puVar2 = auStack_48 + 3;
  iVar8 = 3;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 4;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  uStack_c = 0;
  puVar2 = auStack_48;
  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puStack_54 = auStack_48;
  auStack_48[0] = 0x3f800000;
  auStack_48[5] = 0x3f800000;
  uStack_20 = 0x3f800000;
  uStack_10 = 0;
  uStack_14 = 0;
  uStack_18 = 0;
  local_a0 = 0;
  uStack_a4 = 0;
  local_a8 = 0;
  local_ac = 0;
  iVar8 = FUN_002ea01d(0xa0);
  if (iVar8 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = FUN_002cce90(*(undefined4 *)param_1[3],&local_b8,0);
  }
  param_1[0xc] = iVar8;
  if (aiStack_98[0] == 0) {
    /* 0x2B502F stores this immediate DWORD; no address relocation. */
    param_1[0x56] = UINT32_C(0x0001e240);
    return param_1;
  }
  piVar3 = (int *)(*(code *)PTR_FUN_003bc654)(aiStack_98[0]);
  return piVar3;
}
