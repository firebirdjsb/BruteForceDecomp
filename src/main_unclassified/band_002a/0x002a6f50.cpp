/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 64458F90EE3C9C45247C212E31C9ACEED6AA89C5A15F02302F2D2F49F3E004E9
 * Entry: 0x002a6f50, Ghidra index: 9594, label: FUN_002a6f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00443648;
extern char s_23_23_IAnimatedSingleRamp_00403ca0[];
extern char s_23_23_IRampSingleRamp_00403c70[];
/* WARNING: Type propagation algorithm not settling */

void FUN_002a6f50(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_ECX;
  int *unaff_EBP;
  int *unaff_ESI;
  int iVar4;
  bool bVar5;
  int *piVar6;
  int *piVar7;
  int local_124 [2];
  undefined1 local_11c [28];
  undefined1 local_100 [244];
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  piVar7 = (int *)param_2[1];
  uVar1 = in_ECX & 0x7fff;
  if (uVar1 < 0x103) {
    if (uVar1 == 0x102) {
      local_124[1] = 0;
      (**(code **)(*(int *)param_2[2] + 0x44))((int *)param_2[2],param_1,local_124 + 1);
      FUN_002a6520(*param_2);
      bVar5 = unaff_EBP == (int *)0x0;
    }
    else {
      if (uVar1 < 5) {
        if (uVar1 != 4) {
          if (uVar1 == 1) {
            (**(code **)(*(int *)param_2[2] + 0x20))
                      ((int *)param_2[2],param_1,(in_ECX & 0x8000) == 0x8000);
            return;
          }
          if (uVar1 != 2) {
            if (uVar1 != 3) {
              return;
            }
            (**(code **)(*piVar7 + 0x10))(piVar7,local_124 + 1,4,0);
            (**(code **)(*(int *)param_2[2] + 0x30))((int *)param_2[2],uStack_c,unaff_ESI);
            return;
          }
        }
        (**(code **)(*piVar7 + 0x10))(piVar7,local_124 + 1,4,0);
        (**(code **)(*(int *)param_2[2] + 0x28))((int *)param_2[2],uStack_c,unaff_ESI);
        return;
      }
      if (uVar1 != 0x100) {
        if (uVar1 != 0x101) {
          return;
        }
        local_124[1] = 0;
        iVar3 = *(int *)param_2[2];
        uVar2 = FUN_00076fe0();
        (**(code **)(iVar3 + 0x3c))(param_2[2],param_1,uVar2);
        FUN_002a8320(*param_2);
        unaff_ESI = unaff_EBP;
        goto LAB_002a7163;
      }
      local_124[1] = 0;
      iVar3 = *(int *)param_2[2];
      uVar2 = FUN_00076fe0();
      (**(code **)(iVar3 + 0x40))(param_2[2],param_1,uVar2);
      FUN_002a82a0(*param_2);
      bVar5 = unaff_EBP == (int *)0x0;
    }
LAB_002a74f4:
    if (!bVar5) {
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
    }
  }
  else {
    if (uVar1 < 0x201) {
      if (uVar1 == 0x200) {
        piVar6 = (int *)param_2[2];
        piVar7 = local_124;
        local_124[0] = 0;
        iVar3 = (**(code **)(*piVar6 + 0x58))();
        if (iVar3 < 0) {
          local_124[0] = 0x69304f1;
          if (unaff_ESI != (int *)0x0) {
            (**(code **)(*unaff_ESI + 8))(unaff_ESI);
            unaff_ESI = (int *)0x0;
          }
          FUN_00238080(s_23_23_IRampSingleRamp_00403c70,&stack0xfffffed0);
        }
        FUN_002a83a0(unaff_ESI,*param_2);
        iVar4 = 0;
        iVar3 = (**(code **)(*unaff_ESI + 0x38))(unaff_ESI);
        if (0 < iVar3) {
          do {
            (**(code **)(*unaff_ESI + 0x24))(unaff_ESI,iVar4,&stack0xfffffed4);
            iVar3 = (**(code **)(*piVar7 + 0x38))(piVar7);
            if (iVar3 == 0) {
              (**(code **)(*param_1 + 0x14))(param_1,0,&stack0xfffffed4);
            }
            if (param_1 != (int *)0x0) {
              (**(code **)(*param_1 + 8))(param_1);
            }
            iVar4 = iVar4 + 1;
            iVar3 = (**(code **)(*piVar6 + 0x38))(piVar6);
          } while (iVar4 < iVar3);
        }
        unaff_EBP = unaff_ESI;
        if (DAT_00443648 != '\0') {
          if ((unaff_ESI != (int *)0x0) &&
             ((**(code **)(*unaff_ESI + 4))(unaff_ESI), unaff_ESI != (int *)0x0)) {
            (**(code **)(*unaff_ESI + 8))(unaff_ESI);
            unaff_EBP = (int *)0x0;
          }
          FUN_0029dda0();
          (**(code **)(*(int *)param_2[2] + 0x5c))((int *)param_2[2],uStack_8,unaff_EBP);
          if (unaff_ESI != (int *)0x0) {
            (**(code **)(*unaff_ESI + 8))(unaff_ESI);
          }
        }
LAB_002a74ee:
        bVar5 = unaff_EBP == (int *)0x0;
        goto LAB_002a74f4;
      }
      if (uVar1 == 0x103) {
        FUN_002a0380(0x100);
        (**(code **)(*(int *)param_2[2] + 0x4c))((int *)param_2[2],param_1,local_100);
        return;
      }
      if (uVar1 == 0x104) {
        (**(code **)(*piVar7 + 0x10))(piVar7,local_11c,8,0);
        FUN_002a6f00();
        (**(code **)(*(int *)param_2[2] + 0x38))((int *)param_2[2],uStack_c,&stack0xfffffed4);
        return;
      }
      if (uVar1 != 0x105) {
        return;
      }
      local_124[0] = 0;
      iVar3 = *(int *)param_2[2];
      uVar2 = FUN_00076fe0();
      (**(code **)(iVar3 + 0x18))(param_2[2],param_1,uVar2);
      FUN_002a6900(*param_2);
      if (DAT_00443648 != '\0') {
        (**(code **)(*unaff_ESI + 0x30))(unaff_ESI);
      }
    }
    else {
      if (uVar1 == 0x201) {
        piVar6 = (int *)param_2[2];
        piVar7 = local_124;
        local_124[0] = 0;
        (**(code **)(*piVar6 + 0x50))();
        FUN_002a84f0(unaff_ESI,*param_2);
        iVar4 = 0;
        iVar3 = (**(code **)(*unaff_ESI + 0x3c))(unaff_ESI);
        if (0 < iVar3) {
          do {
            (**(code **)(*unaff_ESI + 0x28))(unaff_ESI,iVar4,&stack0xfffffed4);
            iVar3 = (**(code **)(*piVar7 + 0x3c))(piVar7);
            if (iVar3 == 0) {
              unaff_ESI = (int *)0x3f4ccccd;
              local_124[0] = 0x3f4ccccd;
              piVar7 = (int *)0x3f4ccccd;
              local_124[1] = 0x3f4ccccd;
              (**(code **)(*param_1 + 0x14))(param_1,0,&stack0xfffffed8);
            }
            if (param_1 != (int *)0x0) {
              (**(code **)(*param_1 + 8))(param_1);
            }
            iVar4 = iVar4 + 1;
            iVar3 = (**(code **)(*piVar6 + 0x3c))(piVar6);
          } while (iVar4 < iVar3);
        }
        unaff_EBP = unaff_ESI;
        if (DAT_00443648 != '\0') {
          if ((unaff_ESI != (int *)0x0) &&
             ((**(code **)(*unaff_ESI + 4))(unaff_ESI), unaff_ESI != (int *)0x0)) {
            (**(code **)(*unaff_ESI + 8))(unaff_ESI);
            unaff_EBP = (int *)0x0;
          }
          FUN_0029de40();
          (**(code **)(*(int *)param_2[2] + 0x54))((int *)param_2[2],uStack_8,unaff_EBP);
          if (unaff_ESI != (int *)0x0) {
            (**(code **)(*unaff_ESI + 8))(unaff_ESI);
          }
        }
        goto LAB_002a74ee;
      }
      if (uVar1 != 0x202) {
        return;
      }
      local_124[0] = 0;
      iVar3 = (**(code **)(*(int *)param_2[2] + 0x60))((int *)param_2[2],param_1,local_124);
      if (iVar3 < 0) {
        local_124[0] = -0x8e0dd2;
        uVar2 = FUN_00076fe0();
        FUN_00238080(s_23_23_IAnimatedSingleRamp_00403ca0,uVar2);
      }
      FUN_002a6700(unaff_ESI,*param_2);
      if (DAT_00443648 != '\0') {
        if (unaff_ESI != (int *)0x0) {
          (**(code **)(*unaff_ESI + 4))(unaff_ESI);
        }
        FUN_00076fe0();
        FUN_0029df00();
        (**(code **)(*(int *)param_2[2] + 100))((int *)param_2[2],uStack_8,unaff_ESI);
        FUN_00076fc0();
      }
    }
LAB_002a7163:
    if (unaff_ESI != (int *)0x0) {
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
      return;
    }
  }
  return;
}
