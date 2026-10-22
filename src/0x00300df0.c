/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 408955788955471E93208A123C4DA4FC77BE5847B1604753A0EFF1261A41ECB0
 * Entry: 0x00300df0, Ghidra index: 11076, label: FUN_00300df0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00300df0(int param_1,float *param_2,int param_3,float param_4,float param_5)

{
  uint *puVar1;
  float *pfVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  undefined4 *puVar13;
  float in_XMM1_Da;
  float fVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar17;
  float fVar18;
  float *local_104;
  float local_100;
  int local_f8;
  float local_f4;
  float local_f0;
  float fStack_ec;
  float local_d8 [12];
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
  
  iVar8 = *(int *)(param_1 + 8);
  iVar9 = *(int *)(param_1 + 4);
  fVar16 = *(float *)(param_3 + 0x224);
  fVar17 = *(float *)(param_3 + 0x208);
  fVar18 = fVar16 * param_4;
  local_40 = local_30;
  local_3c = 1;
  local_38 = 1;
  local_48 = local_a8;
  local_44 = local_78;
  local_34 = 4;
  FUN_002de8b0(1);
  puVar13 = (undefined4 *)(local_48 + local_8);
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar13[2] = 0;
  puVar1 = puVar13 + 4;
  *puVar1 = *(uint *)(param_3 + 0x218);
  puVar13[5] = *(undefined4 *)(param_3 + 0x21c);
  puVar13[6] = *(undefined4 *)(param_3 + 0x220);
  FUN_002b73d0(*(int *)(iVar9 + 0x90) + 0xfc,puVar1,puVar1);
  puVar13[9] = local_4;
  puVar13[8] = 0;
  puVar13 = (undefined4 *)(local_44 + local_8);
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar13[2] = 0;
  puVar1 = puVar13 + 4;
  *puVar1 = *(uint *)(param_3 + 0x218) ^ 0x80000000;
  puVar13[5] = *(uint *)(param_3 + 0x21c) ^ 0x80000000;
  puVar13[6] = *(uint *)(param_3 + 0x220) ^ 0x80000000;
  FUN_002b73d0(*(int *)(iVar8 + 0x90) + 0xfc,puVar1,puVar1);
  puVar13[9] = local_4;
  puVar13[8] = 0;
  local_20[0] = local_4 + 1;
  local_8 = local_8 + 0x30;
  local_14[0] = local_20[0];
  local_4 = local_20[0];
  FUN_00305880(local_20,&local_40,local_d8);
  local_20[0] = local_4;
  local_14[0] = local_4;
  FUN_00305880(local_14,&local_40,local_d8);
  fVar7 = *local_40;
  fVar11 = 0.0;
  if (*(char *)(param_1 + 0x95) != '\0') {
    local_100 = *(float *)(param_1 + 0xac) - fVar17;
    fVar11 = *(float *)(param_1 + 0xa8) * *param_2 + *(float *)(param_1 + 0xac);
    *(float *)(param_1 + 0xac) = fVar11;
    if (3.1415927 < local_100) {
      local_100 = local_100 - 6.2831855;
      *(float *)(param_1 + 0xac) = fVar11 - 6.2831855;
    }
    if (local_100 < -3.1415927) {
      local_100 = local_100 + 6.2831855;
      *(float *)(param_1 + 0xac) = *(float *)(param_1 + 0xac) + 6.2831855;
    }
    fVar11 = (fVar18 * 0.8 * param_2[1] * local_100 - fVar16 * param_5 * local_d8[0]) *
             (1.0 / fVar7);
    if (*(float *)(param_1 + 0xa4) < ABS(fVar11) * param_2[1]) {
      fVar16 = (*param_2 / ABS(fVar11)) * *(float *)(param_1 + 0xa4);
      fVar11 = fVar16 * fVar11;
      *(float *)(param_1 + 0xac) = *(float *)(param_1 + 0xac) - (1.0 - fVar16) * local_100;
    }
  }
  if (*(char *)(param_1 + 0x94) != '\0') {
    fVar17 = (fVar11 * *local_40 + local_d8[0]) * *param_2 + fVar17;
    if (fVar17 <= *(float *)(param_1 + 0x9c)) {
      if (*(float *)(param_1 + 0x98) <= fVar17) goto LAB_00301119;
      fVar16 = *(float *)(param_1 + 0x98);
    }
    else {
      fVar16 = *(float *)(param_1 + 0x9c);
    }
    fVar11 = fVar11 - (fVar17 - fVar16) * param_2[1] * *(float *)(param_1 + 0xa0) * fVar18 *
                      (1.0 / fVar7);
  }
LAB_00301119:
  if (fVar11 == 0.0) {
    local_f8 = 2;
  }
  else {
    FUN_003057e0();
    FUN_003057e0();
    local_f8 = 2;
  }
  do {
    fVar7 = *(float *)(param_3 + 0x208 + local_f8 * 4);
    pcVar3 = (char *)(local_f8 * 0x1c + 0x94 + param_1);
    if (local_f8 == 1) {
      local_104 = (float *)(param_3 + 0x228);
    }
    else {
      local_104 = (float *)(param_3 + 0x248);
    }
    local_40 = local_30;
    local_44 = local_78;
    local_48 = local_a8;
    local_3c = 1;
    local_38 = 1;
    local_34 = 4;
    FUN_002de8b0(1);
    local_f4 = *(float *)(param_3 + 0x23c) * local_104[2] -
               local_104[1] * *(float *)(param_3 + 0x240);
    local_f0 = *local_104 * *(float *)(param_3 + 0x240) - *(float *)(param_3 + 0x238) * local_104[2]
    ;
    fStack_ec = *(float *)(param_3 + 0x238) * local_104[1] -
                *local_104 * *(float *)(param_3 + 0x23c);
    fVar16 = local_f0 * local_f0 + fStack_ec * fStack_ec + local_f4 * local_f4;
    if (0.01 <= fVar16) {
LAB_003012e6:
      puVar13 = (undefined4 *)(local_48 + local_8);
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = 0;
      pfVar2 = (float *)(puVar13 + 4);
      *pfVar2 = local_f4;
      puVar13[5] = local_f0;
      puVar13[6] = fStack_ec;
      iVar10 = *(int *)(iVar9 + 0x90);
      fVar16 = *pfVar2;
      uVar4 = *(undefined8 *)(iVar10 + 0x100);
      fVar17 = (float)*(undefined8 *)(puVar13 + 5);
      fVar18 = (float)((ulonglong)*(undefined8 *)(puVar13 + 5) >> 0x20);
      uVar5 = *(undefined8 *)(iVar10 + 0x110);
      uVar6 = *(undefined8 *)(iVar10 + 0x120);
      *pfVar2 = *(float *)(iVar10 + 0xfc) * fVar16 + *(float *)(iVar10 + 0x10c) * fVar17 +
                *(float *)(iVar10 + 0x11c) * fVar18;
      *(ulonglong *)(puVar13 + 5) =
           CONCAT44((float)((ulonglong)uVar4 >> 0x20) * fVar16 +
                    (float)((ulonglong)uVar5 >> 0x20) * fVar17 +
                    (float)((ulonglong)uVar6 >> 0x20) * fVar18,
                    (float)uVar4 * fVar16 + (float)uVar5 * fVar17 + (float)uVar6 * fVar18);
      puVar13[9] = local_4;
      puVar13[8] = 0;
      puVar13 = (undefined4 *)(local_44 + local_8);
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = 0;
      pfVar2 = (float *)(puVar13 + 4);
      *pfVar2 = -local_f4;
      puVar13[5] = -local_f0;
      puVar13[6] = -fStack_ec;
      iVar10 = *(int *)(iVar8 + 0x90);
      fVar16 = *pfVar2;
      uVar4 = *(undefined8 *)(iVar10 + 0x100);
      fVar17 = (float)*(undefined8 *)(puVar13 + 5);
      fVar18 = (float)((ulonglong)*(undefined8 *)(puVar13 + 5) >> 0x20);
      uVar5 = *(undefined8 *)(iVar10 + 0x110);
      uVar6 = *(undefined8 *)(iVar10 + 0x120);
      in_XMM1_Da = *(float *)(iVar10 + 0x10c) * fVar17;
      *pfVar2 = *(float *)(iVar10 + 0xfc) * fVar16 + in_XMM1_Da +
                *(float *)(iVar10 + 0x11c) * fVar18;
      *(ulonglong *)(puVar13 + 5) =
           CONCAT44((float)((ulonglong)uVar4 >> 0x20) * fVar16 +
                    (float)((ulonglong)uVar5 >> 0x20) * fVar17 +
                    (float)((ulonglong)uVar6 >> 0x20) * fVar18,
                    (float)uVar4 * fVar16 + (float)uVar5 * fVar17 + (float)uVar6 * fVar18);
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
      fVar16 = *local_40;
      fVar17 = 0.0;
      if (pcVar3[1] != '\0') {
        fVar18 = fVar7 - *(float *)(pcVar3 + 0x18);
        fVar11 = *(float *)(pcVar3 + 0x14) * *param_2 + *(float *)(pcVar3 + 0x18);
        *(float *)(pcVar3 + 0x18) = fVar11;
        fVar17 = (param_4 * 0.8 * param_2[1] * fVar18 - local_d8[0] * param_5) * (1.0 / fVar16);
        if (*(float *)(pcVar3 + 0x10) < ABS(fVar17) * param_2[1]) {
          fVar12 = (*param_2 / ABS(fVar17)) * *(float *)(pcVar3 + 0x10);
          fVar17 = fVar12 * fVar17;
          *(float *)(pcVar3 + 0x18) = (1.0 - fVar12) * fVar18 + fVar11;
        }
      }
      if (*pcVar3 != '\0') {
        fVar7 = fVar7 - (fVar17 * *local_40 + local_d8[0]) * *param_2;
        if (fVar7 <= *(float *)(pcVar3 + 8)) {
          if (*(float *)(pcVar3 + 4) <= fVar7) goto LAB_003015ca;
          fVar18 = *(float *)(pcVar3 + 4);
        }
        else {
          fVar18 = *(float *)(pcVar3 + 8);
        }
        fVar17 = (fVar7 - fVar18) * param_2[1] * *(float *)(pcVar3 + 0xc) * param_4 * (1.0 / fVar16)
                 + fVar17;
      }
LAB_003015ca:
      if (fVar17 != 0.0) {
        FUN_003057e0();
        FUN_003057e0();
      }
    }
    else if (fVar16 < 1e-16 == (fVar16 == 1e-16)) {
      in_XMM1_Da = in_XMM1_Da + local_f4 * local_f4;
      fVar16 = local_f0 * local_f0 + fStack_ec * fStack_ec;
      auVar15._4_4_ = in_XMM1_Da;
      auVar15._0_4_ = fVar16;
      auVar15._8_4_ = in_XMM1_Da;
      auVar15._12_4_ = in_XMM1_Da;
      auVar14._4_12_ = auVar15._4_12_;
      auVar14._0_4_ = fVar16 + local_f4 * local_f4;
      auVar15 = rsqrtss(auVar14,auVar14);
      fVar16 = auVar15._0_4_;
      local_f4 = local_f4 * fVar16 * 0.1;
      local_f0 = local_f0 * fVar16 * 0.1;
      fStack_ec = fStack_ec * fVar16 * 0.1;
      goto LAB_003012e6;
    }
    local_f8 = local_f8 + -1;
    if (local_f8 < 1) {
      return;
    }
  } while( true );
}
