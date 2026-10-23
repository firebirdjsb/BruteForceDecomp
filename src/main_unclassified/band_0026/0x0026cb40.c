/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CFDB4DADB4F9DBF2563A610F05DAA8D86EA4063F2B53840C2B5E9F3E20EFE412
 * Entry: 0x0026cb40, Ghidra index: 8772, label: FUN_0026cb40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00405bc4;
extern uint32_t DAT_00405e4c;
extern uint32_t *DAT_00443640;
extern uint32_t DAT_00443644;
extern uint32_t DAT_00469888;
extern uint32_t *DAT_0046989c;
extern uint32_t PTR_DAT_003bb2dc;
extern uint32_t PTR_s_color_003bb2ec;
extern uint32_t PTR_s_sparam_003bb30c;
extern char s_animation_00405c04[];
extern char s_cameraprops_00405b0c[];
extern char s_color_00405e78[];
extern char s_direction_00405e6c[];
extern char s_duration_00405c30[];
extern char s_hardpoint_00405b38[];
extern char s_lightprops_00405b18[];
extern char s_locked_bone_00405bf8[];
extern char s_offset_00405b5c[];
extern char s_orient_00405ae8[];
extern char s_param_curve_00405c10[];
extern char s_parent_hardpoint_00405b24[];
extern char s_psysprops_00405adc[];
extern char s_q_orient_00405af0[];
extern char s_spatialprops_00405afc[];
extern char s_target_part_00405b50[];
extern char s_target_type_00405b44[];
extern char s_user_event_data_00405ba8[];
extern uint32_t switchD_0026ce3f_default[];
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Type propagation algorithm not settling */

void FUN_0026cb40(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  float10 fVar8;
  int *local_e0;
  int local_dc;
  int local_d8;
  int *local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  uint local_c8 [8];
  undefined1 auStack_a8 [12];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [28];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [12];
  undefined1 auStack_14 [16];
  
  FUN_0028a170();
  if (((*(int *)(DAT_00469888 + 0x14) < 2) ||
      (iVar7 = *(int *)(DAT_00469888 + 0x10) + 2, iVar7 == 0)) ||
     (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar7 * 0x10) != -3))
  goto switchD_0026ce3f_default;
  FUN_0026b260(0x40000000);
  FUN_002899f0();
  iVar7 = FUN_002ebf10();
  local_d8 = iVar7;
  FUN_0026b260(0x3f800000);
  FUN_002899f0();
  local_cc = FUN_002ebf10();
  local_d0 = 0;
  local_c8[3] = 0xffffffff;
  local_c8[5] = 0xffffffff;
  local_c8[6] = 0xffffffff;
  local_c8[4] = 0;
  local_c8[1] = 0;
  local_c8[0] = 0;
  local_c8[2] = 0;
  local_c8[7] = 0;
  local_e0 = (int *)0x0;
  local_d4 = (int *)0x0;
  if (((iVar7 == 0) || (iVar7 = FUN_0026b260(0x40400000), iVar7 == 0)) ||
     (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar7 * 0x10) != -3))
  goto switchD_0026ce3f_default;
  iVar7 = FUN_0026b260(0x3f800000);
  if ((iVar7 == 0) || (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar7 * 0x10) != -6)) {
    uVar1 = FUN_00289a40();
    FUN_0001fe90(uVar1);
    FUN_00270a90();
    FUN_000519c0();
    if (local_dc != *(int *)(DAT_00443644 + 4)) {
      local_c8[5] = *(undefined4 *)(local_dc + 0x28);
      local_e0 = (int *)(**(code **)(*DAT_00443640 + 0x24))(DAT_00443640,local_c8[5]);
    }
  }
  iVar7 = FUN_0026b260(0x40000000);
  if ((iVar7 == 0) ||
     (piVar2 = local_d4, *(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar7 * 0x10) != -6)) {
    uVar1 = FUN_00289a40();
    FUN_0001fe90(uVar1);
    FUN_00270a90();
    FUN_000519c0();
    if (local_dc == *(int *)(DAT_00443644 + 4)) {
      local_d0 = 0;
      piVar2 = local_d4;
    }
    else {
      local_c8[6] = *(undefined4 *)(local_dc + 0x28);
      piVar2 = (int *)(**(code **)(*DAT_00443640 + 0x24))(DAT_00443640,local_c8[6]);
    }
  }
  iVar7 = FUN_0026b260(0x40800000);
  if ((iVar7 != 0) && (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar7 * 0x10) == -3)) {
    FUN_0026b210(s_duration_00405c30);
    iVar3 = FUN_00289960();
    if (iVar3 == 0) {
      FUN_002899f0();
      local_c8[4] = FUN_002ebf10();
    }
    else {
      local_c8[0] = local_c8[0] | 1;
    }
    FUN_0026b730(local_c8,iVar7);
    FUN_0026b730(local_c8 + 1,iVar7);
    FUN_0026b210(s_param_curve_00405c10);
    iVar3 = FUN_00289960();
    if ((iVar3 == 0) && (iVar3 = FUN_00289980(), iVar3 != 0)) {
      FUN_0026e690(&local_d0);
    }
  }
  iVar3 = local_d8;
  if (local_d8 == 6) {
    if (((piVar2 != (int *)0x0) && (0 < *piVar2)) && (*piVar2 < 9)) {
      iVar3 = 8;
    }
  }
  else if (local_d8 == 0x12) {
    iVar3 = ((*local_e0 == 6) - 1 & 7) + 3;
  }
  puVar5 = (undefined4 *)0x0;
  switch(iVar3) {
  case 1:
    iVar7 = FUN_002ea01d(0x4c);
    if (iVar7 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)FUN_00274d00(&local_d0);
    }
    puVar5[0x12] = 0;
    iVar7 = FUN_00289980();
    if (iVar7 != 0) {
      FUN_0026b210(s_user_event_data_00405ba8);
      iVar7 = FUN_00289960();
      if ((iVar7 == 0) && (DAT_0046989c != (int *)0x0)) {
        iVar7 = *DAT_0046989c;
        uVar1 = FUN_00289a40();
        (**(code **)(iVar7 + 0xc))(DAT_0046989c,puVar5 + 8,uVar1);
      }
    }
    puVar4 = puVar5 + 8;
    break;
  case 2:
    iVar7 = FUN_002ea01d(0x48);
    if ((iVar7 == 0) || (iVar7 = FUN_00274ed0(&local_d0), iVar7 == 0))
    goto switchD_0026ce3f_default;
    puVar4 = (undefined4 *)(iVar7 + 0x20);
    break;
  case 3:
    iVar3 = FUN_002ea01d(0x4c);
    if (iVar3 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)FUN_00274b10(&local_d0);
    }
    puVar5[0x12] = 0;
    iVar3 = FUN_00289980();
    if (iVar3 == 0) goto LAB_0026d8d5;
    FUN_0026b730(puVar5 + 0x12,iVar7);
    puVar4 = puVar5 + 8;
    break;
  case 4:
    iVar7 = FUN_002ea01d(0x9c);
    if (iVar7 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)FUN_00275690(&local_d0);
    }
    FUN_0026b210(s_lightprops_00405b18);
    iVar7 = FUN_00289980();
    if (iVar7 != 0) {
      FUN_0026b210(s_color_00405e78);
      iVar7 = FUN_00289960();
      if (iVar7 == 0) {
        puVar5[0x12] = puVar5[0x12] | 1;
        FUN_0026b2e0(auStack_a8);
        uVar1 = FUN_002ebf10();
        puVar5[0x13] = uVar1;
        uVar1 = FUN_002ebf10();
        puVar5[0x14] = uVar1;
        uVar1 = FUN_002ebf10();
        puVar5[0x15] = uVar1;
      }
      FUN_0026b210(s_direction_00405e6c);
      iVar7 = FUN_00289960();
      if (iVar7 == 0) {
        puVar5[0x12] = puVar5[0x12] | 2;
        puVar4 = (undefined4 *)FUN_0026b2e0(auStack_5c);
        local_dc = puVar4[2];
        local_d8 = puVar4[1];
        puVar5[0x16] = *puVar4;
        puVar5[0x17] = local_d8;
        puVar5[0x18] = local_dc;
      }
      uVar6 = 2;
      do {
        FUN_0026b210((&PTR_s_color_003bb2ec)[uVar6]);
        iVar7 = FUN_00289960();
        if (iVar7 == 0) {
          puVar5[0x12] = puVar5[0x12] | 1 << ((byte)uVar6 & 0x1f);
          switch(uVar6) {
          case 2:
            fVar8 = (float10)FUN_002899f0();
            puVar5[0x19] = (float)fVar8;
            break;
          case 3:
            fVar8 = (float10)FUN_002899f0();
            puVar5[0x1a] = (float)fVar8;
            break;
          case 4:
            FUN_002899f0();
            uVar1 = FUN_002ebf10();
            puVar5[0x1b] = uVar1;
            break;
          case 5:
            FUN_002899f0();
            uVar1 = FUN_002ebf10();
            puVar5[0x1c] = uVar1;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 6);
    }
    if (puVar5 == (undefined4 *)0x0) {
LAB_0026d85b:
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = puVar5 + 8;
    }
    break;
  case 5:
    iVar7 = FUN_002ea01d(0x6c);
    if (iVar7 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)FUN_00275cc0(&local_d0);
    }
    FUN_0026b210(s_cameraprops_00405b0c);
    iVar7 = FUN_00289980();
    if (iVar7 != 0) {
      uVar6 = 0;
      do {
        FUN_0026b210((&PTR_DAT_003bb2dc)[uVar6]);
        iVar7 = FUN_00289960();
        if (iVar7 == 0) {
          puVar5[0x12] = puVar5[0x12] | 1 << ((byte)uVar6 & 0x1f);
          switch(uVar6) {
          case 0:
            fVar8 = (float10)FUN_002899f0();
            puVar5[0x13] = (float)fVar8;
            break;
          case 1:
            fVar8 = (float10)FUN_002899f0();
            puVar5[0x14] = (float)fVar8;
            break;
          case 2:
            fVar8 = (float10)FUN_002899f0();
            puVar5[0x15] = (float)fVar8;
            break;
          case 3:
            fVar8 = (float10)FUN_002899f0();
            puVar5[0x16] = (float)fVar8;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 4);
    }
    if (puVar5 == (undefined4 *)0x0) goto LAB_0026d85b;
    puVar4 = puVar5 + 8;
    break;
  case 6:
    iVar3 = FUN_002ea01d(0x68);
    if (iVar3 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)FUN_002750d0(&local_d0);
    }
    iVar3 = FUN_00289980();
    if (iVar3 != 0) {
      FUN_0026b6a0(puVar5 + 0x12,iVar7);
      FUN_0026b6a0(puVar5 + 0x12,iVar7);
      FUN_0026b6a0(puVar5 + 0x13,iVar7);
      FUN_0026b6a0(puVar5 + 0x13,iVar7);
      local_e0 = (int *)puVar5[0x18];
      FUN_0026b730(&local_e0,iVar7);
      puVar5[0x18] = local_e0;
      local_e0 = (int *)puVar5[0x19];
      FUN_0026b730(&local_e0,iVar7);
      puVar5[0x19] = local_e0;
      FUN_0026b210(s_offset_00405b5c);
      iVar7 = FUN_00289960();
      if (iVar7 == 0) {
        puVar4 = (undefined4 *)FUN_0026b2e0(auStack_2c);
        local_dc = puVar4[2];
        local_d8 = puVar4[1];
        puVar5[0x15] = *puVar4;
        puVar5[0x16] = local_d8;
        puVar5[0x17] = local_dc;
      }
    }
    if (puVar5 == (undefined4 *)0x0) goto LAB_0026d85b;
    puVar4 = puVar5 + 8;
    break;
  case 7:
    iVar7 = FUN_002ea01d(0xf4);
    if (iVar7 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)FUN_00276010(&local_d0);
    }
    FUN_0026b210(s_spatialprops_00405afc);
    iVar7 = FUN_00289960();
    if (iVar7 == 0) {
      FUN_0026b210(&DAT_00405e4c);
      iVar7 = FUN_00289960();
      if (iVar7 == 0) {
        puVar5[0x12] = puVar5[0x12] | 1;
        FUN_0026b2e0(auStack_14);
        FUN_0003d7e0();
      }
      FUN_0026b210(s_q_orient_00405af0);
      iVar7 = FUN_00289960();
      if (iVar7 == 0) {
        puVar5[0x12] = puVar5[0x12] | 2;
        puVar4 = (undefined4 *)FUN_0026b480(local_78);
        local_d4 = (int *)puVar4[3];
        local_dc = puVar4[2];
        local_d8 = puVar4[1];
        puVar5[0x1f] = *puVar4;
        puVar5[0x20] = local_d8;
        puVar5[0x21] = local_dc;
        puVar5[0x22] = local_d4;
        puVar5[10] = puVar5[10] | 0x10;
      }
      else {
        FUN_0026b210(s_orient_00405ae8);
        iVar7 = FUN_00289960();
        if (iVar7 == 0) {
          puVar5[0x12] = puVar5[0x12] | 2;
          FUN_0026b260(0x3f800000);
          iVar7 = FUN_00289960();
          if (iVar7 == 0) {
            puVar4 = (undefined4 *)FUN_0026b2e0(auStack_20);
            uStack_9c = *puVar4;
            uStack_90 = puVar4[1];
            uStack_84 = puVar4[2];
          }
          FUN_0026b260(0x40000000);
          iVar7 = FUN_00289960();
          if (iVar7 == 0) {
            puVar4 = (undefined4 *)FUN_0026b2e0(auStack_38);
            uStack_98 = *puVar4;
            uStack_8c = puVar4[1];
            uStack_80 = puVar4[2];
          }
          FUN_0026b260(0x40400000);
          iVar7 = FUN_00289960();
          if (iVar7 == 0) {
            puVar4 = (undefined4 *)FUN_0026b2e0(auStack_50);
            uStack_94 = *puVar4;
            uStack_88 = puVar4[1];
            uStack_7c = puVar4[2];
          }
          FUN_0003d7a0(puVar5 + 0x13,&uStack_9c);
        }
      }
    }
    FUN_0026b210(s_target_part_00405b50);
    iVar7 = FUN_00289960();
    if (iVar7 == 0) {
      FUN_00289a40();
      FUN_00078c60(puVar5 + 0x25);
      if ((uint)puVar5[0x2b] < 0x10) {
        puVar4 = puVar5 + 0x26;
      }
      else {
        puVar4 = (undefined4 *)puVar5[0x26];
      }
      puVar5[0x23] = puVar4;
    }
    FUN_0026b210(s_target_type_00405b44);
    iVar7 = FUN_00289960();
    if (iVar7 == 0) {
      FUN_002899f0();
      uVar1 = FUN_002ebf10();
      puVar5[0x24] = uVar1;
    }
    if (puVar5 == (undefined4 *)0x0) goto LAB_0026d85b;
    puVar4 = puVar5 + 8;
    break;
  case 8:
    iVar3 = FUN_002ea01d(0xb0);
    if (iVar3 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)FUN_00276700(&local_d0);
    }
    iVar3 = FUN_00289980();
    if (iVar3 != 0) {
      FUN_0026b210(s_offset_00405b5c);
      iVar3 = FUN_00289960();
      if (iVar3 == 0) {
        puVar4 = (undefined4 *)FUN_0026b2e0(auStack_44);
        local_dc = puVar4[2];
        local_d8 = puVar4[1];
        puVar5[0x12] = *puVar4;
        puVar5[0x13] = local_d8;
        puVar5[0x14] = local_dc;
      }
      FUN_0026b210(s_target_part_00405b50);
      iVar3 = FUN_00289960();
      if (iVar3 == 0) {
        FUN_00289a40();
        FUN_00078c60(puVar5 + 0x19);
        if ((uint)puVar5[0x1f] < 0x10) {
          puVar4 = puVar5 + 0x1a;
        }
        else {
          puVar4 = (undefined4 *)puVar5[0x1a];
        }
        puVar5[0x18] = puVar4;
      }
      FUN_0026b210(s_target_type_00405b44);
      iVar3 = FUN_00289960();
      if (iVar3 == 0) {
        FUN_002899f0();
        uVar1 = FUN_002ebf10();
        puVar5[0x15] = uVar1;
      }
      local_e0 = (int *)puVar5[0x16];
      FUN_0026b730(&local_e0,iVar7);
      puVar5[0x16] = local_e0;
      local_e0 = (int *)puVar5[0x17];
      FUN_0026b730(&local_e0,iVar7);
      puVar5[0x17] = local_e0;
    }
    if (puVar5 == (undefined4 *)0x0) goto LAB_0026d85b;
    puVar4 = puVar5 + 8;
    break;
  case 9:
    iVar7 = FUN_002ea01d(0x88);
    if (iVar7 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)FUN_00276e30();
    }
    iVar7 = FUN_00289980();
    if (iVar7 != 0) {
      FUN_0026b210(s_hardpoint_00405b38);
      iVar7 = FUN_00289960();
      if (iVar7 == 0) {
        uVar1 = FUN_00289a40();
        puVar5[0x12] = uVar1;
      }
      FUN_0026b210(s_parent_hardpoint_00405b24);
      iVar7 = FUN_00289960();
      if (iVar7 == 0) {
        uVar1 = FUN_00289a40();
        puVar5[0x13] = uVar1;
      }
    }
    goto LAB_0026d96b;
  case 10:
    iVar3 = FUN_002ea01d(0xa8);
    if (iVar3 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)FUN_00273de0(&local_d0);
    }
    iVar3 = FUN_00289980();
    if (iVar3 != 0) {
      FUN_0026b210(s_animation_00405c04);
      iVar3 = FUN_002899d0();
      if (iVar3 == 0) {
        puVar5[0x16] = 0;
      }
      else {
        FUN_00289a40();
        FUN_00078c60(puVar5 + 0x1c);
        if ((uint)puVar5[0x22] < 0x10) {
          puVar5[0x16] = puVar5 + 0x1d;
        }
        else {
          puVar5[0x16] = puVar5[0x1d];
        }
      }
      FUN_0026b210(s_locked_bone_00405bf8);
      iVar3 = FUN_002899d0();
      if (iVar3 == 0) {
        puVar5[0x19] = 0;
      }
      else {
        FUN_00289a40();
        FUN_00078c60(puVar5 + 0x23);
        if ((uint)puVar5[0x29] < 0x10) {
          puVar5[0x19] = puVar5 + 0x24;
        }
        else {
          puVar5[0x19] = puVar5[0x24];
        }
      }
      FUN_0026b6a0(puVar5 + 0x12,iVar7);
      FUN_0026b6a0(puVar5 + 0x13,iVar7);
      FUN_0026b6a0(puVar5 + 0x14,iVar7);
      FUN_0026b6a0(puVar5 + 0x15,iVar7);
      FUN_0026b210(&DAT_00405bc4);
      iVar3 = FUN_00289960();
      if ((iVar3 == 0) && (fVar8 = (float10)FUN_002899f0(), (float10)0.0 < fVar8)) {
        puVar5[10] = puVar5[10] | 0x80;
      }
      if (*local_e0 == 1) {
        puVar4 = puVar5 + 0x1a;
      }
      else {
        puVar4 = puVar5 + 0x18;
      }
      FUN_0026b6a0(puVar4,iVar7);
    }
    if (puVar5 == (undefined4 *)0x0) goto LAB_0026d85b;
    puVar4 = puVar5 + 8;
    break;
  case 0xb:
    iVar7 = FUN_002ea01d(0xd8);
    if (iVar7 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)FUN_00274150(&local_d0);
    }
    iVar7 = FUN_00289980();
    if (iVar7 != 0) {
      FUN_0026e880();
      FUN_00078c60(puVar5 + 0x28);
      if ((uint)puVar5[0x2e] < 0x10) {
        puVar4 = puVar5 + 0x29;
      }
      else {
        puVar4 = (undefined4 *)puVar5[0x29];
      }
      puVar5[0x19] = puVar4;
      FUN_00078c60(puVar5 + 0x2f);
      if ((uint)puVar5[0x35] < 0x10) {
        puVar4 = puVar5 + 0x30;
      }
      else {
        puVar4 = (undefined4 *)puVar5[0x30];
      }
      puVar5[0x1a] = puVar4;
    }
    if (puVar5 == (undefined4 *)0x0) goto LAB_0026d85b;
    puVar4 = puVar5 + 8;
    break;
  case 0xc:
    iVar3 = FUN_002ea01d(0x4c);
    if (iVar3 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)FUN_00277110(&local_d0);
    }
    puVar5[0x12] = 0;
    iVar3 = FUN_00289980();
    if (iVar3 != 0) {
      FUN_0026b6a0(puVar5 + 0x12,iVar7);
    }
LAB_0026d8d5:
    puVar4 = puVar5 + 8;
    break;
  case 0xd:
    iVar7 = FUN_002ea01d(0x48);
    if ((iVar7 == 0) || (iVar7 = FUN_002772e0(&local_d0), iVar7 == 0))
    goto switchD_0026ce3f_default;
    puVar4 = (undefined4 *)(iVar7 + 0x20);
    break;
  case 0xe:
    iVar7 = FUN_002ea01d(0x54);
    if (iVar7 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)FUN_00277490(&local_d0);
    }
    FUN_0026b210(s_psysprops_00405adc);
    iVar7 = FUN_00289980();
    if (iVar7 != 0) {
      FUN_0026b210(PTR_s_sparam_003bb30c);
      iVar7 = FUN_00289960();
      if (iVar7 == 0) {
        puVar5[0x12] = puVar5[0x12] | 1;
        fVar8 = (float10)FUN_002899f0();
        puVar5[0x13] = (float)fVar8;
      }
    }
LAB_0026d96b:
    if (puVar5 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = puVar5 + 8;
    }
    break;
  default:
    goto switchD_0026ce3f_default;
  }
  if (puVar4 != (undefined4 *)0x0) {
    (**(code **)(*DAT_00443640 + 0x98))(DAT_00443640,puVar4,&local_d8);
  }
  if (puVar5 != (undefined4 *)0x0) {
    (**(code **)*puVar5)(1);
  }
switchD_0026ce3f_default:
  iVar7 = DAT_00469888;
  iVar3 = *(int *)(DAT_00469888 + 0x30) + -1;
  *(int *)(DAT_00469888 + 0x30) = iVar3;
  puVar5 = (undefined4 *)(*(int *)(iVar7 + 0x2c) + iVar3 * 0xc);
  *(undefined4 *)(iVar7 + 0xc) = *puVar5;
  *(undefined4 *)(iVar7 + 0x10) = puVar5[1];
  *(undefined4 *)(iVar7 + 0x14) = puVar5[2];
  FUN_0028a4f0();
  return;
}
