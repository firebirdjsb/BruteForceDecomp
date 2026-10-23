/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FD6DD07E0862B300DCF5AC5D9F200C21DBD88ED3A36402B1DB1035EC61CAF0AB
 * Entry: 0x00258040, Ghidra index: 8466, label: FUN_00258040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698bc;
extern uint32_t DAT_0046cfc8;
extern uint32_t DAT_0046cfd4;
extern char s_23_23_ISchema_00406e3c[];
int FUN_00258040(uint param_1,int *param_2,undefined4 *******param_3,int param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int *piVar5;
  byte bVar6;
  int iVar7;
  undefined4 *******pppppppuVar8;
  int unaff_EBX;
  uint uVar9;
  undefined4 *unaff_retaddr;
  undefined4 ******ppppppuStack_24;
  undefined1 auStack_20 [16];
  uint uStack_10;
  int iStack_8;
  int *piStack_4;
  
  uVar9 = param_5;
  iVar7 = param_4;
  piVar5 = param_2;
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x34))(piVar1,param_2,param_3,param_4,param_5);
  }
  param_4 = iVar7 * uVar9;
  if (uVar9 == 1) {
    iVar7 = FUN_00258480(0xa000);
    if (iVar7 < 0) {
      return -0x7fffbffb;
    }
    *(undefined4 *)(param_1 + 0x2898) = 0xd000;
LAB_00258127:
    bVar4 = false;
    bVar3 = false;
    ppppppuStack_24 = param_3;
    (**(code **)(*piVar5 + 0x24))(piVar5,auStack_20,0);
    if ((unaff_EBX == 0xd) || (unaff_EBX == 0xe)) {
      if ((*(byte *)(iStack_8 + 0x1c) & 3) != 0) {
        param_2 = piVar5;
        (**(code **)(*piVar5 + 4))(piVar5);
        piStack_4 = (int *)0x0;
        if (param_2 != DAT_0046cfc8) {
          do {
            piVar1 = param_2;
            if (param_2 == DAT_0046cfd4) {
              bVar4 = true;
            }
            bVar3 = false;
            if (piStack_4 != (int *)0x0) {
              (**(code **)(*piStack_4 + 8))(piStack_4);
              piStack_4 = (int *)0x0;
            }
            (**(code **)(*piVar1 + 0x18))(piVar1,&piStack_4);
            piVar1 = piStack_4;
            if (piStack_4 == (int *)0x0) goto LAB_002581fd;
            if (param_2 != (int *)0x0) {
              (**(code **)(*param_2 + 8))(param_2);
              param_2 = (int *)0x0;
            }
            (**(code **)(*piVar1 + 0x10))(piVar1,s_23_23_ISchema_00406e3c,&param_2);
          } while (param_2 != DAT_0046cfc8);
        }
        bVar4 = false;
        bVar3 = true;
        if (piStack_4 != (int *)0x0) {
          (**(code **)(*piStack_4 + 8))(piStack_4);
          piStack_4 = (int *)0x0;
        }
LAB_002581fd:
        if (param_2 != (int *)0x0) {
          (**(code **)(*param_2 + 8))(param_2);
        }
      }
      if (bVar3) {
        if (((byte)DAT_004698bc & 1) == 0) {
          FUN_00238370();
        }
        param_1 = 4;
      }
      else {
        uVar9 = param_1;
        if (bVar4) {
          if (((byte)DAT_004698bc & 2) == 0) {
            FUN_00258920(unaff_retaddr,param_1 + (int)unaff_retaddr);
            pppppppuVar8 = (undefined4 *******)ppppppuStack_24;
            if (uStack_10 < 0x10) {
              pppppppuVar8 = &ppppppuStack_24;
            }
            iVar7 = FUN_00257da0(iStack_8,pppppppuVar8,&stack0x00000000);
            if (iVar7 < 0) {
              FUN_000519c0();
              return -0x7fffbffb;
            }
            FUN_000519c0();
          }
          else {
            unaff_retaddr = (undefined4 *)*unaff_retaddr;
          }
          uVar9 = (int)unaff_retaddr + 1;
          do {
            bVar6 = (byte)uVar9 & 0x7f;
            if (0x7f < uVar9) {
              bVar6 = bVar6 | 0x80;
            }
            unaff_retaddr = (undefined4 *)(uint)bVar6;
            FUN_00258510();
            uVar9 = uVar9 >> 7;
          } while (uVar9 != 0);
          param_1 = 0;
        }
        else {
          do {
            bVar6 = (byte)uVar9 & 0x7f;
            if (0x7f < uVar9) {
              bVar6 = bVar6 | 0x80;
            }
            unaff_retaddr = (undefined4 *)(uint)bVar6;
            FUN_00258510();
            uVar9 = uVar9 >> 7;
          } while (uVar9 != 0);
        }
      }
    }
    iVar7 = 0;
    if (0 < (int)param_1) {
      do {
        iVar2 = *(int *)(iStack_8 + 0x38);
        if ((iVar2 == 0) ||
           ((uint)(*(int *)(iStack_8 + 0x40) - iVar2) <= (uint)(*(int *)(iStack_8 + 0x3c) - iVar2)))
        {
          FUN_00071d20(*(undefined4 *)(iStack_8 + 0x3c),1,&stack0x00000000);
        }
        else {
          iVar2 = *(int *)(iStack_8 + 0x3c);
          FUN_0024c790(iVar2,1,iStack_8 + 0x34,unaff_retaddr);
          *(int *)(iStack_8 + 0x3c) = iVar2 + 1;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)param_1);
    }
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_00258480(0);
    if (iVar7 < 0) {
      return -0x7fffbffb;
    }
    param_5 = uVar9 & 0x7ff | 0xd000;
    *(undefined4 *)(param_1 + 0x2898) = 0xc000;
    if ((int)uVar9 >> 0xb != 0) {
      param_5 = uVar9 & 0x7ff | 0xd800;
    }
    iVar7 = FUN_00281b40();
    uVar9 = (int)uVar9 >> 0xb;
    while (-1 < iVar7) {
      if (uVar9 == 0) goto LAB_00258127;
      param_5 = uVar9 & 0x7fff;
      if ((int)uVar9 >> 0xf != 0) {
        param_5 = param_5 | 0x8000;
      }
      iVar7 = FUN_00281b40();
      uVar9 = (int)uVar9 >> 0xf;
    }
  }
  return iVar7;
}
