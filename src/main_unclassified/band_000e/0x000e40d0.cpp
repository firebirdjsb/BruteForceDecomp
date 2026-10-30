/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5FE294B5FC73F1746F6879742E9898CA2EE7A9F5BE8FDD337CF1751DF665916
 * Entry: 0x000e40d0, Ghidra index: 2838, label: FUN_000e40d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e40d0(float param_1)

{
  float fVar1;
  int *piVar2;
  int in_EAX;
  int iVar3;
  int *piVar4;
  
  *(float *)(in_EAX + 0x50) = param_1 + *(float *)(in_EAX + 0x50);
  while( true ) {
    if (*(int *)(in_EAX + 0xc) == 0) {
      return;
    }
    if (*(int **)(in_EAX + 8) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = **(int **)(in_EAX + 8);
    }
    fVar1 = *(float *)(iVar3 + 8);
    if (*(float *)(in_EAX + 0x50) < *(float *)((int)fVar1 + 0xc)) break;
    piVar2 = *(int **)(in_EAX + 8);
    if (piVar2 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)*piVar2;
    }
    if (piVar4 != piVar2) {
      *(int *)piVar4[1] = *piVar4;
      *(int *)(*piVar4 + 4) = piVar4[1];
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(piVar4);
    }
    FUN_000e4230();
    if (*(undefined4 **)((int)fVar1 + 0x1c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)fVar1 + 0x1c))(1);
      *(undefined4 *)((int)fVar1 + 0x1c) = 0;
    }
    param_1 = fVar1;
    if (*(undefined4 **)((int)fVar1 + 0x1c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)fVar1 + 0x1c))(1);
      *(undefined4 *)((int)fVar1 + 0x1c) = 0;
    }
    FUN_000e4570(&param_1);
    *(int *)(in_EAX + 100) = *(int *)(in_EAX + 100) + -1;
  }
  return;
}
