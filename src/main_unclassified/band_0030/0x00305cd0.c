/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DECE2C57CCAE71301F0332BC47FE3086499A5E589CA7996D16B8EB6D1B49C9C4
 * Entry: 0x00305cd0, Ghidra index: 11098, label: FUN_00305cd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
longlong FUN_00305cd0(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  float *pfVar14;
  float *pfVar15;
  char cVar16;
  float *pfVar17;
  undefined4 *puVar18;
  float fVar19;
  float fVar20;
  uint local_1bc;
  uint local_1b8;
  int local_1b0;
  float local_198 [4];
  float local_188;
  float local_184;
  float local_17c;
  float local_178;
  float local_174;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float *local_158;
  undefined4 local_154 [14];
  float local_11c;
  float afStack_118 [4];
  float local_108 [12];
  undefined1 local_d8 [48];
  undefined1 local_a8 [48];
  undefined1 local_78 [48];
  undefined1 *local_48;
  undefined1 *local_44;
  float *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30 [4];
  int local_20 [3];
  int local_14 [3];
  int local_8;
  int local_4;
  
  puVar13 = param_2;
  puVar18 = param_1;
  for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar18 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar18 = puVar18 + 1;
  }
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  pfVar15 = (float *)(param_1 + 0x10);
  pfVar14 = (float *)(param_2 + 0x10);
  pfVar17 = pfVar15;
  for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
    *pfVar17 = *pfVar14;
    pfVar14 = pfVar14 + 1;
    pfVar17 = pfVar17 + 1;
  }
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  local_198[0] = (float)param_2[0x23] - (float)param_2[0x22];
  afStack_118[1] = ((float)param_2[0x23] + (float)param_2[0x22]) * 0.5;
  cVar16 = 1e-16 < local_198[0];
  local_198[1] = (float)param_2[0x25] - (float)param_2[0x24];
  afStack_118[2] = ((float)param_2[0x25] + (float)param_2[0x24]) * 0.5;
  if (1e-16 < local_198[1]) {
    cVar16 = cVar16 + '\x01';
  }
  local_198[2] = (float)param_2[0x27] - (float)param_2[0x26];
  afStack_118[3] = ((float)param_2[0x26] + (float)param_2[0x27]) * 0.5;
  if (1e-16 < local_198[2]) {
    cVar16 = cVar16 + '\x01';
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x26) = 1;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  switch(cVar16) {
  case '\0':
    *(undefined1 *)(param_1 + 0x26) = 1;
    param_1[0x27] = 0xbdcccccd;
    param_1[0x28] = 0x3dcccccd;
  default:
    return CONCAT44(param_1 + 0xc,1);
  case '\x01':
    break;
  case '\x02':
  case '\x03':
    iVar11 = *(int *)(param_3 + 0x90);
    pfVar14 = (float *)(*(int *)(param_4 + 0x90) + 0xfc);
    local_16c = -1.0;
    local_1b0 = 0;
    local_158 = pfVar14;
    FUN_00150930();
    FUN_00150930();
    iVar12 = *(int *)(param_3 + 0x90);
    local_17c = local_17c - *(float *)(iVar12 + 300);
    iVar7 = *(int *)(param_4 + 0x90);
    local_11c = *(float *)(iVar7 + 0x134);
    local_178 = local_178 - *(float *)(iVar12 + 0x130);
    local_1b8 = 0;
    pfVar15 = (float *)(param_1 + 0x11);
    local_174 = local_174 - *(float *)(iVar12 + 0x134);
    local_198[3] = local_198[3] - *(float *)(iVar7 + 300);
    local_188 = local_188 - *(float *)(iVar7 + 0x130);
    local_184 = local_184 - local_11c;
    do {
      local_40 = local_30;
      local_3c = 1;
      local_38 = 1;
      local_48 = local_a8;
      local_44 = local_78;
      local_34 = 4;
      fVar6 = *(float *)(iVar11 + 0xfc) * pfVar15[-0x11] +
              *(float *)(iVar11 + 0x100) * pfVar15[-0x10] +
              *(float *)(iVar11 + 0x104) * pfVar15[-0xf];
      fVar8 = *(float *)(iVar11 + 0x114) * pfVar15[-0xf] +
              *(float *)(iVar11 + 0x110) * pfVar15[-0x10] +
              *(float *)(iVar11 + 0x10c) * pfVar15[-0x11];
      fVar9 = *(float *)(iVar11 + 0x11c) * pfVar15[-0x11] +
              pfVar15[-0xf] * *(float *)(iVar11 + 0x124) +
              *(float *)(iVar11 + 0x120) * pfVar15[-0x10];
      local_168 = *pfVar15 * pfVar14[1] + *pfVar14 * pfVar15[-1] + pfVar14[2] * pfVar15[1];
      local_164 = pfVar14[6] * pfVar15[1] + pfVar14[4] * pfVar15[-1] + pfVar14[5] * *pfVar15;
      local_160 = *pfVar15 * pfVar14[9] + pfVar14[8] * pfVar15[-1] + pfVar15[1] * pfVar14[10];
      FUN_002de8b0(1);
      puVar13 = (undefined4 *)(local_48 + local_8);
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = 0;
      pfVar14 = (float *)(puVar13 + 4);
      puVar13[5] = fVar8;
      puVar13[6] = fVar9;
      *pfVar14 = fVar6;
      iVar12 = *(int *)(param_3 + 0x90);
      fVar1 = *pfVar14;
      uVar2 = *(undefined8 *)(iVar12 + 0x100);
      fVar19 = (float)*(undefined8 *)(puVar13 + 5);
      fVar20 = (float)((ulonglong)*(undefined8 *)(puVar13 + 5) >> 0x20);
      uVar3 = *(undefined8 *)(iVar12 + 0x110);
      uVar4 = *(undefined8 *)(iVar12 + 0x120);
      *pfVar14 = *(float *)(iVar12 + 0xfc) * fVar1 + *(float *)(iVar12 + 0x10c) * fVar19 +
                 *(float *)(iVar12 + 0x11c) * fVar20;
      *(ulonglong *)(puVar13 + 5) =
           CONCAT44((float)((ulonglong)uVar2 >> 0x20) * fVar1 +
                    (float)((ulonglong)uVar3 >> 0x20) * fVar19 +
                    (float)((ulonglong)uVar4 >> 0x20) * fVar20,
                    (float)uVar2 * fVar1 + (float)uVar3 * fVar19 + (float)uVar4 * fVar20);
      puVar13[9] = local_4;
      puVar13[8] = 0;
      puVar13 = (undefined4 *)(local_44 + local_8);
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = 0;
      pfVar14 = (float *)(puVar13 + 4);
      puVar13[5] = -fVar8;
      puVar13[6] = -fVar9;
      *pfVar14 = -fVar6;
      iVar12 = *(int *)(param_4 + 0x90);
      fVar1 = *pfVar14;
      uVar2 = *(undefined8 *)(iVar12 + 0x100);
      fVar19 = (float)*(undefined8 *)(puVar13 + 5);
      fVar20 = (float)((ulonglong)*(undefined8 *)(puVar13 + 5) >> 0x20);
      uVar3 = *(undefined8 *)(iVar12 + 0x110);
      uVar4 = *(undefined8 *)(iVar12 + 0x120);
      *pfVar14 = *(float *)(iVar12 + 0xfc) * fVar1 + *(float *)(iVar12 + 0x10c) * fVar19 +
                 *(float *)(iVar12 + 0x11c) * fVar20;
      *(ulonglong *)(puVar13 + 5) =
           CONCAT44((float)((ulonglong)uVar2 >> 0x20) * fVar1 +
                    (float)((ulonglong)uVar3 >> 0x20) * fVar19 +
                    (float)((ulonglong)uVar4 >> 0x20) * fVar20,
                    (float)uVar2 * fVar1 + (float)uVar3 * fVar19 + (float)uVar4 * fVar20);
      puVar13[9] = local_4;
      puVar13[8] = 0;
      local_8 = local_8 + 0x30;
      local_20[0] = local_4 + 1;
      local_14[0] = local_20[0];
      local_4 = local_20[0];
      FUN_00305880(local_20,&local_40,local_d8);
      local_20[0] = local_4;
      local_14[0] = local_4;
      FUN_00305880(local_14,&local_40,local_d8);
      fVar1 = fVar9 * local_178 - fVar8 * local_174;
      fVar19 = local_174 * fVar6 - fVar9 * local_17c;
      fVar9 = fVar8 * local_17c - local_178 * fVar6;
      fVar8 = local_160 * local_188 - local_164 * local_184;
      fVar6 = local_184 * local_168 - local_160 * local_198[3];
      local_11c = local_164 * local_198[3] - local_188 * local_168;
      fVar1 = (fVar8 * fVar8 + fVar6 * fVar6 + local_11c * local_11c) *
              *(float *)(*(int *)(param_4 + 0x90) + 0x40) +
              (fVar1 * fVar1 + fVar19 * fVar19 + fVar9 * fVar9) *
              *(float *)(*(int *)(param_3 + 0x90) + 0x40) + *local_40;
      if (local_16c < fVar1) {
        local_16c = fVar1;
        local_1b0 = local_1b8;
      }
      local_1b8 = local_1b8 + 1;
      pfVar15 = pfVar15 + 4;
      pfVar14 = local_158;
    } while ((int)local_1b8 < 3);
    if (local_1b0 == 2) {
      local_1b8 = 0;
    }
    else {
      local_1b8 = local_1b0 + 1;
      if (local_1b0 == 0) {
        local_1bc = 2;
        goto LAB_003064f5;
      }
    }
    local_1bc = local_1b0 - 1;
LAB_003064f5:
    uVar10 = local_1bc;
    if (local_198[local_1bc] < local_198[local_1b8]) {
      local_1bc = local_1b8;
      local_1b8 = uVar10;
    }
    fVar1 = afStack_118[local_1bc + 1];
    puVar13 = param_1;
    puVar18 = local_154;
    for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar18 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar18 = puVar18 + 1;
    }
    pfVar15 = (float *)(param_1 + 0x10);
    pfVar14 = afStack_118 + 4;
    for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
      *pfVar14 = *pfVar15;
      pfVar15 = pfVar15 + 1;
      pfVar14 = pfVar14 + 1;
    }
    FUN_00304d70(fVar1);
    *param_1 = local_154[local_1b0 * 4];
    param_1[1] = local_154[local_1b0 * 4 + 1];
    param_1[2] = local_154[local_1b0 * 4 + 2];
    param_1[0x10] = afStack_118[local_1b0 * 4 + 4];
    param_1[0x11] = afStack_118[local_1b0 * 4 + 5];
    param_1[0x12] = afStack_118[local_1b0 * 4 + 6];
    param_1[4] = local_154[local_1bc * 4];
    param_1[5] = local_154[local_1bc * 4 + 1];
    param_1[6] = local_154[local_1bc * 4 + 2];
    param_1[0x14] = afStack_118[local_1bc * 4 + 4];
    param_1[0x15] = afStack_118[local_1bc * 4 + 5];
    param_1[0x16] = afStack_118[local_1bc * 4 + 6];
    param_1[8] = local_154[local_1b8 * 4];
    param_1[9] = local_154[local_1b8 * 4 + 1];
    param_1[10] = local_154[local_1b8 * 4 + 2];
    param_1[0x18] = afStack_118[local_1b8 * 4 + 4];
    fVar1 = afStack_118[local_1b8 * 4 + 5];
    param_1[0x1a] = afStack_118[local_1b8 * 4 + 6];
    param_1[0x19] = fVar1;
    uVar5 = param_2[local_1b0 * 2 + 0x23];
    param_1[0x21] = param_2[local_1b0 * 2 + 0x22];
    *(undefined1 *)(param_1 + 0x20) = 1;
    param_1[0x22] = uVar5;
    *(undefined1 *)(param_1 + 0x26) = 1;
    param_1[0x27] = local_198[local_1bc] * -0.5;
    param_1[0x28] = local_198[local_1bc] * 0.5;
    uVar5 = param_2[local_1b8 * 2 + 0x23];
    param_1[0x2d] = param_2[local_1b8 * 2 + 0x22];
    *(undefined1 *)(param_1 + 0x2c) = 1;
    param_1[0x2e] = uVar5;
    return (ulonglong)local_1b8 << 0x20;
  }
  local_1bc = 0xffffffff;
  if (1e-16 < local_198[0]) {
    local_1bc = 0;
  }
  if (1e-16 < local_198[1]) {
    local_1bc = 1;
  }
  if (1e-16 < local_198[2]) {
    local_1bc = 2;
  }
  puVar13 = param_1;
  puVar18 = local_154;
  for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar18 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar18 = puVar18 + 1;
  }
  pfVar14 = pfVar15;
  pfVar17 = afStack_118 + 4;
  for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
    *pfVar17 = *pfVar14;
    pfVar14 = pfVar14 + 1;
    pfVar17 = pfVar17 + 1;
  }
  FUN_00304d70(afStack_118[local_1bc + 1]);
  if (local_1bc == 2) {
    iVar11 = 0;
  }
  else {
    iVar11 = local_1bc + 1;
    iVar12 = 2;
    if (local_1bc == 0) goto LAB_00305efd;
  }
  iVar12 = local_1bc - 1;
LAB_00305efd:
  fVar1 = local_198[local_1bc];
  *param_1 = local_154[iVar11 * 4];
  param_1[1] = local_154[iVar11 * 4 + 1];
  param_1[2] = local_154[iVar11 * 4 + 2];
  *pfVar15 = afStack_118[iVar11 * 4 + 4];
  fVar6 = afStack_118[iVar11 * 4 + 5];
  param_1[0x12] = afStack_118[iVar11 * 4 + 6];
  param_1[0x11] = fVar6;
  param_1[4] = local_154[iVar12 * 4];
  param_1[5] = local_154[iVar12 * 4 + 1];
  param_1[6] = local_154[iVar12 * 4 + 2];
  param_1[0x14] = afStack_118[iVar12 * 4 + 4];
  fVar6 = afStack_118[iVar12 * 4 + 5];
  param_1[0x16] = afStack_118[iVar12 * 4 + 6];
  param_1[0x15] = fVar6;
  param_1[8] = local_154[local_1bc * 4];
  param_1[9] = local_154[local_1bc * 4 + 1];
  param_1[10] = local_154[local_1bc * 4 + 2];
  param_1[0x18] = afStack_118[local_1bc * 4 + 4];
  fVar6 = afStack_118[local_1bc * 4 + 5];
  param_1[0x1a] = afStack_118[local_1bc * 4 + 6];
  param_1[0x19] = fVar6;
  param_1[0x27] = fVar1 * -0.5;
  fVar1 = local_198[local_1bc];
  *(undefined1 *)(param_1 + 0x26) = 1;
  param_1[0x28] = fVar1 * 0.5;
  return (ulonglong)local_1bc << 0x20;
}
