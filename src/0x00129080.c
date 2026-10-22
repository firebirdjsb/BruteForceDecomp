/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A2CD3F9F3564E1A5EFEE1E60AAF95341FB5D271DE3C3D2A7EC7BED389522F23D
 * Entry: 0x00129080, Ghidra index: 3736, label: FUN_00129080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400b88;
extern uint32_t DAT_00400b8c;
extern uint32_t DAT_00400b98;
extern uint32_t DAT_00400b9c;
extern uint32_t DAT_00400ba0;
extern uint32_t DAT_00400ba4;
extern uint32_t DAT_00400ba8;
extern uint32_t DAT_00400bac;
extern uint32_t DAT_00400bb0;
extern uint32_t DAT_00400bb4;
extern uint32_t DAT_00400bb8;
extern uint32_t DAT_00400bbc;
extern uint32_t DAT_00469b58;
undefined1 FUN_00129080(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 uStack_1d;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  cVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x9c))();
  if (cVar1 == '\0') {
    return 0;
  }
  uStack_1d = 0;
  cVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x24))();
  piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
  if ((cVar1 != '\0') && (*piVar2 == 0x17506391)) {
    uStack_1c = 0;
    cVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0xa8))(param_1,&uStack_1c);
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x210))();
      FUN_0001fe40(&uStack_10,4,4,&LAB_0012de40);
      uStack_10 = DAT_00400b88;
      uStack_4 = DAT_00400bb8;
      uStack_c = DAT_00400b8c;
      uStack_8 = uStack_1c;
      iVar3 = FUN_000782c0(4);
      if (iVar3 != 0) {
        uVar4 = FUN_00077e00(iVar3);
        *(undefined4 *)(param_1 + 0x838) = uVar4;
      }
      uStack_4 = DAT_00400bbc;
      iVar3 = FUN_000782c0(4);
      if (iVar3 != 0) {
        uVar4 = FUN_00077e00(iVar3);
        *(undefined4 *)(param_1 + 0x83c) = uVar4;
      }
      cVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0xb8))(param_1);
      if (cVar1 == '\0') {
        FUN_0001fe00(&uStack_10,4,4,FUN_00050b40);
        return 1;
      }
      if (*(int *)(param_1 + 0x2e8) == 0) {
        FUN_0001fe00(&uStack_10,4,4,FUN_00050b40);
        return 0;
      }
      uStack_4 = DAT_00400ba8;
      iVar3 = FUN_000782c0(4);
      if (iVar3 != 0) {
        iStack_14 = FUN_00077e00(iVar3);
        if (0 < iStack_14) {
          uStack_1d = 1;
          uStack_4 = DAT_00400b98;
          iVar3 = FUN_000782c0(4);
          if (iVar3 != 0) {
            iVar3 = FUN_00077e00(iVar3);
            if (iVar3 != 0) {
              iStack_18 = iVar3;
              iVar3 = FUN_00160da0(0xffffffff,1);
              if (iVar3 != 0) {
                FUN_0014dcb0(1);
                iVar3 = FUN_0014d330();
                if (iVar3 != 0) {
                  uStack_4 = DAT_00400b9c;
                  iVar5 = FUN_000782c0(4);
                  if (iVar5 != 0) {
                    uVar4 = FUN_00077e00(iVar5);
                    *(undefined4 *)(iVar3 + 0x1f8) = uVar4;
                  }
                }
              }
            }
          }
          uStack_4 = DAT_00400ba0;
          iVar3 = FUN_000782c0(4);
          if (iVar3 != 0) {
            iVar3 = FUN_00077e00(iVar3);
            if (iVar3 != 0) {
              iStack_18 = iVar3;
              iVar3 = FUN_00160da0(0xffffffff,1);
              if (iVar3 != 0) {
                FUN_0014dcb0(2);
                iVar3 = FUN_0014d3b0();
                if (iVar3 != 0) {
                  uStack_4 = DAT_00400ba4;
                  iVar5 = FUN_000782c0(4);
                  if (iVar5 != 0) {
                    uVar4 = FUN_00077e00(iVar5);
                    *(undefined4 *)(iVar3 + 0x1f8) = uVar4;
                  }
                }
              }
            }
          }
          FUN_0014d020();
          uStack_4 = DAT_00400bac;
          iVar3 = FUN_000782c0(4);
          if (iVar3 != 0) {
            uVar4 = FUN_00077e00(iVar3);
            (**(code **)(*(int *)(param_1 + 0x1b4) + 0x5c))(uVar4);
          }
          uStack_4 = DAT_00400bb0;
          iVar3 = FUN_000782c0(4);
          if (iVar3 != 0) {
            uVar4 = FUN_00077e00(iVar3);
            uStack_4 = DAT_00400bb4;
            iVar3 = FUN_000782c0(4);
            if (iVar3 != 0) {
              uVar6 = FUN_00077e00(iVar3);
              iVar3 = *(int *)(param_1 + 0x2e8);
              *(undefined4 *)(iVar3 + 0x1c0) = uVar4;
              *(undefined4 *)(iVar3 + 0x1c4) = uVar6;
            }
          }
        }
      }
      FUN_0001fe00(&uStack_10,4,4,FUN_00050b40);
    }
  }
  return uStack_1d;
}
