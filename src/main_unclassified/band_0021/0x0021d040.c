/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A08C648FA10B46A5FFEAC75713467EF9BF7C481613C1A941C5AE02CCAD57B127
 * Entry: 0x0021d040, Ghidra index: 7536, label: FUN_0021d040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
extern char s_23_23_IFxAppearance_00402ddc[];
extern char s_23_23_IFxEmitter_00402ae0[];
/* WARNING: Removing unreachable block (ram,0x0021d1cb) */
/* WARNING: Removing unreachable block (ram,0x0021d1f4) */

void FUN_0021d040(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *in_EAX;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *unaff_EDI;
  uint uStack_18;
  undefined4 auStack_10 [2];
  undefined4 auStack_8 [2];
  
  if (*in_EAX != DAT_0046d064) {
    iVar4 = *unaff_EDI;
    if (iVar4 != 0) {
      piVar1 = *(int **)(iVar4 + 0x14);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x34))(piVar1,7);
      }
      piVar1 = *(int **)(iVar4 + 0x14);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(iVar4 + 0x14) = 0;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar4);
    }
    puVar3 = (undefined4 *)FUN_002ea01d(0x18);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[5] = 0;
      *puVar3 = 1;
      puVar3[1] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0x7f7fffff;
      puVar3[4] = 0;
    }
    *unaff_EDI = (int)puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = *in_EAX;
      *(int *)*unaff_EDI = in_EAX[3];
      *(int *)(*unaff_EDI + 8) = in_EAX[2];
      *(int *)(*unaff_EDI + 0x10) = in_EAX[1];
      if (*(float *)(*unaff_EDI + 0x10) == 0.0) {
        piVar1 = (int *)param_1[0x2f];
        iVar4 = FUN_0008f5d0(param_1[0x1e],piVar1,param_3);
        param_1 = piVar1;
        if (iVar4 != 0) {
          if (*unaff_EDI != 0) {
            FUN_0021a140(1);
            *unaff_EDI = 0;
          }
          goto LAB_0021d23c;
        }
      }
      if ((*unaff_EDI != 0) &&
         (((piVar1 = unaff_EDI + 1, unaff_EDI[1] == 0 || (unaff_EDI[2] == 0)) &&
          (piVar2 = *(int **)(*unaff_EDI + 0x14), piVar2 != (int *)0x0)))) {
        param_3 = (int *)0x0;
        (**(code **)(*piVar2 + 0x40))(piVar2,&param_3);
        if (param_3 != (int *)0x0) {
          uVar5 = (**(code **)(*param_3 + 0x2c))();
          uStack_18 = 0;
          if (uVar5 != 0) {
            do {
              (**(code **)(*param_3 + 0x34))(param_3,uStack_18,auStack_10);
              auStack_8[0] = 0;
              (**(code **)(**(int **)(*unaff_EDI + 0x14) + 0x28))
                        (*(int **)(*unaff_EDI + 0x14),auStack_10[0],auStack_8);
              if (param_1 != (int *)0x0) {
                if (*piVar1 == 0) {
                  (**(code **)*param_1)(param_1,s_23_23_IFxAppearance_00402ddc,piVar1);
                }
                if (unaff_EDI[2] == 0) {
                  (**(code **)*param_1)(param_1,s_23_23_IFxEmitter_00402ae0,unaff_EDI + 2);
                }
                (**(code **)(*param_1 + 8))(param_1);
                if ((*piVar1 != 0) && (unaff_EDI[2] != 0)) break;
              }
              uStack_18 = uStack_18 + 1;
            } while (uStack_18 < uVar5);
          }
          (**(code **)(*param_3 + 8))(param_3);
        }
      }
    }
  }
LAB_0021d23c:
  if (param_2 != 0) {
    if (unaff_EDI[4] != param_2) {
      FUN_0008f6a0(param_2);
    }
    *(byte *)(param_2 + 0x94) = *(byte *)(param_2 + 0x94) & 0xbf;
  }
  return;
}
