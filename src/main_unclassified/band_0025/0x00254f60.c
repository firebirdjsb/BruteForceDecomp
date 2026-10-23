/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DF2363E7CF39537393D56A7D0F9124D37921F3F00F9BDF265A94C91EA730C6F0
 * Entry: 0x00254f60, Ghidra index: 8420, label: FUN_00254f60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004063c4;
extern uint32_t DAT_004063c8;
extern uint32_t *DAT_004432fc;
extern char s_23_23_ISchema_00406e3c[];
undefined4
FUN_00254f60(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_ECX;
  int *unaff_EBX;
  int *unaff_EBP;
  int *unaff_ESI;
  int *piVar5;
  int *unaff_EDI;
  int *piStack_220;
  int *local_21c;
  int *piStack_218;
  int iStack_214;
  undefined1 auStack_210 [4];
  int aiStack_20c [2];
  uint uStack_204;
  undefined4 uStack_200;
  undefined1 uStack_1fc;
  int *piStack_4;
  
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  local_21c = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  piStack_220 = param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  if (local_21c != (int *)0x0) {
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
      piStack_220 = (int *)0x0;
    }
    iVar3 = FUN_00254ed0(in_ECX);
    if (iVar3 < 0) {
      if (piStack_220 != (int *)0x0) {
        (**(code **)(*piStack_220 + 8))(piStack_220);
      }
      if (local_21c != (int *)0x0) {
        (**(code **)(*local_21c + 8))(local_21c);
        local_21c = (int *)0x0;
      }
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
      }
      return 0x80004005;
    }
    if (piStack_220 == (int *)0x0) {
      piStack_220 = param_1;
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 4))(param_1);
      }
    }
    else {
      if (local_21c != (int *)0x0) {
        (**(code **)(*local_21c + 8))(local_21c);
        local_21c = (int *)0x0;
      }
      (**(code **)(*piStack_220 + 0x10))(piStack_220,s_23_23_ISchema_00406e3c,&local_21c);
    }
  }
  uVar1 = param_5;
  piVar5 = param_1;
  if (((char)param_4 == '\0') ||
     ((**(code **)(*piStack_220 + 0x20))(piStack_220,&iStack_214), iStack_214 == 0x1b8535f0)) {
LAB_002550cd:
    iVar3 = (**(code **)(*DAT_004432fc + 0x24))(DAT_004432fc,1,&param_3,1,uVar1,piStack_220);
    if (-1 < iVar3) {
      if (piStack_220 != (int *)0x0) {
        (**(code **)(*piStack_220 + 8))(piStack_220);
      }
      if (local_21c != (int *)0x0) {
        (**(code **)(*local_21c + 8))(local_21c);
        local_21c = (int *)0x0;
      }
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
      }
      return 0;
    }
    if (local_21c != (int *)0x0) {
      (**(code **)(*piStack_220 + 0x20))(piStack_220,auStack_210);
      if (piStack_218 == (int *)0x1b8535f0) {
        if ((unaff_ESI != (int *)0x0) &&
           ((**(code **)(*unaff_ESI + 4))(unaff_ESI), unaff_ESI != (int *)0x0)) {
          (**(code **)(*unaff_ESI + 8))(unaff_ESI);
        }
        (**(code **)(*unaff_ESI + 0x38))(unaff_ESI,&stack0xfffffdd8);
        if (unaff_EDI != (int *)0x0) {
          (**(code **)(*unaff_EDI + 8))(unaff_EDI);
        }
        (**(code **)(*unaff_EBP + 0x10))(unaff_EBP,s_23_23_ISchema_00406e3c,&stack0xfffffdd4);
        (**(code **)(*unaff_ESI + 8))(unaff_ESI);
        piVar5 = piStack_4;
      }
      (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,aiStack_20c);
      if ((uStack_204 & 0x100) != 0) {
        piStack_218 = (int *)0x0;
        (**(code **)(*local_21c + 0x20))(local_21c,&piStack_218);
        piVar2 = piStack_218;
        if (piStack_218 == (int *)0x0) {
          if (piStack_220 != (int *)0x0) {
            (**(code **)(*piStack_220 + 8))(piStack_220);
          }
          FUN_00076fc0();
          goto LAB_002552f9;
        }
        iStack_214 = 0;
        aiStack_20c[0] = *piStack_218;
        uVar4 = FUN_00076fe0();
        (**(code **)(aiStack_20c[0] + 0x10))(piVar2,s_23_23_ISchema_00406e3c,uVar4);
        iVar3 = FUN_00254f60(piStack_218,iStack_214,param_3,param_4,uVar1);
        if (-1 < iVar3) {
          FUN_00076fc0();
          if (piStack_218 != (int *)0x0) {
            (**(code **)(*piStack_218 + 8))(piStack_218);
            piStack_218 = (int *)0x0;
          }
          if (piStack_220 != (int *)0x0) {
            (**(code **)(*piStack_220 + 8))(piStack_220);
          }
          FUN_00076fc0();
          if (param_1 != (int *)0x0) {
            (**(code **)(*param_1 + 8))(param_1);
          }
          return 0;
        }
        FUN_00076fc0();
        piVar5 = param_1;
        if (piStack_218 != (int *)0x0) {
          (**(code **)(*piStack_218 + 8))(piStack_218);
        }
      }
    }
  }
  else {
    piStack_218 = (int *)0x1b8535f0;
    iVar3 = (**(code **)(*DAT_004432fc + 0x24))(DAT_004432fc,1,&piStack_218,1,uVar1,piStack_220);
    if (-1 < iVar3) {
      FUN_0015e4b0();
      goto LAB_002550cd;
    }
  }
  if (piStack_220 == (int *)0x0) {
    uStack_200 = DAT_004063c4;
    uStack_1fc = DAT_004063c8;
  }
  else {
    (**(code **)(*piStack_220 + 0x34))(piStack_220,&uStack_200,0x200,0,0);
    if (piStack_220 != (int *)0x0) {
      (**(code **)(*piStack_220 + 8))(piStack_220);
    }
  }
  if (local_21c != (int *)0x0) {
    (**(code **)(*local_21c + 8))(local_21c);
    local_21c = (int *)0x0;
  }
LAB_002552f9:
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
  }
  return 0x80004005;
}
