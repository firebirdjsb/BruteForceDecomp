/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9F8FF990C4CC046EADEEDF55916359DCBE18D3264F711934EBEFC2987140E7E6
 * Entry: 0x00140f80, Ghidra index: 4094, label: FUN_00140f80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00140f80(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  
  if (*(undefined4 **)(param_1 + 0x10) == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)**(undefined4 **)(param_1 + 0x10);
  }
  piVar1 = *(int **)(param_1 + 0x10);
  do {
    while( true ) {
      piVar3 = piVar4;
      if (piVar3 == piVar1) {
        return;
      }
      puVar2 = (undefined4 *)piVar3[2];
      if (((int)puVar2[2] <= param_2) && ((*(byte *)(puVar2 + 3) & 8) == 0)) break;
      piVar4 = (int *)*piVar3;
    }
    FUN_0013f8d0(puVar2 + 9);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    piVar4 = (int *)*piVar3;
  } while (piVar3 == *(int **)(param_1 + 0x10));
  *(int **)piVar3[1] = (int *)*piVar3;
  *(int *)(*piVar3 + 4) = piVar3[1];
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(piVar3);
}
