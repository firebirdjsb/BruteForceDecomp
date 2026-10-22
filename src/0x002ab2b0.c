/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3CFFD071D469DA2C3D8A9FBE1ABFD49F2B22FA0135CDDE69B4CF431AD95969B6
 * Entry: 0x002ab2b0, Ghidra index: 9664, label: FUN_002ab2b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0044364c;
extern uint32_t *DAT_00443650;
extern char s_23_23_IFxAppearance_00402ddc[];
extern char s_23_23_IFxEmitter_00402ae0[];
extern char s_23_23_IFxField_00402c60[];
extern char s_23_23_IFxNode_00402b90[];
undefined4 FUN_002ab2b0(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  float10 fVar11;
  int *piStack_68;
  int iStack_64;
  undefined4 *puStack_60;
  int *local_5c;
  int iStack_58;
  int *local_54;
  int *piStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int *piStack_40;
  int iStack_3c;
  int iStack_38;
  int *piStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  int iStack_24;
  int *piStack_20;
  int *piStack_1c;
  int *piStack_18;
  int *piStack_14;
  int *piStack_10;
  int *piStack_c;
  int *piStack_8;
  int iStack_4;
  
  piVar2 = param_1;
  piVar6 = (int *)param_2[2];
  piVar1 = (int *)param_1[6];
  local_54 = piVar6;
  if (piVar1 != piVar6) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[6] = 0;
    }
    param_1[6] = (int)piVar6;
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
  }
  local_5c = (int *)0x8000;
  iVar4 = (**(code **)(*piVar6 + 0x2c))();
  iStack_58 = iVar4;
  if (param_1[2] != 0) {
    FUN_002ad110(param_1 + 1);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1[2]);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_002ac6c0();
  puStack_60 = (undefined4 *)0x0;
  iStack_64 = 0;
  if (0 < iVar4) {
    do {
      (**(code **)(*local_54 + 0x34))(local_54,iStack_64,&piStack_40);
      piStack_68 = (int *)0x0;
      if (piStack_40 == (int *)0x0) {
        iVar4 = (**(code **)(*DAT_0044364c + 0x2c))(DAT_0044364c,iStack_3c,&piStack_68);
        if (iVar4 < 0) {
          if (piStack_68 != (int *)0x0) {
            (**(code **)(*piStack_68 + 8))(piStack_68);
          }
          return 0x80004005;
        }
      }
      else {
        uStack_48 = 8;
        uStack_44 = 0x155010d6;
        iVar4 = FUN_00238080(s_23_23_IFxNode_00402b90,&piStack_68);
        if (iVar4 < 0) {
          if (piStack_68 != (int *)0x0) {
            (**(code **)(*piStack_68 + 8))(piStack_68);
          }
          return 0x80004005;
        }
        if (iStack_3c == -0x11ddc4af) {
          local_5c = piStack_34;
        }
      }
      piVar3 = piStack_34;
      iVar4 = iStack_38;
      piVar1 = piStack_40;
      puVar9 = puStack_60;
      piVar6 = piStack_68;
      if (iStack_38 == 0x8000) {
        if (puStack_60 == (undefined4 *)0x0) {
          piStack_20 = piStack_68;
          if (piStack_68 != (int *)0x0) {
            (**(code **)(*piStack_68 + 4))(piStack_68);
          }
          piStack_1c = piVar1;
          piStack_18 = piVar3;
          piStack_14 = (int *)0x8000;
          FUN_002ad140(param_1 + 1,param_1[2],1);
          if (piVar6 != (int *)0x0) {
            (**(code **)(*piVar6 + 8))(piVar6);
            puStack_60 = (undefined4 *)((int)puStack_60 + 1);
            piStack_20 = (int *)0x0;
            goto LAB_002ab545;
          }
        }
        else {
          iVar4 = (**(code **)(*piStack_68 + 0x3c))(piStack_68);
          iVar8 = 0;
          if (0 < (int)puVar9) {
            iVar10 = 0;
            do {
              iVar5 = (**(code **)(**(int **)(iVar10 + param_1[2]) + 0x3c))
                                (*(int **)(iVar10 + param_1[2]));
              if (iVar4 < iVar5) break;
              iVar8 = iVar8 + 1;
              iVar10 = iVar10 + 0x10;
            } while (iVar8 < (int)puStack_60);
          }
          piVar1 = piStack_34;
          iVar4 = iStack_38;
          piVar6 = piStack_68;
          piStack_50 = piStack_40;
          piStack_10 = piStack_68;
          if (piStack_68 != (int *)0x0) {
            (**(code **)(*piStack_68 + 4))(piStack_68);
          }
          piStack_c = piStack_50;
          piStack_8 = piVar1;
          iStack_4 = iVar4;
          FUN_002ad140(param_1 + 1,iVar8 * 0x10 + param_1[2],1);
          if (piVar6 != (int *)0x0) {
            (**(code **)(*piVar6 + 8))(piVar6);
            piStack_10 = (int *)0x0;
          }
        }
        puStack_60 = (undefined4 *)((int)puStack_60 + 1);
      }
      else {
        piStack_30 = piStack_68;
        if (piStack_68 != (int *)0x0) {
          (**(code **)(*piStack_68 + 4))(piStack_68);
        }
        piStack_2c = piVar1;
        piStack_28 = piVar3;
        iStack_24 = iVar4;
        FUN_002ac7d0();
        if (piStack_30 != (int *)0x0) {
          (**(code **)(*piStack_30 + 8))(piStack_30);
          piStack_30 = (int *)0x0;
        }
      }
LAB_002ab545:
      if (piStack_68 != (int *)0x0) {
        (**(code **)(*piStack_68 + 8))(piStack_68);
        piStack_68 = (int *)0x0;
      }
      iStack_64 = iStack_64 + 1;
    } while (iStack_64 < iStack_58);
    if (local_5c != (int *)0x8000) {
      for (iVar4 = param_1[2]; (iVar4 != param_1[3] && (*(int **)(iVar4 + 8) != local_5c));
          iVar4 = iVar4 + 0x10) {
      }
      param_1[5] = iVar4;
      goto LAB_002ab5c1;
    }
  }
  param_1[5] = 0;
LAB_002ab5c1:
  puStack_60 = (undefined4 *)param_1[3];
  puVar9 = (undefined4 *)param_1[2];
  *(undefined2 *)(param_1 + 7) = 0;
  if (puVar9 != puStack_60) {
    do {
      iVar4 = param_2[3];
      if (puVar9[3] == 0x8000) {
        *(short *)(param_1 + 7) = (short)param_1[7] + 1;
      }
      else {
        for (piVar6 = (int *)param_1[2]; (piVar6 != (int *)param_1[3] && (piVar6[2] != puVar9[3]));
            piVar6 = piVar6 + 4) {
        }
        iVar4 = *piVar6;
      }
      (**(code **)(*DAT_00443650 + 0x48))(DAT_00443650,iVar4,*puVar9);
      puVar9 = puVar9 + 4;
    } while (puVar9 != puStack_60);
  }
  piVar6 = local_54;
  iStack_58 = (**(code **)(*local_54 + 0x30))();
  iStack_64 = 0;
  if (0 < iStack_58) {
    do {
      (**(code **)(*piVar6 + 0x38))(piVar6,iStack_64,&piStack_50);
      for (puVar9 = (undefined4 *)piVar2[2];
          (puVar9 != (undefined4 *)piVar2[3] && ((int *)puVar9[2] != local_5c)); puVar9 = puVar9 + 4
          ) {
      }
      puVar9 = (undefined4 *)*puVar9;
      iStack_4 = 0;
      piStack_8 = (int *)0x0;
      iVar4 = (**(code **)*puVar9)(puVar9,s_23_23_IFxEmitter_00402ae0,&iStack_4);
      if (iVar4 < 0) {
        if (piStack_14 != (int *)0x0) {
          (**(code **)(*piStack_14 + 8))(piStack_14);
          piStack_14 = (int *)0x0;
        }
        iVar4 = (**(code **)*puVar9)(puVar9,s_23_23_IFxAppearance_00402ddc,&piStack_14);
        if (-1 < iVar4) {
          puVar9 = (undefined4 *)piVar2[2];
          local_5c = (int *)0x0;
          for (; (puVar9 != (undefined4 *)piVar2[3] && (puVar9[2] != iStack_4c));
              puVar9 = puVar9 + 4) {
          }
          (*(code *)**(undefined4 **)*puVar9)
                    ((undefined4 *)*puVar9,s_23_23_IFxField_00402c60,&local_5c);
          (**(code **)(*piStack_8 + 0xa8))(piStack_8,piStack_68);
          if (local_5c != (int *)0x0) {
            (**(code **)(*local_5c + 8))(local_5c);
          }
        }
      }
      else {
        for (puVar9 = (undefined4 *)piVar2[2];
            (puVar9 != (undefined4 *)piVar2[3] && (puVar9[2] != iStack_64)); puVar9 = puVar9 + 4) {
        }
        puVar9 = (undefined4 *)*puVar9;
        if (piStack_14 != (int *)0x0) {
          (**(code **)(*piStack_14 + 8))(piStack_14);
          piStack_14 = (int *)0x0;
        }
        (**(code **)*puVar9)(puVar9,s_23_23_IFxAppearance_00402ddc,&piStack_14);
        (**(code **)(*piStack_1c + 0xa4))(piStack_1c,piStack_20);
      }
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
        param_1 = (int *)0x0;
      }
      if (param_2 != (int *)0x0) {
        (**(code **)(*param_2 + 8))(param_2);
        param_2 = (int *)0x0;
      }
      iStack_64 = iStack_64 + 1;
    } while (iStack_64 < iStack_58);
  }
  puVar9 = (undefined4 *)piVar2[2];
  if (puVar9 != puStack_60) {
    do {
      if (puVar9[1] == 1) {
        piVar6 = (int *)*puVar9;
        iVar4 = *piVar6;
        uVar7 = (**(code **)(iVar4 + 0x30))(piVar6);
        fVar11 = (float10)FUN_002ab210(uVar7);
        (**(code **)(iVar4 + 0x70))(piVar6,(float)fVar11);
      }
      puVar9 = puVar9 + 4;
    } while (puVar9 != puStack_60);
  }
  return 0;
}
