/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F3FE6EEEECE3A223CEE274453E57540A858861600DB197DCFDC3D9B853788A99
 * Entry: 0x0013f8d0, Ghidra index: 4063, label: FUN_0013f8d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0013f8d0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  iVar3 = param_1;
  if (*(undefined4 **)(param_1 + 0xc) == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)**(undefined4 **)(param_1 + 0xc);
  }
  if (piVar5 != *(int **)(param_1 + 0xc)) {
    do {
      piVar1 = (int *)piVar5[2];
      if ((char)piVar1[7] != '\0') {
        (**(code **)(*piVar1 + 0x14))();
      }
      (**(code **)*piVar1)(1);
      piVar1 = (int *)*piVar5;
      if (piVar5 != *(int **)(iVar3 + 0xc)) {
        *(int **)piVar5[1] = piVar1;
        *(int *)(*piVar5 + 4) = piVar5[1];
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(piVar5);
      }
      piVar5 = piVar1;
    } while (piVar1 != (int *)*(int *)(iVar3 + 0xc));
  }
  puVar2 = *(undefined4 **)(iVar3 + 0xc);
  if (puVar2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar2;
  }
  FUN_001298b0(&param_1,uVar4,puVar2);
  *(undefined4 *)(iVar3 + 4) = 0;
  return;
}
