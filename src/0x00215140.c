/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 209DAF58F44D73995974E322569610682FFAD7F6793C5DECBB33A16EB4C7C497
 * Entry: 0x00215140, Ghidra index: 7456, label: FUN_00215140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_d3d_device_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ec88;
void FUN_00215140(undefined4 param_1,int param_2,int param_3,undefined4 param_4,float *param_5,
                 float param_6,float param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,float *param_11,int param_12)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  ushort uVar11;
  bool bVar12;
  undefined4 *puVar13;
  char cVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  int iVar23;
  float fVar24;
  bool local_171;
  ushort *local_168;
  uint local_158;
  int local_154;
  ushort *local_150;
  int local_14c;
  int local_148;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  int local_120;
  undefined1 local_11c [12];
  undefined1 local_110 [12];
  undefined4 local_104;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  int local_ec;
  undefined4 local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  if (*(int *)(param_12 + 0x38) == 1) {
    local_f8 = -param_11[2];
    local_fc = -param_11[1];
    local_100 = -*param_11;
    FUN_00219110(&local_100);
  }
  fVar24 = param_6;
  if (param_6 <= param_7) {
    fVar24 = param_7;
  }
  fVar9 = (1.0 / param_7) * 0.5;
  fVar10 = (1.0 / param_6) * 0.5;
  local_138 = fVar24 + *param_5;
  local_134 = fVar24 + param_5[1];
  local_130 = fVar24 + param_5[2];
  local_12c = *param_5 - fVar24;
  local_128 = param_5[1] - fVar24;
  local_124 = param_5[2] - fVar24;
  iVar18 = *(int *)(param_2 * 0x2c + 0x1c + *(int *)(param_3 + 0x18));
  local_ec = param_2 * 0x2c + *(int *)(param_3 + 0x18);
  if (iVar18 == 0) {
    local_14c = 0;
  }
  else {
    local_14c = (*(int *)(local_ec + 0x20) - iVar18) / 0x30;
  }
  if (0 < local_14c) {
    local_120 = 0;
    do {
      puVar13 = D3D8__D3D_g_pDevice;
      iVar18 = *(int *)(local_ec + 0x1c);
      local_168 = *(ushort **)(iVar18 + 0x2c + local_120);
      piVar21 = (int *)(iVar18 + local_120);
      bVar8 = 0x513 < *(int *)(iVar18 + 4 + local_120);
      if (bVar8) {
        local_168 = *(ushort **)(local_168 + 2);
      }
      uVar16 = piVar21[3];
      if (uVar16 < 0xe1c25afa) {
        if (uVar16 == 0xe1c25af9) {
          local_154 = 0xc;
        }
        else if (uVar16 == 0xade1ce7) {
          local_154 = 0x10;
        }
        else {
          if (uVar16 == 0x13d18cfc) goto LAB_00215324;
          if (uVar16 != 0x1fe75072) goto LAB_0021531a;
          local_154 = 0x18;
        }
      }
      else if (((uVar16 == 0xe7fd942a) || (uVar16 == 0xe90647a9)) || (uVar16 == 0xef44f398)) {
LAB_00215324:
        local_154 = 0x20;
      }
      else {
LAB_0021531a:
        local_154 = 0;
      }
      puVar15 = (undefined4 *)*D3D8__D3D_g_pDevice;
      if ((undefined4 *)D3D8__D3D_g_pDevice[1] <= puVar15) {
        puVar15 = (undefined4 *)D3D8LTCG__D3D_MakeRequestedSpace_8(DAT_0037ec88 >> 1,DAT_0037ec88);
      }
      *puVar15 = 0x41710;
      puVar15[1] = 0;
      *puVar13 = puVar15 + 2;
      uVar16 = piVar21[9] | 0x80000000;
      if (*piVar21 == 0xe7ab726) {
        if (bVar8) {
          uVar17 = local_168[5] >> 1 & 0x1fff;
          uVar19 = uVar17 % 3;
          iVar18 = uVar17 - uVar19;
          local_168 = local_168 + 6;
          while( true ) {
            if (0 < iVar18) {
              local_150 = local_168 + 2;
              local_148 = (iVar18 - 1U) / 3 + 1;
              do {
                iVar22 = (uint)local_150[-2] * local_154 + uVar16;
                iVar20 = (uint)local_150[-1] * local_154 + uVar16;
                iVar23 = (uint)*local_150 * local_154 + uVar16;
                if (*(int *)(param_12 + 0x38) == 1) {
                  iVar6 = *(int *)(iVar22 + 0xc);
                  local_94 = (float)(iVar6 >> 0x16) * 0.0019569471;
                  local_98 = (float)((iVar6 << 10) >> 0x15) * 0.0009775171;
                  iVar7 = *(int *)(iVar20 + 0xc);
                  local_9c = (float)((iVar6 << 0x15) >> 0x15) * 0.0009775171;
                  local_88 = (float)(iVar7 >> 0x16) * 0.0019569471;
                  local_8c = (float)((iVar7 << 10) >> 0x15) * 0.0009775171;
                  iVar6 = *(int *)(iVar23 + 0xc);
                  local_90 = (float)((iVar7 << 0x15) >> 0x15) * 0.0009775171;
                  local_7c = (float)(iVar6 >> 0x16) * 0.0019569471;
                  local_80 = (float)((iVar6 << 10) >> 0x15) * 0.0009775171;
                  local_84 = (float)((iVar6 << 0x15) >> 0x15) * 0.0009775171;
                  FUN_00216b50(param_1,param_4,param_5,fVar24,&local_12c,&local_138,param_11,
                               local_11c,local_110,iVar22,iVar20,iVar23,&local_9c,&local_90,
                               &local_84);
                }
                else {
                  cVar14 = FUN_00216430(param_1,iVar20,&local_12c,param_5,fVar24,&local_100,
                                        &local_104,local_3c);
                  if (cVar14 != '\0') {
                    FUN_00216560(param_1,param_4,param_5,fVar24,fVar9,fVar10,param_9,param_10,
                                 param_11,iVar22,iVar20,iVar23,local_3c,&local_100,local_104,0);
                  }
                }
                local_150 = local_150 + 3;
                local_148 = local_148 + -1;
              } while (local_148 != 0);
            }
            puVar2 = local_168 + uVar19 + iVar18;
            if (*(int *)puVar2 == 0x417fc) break;
            local_168 = puVar2 + 2;
            uVar17 = puVar2[1] >> 1 & 0x1fff;
            if (uVar17 < 3) break;
            if (uVar19 != 0) {
              local_168 = local_168 + (3 - uVar19);
            }
            uVar19 = uVar17 % 3;
            iVar18 = uVar17 - uVar19;
          }
        }
        else {
          local_158 = 0;
          if (0 < piVar21[1]) {
            local_150 = local_168 + 2;
            do {
              iVar20 = (uint)local_150[-2] * local_154 + uVar16;
              iVar18 = (uint)local_150[-1] * local_154 + uVar16;
              iVar22 = (uint)*local_150 * local_154 + uVar16;
              if (*(int *)(param_12 + 0x38) == 1) {
                iVar23 = *(int *)(iVar20 + 0xc);
                local_b8 = (float)(iVar23 >> 0x16) * 0.0019569471;
                local_bc = (float)((iVar23 << 10) >> 0x15) * 0.0009775171;
                iVar6 = *(int *)(iVar18 + 0xc);
                local_c0 = (float)((iVar23 << 0x15) >> 0x15) * 0.0009775171;
                local_ac = (float)(iVar6 >> 0x16) * 0.0019569471;
                local_b0 = (float)((iVar6 << 10) >> 0x15) * 0.0009775171;
                iVar23 = *(int *)(iVar22 + 0xc);
                local_b4 = (float)((iVar6 << 0x15) >> 0x15) * 0.0009775171;
                local_a0 = (float)(iVar23 >> 0x16) * 0.0019569471;
                local_a4 = (float)((iVar23 << 10) >> 0x15) * 0.0009775171;
                local_a8 = (float)((iVar23 << 0x15) >> 0x15) * 0.0009775171;
                FUN_00216b50(param_1,param_4,param_5,fVar24,&local_12c,&local_138,param_11,local_11c
                             ,local_110,iVar20,iVar18,iVar22,&local_c0,&local_b4,&local_a8);
              }
              else {
                cVar14 = FUN_00216430(param_1,iVar18,&local_12c,param_5,fVar24,local_48,&local_e8,
                                      local_54);
                if (cVar14 != '\0') {
                  FUN_00216560(param_1,param_4,param_5,fVar24,fVar9,fVar10,param_9,param_10,param_11
                               ,iVar20,iVar18,iVar22,local_54,local_48,local_e8,0);
                }
              }
              local_150 = local_150 + 3;
              local_158 = local_158 + 3;
            } while ((int)local_158 < piVar21[1]);
          }
        }
      }
      else if (*piVar21 == 0x1d62e437) {
        if (bVar8) {
          bVar12 = false;
          local_171 = false;
          bVar8 = false;
          local_158 = local_168[5] >> 1 & 0x1fff;
          local_168 = local_168 + 6;
          do {
            puVar2 = local_168 + (local_158 - 2);
            puVar1 = local_168;
            if (*(int *)(local_168 + local_158) == 0x417fc) {
              bVar12 = true;
            }
            else {
              local_168 = local_168 + local_158 + 1;
              local_158 = *local_168 >> 1 & 0x1fff;
              if (local_158 < 3) {
                bVar12 = true;
              }
              else {
                local_168 = local_168 + 1;
              }
            }
            for (; puVar1 < puVar2; puVar1 = puVar1 + 1) {
              uVar3 = *puVar1;
              uVar4 = puVar1[1];
              if (((uVar3 != uVar4) && (uVar5 = puVar1[2], uVar3 != uVar5)) && (uVar4 != uVar5)) {
                uVar11 = uVar4;
                if (bVar8) {
                  uVar11 = uVar5;
                  uVar5 = uVar4;
                }
                iVar18 = (uint)uVar11 * local_154 + uVar16;
                iVar20 = (uint)uVar3 * local_154 + uVar16;
                iVar22 = (uint)uVar5 * local_154 + uVar16;
                if (*(int *)(param_12 + 0x38) == 1) {
                  iVar23 = *(int *)(iVar20 + 0xc);
                  local_70 = (float)(iVar23 >> 0x16) * 0.0019569471;
                  local_74 = (float)((iVar23 << 10) >> 0x15) * 0.0009775171;
                  iVar6 = *(int *)(iVar18 + 0xc);
                  local_78 = (float)((iVar23 << 0x15) >> 0x15) * 0.0009775171;
                  local_64 = (float)(iVar6 >> 0x16) * 0.0019569471;
                  local_68 = (float)((iVar6 << 10) >> 0x15) * 0.0009775171;
                  iVar23 = *(int *)(iVar22 + 0xc);
                  local_6c = (float)((iVar6 << 0x15) >> 0x15) * 0.0009775171;
                  local_58 = (float)(iVar23 >> 0x16) * 0.0019569471;
                  local_5c = (float)((iVar23 << 10) >> 0x15) * 0.0009775171;
                  local_60 = (float)((iVar23 << 0x15) >> 0x15) * 0.0009775171;
                  FUN_00216b50(param_1,param_4,param_5,fVar24,&local_12c,&local_138,param_11,
                               local_11c,local_110,iVar20,iVar18,iVar22,&local_78,&local_6c,
                               &local_60);
                }
                else {
                  cVar14 = FUN_00216430(param_1,iVar18,&local_12c,param_5,fVar24,local_24,&local_f4,
                                        local_c);
                  if (cVar14 != '\0') {
                    FUN_00216560(param_1,param_4,param_5,fVar24,fVar9,fVar10,param_9,param_10,
                                 param_11,iVar20,iVar18,iVar22,local_c,local_24,local_f4,0);
                  }
                }
              }
              local_171 = local_171 == false;
              bVar8 = local_171;
            }
          } while (!bVar12);
        }
        else {
          puVar2 = local_168 + piVar21[1] + -2;
          iVar18 = 0;
          bVar8 = false;
          iVar20 = (uint)*local_168 * local_154 + uVar16;
          iVar22 = (uint)local_168[1] * local_154 + uVar16;
          while (local_168 < puVar2) {
            uVar3 = local_168[2];
            if (local_168[1] == uVar3) {
              if (bVar8) {
                iVar20 = (uint)uVar3 * local_154 + uVar16;
                iVar18 = iVar22;
              }
              else {
                iVar18 = (uint)uVar3 * local_154 + uVar16;
                iVar20 = iVar22;
              }
              puVar1 = local_168 + 3;
              local_168 = local_168 + 2;
              iVar22 = (uint)*puVar1 * local_154 + uVar16;
            }
            else {
              if (!bVar8) {
                iVar18 = iVar22;
                iVar22 = iVar20;
              }
              iVar23 = (uint)uVar3 * local_154 + uVar16;
              if ((*local_168 != local_168[1]) && (*local_168 != uVar3)) {
                if (*(int *)(param_12 + 0x38) == 1) {
                  iVar20 = *(int *)(iVar22 + 0xc);
                  local_dc = (float)(iVar20 >> 0x16) * 0.0019569471;
                  local_e0 = (float)((iVar20 << 10) >> 0x15) * 0.0009775171;
                  iVar6 = *(int *)(iVar18 + 0xc);
                  local_e4 = (float)((iVar20 << 0x15) >> 0x15) * 0.0009775171;
                  local_d0 = (float)(iVar6 >> 0x16) * 0.0019569471;
                  local_d4 = (float)((iVar6 << 10) >> 0x15) * 0.0009775171;
                  iVar20 = *(int *)(iVar23 + 0xc);
                  local_d8 = (float)((iVar6 << 0x15) >> 0x15) * 0.0009775171;
                  local_c4 = (float)(iVar20 >> 0x16) * 0.0019569471;
                  local_c8 = (float)((iVar20 << 10) >> 0x15) * 0.0009775171;
                  local_cc = (float)((iVar20 << 0x15) >> 0x15) * 0.0009775171;
                  FUN_00216b50(param_1,param_4,param_5,fVar24,&local_12c,&local_138,param_11,
                               local_11c,local_110,iVar22,iVar18,iVar23,&local_e4,&local_d8,
                               &local_cc);
                }
                else {
                  cVar14 = FUN_00216430(param_1,iVar18,&local_12c,param_5,fVar24,local_18,&local_f0,
                                        local_30);
                  if (cVar14 != '\0') {
                    FUN_00216560(param_1,param_4,param_5,fVar24,fVar9,fVar10,param_9,param_10,
                                 param_11,iVar22,iVar18,iVar23,local_30,local_18,local_f0,0);
                  }
                }
              }
              bVar8 = !bVar8;
              local_168 = local_168 + 1;
              iVar20 = iVar22;
              iVar22 = iVar23;
            }
          }
        }
      }
      local_120 = local_120 + 0x30;
      local_14c = local_14c + -1;
    } while (local_14c != 0);
  }
  return;
}
