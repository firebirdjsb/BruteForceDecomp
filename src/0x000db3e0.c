/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 674A0CA6346B3064D31228849CB30BD59713FE83DF1364AB020CAE9AF8A769E6
 * Entry: 0x000db3e0, Ghidra index: 2698, label: FUN_000db3e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_000db3e0(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  uint in_EAX;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int in_ECX;
  int *piVar7;
  
  uVar3 = in_EAX & 0xffffff00;
  if (param_1 != (int *)0x0) {
    if ((*(byte *)((int)param_1 + 0x26) & 8) != 0) {
      (**(code **)(*param_1 + 0xa0))();
    }
    piVar7 = (int *)(-(uint)((*(byte *)((int)param_1 + 0x26) & 0x40) != 0) & (uint)param_1);
    if (piVar7 != (int *)0x0) {
      if ((piVar7[0x69] != 0) &&
         (puVar1 = *(undefined4 **)(piVar7[0x69] + 0x3c), puVar1 != (undefined4 *)0x0)) {
        piVar6 = (int *)puVar1[0x1f];
        (**(code **)*puVar1)(1);
        *(undefined4 *)(piVar7[0x69] + 0x3c) = 0;
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 0x24))(1);
        }
      }
      cVar2 = (**(code **)(*piVar7 + 0x124))();
      if ((cVar2 != '\0') && (iVar4 = FUN_00073510(), iVar4 != 0)) {
        FUN_0006ff00();
        FUN_000db3e0(iVar4);
      }
    }
    FUN_000de5b0(in_ECX,param_1,0xffffffff);
    piVar7 = *(int **)(in_ECX + 0x28);
    piVar6 = (int *)0x0;
    if (piVar7 != (int *)0x0) {
      piVar6 = (int *)*piVar7;
    }
    for (; (piVar6 != piVar7 && ((int *)piVar6[2] != param_1)); piVar6 = (int *)*piVar6) {
    }
    if (piVar6 != piVar7) {
      piVar6[2] = 0;
    }
    (**(code **)*param_1)(1);
    iVar4 = *(int *)(in_ECX + 0x60);
    while (iVar4 != 0) {
      iVar4 = 0;
      if (*(int **)(in_ECX + 0x5c) != (int *)0x0) {
        iVar4 = **(int **)(in_ECX + 0x5c);
      }
      FUN_000db3e0(*(undefined4 *)(iVar4 + 8));
      piVar7 = *(int **)(in_ECX + 0x5c);
      if (piVar7 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)*piVar7;
      }
      if (piVar5 != piVar7) {
        *(int *)piVar5[1] = *piVar5;
        *(int *)(*piVar5 + 4) = piVar5[1];
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(piVar5);
      }
      iVar4 = *(int *)(in_ECX + 0x60);
    }
    if ((piVar6 != *(int **)(in_ECX + 0x28)) && (piVar6 != *(int **)(in_ECX + 0x28))) {
      *(int *)piVar6[1] = *piVar6;
      *(int *)(*piVar6 + 4) = piVar6[1];
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(piVar6);
    }
    piVar7 = *(int **)(in_ECX + 0x4c);
    piVar6 = (int *)0x0;
    if (piVar7 != (int *)0x0) {
      piVar6 = (int *)*piVar7;
    }
    if (piVar6 != piVar7) {
      do {
        if ((int *)piVar6[2] == param_1) break;
        piVar6 = (int *)*piVar6;
      } while (piVar6 != piVar7);
      if ((piVar6 != piVar7) && (piVar6 != *(int **)(in_ECX + 0x4c))) {
        *(int *)piVar6[1] = *piVar6;
        *(int *)(*piVar6 + 4) = piVar6[1];
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(piVar6);
      }
    }
    uVar3 = CONCAT31((int3)((uint)piVar6 >> 8),1);
  }
  return uVar3;
}
