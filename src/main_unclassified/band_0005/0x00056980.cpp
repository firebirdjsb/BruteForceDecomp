/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9684E2D001B987C3F3C8177590FAB42DC649C9D4D29DAFC66ADE0950E15A814D
 * Entry: 0x00056980, Ghidra index: 833, label: FUN_00056980
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern void FUN_0005e310(int param_1,int *param_2);

void FUN_00056980(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_10 [4];
  int *local_c;
  int *local_8;
  undefined4 local_4;
  
  piVar2 = (int *)FUN_000120f0();
  if (piVar2[0x167] != 0) {
    local_c = (int *)0x0;
    local_8 = (int *)0x0;
    local_4 = 0;
    FUN_0005e310(*(undefined4 *)(piVar2[0x167] + 0x28),piVar2,local_10);
    piVar4 = local_c;
    if (local_c != local_8) {
      do {
        piVar1 = (int *)*piVar4;
        if (((piVar1 != (int *)0x0) && (piVar2 != piVar1)) &&
           (iVar3 = (**(code **)(*piVar1 + 0xf4))(), iVar3 != 0)) {
          iVar3 = (**(code **)(*piVar1 + 0xf4))();
          *(undefined4 *)(iVar3 + 0x738) = 0;
        }
        piVar4 = piVar4 + 1;
      } while (piVar4 != local_8);
    }
    if (((*(int *)(param_1 + 0x30) != 0) &&
        (piVar2 = (int *)FUN_00056740(param_1,param_2,*(int *)(param_1 + 0x30)),
        piVar2 != (int *)0x0)) && (iVar3 = (**(code **)(*piVar2 + 0xf4))(), iVar3 != 0)) {
      iVar3 = (**(code **)(*piVar2 + 0xf4))();
      *(undefined4 *)(iVar3 + 0x738) = *(undefined4 *)(param_1 + 0x30);
    }
    if (((*(int *)(param_1 + 0x34) != 0) &&
        (piVar2 = (int *)FUN_00056740(param_1,param_2,*(int *)(param_1 + 0x34)),
        piVar2 != (int *)0x0)) && (iVar3 = (**(code **)(*piVar2 + 0xf4))(), iVar3 != 0)) {
      iVar3 = (**(code **)(*piVar2 + 0xf4))();
      *(undefined4 *)(iVar3 + 0x738) = *(undefined4 *)(param_1 + 0x34);
    }
    if (local_c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(local_c);
    }
  }
  return;
}
