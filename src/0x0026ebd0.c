/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 71517AE5964B77DB239172C1353EE690F07D821ACF7EE9AAB280CDD70A006C09
 * Entry: 0x0026ebd0, Ghidra index: 8780, label: FUN_0026ebd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bb214;
extern uint32_t DAT_003bb288;
extern uint32_t DAT_00405498;
extern uint32_t DAT_004054b0;
extern uint32_t DAT_004055d0;
extern uint32_t DAT_004055e4;
extern uint32_t DAT_00405610;
extern uint32_t DAT_0040583c;
extern char s___00405970[];
extern char s____00405608[];
extern char s_____00405964[];
extern char s______s__004055dc[];
extern char s_____s___004055d4[];
extern char s____animation_____s__004055bc[];
extern char s___ambient_____d__d__d__00405734[];
extern char s___cameraprops_____00405278[];
extern char s___cameraprops_____004057c0[];
extern char s___compoundprops_____004057f4[];
extern char s___d__d__d__0040529c[];
extern char s___end_effector_____s__00405468[];
extern char s___f___f___f__00405254[];
extern char s___f__f__f__00405290[];
extern char s___flags___004054d0[];
extern char s___flags___004058fc[];
extern char s___flags___USE_SCRIPT_DURATION_00405504[];
extern char s___front____s_004053c0[];
extern char s___front____s_00405750[];
extern char s___hardpoint_____s__00405370[];
extern char s___lightprops_____004052b0[];
extern char s___lightprops_____00405718[];
extern char s___locked_bone_____s__004055a4[];
extern char s___offset_____f__f__f__0040533c[];
extern char s___parent_hardpoint_____s__00405354[];
extern char s___path_data_____s__00405644[];
extern char s___pathprops_____00405678[];
extern char s___psysprops_____004051f4[];
extern char s___psysprops_____00405824[];
extern char s___s___00405618[];
extern char s___spatialprops_____00405264[];
extern char s___spatialprops_____00405898[];
extern char s___target_part_____s__00405438[];
extern char s___target_type___HARDPOINT_00405404[];
extern char s___target_type___PART_00405420[];
extern char s___target_type___ROOT_004053ec[];
extern char s___up____s_004053d0[];
extern char s___up____s_00405760[];
extern char s___userprops_____0040562c[];
extern char s__s_004055f0[];
extern char s__s___004052a8[];
extern char s__s___00405620[];
extern char s_color_____d__d__d___004056fc[];
extern char s_direction_____f__f__f___004056dc[];
extern char s_entities_____00405978[];
extern char s_entity_name_____s___0040594c[];
extern char s_events_____004055f8[];
extern char s_path_type_____s__00405660[];
extern char s_pos_____f___f___f___0040587c[];
extern char s_q_orient_____f___f___f___f__00405238[];
extern char s_template_name_____s___00405920[];
extern char s_type____s__0040593c[];
extern char s_user_event_data_____s__00405480[];
extern uint32_t switchD_0026eee2_caseD_4[];
extern uint32_t switchD_0026f377_caseD_2[];
undefined4 FUN_0026ebd0(int *param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int in_ECX;
  int unaff_EBP;
  uint unaff_ESI;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  int *unaff_retaddr;
  char *pcVar11;
  int *local_78;
  int local_74;
  uint uStack_70;
  int *piStack_6c;
  int iStack_68;
  uint local_64;
  int iStack_60;
  int *piStack_5c;
  int iStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  int *piStack_4c;
  int *piStack_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int *piStack_10;
  int *piStack_c;
  int *piStack_8;
  int *piStack_4;
  
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) ||
     ((*(int *)(in_ECX + 4) == 0 && (*(int *)(in_ECX + 0xc) == 0)))) {
    return 0x80004005;
  }
  local_74 = in_ECX;
  FUN_002700d0(param_1);
  fVar1 = (float)*(int *)(local_74 + 0xc);
  if (*(int *)(local_74 + 0xc) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_00270340(fVar1 * 0.001);
  FUN_002701e0(s_entities_____00405978);
  uVar8 = 0;
  local_78 = (int *)0x1;
  local_64 = 0;
  iVar2 = (**(code **)(*param_2 + 0x18))();
  if (iVar2 != 0) {
    do {
      iVar2 = (**(code **)(*param_1 + 0x1c))(param_1,uVar8);
      if ((iVar2 == -1) ||
         (piVar3 = (int *)(**(code **)(*piStack_4 + 0x24))(piStack_4,iVar2), piVar3 == (int *)0x0))
      goto LAB_0026f207;
      uVar8 = 0;
      do {
        if ((&DAT_003bb214)[uVar8] == *piVar3) break;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xe);
      if (unaff_EBP == 0) {
        FUN_002701e0(s_____00405964);
      }
      else {
        FUN_002701e0(s___00405970);
        unaff_EBP = 0;
      }
      FUN_002701e0(s_entity_name_____s___0040594c);
      FUN_002701e0(s_type____s__0040593c);
      FUN_002701e0(s_template_name_____s___00405920);
      FUN_002703e0();
      if (piVar3[1] != 0) {
        unaff_ESI = unaff_ESI & 0xffffff;
        FUN_002701e0(s___flags___004058fc);
        if ((*(byte *)(piVar3 + 1) & 1) != 0) {
          FUN_00270130();
        }
        switch(*piVar3) {
        case 1:
        case 2:
        case 0xd:
          if ((*(byte *)(piVar3 + 1) & 4) != 0) {
            FUN_00270130();
          }
          if ((*(byte *)(piVar3 + 1) & 2) != 0) {
            FUN_00270130();
          }
          break;
        default:
          FUN_002703e0();
          break;
        case 6:
          if ((*(byte *)(piVar3 + 1) & 2) != 0) {
            FUN_00270130();
          }
          if ((*(byte *)(piVar3 + 1) & 8) != 0) {
            FUN_00270130();
          }
          if ((*(byte *)(piVar3 + 1) & 4) != 0) {
            FUN_00270130();
          }
        }
      }
      switch(*piVar3) {
      case 1:
      case 2:
      case 3:
      case 5:
      case 6:
      case 7:
      case 9:
      case 10:
      case 0xb:
      case 0xd:
        local_78 = &iStack_30;
        piStack_6c = piVar3 + 5;
        iStack_30 = *piStack_6c;
        iStack_2c = piVar3[6];
        iStack_28 = piVar3[7];
        iStack_24 = piVar3[8];
        piStack_10 = (int *)piVar3[0xd];
        iStack_20 = piVar3[9];
        iStack_1c = piVar3[10];
        iStack_18 = piVar3[0xb];
        iStack_14 = piVar3[0xc];
        local_64 = piVar3[4];
        iStack_68 = piVar3[3];
        piStack_5c = (int *)piVar3[2];
        iStack_58 = iStack_68;
        uStack_54 = local_64;
        FUN_002701e0(s___spatialprops_____00405898);
        FUN_00270510(s_pos_____f___f___f___0040587c);
        FUN_002705c0();
        FUN_002701e0(&DAT_0040583c);
      }
      switch(*piVar3) {
      case 2:
        FUN_002701e0(s___compoundprops_____004057f4);
        FUN_00270340(piVar3[0x11]);
        break;
      case 3:
        FUN_002701e0(s___cameraprops_____004057c0);
        FUN_00270340(piVar3[0x11]);
        FUN_00270340(piVar3[0x14]);
        FUN_00270340(piVar3[0x12]);
        FUN_00270340(piVar3[0x13]);
        break;
      default:
        goto switchD_0026eee2_caseD_4;
      case 5:
        FUN_002701e0(s___lightprops_____00405718);
        FUN_00270470(s_color_____d__d__d___004056fc);
        FUN_00270510(s_direction_____f__f__f___004056dc);
        FUN_00270340(piVar3[0x17]);
        FUN_00270340(piVar3[0x18]);
        FUN_002703e0();
        FUN_002703e0();
        break;
      case 9:
      case 10:
        FUN_002701e0(s___up____s_00405760);
        FUN_002701e0(s___front____s_00405750);
        FUN_00270470(s___ambient_____d__d__d__00405734);
        goto switchD_0026eee2_caseD_4;
      case 0xb:
        FUN_002701e0(s___pathprops_____00405678);
        FUN_002701e0(s_path_type_____s__00405660);
        piVar7 = (int *)piVar3[0x12];
        if ((piVar7 != (int *)0x0) && (iVar6 = (**(code **)(*piVar7 + 0x14))(piVar7), iVar6 != 0)) {
          uVar4 = thunk_FUN_002ea01d(iVar6 + 1);
          (**(code **)(*(int *)piVar3[0x12] + 0x10))((int *)piVar3[0x12],uVar4,iVar6);
          FUN_002701e0(s___path_data_____s__00405644);
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(uVar4);
        }
        break;
      case 0xd:
        FUN_002701e0(s___psysprops_____00405824);
        FUN_00270340(piVar3[0x11]);
      }
      FUN_002701e0(&DAT_0040583c);
switchD_0026eee2_caseD_4:
      uVar8 = (**(code **)(*piStack_4 + 0x7c))(piStack_4,iVar2);
      uVar5 = (**(code **)(*piStack_c + 0x6c))(piStack_c,iVar2);
      if ((uVar5 != 0) || (uVar8 != 0)) {
        FUN_002701e0(s___userprops_____0040562c);
        uVar9 = 0;
        if (uVar8 != 0) {
          do {
            local_78 = (int *)0x0;
            iVar6 = (**(code **)(*piStack_4 + 0x80))(piStack_4,iVar2,uVar9);
            if ((iVar6 != 0) &&
               (iVar6 = (**(code **)(*piStack_4 + 0x84))(piStack_4,iVar2,iVar6,&local_78),
               iVar6 == 0)) {
              FUN_002701e0(s__s___00405620);
              FUN_002701e0(s___s___00405618);
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar8);
        }
        uVar8 = 0;
        if (uVar5 != 0) {
          do {
            local_74 = 0;
            iVar6 = (**(code **)(*piStack_4 + 0x70))(piStack_4,iVar2,uVar8);
            if ((iVar6 != 0) &&
               (iVar6 = (**(code **)(*piStack_4 + 0x74))(piStack_4,iVar2,iVar6,&local_74),
               iVar6 == 0)) {
              FUN_002701e0(s__s___00405620);
              FUN_00270340(local_74);
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar5);
        }
        FUN_002701e0(&DAT_0040583c);
      }
      FUN_002701e0(&DAT_00405610);
      uVar8 = uStack_70;
LAB_0026f207:
      uVar8 = uVar8 + 1;
      uStack_70 = uVar8;
      uVar5 = (**(code **)(*piStack_4 + 0x18))(piStack_4);
    } while (uVar8 < uVar5);
  }
  FUN_002701e0(s____00405608);
  FUN_002701e0(s_events_____004055f8);
  local_74 = 0;
  iVar2 = (**(code **)(*param_1 + 0x38))(param_1);
  if (iVar2 != 0) {
    do {
      piVar3 = (int *)(**(code **)(*unaff_retaddr + 0x3c))(unaff_retaddr,local_78);
      piVar7 = (int *)(**(code **)(*piStack_8 + 0x24))(piStack_8,piVar3[7]);
      iVar2 = 0;
      if (-1 < piVar3[8]) {
        iVar2 = (**(code **)(*piStack_10 + 0x24))(piStack_10,piVar3[8]);
      }
      uVar8 = 0;
      do {
        if ((&DAT_003bb288)[uVar8] == *piVar3) break;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xf);
      FUN_002701e0(s__s_004055f0);
      fVar1 = (float)piVar3[1];
      if (piVar3[1] < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      FUN_00270340(fVar1 * 0.001);
      FUN_002701e0(&DAT_004055e4);
      FUN_002701e0(s______s__004055dc);
      if (iVar2 == 0) {
        pcVar11 = &DAT_004055d0;
      }
      else {
        pcVar11 = s_____s___004055d4;
      }
      FUN_002701e0(pcVar11);
      switch(*piVar3) {
      case 1:
        FUN_002701e0(&DAT_004054b0);
        iVar2 = piVar3[3];
        if (iVar2 != 0) {
          FUN_002703e0();
        }
        if ((piStack_c != (int *)0x0) &&
           (iVar6 = (**(code **)(*piStack_c + 0x14))(piStack_c,piVar3), iVar6 != 0)) {
          uVar4 = thunk_FUN_002ea01d(iVar6 + 1);
          iVar6 = (**(code **)(*piStack_c + 0x10))(piStack_c,piVar3,uVar4,iVar6);
          if (iVar6 == 0) {
            if (iVar2 != 0) {
              FUN_002701e0(&DAT_00405498);
            }
            FUN_002701e0(s_user_event_data_____s__00405480);
          }
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(uVar4);
        }
        goto LAB_0026ff82;
      default:
        goto switchD_0026f377_caseD_2;
      case 3:
        FUN_00270340((float)piVar3[6] * 0.001);
        if (piVar3[10] != 0) {
          FUN_002703e0();
        }
        if ((*(byte *)(piVar3 + 2) & 0xf) != 0) {
          FUN_002701e0(s___flags___004054d0);
          if ((*(byte *)(piVar3 + 2) & 1) != 0) {
            FUN_00270130();
          }
          if ((*(byte *)(piVar3 + 2) & 2) != 0) {
            FUN_00270130();
          }
          if ((*(byte *)(piVar3 + 2) & 8) != 0) {
            FUN_00270130();
          }
          if ((*(byte *)(piVar3 + 2) & 4) != 0) {
            FUN_00270130();
          }
        }
        break;
      case 4:
        FUN_00270340((float)piVar3[6] * 0.001);
        FUN_002701e0(s___lightprops_____004052b0);
        bVar10 = (*(byte *)(piVar3 + 10) & 1) != 0;
        if (bVar10) {
          FUN_002701e0(s__s___004052a8);
          FUN_00270470(s___d__d__d__0040529c);
        }
        if ((*(byte *)(piVar3 + 10) & 2) != 0) {
          if (bVar10) {
            FUN_002701e0(&DAT_00405498);
          }
          FUN_002701e0(s__s___004052a8);
          FUN_00270510(s___f__f__f__00405290);
          bVar10 = true;
        }
        if ((*(byte *)(piVar3 + 10) & 4) != 0) {
          if (bVar10) {
            FUN_002701e0(&DAT_00405498);
          }
          FUN_002701e0(s__s___004052a8);
          FUN_00270340(piVar3[0x11]);
          bVar10 = true;
        }
        if ((*(byte *)(piVar3 + 10) & 8) != 0) {
          if (bVar10) {
            FUN_002701e0(&DAT_00405498);
          }
          FUN_002701e0(s__s___004052a8);
          FUN_00270340(piVar3[0x12]);
          bVar10 = true;
        }
        if ((*(byte *)(piVar3 + 10) & 0x10) != 0) {
          if (bVar10) {
            FUN_002701e0(&DAT_00405498);
          }
          FUN_002701e0(s__s___004052a8);
          FUN_002703e0();
        }
        if ((*(byte *)(piVar3 + 10) & 0x20) != 0) {
          if (bVar10) {
            FUN_002701e0(&DAT_00405498);
          }
          FUN_002701e0(s__s___004052a8);
          FUN_002703e0();
        }
        FUN_002701e0(&DAT_004055d0);
        if ((*(byte *)(piVar3 + 2) & 1) != 0) {
          FUN_002701e0(s___flags___USE_SCRIPT_DURATION_00405504);
        }
        goto LAB_0026fe43;
      case 5:
        FUN_00270340((float)piVar3[6] * 0.001);
        FUN_002701e0(s___cameraprops_____00405278);
        bVar10 = (*(byte *)(piVar3 + 10) & 1) != 0;
        if (bVar10) {
          FUN_002701e0(s__s___004052a8);
          FUN_00270340(piVar3[0xb]);
        }
        if ((*(byte *)(piVar3 + 10) & 2) != 0) {
          if (bVar10) {
            FUN_002701e0(&DAT_00405498);
          }
          FUN_002701e0(s__s___004052a8);
          FUN_00270340(piVar3[0xc]);
          bVar10 = true;
        }
        if ((*(byte *)(piVar3 + 10) & 4) != 0) {
          if (bVar10) {
            FUN_002701e0(&DAT_00405498);
          }
          FUN_002701e0(s__s___004052a8);
          FUN_00270340(piVar3[0xd]);
          bVar10 = true;
        }
        if ((*(byte *)(piVar3 + 10) & 8) != 0) {
          if (bVar10) {
            FUN_002701e0(&DAT_00405498);
          }
          FUN_002701e0(s__s___004052a8);
          FUN_00270340(piVar3[0xe]);
        }
        goto LAB_0026fe08;
      case 6:
        FUN_00270340((float)piVar3[6] * 0.001);
        FUN_00270340(piVar3[10]);
        FUN_00270340(piVar3[0xb]);
        FUN_00270510(s___offset_____f__f__f__0040533c);
        FUN_002701e0(s___up____s_004053d0);
        FUN_002701e0(s___front____s_004053c0);
        if ((*(byte *)(piVar3 + 2) & 0xf) != 0) {
          FUN_002701e0(s___flags___004054d0);
          if ((*(byte *)(piVar3 + 2) & 1) != 0) {
            FUN_00270130();
          }
          if ((*(byte *)(piVar3 + 2) & 2) != 0) {
            FUN_00270130();
          }
          if ((*(byte *)(piVar3 + 2) & 4) != 0) {
            FUN_00270130();
          }
          if ((*(byte *)(piVar3 + 2) & 8) != 0) {
            FUN_00270130();
          }
          if ((*(byte *)(piVar3 + 2) & 0x20) != 0) {
            FUN_00270130();
          }
        }
        goto LAB_0026fe2e;
      case 7:
        FUN_00270340((float)piVar3[6] * 0.001);
        if (piVar3[0x1b] != 0) {
          FUN_002701e0(s___target_part_____s__00405438);
        }
        if (piVar3[0x1c] == 1) {
          pcVar11 = s___target_type___HARDPOINT_00405404;
        }
        else if (piVar3[0x1c] == 2) {
          pcVar11 = s___target_type___PART_00405420;
        }
        else {
          pcVar11 = s___target_type___ROOT_004053ec;
        }
        FUN_002701e0(pcVar11);
        FUN_002701e0(s___spatialprops_____00405264);
        bVar10 = (*(byte *)(piVar3 + 10) & 1) != 0;
        if (bVar10) {
          local_74 = piVar3[0x16];
          uStack_70 = piVar3[0x15];
          iStack_68 = piVar3[0x14];
          local_64 = uStack_70;
          iStack_60 = local_74;
          FUN_002701e0(s__s___004052a8);
          FUN_00270510(s___f___f___f__00405254);
        }
        if ((*(byte *)(piVar3 + 10) & 2) != 0) {
          if (bVar10) {
            FUN_002701e0(&DAT_00405498);
          }
          if ((*(byte *)(piVar3 + 2) & 0x10) == 0) {
            piStack_6c = piVar3 + 0xb;
            iStack_3c = *piStack_6c;
            iStack_38 = piVar3[0xc];
            iStack_34 = piVar3[0xd];
            iStack_30 = piVar3[0xe];
            iStack_1c = piVar3[0x13];
            iStack_2c = piVar3[0xf];
            iStack_28 = piVar3[0x10];
            iStack_24 = piVar3[0x11];
            iStack_20 = piVar3[0x12];
            FUN_002705c0();
          }
          else {
            iStack_40 = piVar3[0x1a];
            local_44 = piVar3[0x19];
            local_78 = (int *)piVar3[0x18];
            piStack_4c = (int *)piVar3[0x17];
            piStack_48 = local_78;
            FUN_002706e0(s_q_orient_____f___f___f___f__00405238);
          }
        }
LAB_0026fe08:
        FUN_002701e0(&DAT_004055d0);
        if ((*(byte *)(piVar3 + 2) & 1) != 0) {
          FUN_002701e0(s___flags___USE_SCRIPT_DURATION_00405504);
        }
LAB_0026fe2e:
        if (piVar3[3] != 0) {
          FUN_002703e0();
        }
LAB_0026fe43:
        if (piVar3[9] != 0) {
          FUN_00270790(piVar3[9]);
        }
        goto LAB_0026ff82;
      case 8:
        FUN_00270340((float)piVar3[6] * 0.001);
        FUN_00270510(s___offset_____f__f__f__0040533c);
        FUN_002701e0(s___up____s_004053d0);
        FUN_002701e0(s___front____s_004053c0);
        if (piVar3[0x10] != 0) {
          FUN_002701e0(s___target_part_____s__00405438);
        }
        if (piVar3[0xd] == 1) {
          pcVar11 = s___target_type___HARDPOINT_00405404;
        }
        else if (piVar3[0xd] == 2) {
          pcVar11 = s___target_type___PART_00405420;
        }
        else {
          pcVar11 = s___target_type___ROOT_004053ec;
        }
        FUN_002701e0(pcVar11);
        if ((*(byte *)(piVar3 + 2) & 0xf) != 0) {
          FUN_002701e0(s___flags___004054d0);
          if ((*(byte *)(piVar3 + 2) & 1) != 0) {
            FUN_00270130();
          }
          if ((*(byte *)(piVar3 + 2) & 2) != 0) {
            FUN_00270130();
          }
          if ((*(byte *)(piVar3 + 2) & 4) != 0) {
            FUN_00270130();
          }
          if ((*(byte *)(piVar3 + 2) & 8) != 0) {
            FUN_00270130();
          }
          if ((*(byte *)(piVar3 + 2) & 0x20) != 0) {
            FUN_00270130();
          }
          if ((*(byte *)(piVar3 + 2) & 0x40) != 0) {
            FUN_00270130();
          }
        }
        break;
      case 9:
        FUN_00270340((float)piVar3[6] * 0.001);
        FUN_002701e0(s___hardpoint_____s__00405370);
        FUN_002701e0(s___parent_hardpoint_____s__00405354);
        goto LAB_0026f481;
      case 10:
        if (piVar3[0xe] != 0) {
          FUN_002701e0(s____animation_____s__004055bc);
        }
        if (piVar3[0x11] != 0) {
          FUN_002701e0(s___locked_bone_____s__004055a4);
        }
        FUN_00270340((float)piVar3[6] * 0.001);
        if ((float)piVar3[10] != 0.0) {
          FUN_00270340(piVar3[10]);
        }
        if ((float)piVar3[0xb] != 0.0) {
          FUN_00270340(piVar3[0xb]);
        }
        if ((float)piVar3[0xc] != 0.0) {
          FUN_00270340(piVar3[0xc]);
        }
        if ((float)piVar3[0xd] != 0.0) {
          FUN_00270340(piVar3[0xd]);
        }
        if (*piVar7 == 2) {
          iVar2 = piVar3[0x10];
        }
        else {
          if ((float)piVar3[0x12] == 0.0) goto LAB_0026f481;
          iVar2 = piVar3[0x12];
        }
        FUN_00270340(iVar2);
LAB_0026f481:
        if ((*(byte *)(piVar3 + 2) & 1) != 0) {
          FUN_002701e0(s___flags___USE_SCRIPT_DURATION_00405504);
        }
        break;
      case 0xb:
        FUN_00270340((float)piVar3[6] * 0.001);
        FUN_002701e0(s___end_effector_____s__00405468);
        FUN_002703e0();
        if (piVar3[0x12] != 0) {
          FUN_002701e0(s___target_part_____s__00405438);
        }
        if (piVar3[0x13] == 1) {
          pcVar11 = s___target_type___HARDPOINT_00405404;
        }
        else if (piVar3[0x13] == 2) {
          pcVar11 = s___target_type___PART_00405420;
        }
        else {
          pcVar11 = s___target_type___ROOT_004053ec;
        }
        FUN_002701e0(pcVar11);
        FUN_00270340(piVar3[0xe]);
        FUN_002701e0(s___up____s_004053d0);
        FUN_002701e0(s___front____s_004053c0);
        FUN_002703e0();
        FUN_002703e0();
        FUN_00270340(piVar3[0x10]);
        if ((*(byte *)(piVar3 + 2) & 1) != 0) {
          FUN_002701e0(s___flags___USE_SCRIPT_DURATION_00405504);
        }
        break;
      case 0xc:
        FUN_00270340((float)piVar3[6] * 0.001);
        if ((float)piVar3[10] != 0.0) {
          FUN_00270340(piVar3[10]);
        }
        if (((*(byte *)(piVar3 + 2) & 1) != 0) &&
           (FUN_002701e0(s___flags___004054d0), (*(byte *)(piVar3 + 2) & 1) != 0)) {
          FUN_00270130();
        }
        break;
      case 0xd:
        FUN_00270340((float)piVar3[6] * 0.001);
        break;
      case 0xe:
        FUN_00270340((float)piVar3[6] * 0.001);
        if (piVar3[3] != 0) {
          FUN_002703e0();
        }
        FUN_002701e0(s___psysprops_____004051f4);
        if ((*(byte *)(piVar3 + 10) & 1) != 0) {
          FUN_002701e0(s__s___004052a8);
          FUN_00270340(piVar3[0xb]);
        }
        FUN_002701e0(&DAT_004055d0);
        goto LAB_0026ff82;
      }
      if (piVar3[3] != 0) {
        FUN_002703e0();
      }
LAB_0026ff82:
      FUN_002701e0(&DAT_004055d0);
switchD_0026f377_caseD_2:
      FUN_002701e0(&DAT_004055d0);
      unaff_ESI = unaff_ESI + 1;
      uVar8 = (**(code **)(*piStack_10 + 0x38))(piStack_10);
    } while (unaff_ESI < uVar8);
  }
  FUN_002701e0(s____00405608);
  (**(code **)(*piStack_4c + 0x14))(piStack_4c,piStack_48,iStack_40,&piStack_5c);
  uStack_50 = 0;
  if (iStack_58 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iStack_58);
  }
  if (piStack_5c != (int *)0x0) {
    (**(code **)(*piStack_5c + 8))(piStack_5c);
  }
  return 0;
}
