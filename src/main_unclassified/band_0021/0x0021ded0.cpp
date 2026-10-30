/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DD9C875F509295FBF2C564BCBC8D06E76DC0403C9C6279279350B019F3826702
 * Entry: 0x0021ded0, Ghidra index: 7554, label: FUN_0021ded0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00101a00;
extern uint32_t DAT_0037ec88;
extern uint32_t DAT_00394bd8;
extern uint32_t DAT_00394bdc;
extern uint32_t DAT_00394be0;
extern uint32_t DAT_00394be4;
extern uint32_t DAT_00394be8;
extern uint32_t DAT_00394bec;
extern uint32_t DAT_00394bf0;
extern uint32_t DAT_00394bf4;
extern uint32_t DAT_00407038;
extern uint32_t _DAT_0040704c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0021ded0(int param_1)

{
  int *piVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float *pfVar7;
  uint uVar8;
  float fVar9;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float *local_f8;
  float *local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  float *local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined4 local_a0;
  float local_9c;
  float local_98;
  float local_94;
  int *local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int *local_84;
  undefined4 local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float fStack_58;
  int local_54;
  float local_50;
  undefined8 local_4c;
  char local_41;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c [3];
  float local_20;
  float local_1c;
  float *local_18;
  float *local_14;
  int *local_10;
  float *local_c;
  float *local_8;
  
  piVar2 = *(int **)(param_1 + 0x8c);
  iVar4 = *(int *)(piVar2[2] + 0xb78);
  local_84 = piVar2;
  if ((*(char *)(iVar4 + 0xb45) != '\0') && (*(char *)(iVar4 + 0xb46) == '\0')) {
    *(undefined1 *)(iVar4 + 0xb46) = 1;
    local_c = (float *)0x0;
    FUN_0006a610(&local_c);
  }
  piVar1 = piVar2 + 0x12;
  local_90 = piVar1;
  local_b8 = (float *)(**(code **)(piVar2[0x12] + 0x14))();
  local_7c = (float)local_10[0x25] * 1.414214;
  local_34 = (float)local_10[0x1f] * (float)local_10[0x26] * 0.5 + local_7c;
  local_14 = (float *)((float)local_10[0x20] * (float)local_10[0x26] * 0.5 + local_7c);
  local_20 = (float)local_10[0x21] * 0.5;
  local_c = (float *)(local_34 * local_34 + (float)local_14 * (float)local_14 + local_20 * local_20)
  ;
  local_30 = SQRT((float)local_c);
  local_8 = local_14;
  iVar4 = (**(code **)(*local_10 + 0x40))();
  local_54 = *(undefined4 *)(iVar4 + 0x2c);
  local_c = *(float **)(iVar4 + 0x28);
  local_2c[0] = *(float *)(iVar4 + 0x24);
  FUN_000621c0();
  iVar4 = (**(code **)(*piVar1 + 0x50))(&local_1c,local_30);
  if (iVar4 != 1) {
    if (iVar4 == 3) {
      local_20 = local_34;
      local_2c[0] = local_34 * (float)local_10[0x35];
      local_5c = local_34 * (float)*(undefined8 *)(local_10 + 0x36);
      fStack_58 = local_34 * (float)((ulonglong)*(undefined8 *)(local_10 + 0x36) >> 0x20);
      local_c = (float *)(local_10 + 0x38);
      local_50 = (float)local_8 * *local_c;
      local_68 = (float)local_8 * (float)*(undefined8 *)(local_10 + 0x39);
      local_64 = (float)local_8 * (float)((ulonglong)*(undefined8 *)(local_10 + 0x39) >> 0x20);
      local_4c = CONCAT44(local_64,local_68);
      local_3c = -(float)local_10[0x21];
      local_8 = (float *)0x0;
      local_38 = 0.0;
      iVar4 = (**(code **)(*local_10 + 0x40))();
      pfVar7 = (float *)(iVar4 + 0x24);
      FUN_0001fe40(&local_120,0xc,8,FUN_000a3d50);
      local_e8 = (-fStack_58 - local_64) + *(float *)(iVar4 + 0x2c);
      local_ec = (-local_5c - local_68) + *(float *)(iVar4 + 0x28);
      local_120 = (-local_2c[0] - local_50) + *pfVar7;
      local_dc = -fStack_58 + local_64 + *(float *)(iVar4 + 0x2c);
      local_e0 = -local_5c + local_68 + *(float *)(iVar4 + 0x28);
      local_114 = -local_2c[0] + local_50 + *pfVar7;
      local_d0 = local_64 + fStack_58 + *(float *)(iVar4 + 0x2c);
      local_d4 = local_68 + local_5c + *(float *)(iVar4 + 0x28);
      local_108 = local_50 + local_2c[0] + *pfVar7;
      local_14 = (float *)(fStack_58 - local_64);
      local_18 = (float *)(local_5c - local_68);
      local_c4 = (float)local_14 + *(float *)(iVar4 + 0x2c);
      local_c8 = (float)local_18 + *(float *)(iVar4 + 0x28);
      local_fc = (local_2c[0] - local_50) + *pfVar7;
      pfVar7 = &local_120;
      local_118 = local_e8 + local_38;
      local_11c = local_ec + local_3c;
      local_10c = local_dc + local_38;
      local_110 = local_e0 + local_3c;
      local_100 = local_d0 + local_38;
      local_104 = local_d4 + local_3c;
      local_f4 = (float *)(local_c4 + local_38);
      local_f8 = (float *)(local_c8 + local_3c);
      local_20 = 1.12104e-44;
      local_f0 = local_120;
      local_e4 = local_114;
      local_d8 = local_108;
      local_cc = local_fc;
      local_78 = local_120;
      local_1c = local_fc;
      local_c = local_f4;
      local_8 = local_f8;
      do {
        FUN_000621c0();
        pfVar3 = local_14;
        fVar9 = local_1c;
        local_c = local_14;
        local_8 = local_18;
        pfVar7[1] = (float)local_18;
        *pfVar7 = fVar9;
        pfVar7[2] = (float)pfVar3;
        pfVar7 = pfVar7 + 3;
        local_20 = (float)((int)local_20 + -1);
      } while (local_20 != 0.0);
      iVar4 = (**(code **)(*piVar1 + 0x4c))(&local_120);
      if (iVar4 == 1) {
        return;
      }
    }
    FUN_002385a0();
    local_41 = iVar4 == 3;
    local_8 = (float *)0x204;
    FUN_0006a610(&local_8);
    local_8 = (float *)0x0;
    FUN_0006a610(&local_8);
    local_8 = *(float **)(&DAT_00407038 + local_10[0x22] * 4);
    FUN_0006a610(&local_8);
    local_8 = *(float **)(&DAT_00407038 + local_10[0x23] * 4);
    FUN_0006a610(&local_8);
    D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
    local_8 = (float *)0x0;
    FUN_0006a610(&local_8);
    local_8 = (float *)0x1;
    FUN_0006a610(&local_8);
    local_8 = (float *)0x0;
    FUN_0006a610(&local_8);
    local_8 = (float *)0x1;
    FUN_0006a610(&local_8);
    piVar2 = *(int **)(local_10[3] + 0x1c);
    if (piVar2 == (int *)0x0) {
      FUN_00062280();
    }
    else {
      (**(code **)(*piVar2 + 0x38))(piVar2,0);
    }
    FUN_000a4d00();
    pfVar7 = (float *)(**(code **)(*local_84 + 0x40))();
    local_38 = (float)local_10[0x25];
    local_50 = local_38 * pfVar7[1];
    local_3c = local_38 * pfVar7[4];
    local_38 = local_38 * pfVar7[7];
    local_70 = (float)local_10[0x25];
    local_2c[0] = local_70 * *pfVar7;
    fVar9 = local_70 * pfVar7[3];
    local_70 = local_70 * pfVar7[6];
    local_14 = (float *)-local_70;
    local_18 = (float *)-fVar9;
    local_20 = -local_2c[0];
    fStack_58 = local_38 + (float)local_14;
    local_5c = local_3c + (float)local_18;
    local_60 = local_20 + local_50;
    local_64 = local_38 + local_70;
    local_68 = local_3c + fVar9;
    local_6c = local_2c[0] + local_50;
    local_94 = (float)local_14 - local_38;
    local_98 = (float)local_18 - local_3c;
    local_9c = local_20 - local_50;
    local_c = (float *)(local_70 - local_38);
    local_8 = (float *)(fVar9 - local_3c);
    local_50 = local_2c[0] - local_50;
    local_4c = CONCAT44(local_c,local_8);
    FUN_000a4a60(0xb);
    D3D8LTCG__D3DDevice_SetStreamSource_4(0);
    pfVar7 = (float *)local_10[0x34];
    local_20 = 0.0;
    local_34 = 0.0;
    local_54 = 0;
    local_c = (float *)0x0;
    if (local_10[0x1e] != 0) {
      do {
        pfVar3 = local_c;
        local_2c[0] = *local_b8 * *pfVar7 + local_b8[1] * pfVar7[1] + local_b8[2] * pfVar7[2] +
                      local_b8[9];
        local_8 = (float *)(*pfVar7 * local_b8[3] +
                            local_b8[4] * pfVar7[1] + local_b8[5] * pfVar7[2] + local_b8[10]);
        fVar9 = local_b8[6] * *pfVar7 + pfVar7[2] * local_b8[8] + pfVar7[1] * local_b8[7] +
                local_b8[0xb];
        if ((local_41 == '\0') ||
           (local_30 = fVar9, iVar4 = (**(code **)(*local_90 + 0x50))(local_2c,local_7c * pfVar7[7])
           , 2 < iVar4)) {
          local_40 = local_60 * pfVar7[7] + *pfVar7;
          local_3c = local_5c * pfVar7[7] + pfVar7[1];
          local_38 = fStack_58 * pfVar7[7] + pfVar7[2];
          local_ac = local_6c * pfVar7[7] + *pfVar7;
          local_a8 = local_68 * pfVar7[7] + pfVar7[1];
          local_a4 = local_64 * pfVar7[7] + pfVar7[2];
          local_78 = local_50 * pfVar7[7] + *pfVar7;
          local_74 = (float)local_4c * pfVar7[7] + pfVar7[1];
          local_70 = local_4c._4_4_ * pfVar7[7] + pfVar7[2];
          local_1c = local_9c * pfVar7[7] + *pfVar7;
          local_18 = (float *)(local_98 * pfVar7[7] + pfVar7[1]);
          local_14 = (float *)(local_94 * pfVar7[7] + pfVar7[2]);
          fVar9 = ABS(fVar9) - _DAT_0040704c;
          if (fVar9 < 0.0) {
            fVar9 = 0.0;
          }
          local_8 = (float *)(int)((1.0 - 1.0 / (fVar9 + 1.0)) *
                                  (float)*(byte *)((int)local_10 + 0x9f));
          uVar8 = (uint)pfVar3 & 3;
          local_30 = (float)(int)local_8 * 0.00390625;
          if (local_34 == (float)local_54) {
            FUN_002386d0();
            puVar6 = D3D8__D3D_g_pDevice;
            FUN_003736b0();
            puVar5 = (undefined4 *)*puVar6;
            if ((undefined4 *)puVar6[1] <= puVar5) {
              puVar5 = (undefined4 *)
                       D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
            }
            *puVar5 = 0x417fc;
            puVar5[1] = 8;
            *puVar6 = puVar5 + 2;
            puVar6[2] = puVar6[2] | 0x800;
            D3D8LTCG__D3DDevice_SetVertexDataColor
                      (3,((*(byte *)(local_10 + 0x27) | 0xffffff00) << 8 |
                         (uint)*(byte *)((int)local_10 + 0x9d)) << 8 |
                         (uint)*(byte *)((int)local_10 + 0x9e));
            local_34 = (float)((int)local_34 + 1);
          }
          puVar6 = D3D8__D3D_g_pDevice;
          puVar5 = (undefined4 *)*D3D8__D3D_g_pDevice;
          local_a0 = (&DAT_00394bdc)[uVar8 * 8];
          local_c0 = (&DAT_00394bd8)[uVar8 * 8];
          if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar5) {
            puVar5 = (undefined4 *)
                     D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
          }
          *puVar5 = 0x818c8;
          puVar5[1] = local_c0;
          puVar5[2] = local_a0;
          *puVar6 = puVar5 + 3;
          puVar6 = D3D8__D3D_g_pDevice;
          puVar5 = (undefined4 *)*D3D8__D3D_g_pDevice;
          if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar5) {
            puVar5 = (undefined4 *)
                     D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
          }
          puVar5[1] = local_40;
          puVar5[2] = local_3c;
          *puVar5 = &DAT_00101a00;
          puVar5[3] = local_38;
          puVar5[4] = local_30;
          *puVar6 = puVar5 + 5;
          puVar6 = D3D8__D3D_g_pDevice;
          local_b0 = (&DAT_00394be4)[uVar8 * 8];
          local_88 = (&DAT_00394be0)[uVar8 * 8];
          puVar5 = (undefined4 *)*D3D8__D3D_g_pDevice;
          if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar5) {
            puVar5 = (undefined4 *)
                     D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
          }
          *puVar5 = 0x818c8;
          puVar5[1] = local_88;
          puVar5[2] = local_b0;
          *puVar6 = puVar5 + 3;
          puVar6 = D3D8__D3D_g_pDevice;
          puVar5 = (undefined4 *)*D3D8__D3D_g_pDevice;
          if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar5) {
            puVar5 = (undefined4 *)
                     D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
          }
          puVar5[1] = local_ac;
          puVar5[2] = local_a8;
          *puVar5 = &DAT_00101a00;
          puVar5[3] = local_a4;
          puVar5[4] = local_30;
          *puVar6 = puVar5 + 5;
          puVar6 = D3D8__D3D_g_pDevice;
          local_8c = (&DAT_00394be8)[uVar8 * 8];
          local_b4 = (&DAT_00394bec)[uVar8 * 8];
          puVar5 = (undefined4 *)*D3D8__D3D_g_pDevice;
          if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar5) {
            puVar5 = (undefined4 *)
                     D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
          }
          *puVar5 = 0x818c8;
          puVar5[1] = local_8c;
          puVar5[2] = local_b4;
          *puVar6 = puVar5 + 3;
          puVar6 = D3D8__D3D_g_pDevice;
          puVar5 = (undefined4 *)*D3D8__D3D_g_pDevice;
          if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar5) {
            puVar5 = (undefined4 *)
                     D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
          }
          puVar5[1] = local_78;
          puVar5[2] = local_74;
          *puVar5 = &DAT_00101a00;
          puVar5[3] = local_70;
          puVar5[4] = local_30;
          *puVar6 = puVar5 + 5;
          puVar6 = D3D8__D3D_g_pDevice;
          local_80 = (&DAT_00394bf4)[uVar8 * 8];
          local_bc = (&DAT_00394bf0)[uVar8 * 8];
          puVar5 = (undefined4 *)*D3D8__D3D_g_pDevice;
          if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar5) {
            puVar5 = (undefined4 *)
                     D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
          }
          *puVar5 = 0x818c8;
          puVar5[1] = local_bc;
          puVar5[2] = local_80;
          *puVar6 = puVar5 + 3;
          puVar6 = D3D8__D3D_g_pDevice;
          puVar5 = (undefined4 *)*D3D8__D3D_g_pDevice;
          if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar5) {
            puVar5 = (undefined4 *)
                     D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
          }
          puVar5[1] = local_1c;
          puVar5[2] = local_18;
          *puVar5 = &DAT_00101a00;
          puVar5[3] = local_14;
          puVar5[4] = local_30;
          *puVar6 = puVar5 + 5;
          puVar5 = D3D8__D3D_g_pDevice;
          local_20 = (float)((int)local_20 + 1);
          if (999 < (uint)local_20) {
            puVar6 = (undefined4 *)*D3D8__D3D_g_pDevice;
            if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar6) {
              puVar6 = (undefined4 *)
                       D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
            }
            *puVar6 = 0x417fc;
            puVar6[1] = 0;
            *puVar5 = puVar6 + 2;
            if ((puVar5[2] & 0x1000) != 0) {
              D3D8LTCG__D3D_SetFence(1);
            }
            local_54 = local_54 + 1;
            puVar5[2] = puVar5[2] & 0xffffe7ff;
            local_20 = 0.0;
          }
        }
        puVar5 = D3D8__D3D_g_pDevice;
        local_c = (float *)((int)local_c + 1);
        pfVar7 = pfVar7 + 9;
      } while (local_c < (float *)local_10[0x1e]);
      if (local_54 < (int)local_34) {
        puVar6 = (undefined4 *)*D3D8__D3D_g_pDevice;
        if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar6) {
          puVar6 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
        }
        *puVar6 = 0x417fc;
        puVar6[1] = 0;
        *puVar5 = puVar6 + 2;
        if ((puVar5[2] & 0x1000) != 0) {
          D3D8LTCG__D3D_SetFence(1);
        }
        puVar5[2] = puVar5[2] & 0xffffe7ff;
      }
    }
    FUN_00238630();
    iVar4 = *(int *)(local_84[2] + 0xb78);
    if ((*(char *)(iVar4 + 0xb45) != '\0') && (*(char *)(iVar4 + 0xb46) != '\0')) {
      local_80 = 1;
      FUN_0006a610(&local_80);
      *(undefined1 *)(iVar4 + 0xb46) = 0;
    }
  }
  return;
}
