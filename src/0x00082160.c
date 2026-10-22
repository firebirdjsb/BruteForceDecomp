/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F695AD74E6AB90A4A6E95093B26022741BE0C3CEBA5A34679305E6723986325B
 * Entry: 0x00082160, Ghidra index: 1530, label: FUN_00082160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00401f68;
extern uint32_t DAT_00401f6c;
extern uint32_t DAT_00401f74;
extern uint32_t DAT_00401f88;
void FUN_00082160(int *param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int *piStack_34;
  int *local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  int *local_4;
  
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = (int *)0x0;
  iVar4 = (**(code **)(*param_1 + 0xf0))(&local_30,&local_10);
  piVar2 = local_30;
  if (iVar4 != 0) {
    iVar4 = 0;
    do {
      piVar1 = piStack_34;
      piVar7 = local_30;
      if ((piStack_34 == (int *)0x0) || ((int)local_30 - (int)piStack_34 >> 2 == 0)) break;
      iVar4 = iVar4 + 1;
      pbVar5 = (byte *)(**(code **)(*param_1 + 0x130))(iVar4);
      if ((pbVar5 != (byte *)0x0) && (piVar7 = piStack_34, (*pbVar5 & 1) != 0)) {
        while( true ) {
          if (((piVar7 == piVar2) || (piStack_34 == (int *)0x0)) ||
             ((int)local_30 - (int)piStack_34 >> 2 == 0)) goto LAB_00082241;
          if (*piVar7 == *(int *)(pbVar5 + 0x10)) break;
          piVar7 = piVar7 + 1;
        }
        FUN_00085410(piVar7);
      }
LAB_00082241:
      piVar7 = local_30;
    } while (iVar4 < 8);
    for (; piVar1 != piVar7; piVar1 = piVar1 + 1) {
      uVar6 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      local_28 = DAT_00401f68;
      local_24 = DAT_00401f6c;
      cVar3 = FUN_00083d10(param_1,*piVar1,&uStack_20);
      if (cVar3 != '\0') {
        uStack_1c = DAT_00401f74;
        iVar4 = (**(code **)(*param_1 + 0x210))();
        iVar8 = 0;
        while( true ) {
          if ((*(int *)(iVar4 + 0x14) == 0) ||
             ((uint)(*(int *)(iVar4 + 0x18) - *(int *)(iVar4 + 0x14) >> 4) <= uVar6))
          goto LAB_000822f2;
          if (*(int *)(*(int *)(iVar4 + 0x14) + iVar8) == local_28) break;
          uVar6 = uVar6 + 1;
          iVar8 = iVar8 + 0x10;
        }
        iVar4 = FUN_00077da0(3);
        if (iVar4 != 0) {
          FUN_00077eb0(iVar4,0);
        }
LAB_000822f2:
        uStack_1c = DAT_00401f88;
        iVar4 = (**(code **)(*param_1 + 0x210))();
        uVar6 = 0;
        iVar8 = 0;
        while( true ) {
          param_1 = local_4;
          if ((*(int *)(iVar4 + 0x14) == 0) ||
             ((uint)(*(int *)(iVar4 + 0x18) - *(int *)(iVar4 + 0x14) >> 4) <= uVar6))
          goto LAB_00082351;
          if (*(int *)(*(int *)(iVar4 + 0x14) + iVar8) == local_28) break;
          uVar6 = uVar6 + 1;
          iVar8 = iVar8 + 0x10;
        }
        iVar4 = FUN_00077da0(3);
        param_1 = local_4;
        if (iVar4 != 0) {
          FUN_00077eb0(iVar4,0);
          param_1 = local_4;
        }
      }
LAB_00082351:
    }
  }
  if (iStack_14 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iStack_14);
  }
  iStack_14 = 0;
  local_10 = 0;
  local_c = 0;
  if (piStack_34 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(piStack_34);
  }
  return;
}
