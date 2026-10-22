/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2D148637C930790634B36B9608E660FA1F226EDA601AF9A63E6F41308A3F1B07
 * Entry: 0x0026db20, Ghidra index: 8774, label: FUN_0026db20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bb310;
extern uint32_t DAT_004043cc;
extern uint32_t *DAT_00443640;
extern uint32_t DAT_00443644;
extern uint32_t DAT_00469888;
extern uint32_t DAT_00469894;
extern char s_23_23_ICRSpline_00405020[];
extern char s_23_23_IPersistString_00404ff4[];
extern char s_CV_CRSplinePath_00405a1c[];
extern char s_ambient_00405a50[];
extern char s_archetype_00405a7c[];
extern char s_audioprops_00405a88[];
extern char s_cameraprops_00405b0c[];
extern char s_color_00405e78[];
extern char s_compoundprops_00405aa4[];
extern char s_control_pts_00405a10[];
extern char s_entity_name_00405ad0[];
extern char s_flags_00405c28[];
extern char s_lightprops_00405b18[];
extern char s_orient_00405ae8[];
extern char s_path_data_00405a2c[];
extern char s_path_type_00405a38[];
extern char s_pathprops_00405a44[];
extern char s_psysprops_00405adc[];
extern char s_spatialprops_00405afc[];
extern char s_template_id_00405ab4[];
extern char s_template_name_00405ac0[];
extern char s_userprops_00405a04[];
extern uint32_t switchD_0026dcf0_caseD_c[];
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0026db20(void)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  int local_c8;
  undefined4 *local_c4;
  int *local_c0;
  undefined4 *local_bc;
  undefined4 *local_b8;
  int *local_b4;
  undefined4 *local_b0;
  int local_ac;
  uint local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  uint local_58;
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 auStack_14 [16];
  
  FUN_0028a170();
  if (((*(int *)(DAT_00469888 + 0x14) < 2) ||
      (local_ac = *(int *)(DAT_00469888 + 0x10) + 2, local_ac == 0)) ||
     (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + local_ac * 0x10) != -3))
  goto switchD_0026dcf0_caseD_c;
  iVar2 = FUN_0026b210(&DAT_004043cc);
  if ((iVar2 != 0) && (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar2 * 0x10) == -6)) {
    return;
  }
  local_98 = 0;
  local_60 = 0;
  local_58 = 0;
  local_5c = 0;
  local_94 = 0;
  local_88 = 0;
  local_8c = 0;
  local_90 = 0;
  uStack_68 = 0;
  uStack_6c = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_7c = 0;
  uStack_80 = 0;
  local_64 = 0x3f800000;
  local_74 = 0x3f800000;
  local_84 = 0x3f800000;
  FUN_002899f0();
  local_98 = FUN_002ebf10();
  FUN_0026b210(s_flags_00405c28);
  FUN_002899f0();
  local_94 = FUN_002ebf10();
  FUN_0026b210(s_entity_name_00405ad0);
  FUN_00289e20();
  local_60 = FUN_00289a40();
  FUN_0026b210(s_template_name_00405ac0);
  iVar2 = FUN_00289e20();
  if ((iVar2 == -2) || (iVar2 == -1)) {
    local_5c = FUN_00289a40();
  }
  iVar2 = FUN_0026b210(s_template_id_00405ab4);
  if ((iVar2 == 0) || (*(int *)(iVar2 * 0x10 + -0x10 + *(int *)(DAT_00469888 + 4)) != -6)) {
    FUN_002899f0();
    local_58 = FUN_002ebf10();
  }
  switch(local_98) {
  case 1:
  case 2:
    if (local_5c == 0) {
      local_5c = local_60;
    }
    puVar3 = (undefined4 *)FUN_002ea01d(0x48);
    puVar3[0x11] = 0;
    uVar4 = FUN_0026b210(s_compoundprops_00405aa4);
    iVar2 = FUN_00289980();
    if (iVar2 != 0) {
      FUN_0026b6a0(puVar3 + 0x11,uVar4);
    }
    break;
  case 3:
  case 4:
    local_bc = (undefined4 *)FUN_002ea01d(0x54);
    puVar8 = local_bc + 0x11;
    local_c0 = local_bc + 0x13;
    *local_c0 = 0x47c35000;
    local_c4 = local_bc + 0x14;
    *local_c4 = 0x3faaaaab;
    puVar7 = local_bc + 0x12;
    *puVar8 = 0x42700000;
    *puVar7 = 0x3dcccccd;
    uVar4 = FUN_0026b210(s_cameraprops_00405b0c);
    iVar2 = FUN_00289980();
    puVar3 = local_bc;
    if (iVar2 != 0) {
      FUN_0026b6a0(puVar8,uVar4);
      FUN_0026b6a0(local_c4,uVar4);
      FUN_0026b6a0(puVar7,uVar4);
      FUN_0026b6a0(local_c0,uVar4);
      puVar3 = local_bc;
    }
    break;
  case 5:
    puVar3 = (undefined4 *)FUN_002ea01d(0x6c);
    local_c4 = (undefined4 *)0x0;
    puVar3[0x18] = 0x43340000;
    puVar3[0x19] = 1;
    puVar3[0x1a] = 0;
    puVar3[0x17] = 0x447a0000;
    puVar3[0x15] = 0;
    puVar3[0x14] = 0;
    puVar3[0x16] = 0x3f800000;
    puVar3[0x11] = 0xff;
    puVar3[0x12] = 0xff;
    puVar3[0x13] = 0xff;
    local_a0 = 0x3f800000;
    local_c0 = (int *)0x3f800000;
    uVar4 = FUN_0026b210(s_lightprops_00405b18);
    iVar2 = FUN_00289980();
    if (iVar2 != 0) {
      FUN_0026b210(s_color_00405e78);
      iVar2 = FUN_00289960();
      if (iVar2 == 0) {
        FUN_0026b2e0(&local_a8);
        uVar5 = FUN_002ebf10();
        puVar3[0x11] = uVar5;
        uVar5 = FUN_002ebf10();
        puVar3[0x12] = uVar5;
        uVar5 = FUN_002ebf10();
        puVar3[0x13] = uVar5;
      }
      FUN_0026b770(uVar4);
      FUN_0026b6a0(puVar3 + 0x17,uVar4);
      FUN_0026b6a0(puVar3 + 0x18,uVar4);
      FUN_0026b730(puVar3 + 0x19,uVar4);
      FUN_0026b730(puVar3 + 0x1a,uVar4);
    }
    break;
  case 6:
    if (local_5c == 0) {
      FUN_0026b210(s_audioprops_00405a88);
      iVar2 = FUN_00289980();
      if (iVar2 != 0) {
        FUN_0026b210(s_archetype_00405a7c);
        local_5c = FUN_00289a40();
      }
    }
  case 7:
  case 8:
    puVar3 = (undefined4 *)FUN_002ea01d(0x44);
    if (puVar3 == (undefined4 *)0x0) goto switchD_0026dcf0_caseD_c;
    break;
  case 9:
  case 10:
    puVar3 = (undefined4 *)FUN_002ea01d(0x60);
    iVar2 = local_ac;
    puVar3[0x14] = DAT_00469894;
    puVar3[0x17] = 6;
    puVar3[0x16] = 6;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[0x15] = 0;
    local_c4 = (undefined4 *)0x0;
    FUN_0026b6a0(&local_c4,local_ac);
    uVar4 = FUN_002ebf10();
    puVar3[0x15] = uVar4;
    FUN_0026b210(s_ambient_00405a50);
    iVar9 = FUN_00289960();
    if (iVar9 == 0) {
      FUN_0026b2e0(&local_a8);
      uVar4 = FUN_002ebf10();
      puVar3[0x11] = uVar4;
      uVar4 = FUN_002ebf10();
      puVar3[0x12] = uVar4;
      uVar4 = FUN_002ebf10();
      puVar3[0x13] = uVar4;
    }
    local_c8 = 6;
    FUN_0026b730(&local_c8,iVar2);
    puVar3[0x16] = local_c8;
    local_c8 = 6;
    FUN_0026b730(&local_c8,iVar2);
    puVar3[0x17] = local_c8;
    break;
  case 0xb:
    local_c4 = (undefined4 *)FUN_002ea01d(0x4c);
    piVar11 = local_c4 + 0x12;
    local_c4[0x11] = 0;
    *piVar11 = 0;
    FUN_0026b210(s_pathprops_00405a44);
    iVar2 = FUN_00289980();
    puVar3 = local_c4;
    if (iVar2 != 0) {
      local_b4 = (int *)0x0;
      FUN_0026b210(s_path_type_00405a38);
      iVar2 = FUN_00289960();
      if (iVar2 == 0) {
        uVar4 = FUN_00289a40();
        local_c4[0x11] = uVar4;
        local_a4 = FUN_002383b0();
        local_a0 = 0;
        local_9c = 0;
        local_a8 = 0x10;
        iVar2 = FUN_00238080(s_23_23_IPersistString_00404ff4,&local_b4);
        if (iVar2 == 0) {
          (**(code **)*local_b4)(local_b4,s_23_23_IPersistString_00404ff4,piVar11);
        }
        if (*piVar11 != 0) {
          FUN_0026b210(s_path_data_00405a2c);
          iVar2 = FUN_00289960();
          if (iVar2 == 0) {
            iVar2 = *(int *)*piVar11;
            uVar4 = FUN_00289a40();
            (**(code **)(iVar2 + 0xc))(*piVar11,uVar4);
          }
        }
      }
      else {
        local_c4[0x11] = s_CV_CRSplinePath_00405a1c;
        local_2c = FUN_002383b0();
        local_28 = 0;
        local_24 = 0;
        local_30 = 0x10;
        iVar2 = FUN_00238080(s_23_23_IPersistString_00404ff4,&local_b4);
        if (iVar2 == 0) {
          (**(code **)*local_b4)(local_b4,s_23_23_IPersistString_00404ff4,piVar11);
          local_c8 = FUN_0026b210(s_control_pts_00405a10);
          iVar2 = FUN_00289960();
          if (iVar2 == 0) {
            iVar2 = 1;
            FUN_0026b260(0x3f800000);
            iVar9 = FUN_00289960();
            while (iVar9 == 0) {
              iVar2 = iVar2 + 1;
              fVar1 = (float)iVar2;
              if (iVar2 < 0) {
                fVar1 = fVar1 + 4.2949673e+09;
              }
              local_b8 = (undefined4 *)iVar2;
              FUN_0026b260(fVar1);
              iVar9 = FUN_00289960();
            }
            uVar12 = iVar2 - 1;
            local_bc = (undefined4 *)thunk_FUN_002ea01d(uVar12 * 0xc);
            if (local_bc == (undefined4 *)0x0) {
              local_bc = (undefined4 *)0x0;
            }
            else {
              FUN_0001fe40(local_bc,0xc,uVar12,FUN_000a3d50);
            }
            uVar10 = 1;
            if (uVar12 != 0) {
              piVar11 = local_bc + 2;
              do {
                fVar1 = (float)(int)uVar10;
                if ((int)uVar10 < 0) {
                  fVar1 = fVar1 + 4.2949673e+09;
                }
                local_a8 = uVar10;
                FUN_0026b260(fVar1);
                piVar6 = (int *)FUN_0026b2e0(auStack_14);
                local_b8 = (undefined4 *)piVar6[2];
                local_b0 = (undefined4 *)piVar6[1];
                piVar11[-2] = *piVar6;
                piVar11[-1] = (int)local_b0;
                *piVar11 = (int)local_b8;
                uVar10 = uVar10 + 1;
                piVar11 = piVar11 + 3;
              } while (uVar10 <= uVar12);
            }
            piVar11 = local_b4;
            local_c0 = (int *)0x0;
            puVar3 = (undefined4 *)*local_b4;
            uVar4 = FUN_00076fe0();
            (*(code *)*puVar3)(piVar11,s_23_23_ICRSpline_00405020,uVar4);
            puVar3 = local_bc;
            if (local_c0 != (int *)0x0) {
              (**(code **)(*local_c0 + 0x10))(local_c0,local_bc,uVar12);
            }
            if (puVar3 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00237ec0(puVar3);
            }
            if (local_c0 != (int *)0x0) {
              (**(code **)(*local_c0 + 8))(local_c0);
            }
          }
        }
      }
      puVar3 = local_c4;
      if (local_b4 != (int *)0x0) {
        (**(code **)(*local_b4 + 8))(local_b4);
        puVar3 = local_c4;
      }
    }
    break;
  default:
    goto switchD_0026dcf0_caseD_c;
  case 0xd:
    if (local_5c == 0) {
      local_5c = local_60;
    }
    puVar3 = (undefined4 *)FUN_002ea01d(0x48);
    puVar3[0x11] = 0;
    uVar4 = FUN_0026b210(s_psysprops_00405adc);
    iVar2 = FUN_00289980();
    if (iVar2 != 0) {
      FUN_0026b6a0(puVar3 + 0x11,uVar4);
    }
  }
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = local_98;
    puVar3[1] = local_94;
    puVar3[2] = local_90;
    puVar8 = puVar3 + 5;
    local_b0 = &local_84;
    puVar3[3] = local_8c;
    puVar3[4] = local_88;
    *puVar8 = local_84;
    puVar3[6] = uStack_80;
    puVar3[7] = uStack_7c;
    puVar3[8] = uStack_78;
    puVar3[0xd] = local_64;
    puVar3[9] = local_74;
    puVar3[10] = uStack_70;
    puVar3[0xb] = uStack_6c;
    puVar3[0xc] = uStack_68;
    puVar3[0xe] = local_60;
    puVar3[0xf] = local_5c;
    puVar3[0x10] = local_58;
    local_b8 = puVar8;
    local_c8 = FUN_0026b210(s_spatialprops_00405afc);
    if ((local_c8 == 0) || (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + local_c8 * 0x10) != -6)) {
      FUN_0026b770(local_c8);
      FUN_0026b210(s_orient_00405ae8);
      iVar2 = FUN_00289960();
      if (iVar2 == 0) {
        FUN_0026b260(0x3f800000);
        iVar2 = FUN_00289960();
        if (iVar2 == 0) {
          puVar7 = (undefined4 *)FUN_0026b2e0(&local_a8);
          *puVar8 = *puVar7;
          puVar3[8] = puVar7[1];
          puVar3[0xb] = puVar7[2];
        }
        FUN_0026b260(0x40000000);
        iVar2 = FUN_00289960();
        if (iVar2 == 0) {
          puVar8 = (undefined4 *)FUN_0026b2e0(&local_a8);
          puVar3[6] = *puVar8;
          puVar3[9] = puVar8[1];
          puVar3[0xc] = puVar8[2];
        }
        FUN_0026b260(0x40400000);
        iVar2 = FUN_00289960();
        if (iVar2 == 0) {
          puVar8 = (undefined4 *)FUN_0026b2e0(&local_a8);
          puVar3[7] = *puVar8;
          puVar3[10] = puVar8[1];
          puVar3[0xd] = puVar8[2];
        }
      }
    }
    (**(code **)(*DAT_00443640 + 0x8c))(DAT_00443640,puVar3,&DAT_003bb310);
    FUN_0001fe90(puVar3[0xe]);
    uStack_44 = 0xf;
    uStack_48 = 0;
    local_58 = local_58 & 0xffffff00;
    FUN_0001f4f0(auStack_3c,0,0xffffffff);
    uStack_40 = DAT_003bb310;
    FUN_00270990(DAT_00443644,&local_b4);
    if (0xf < uStack_44) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(local_58);
    }
    uStack_44 = 0xf;
    uStack_48 = 0;
    local_58 = local_58 & 0xffffff00;
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(uStack_38);
    }
    iVar2 = FUN_0026b210(s_userprops_00405a04);
    if ((iVar2 != 0) && (*(int *)(iVar2 * 0x10 + -0x10 + *(int *)(DAT_00469888 + 4)) == -3)) {
      FUN_00289d80();
      FUN_00289c10();
      FUN_002897b0();
      FUN_00289680();
    }
    DAT_003bb310 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(puVar3);
  }
switchD_0026dcf0_caseD_c:
  iVar2 = DAT_00469888;
  iVar9 = *(int *)(DAT_00469888 + 0x30) + -1;
  *(int *)(DAT_00469888 + 0x30) = iVar9;
  puVar3 = (undefined4 *)(*(int *)(iVar2 + 0x2c) + iVar9 * 0xc);
  *(undefined4 *)(iVar2 + 0xc) = *puVar3;
  *(undefined4 *)(iVar2 + 0x10) = puVar3[1];
  *(undefined4 *)(iVar2 + 0x14) = puVar3[2];
  FUN_0028a4f0();
  return;
}
