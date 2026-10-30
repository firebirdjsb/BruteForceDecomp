/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 67ED24DB5741C8C20C640A49A75D0503D47D582691153A6FC83992641DEBD4FC
 * Entry: 0x00041870, Ghidra index: 500, label: FUN_00041870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_001aa220(void);
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern void FUN_00023b80(void);

extern uint32_t DAT_004a5c34;
extern uint32_t PTR_FUN_003a4010;
extern uint32_t PTR_LAB_003a3fa0;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00041870(int *param_1)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 in_XMM1 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined **local_1c8 [65];
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 local_b4 [40];
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 *local_80;
  float local_7c;
  undefined4 *local_78;
  float local_74;
  int *local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  int *local_50;
  int *local_4c;
  undefined1 local_45;
  float local_44;
  undefined1 local_40 [4];
  float local_3c;
  float local_38;
  undefined **local_34;
  undefined ***local_30;
  float fStack_2c;
  undefined **local_28;
  undefined8 local_24;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined ***local_c;
  bool local_6;
  char local_5;
  
  if (DAT_004a5c34 == '\0') {
    *(byte *)(param_1 + 0x272) = *(byte *)(param_1 + 0x272) & 0xfe;
    if ((param_1[0x24d] != 0) &&
       (local_50 = (int *)((param_1[0x24e] - param_1[0x24d]) / 0x18), local_50 != (int *)0x0)) {
      local_6c = (int *)0x0;
      local_68 = 0;
      local_64 = 0;
      FUN_001aa220();
      local_5 = '\0';
      local_6 = false;
      local_4c = (int *)0x0;
      local_18 = 1e+12;
      piVar4 = (int *)FUN_000120f0();
      local_50 = piVar4;
      if (piVar4 != (int *)0x0) {
        local_10 = (float)(**(code **)(*piVar4 + 0x40))();
        piVar5 = (int *)(**(code **)(*param_1 + 0x24))();
        local_84 = (**(code **)(*piVar5 + 0x9c))();
        FUN_00023b80();
        local_78 = *(undefined4 **)(*(int *)(param_1[4] + 8) + 0x74);
        local_80 = *(undefined4 **)(*(int *)(param_1[4] + 8) + 0x68);
        while ((((piVar5 = local_4c, local_60 != local_80 || (local_5c != local_80)) ||
                (local_58 != local_78)) || (local_54 != local_78))) {
          if (local_60 == local_5c) {
            piVar5 = (int *)local_58[3];
          }
          else {
            piVar5 = (int *)local_60[3];
          }
          piVar6 = (int *)(**(code **)(*piVar5 + 0xec))();
          local_c = (undefined ***)(**(code **)(*piVar5 + 0xf4))();
          if (((piVar5 != piVar4) && ((*(byte *)(piVar5 + 0x1c) & 1) == 0)) &&
             ((piVar6 != (int *)0x0 && (local_c != (undefined ***)0x0)))) {
            cVar3 = (**(code **)(*piVar6 + 0xc0))(local_84);
            iVar7 = (**(code **)(*piVar5 + 0x40))();
            if (cVar3 == '\0') {
              local_38 = *(float *)((int)local_10 + 0x2c) - *(float *)(iVar7 + 0x2c);
              local_3c = *(float *)((int)local_10 + 0x28) - *(float *)(iVar7 + 0x28);
              fVar11 = *(float *)((int)local_10 + 0x24) - *(float *)(iVar7 + 0x24);
              local_1c = local_38;
              local_14 = local_3c;
              if ((local_3c * local_3c + local_38 * local_38 + fVar11 * fVar11 < 64.0) &&
                 ((int)*local_c[0x6a] < 3)) {
                iVar9 = *(int *)(param_1[0x24d] + 0x14 + param_1[0x250] * 0x18);
                piVar5[0x94] = piVar5[0x94] | 1;
                iVar2 = piVar5[0x93];
                piVar4[0x94] = piVar4[0x94] | 1;
                if (((iVar2 != 0) && (iVar9 != 0)) &&
                   (((iVar9 == iVar2 || (piVar4[0x93] == iVar2)) ||
                    ((param_1[0x255] != 0 && (param_1[0x255] == iVar2)))))) {
                  fStack_2c = *(float *)(iVar7 + 0x2c) - *(float *)((int)local_10 + 0x2c);
                  local_30 = (undefined ***)
                             (*(float *)(iVar7 + 0x28) - *(float *)((int)local_10 + 0x28));
                  local_34 = (undefined **)
                             (*(float *)(iVar7 + 0x24) - *(float *)((int)local_10 + 0x24));
                  local_c = &local_34;
                  local_1c = *(float *)(iVar9 + 0x1c) - *(float *)((int)local_10 + 0x2c);
                  fVar11 = *(float *)(iVar9 + 0x18) - *(float *)((int)local_10 + 0x28);
                  local_28 = (undefined **)
                             (*(float *)(iVar9 + 0x14) - *(float *)((int)local_10 + 0x24));
                  local_24 = CONCAT44(local_1c,fVar11);
                  local_14 = (float)local_28 * (float)local_28 +
                             local_1c * local_1c + fVar11 * fVar11;
                  auVar12._0_4_ = (float)local_34 * (float)local_34;
                  auVar12._4_4_ = 0;
                  auVar12._8_4_ = (float)local_30 * (float)local_30;
                  auVar12._12_4_ = fStack_2c * fStack_2c;
                  fVar14 = in_XMM1._0_4_ + auVar12._0_4_;
                  auVar15._4_4_ = fVar14;
                  auVar15._0_4_ = auVar12._8_4_ + auVar12._12_4_;
                  auVar15._8_4_ = fVar14;
                  auVar15._12_4_ = fVar14;
                  in_XMM1._4_12_ = auVar15._4_12_;
                  in_XMM1._0_4_ = auVar12._8_4_ + auVar12._12_4_ + auVar12._0_4_;
                  if (2e-05 <= in_XMM1._0_4_) {
                    auVar15 = rsqrtss(in_XMM1,in_XMM1);
                    in_XMM1._0_4_ = auVar15._0_4_;
                    in_XMM1._4_4_ = in_XMM1._0_4_;
                    in_XMM1._8_4_ = in_XMM1._0_4_;
                    in_XMM1._12_4_ = in_XMM1._0_4_;
                    local_34 = (undefined **)((float)local_34 * in_XMM1._0_4_);
                    local_30 = (undefined ***)((float)local_30 * in_XMM1._0_4_);
                    fStack_2c = fStack_2c * in_XMM1._0_4_;
                  }
                  else {
                    local_45 = 0;
                  }
                  if (local_14 != 0.0) {
                    auVar12 = rsqrtss(auVar12,local_14);
                    local_74 = auVar12._0_4_;
                    local_c = &local_28;
                    in_XMM1._4_4_ = local_74;
                    in_XMM1._0_4_ = local_74;
                    in_XMM1._8_4_ = local_74;
                    in_XMM1._12_4_ = local_74;
                    auVar13._0_4_ = (undefined **)((float)local_28 * local_74);
                    auVar13._4_4_ = local_74 * 0.0;
                    auVar13._8_4_ = fVar11 * local_74;
                    auVar13._12_4_ = local_1c * local_74;
                    local_24 = auVar13._8_8_;
                    local_7c = local_14;
                    local_44 = local_74;
                    local_28 = auVar13._0_4_;
                  }
                  if (0.75 < (float)local_28 * (float)local_34 + local_24._4_4_ * fStack_2c) {
                    local_5 = '\x01';
                    if (local_14 < local_18) {
                      local_4c = piVar5;
                      local_18 = local_14;
                    }
                    local_88 = 0;
                    local_8c = iVar2;
                    FUN_00064490();
                    if ((*(byte *)(iVar2 + 0x28) & 8) == 0) {
                      puVar1 = (uint *)(*(int *)(local_68 + -8) + 0x28);
                      *puVar1 = *puVar1 | 8;
                    }
                    else {
                      *(undefined4 *)(local_68 + -4) = 1;
                    }
                  }
                }
              }
            }
          }
          if (local_60 == local_5c) {
            local_58 = (undefined4 *)*local_58;
          }
          else {
            local_60 = (undefined4 *)*local_60;
          }
        }
        if (local_5 != '\0') {
          iVar7 = (**(code **)(*local_4c + 0xf4))();
          uVar8 = *(uint *)(iVar7 + 0x3c4) >> 10;
          local_6 = (bool)((byte)uVar8 & 1);
          if ((uVar8 & 1) == 0) {
            iVar7 = (**(code **)(*piVar5 + 0xf4))();
            local_6 = *(int *)(iVar7 + 0x3c8) != 0;
          }
          iVar9 = (**(code **)(*piVar4 + 0x40))();
          iVar7 = *(int *)(param_1[0x24d] + param_1[0x250] * 0x18 + 0x14);
          local_44 = *(float *)(iVar7 + 0x1c) - *(float *)(iVar9 + 0x2c);
          fVar11 = *(float *)(iVar7 + 0x18) - *(float *)(iVar9 + 0x28);
          local_10 = *(float *)(iVar7 + 0x14) - *(float *)(iVar9 + 0x24);
          local_38 = local_44;
          if (local_10 * local_10 + fVar11 * fVar11 + local_44 * local_44 < local_18) {
            local_5 = '\0';
          }
        }
      }
      piVar5 = local_6c;
      if (local_6c != (int *)0x0) {
        fVar11 = (float)(local_68 - (int)local_6c >> 3);
        local_18 = fVar11;
        if (fVar11 != 0.0) {
          if ((local_5 == '\0') || (((param_1[0xf1] & 0x400U) == 0 && (local_6 == false)))) {
            param_1[0xdc] = 0;
          }
          else if (fVar11 != 0.0) {
            local_10 = 0.0;
            if (*local_6c == *(int *)(param_1[0x24e] + -4)) {
              FUN_00040f70();
              *(undefined1 *)(param_1 + 0x254) = 1;
            }
            else {
              fStack_2c = (float)FUN_00023420();
              local_30 = local_1c8;
              local_1c8[0] = &PTR_FUN_003a4010;
              local_c4 = 0;
              local_c0 = 0;
              local_bc = 0;
              local_b8 = 0x41700000;
              local_34 = &PTR_LAB_003a3fa0;
              local_3c = (float)FUN_000e0c80(local_40);
              piVar4[0x94] = piVar4[0x94] | 1;
              local_38 = 0.0;
              iVar7 = FUN_000594a0(piVar4[0x93],&local_34,local_40);
              if (iVar7 == 0) {
                if ((local_4c != (int *)0x0) && (cVar3 = FUN_00112800(), cVar3 != '\0')) {
                  local_10 = 1.0;
                }
              }
              else {
                FUN_000125d0();
                FUN_00041810();
                FUN_000428c0(local_b4);
                FUN_00025730(param_1 + 0x24c,1,1);
                if (3 < *(int *)param_1[0x6a]) {
                  *(int *)param_1[0x6a] = 3;
                  FUN_000124f0(0x3f000000);
                }
                FUN_0001bc90();
              }
              FUN_00012140();
              fVar11 = local_18;
              piVar5 = local_6c;
              if (local_10 != 0.0) {
                param_1[0xdc] = (int)((float)param_1[0x110] + (float)param_1[0xdc]);
                *(undefined4 *)param_1[0x6a] = 1;
                FUN_000124f0(0x3f000000);
                *(byte *)(param_1 + 0x272) = *(byte *)(param_1 + 0x272) | 1;
                fVar11 = local_18;
                piVar5 = local_6c;
                if ((7.0 <= (float)param_1[0xdc]) && (param_1[0x16] == 5)) {
                  FUN_0004e8f0();
                  param_1[0xdc] = 0;
                  if (param_1[0x16] != 3) {
                    FUN_0004e8f0();
                    param_1[0x16] = 3;
                    FUN_00018000();
                    FUN_00039f00(param_1);
                    FUN_00055b50();
                    FUN_00015fe0();
                    FUN_0001a4e0();
                    iVar7 = FUN_000120f0();
                    if ((iVar7 != 0) && (iVar7 = FUN_000120f0(), *(int *)(iVar7 + 0x59c) != 0)) {
                      FUN_000120f0();
                      uVar16 = 1;
                      uVar10 = FUN_000120f0(1);
                      FUN_0005e8b0(uVar10,uVar16);
                    }
                  }
                  FUN_00140a60(*(undefined4 *)(local_50[2] + 0xbe8),local_50,0x12d51a1c,0);
                  fVar11 = local_18;
                  piVar5 = local_6c;
                }
              }
            }
          }
          for (uVar8 = 0; uVar8 < (uint)fVar11; uVar8 = uVar8 + 1) {
            if (piVar5[uVar8 * 2 + 1] == 0) {
              *(uint *)(piVar5[uVar8 * 2] + 0x28) = *(uint *)(piVar5[uVar8 * 2] + 0x28) & 0xfffffff7
              ;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(piVar5);
      }
    }
  }
  return;
}
