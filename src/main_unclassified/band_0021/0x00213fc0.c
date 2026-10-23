/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5960A7F26C6E258994270C35B44EDDB96E0897DF24D6F3C070CDB0F7E56D95D7
 * Entry: 0x00213fc0, Ghidra index: 7452, label: FUN_00213fc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
extern uint32_t DAT_003f7f1c;
extern uint32_t _DAT_00407064;
extern uint32_t *_DAT_00407068;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00213fc0(int *param_1,int param_2,char *param_3,char *param_4,int *param_5,int *param_6,
                 int *param_7,int *param_8,char *param_9,byte *param_10,char param_11)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 *puVar14;
  byte bVar15;
  char cVar16;
  float *pfVar17;
  undefined4 **ppuVar18;
  undefined4 *puVar19;
  float *pfVar20;
  undefined4 *puVar21;
  float10 fVar22;
  float fVar23;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  int local_28;
  float local_1c;
  undefined4 *local_18;
  float local_14;
  float local_10;
  byte local_c [7];
  char local_5;
  
  if (((param_11 != '\0') && (*(char *)(*param_1 + 0x22) == -1)) &&
     (0xfe < *(byte *)(*param_1 + 0x23))) {
    return;
  }
  pfVar17 = (float *)(**(code **)(*(int *)(param_2 + 0x48) + 0xc))();
  local_3c = pfVar17[1];
  local_38 = pfVar17[2];
  local_40 = *pfVar17;
  local_5 = '\x01';
  local_14 = local_3c;
  if ((*(byte *)(param_2 + 0x4c) & 1) == 0) {
    local_1c = 1.0;
  }
  else {
    fVar22 = (float10)FUN_0006a9f0();
    local_14 = (float)fVar22;
    fVar22 = (float10)FUN_0006aa40();
    local_1c = (float)((float10)local_14 / fVar22);
  }
  piVar4 = *(int **)(*param_1 + 0x40 + param_1[1] * 4);
  if ((int *)*param_6 != piVar4) {
    *param_6 = (int)piVar4;
    if (*param_4 != '\0') {
      D3D8LTCG__D3DDevice_End();
      *param_4 = '\0';
      *param_3 = '\x01';
    }
    (**(code **)(*piVar4 + 0x38))(piVar4,0);
  }
  FUN_002385a0();
  if (param_11 == '\0') {
    bVar15 = *(byte *)(*param_1 + 0x22);
    local_c[0] = *(byte *)(*param_1 + 0x23);
    local_18 = (undefined4 *)CONCAT31(local_18._1_3_,bVar15);
    if (*(int *)(param_2 + 0xd8) == 1) {
      if ((bVar15 == 0xff) && (local_c[0] == 0xff)) goto LAB_002140d3;
      ppuVar18 = (undefined4 **)local_c;
      if (bVar15 <= local_c[0]) {
        ppuVar18 = &local_18;
      }
      puVar19 = (undefined4 *)(uint)*(byte *)ppuVar18;
    }
    else {
      puVar19 = local_18;
      if (bVar15 == 0xff) goto LAB_002140d3;
    }
    FUN_0009e960(*(undefined4 *)(*(int *)(param_2 + 8) + 0xb78),puVar19);
  }
LAB_002140d3:
  local_14 = *(float *)(*param_1 + 0x28);
  fVar23 = *(float *)(*param_1 + 0x2c);
  if (local_14 <= fVar23) {
    fVar23 = local_14;
  }
  puVar19 = (undefined4 *)param_1[3];
  local_1c = fVar23 * _DAT_00407068 * local_1c;
  local_28 = 0;
  fVar23 = _DAT_00407064 * local_1c;
  local_18 = (undefined4 *)0x0;
  if (puVar19 != (undefined4 *)0x0) {
    local_18 = (undefined4 *)*puVar19;
  }
  do {
    if (local_18 == puVar19) {
      FUN_00238630();
      return;
    }
    iVar5 = local_18[2];
    iVar6 = *(int *)(iVar5 + 0xc);
    iVar7 = *(int *)(iVar5 + 8);
    if (iVar6 == 0) {
      iVar6 = *(int *)(iVar5 + 4);
      if (iVar6 != 0) {
        if (iVar6 != *param_7) {
          if (*param_4 != '\0') {
            D3D8LTCG__D3DDevice_End();
            *param_4 = '\0';
            *param_3 = '\x01';
          }
          *param_7 = iVar6;
          cVar16 = (**(code **)(*(int *)*param_7 + 0x88))(param_2);
          *param_9 = cVar16;
        }
        if ((*param_9 != '\0') && (*(int *)(iVar7 + 0x70) == 0)) {
          if ((local_5 != '\0') || (*param_5 != iVar7)) {
            if (iVar7 != local_28) {
              pfVar20 = (float *)FUN_000a0c60();
              local_48 = pfVar20[2];
              local_4c = pfVar20[1];
              local_50 = *pfVar20;
              local_28 = iVar7;
            }
            local_5 = '\0';
            local_40 = local_50;
            local_3c = local_4c;
            local_38 = local_48;
          }
          goto LAB_002142f4;
        }
      }
    }
    else {
      if (iVar6 != -1) {
        if (iVar6 != *param_8) {
          if (*param_4 != '\0') {
            D3D8LTCG__D3DDevice_End();
            *param_4 = '\0';
            *param_3 = '\x01';
          }
          *param_8 = *(int *)(iVar5 + 0xc);
          bVar15 = FUN_0006e6b0(DAT_003f7f1c,&LAB_001f3710,*param_8);
          *param_10 = bVar15 & 1;
        }
        if (*param_10 == 0) goto LAB_002146d6;
      }
      if (local_5 == '\0') {
        local_38 = pfVar17[2];
        local_3c = pfVar17[1];
        local_40 = *pfVar17;
        local_5 = '\x01';
      }
LAB_002142f4:
      bVar15 = *(byte *)(iVar5 + 0x24);
      puVar8 = *(undefined4 **)(iVar5 + 0x14);
      fVar1 = *(float *)(iVar5 + 0x20);
      puVar9 = (undefined4 *)0x0;
      if (puVar8 != (undefined4 *)0x0) {
        puVar9 = (undefined4 *)*puVar8;
      }
      for (; puVar9 != puVar8; puVar9 = (undefined4 *)*puVar9) {
        local_14 = 1.0;
        fVar13 = (local_40 - (float)puVar9[2]) * (local_40 - (float)puVar9[2]) +
                 (local_3c - (float)puVar9[3]) * (local_3c - (float)puVar9[3]) +
                 (local_38 - (float)puVar9[4]) * (local_38 - (float)puVar9[4]);
        if (fVar13 <= local_1c * local_1c) {
          if (fVar23 * fVar23 < fVar13) {
            local_14 = (local_1c - SQRT(fVar13)) * (1.0 / (local_1c - fVar23));
            local_14 = local_14 * local_14;
          }
          if (*param_5 != iVar7) {
            *param_5 = iVar7;
            if (*param_4 != '\0') {
              D3D8LTCG__D3DDevice_End();
              *param_4 = '\0';
              *param_3 = '\x01';
            }
            if ((iVar7 != 0) && (iVar7 != -1)) {
              FUN_0006ec90();
            }
            D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
          }
          if (*param_3 != '\0') {
            FUN_002386d0();
            puVar14 = D3D8__D3D_g_pDevice;
            FUN_003736b0();
            puVar21 = (undefined4 *)*puVar14;
            if ((undefined4 *)puVar14[1] <= puVar21) {
              puVar21 = (undefined4 *)
                        D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
            }
            *puVar21 = 0x417fc;
            puVar21[1] = 5;
            *puVar14 = puVar21 + 2;
            puVar14[2] = puVar14[2] | 0x800;
            *param_3 = '\0';
            *param_4 = '\x01';
          }
          puVar14 = D3D8__D3D_g_pDevice;
          iVar5 = *param_1;
          fVar13 = local_14 * (float)bVar15 * fVar1 * 0.00012650221;
          local_c[0] = *(byte *)(iVar5 + 0x26);
          bVar2 = *(byte *)(iVar5 + 0x25);
          bVar3 = *(byte *)(iVar5 + 0x24);
          puVar21 = (undefined4 *)*D3D8__D3D_g_pDevice;
          if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar21) {
            puVar21 = (undefined4 *)
                      D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
          }
          *puVar21 = 0x4194c;
          puVar21[1] = ((local_c[0] | 0xffffff00) << 8 | (uint)bVar2) << 8 | (uint)bVar3;
          *puVar14 = puVar21 + 2;
          puVar14 = D3D8__D3D_g_pDevice;
          iVar5 = puVar9[0xb];
          iVar6 = *(int *)((int)puVar9 + 0x2f);
          puVar21 = (undefined4 *)*D3D8__D3D_g_pDevice;
          if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar21) {
            puVar21 = (undefined4 *)
                      D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
          }
          puVar21[1] = iVar5 << 8;
          *puVar21 = 0x818c8;
          puVar21[2] = iVar6 << 8;
          *puVar14 = puVar21 + 3;
          puVar14 = D3D8__D3D_g_pDevice;
          uVar10 = puVar9[4];
          uVar11 = puVar9[3];
          puVar21 = (undefined4 *)*D3D8__D3D_g_pDevice;
          uVar12 = puVar9[2];
          local_10 = (float)(*(byte *)((int)puVar9 + 0x3e) & 0x1f) * fVar13;
          if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar21) {
            puVar21 = (undefined4 *)
                      D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
          }
          puVar21[1] = uVar12;
          puVar21[2] = uVar11;
          puVar21[3] = uVar10;
          *puVar21 = 0x101518;
          puVar21[4] = local_10;
          *puVar14 = puVar21 + 5;
          puVar14 = D3D8__D3D_g_pDevice;
          iVar5 = *(int *)((int)puVar9 + 0x32);
          iVar6 = *(int *)((int)puVar9 + 0x35);
          puVar21 = (undefined4 *)*D3D8__D3D_g_pDevice;
          if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar21) {
            puVar21 = (undefined4 *)
                      D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
          }
          puVar21[1] = iVar5 << 8;
          *puVar21 = 0x818c8;
          puVar21[2] = iVar6 << 8;
          *puVar14 = puVar21 + 3;
          puVar14 = D3D8__D3D_g_pDevice;
          uVar10 = puVar9[7];
          uVar11 = puVar9[6];
          puVar21 = (undefined4 *)*D3D8__D3D_g_pDevice;
          uVar12 = puVar9[5];
          local_10 = (float)((*(ushort *)((int)puVar9 + 0x3e) & 0x3e0) >> 5) * fVar13;
          if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar21) {
            puVar21 = (undefined4 *)
                      D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
          }
          puVar21[1] = uVar12;
          puVar21[2] = uVar11;
          puVar21[3] = uVar10;
          *puVar21 = 0x101518;
          puVar21[4] = local_10;
          *puVar14 = puVar21 + 5;
          puVar14 = D3D8__D3D_g_pDevice;
          iVar5 = puVar9[0xe];
          iVar6 = *(int *)((int)puVar9 + 0x3b);
          puVar21 = (undefined4 *)*D3D8__D3D_g_pDevice;
          if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar21) {
            puVar21 = (undefined4 *)
                      D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
          }
          puVar21[1] = iVar5 << 8;
          *puVar21 = 0x818c8;
          puVar21[2] = iVar6 << 8;
          *puVar14 = puVar21 + 3;
          puVar14 = D3D8__D3D_g_pDevice;
          uVar10 = puVar9[10];
          uVar11 = puVar9[9];
          puVar21 = (undefined4 *)*D3D8__D3D_g_pDevice;
          uVar12 = puVar9[8];
          local_10 = (float)((*(ushort *)((int)puVar9 + 0x3e) & 0x7c00) >> 10) * fVar13;
          if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar21) {
            puVar21 = (undefined4 *)
                      D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
          }
          puVar21[1] = uVar12;
          puVar21[2] = uVar11;
          puVar21[3] = uVar10;
          *puVar21 = 0x101518;
          puVar21[4] = local_10;
          *puVar14 = puVar21 + 5;
        }
      }
    }
LAB_002146d6:
    local_18 = (undefined4 *)*local_18;
  } while( true );
}
