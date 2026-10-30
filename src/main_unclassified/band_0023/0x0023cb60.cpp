/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3D9717BBBA2C1F99E62A6DAC21003593E6D76110B70F323A0CE33D471D6566E9
 * Entry: 0x0023cb60, Ghidra index: 7941, label: FUN_0023cb60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0023cb60(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *unaff_EBX;
  
  iVar1 = *unaff_EBX;
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)unaff_EBX[1];
    if (puVar4 != (undefined4 *)0x0) {
      FUN_00234470();
      *puVar4 = 0;
      if (puVar4[4] == 0) {
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(puVar4);
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(puVar4[4]);
    }
  }
  else if (iVar1 == 1) {
    FUN_002668e0();
    if (unaff_EBX[1] != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(unaff_EBX[1] + 0x24));
    }
  }
  else {
    if (iVar1 != 2) {
      return;
    }
    iVar1 = unaff_EBX[1];
    *(float *)(iVar1 + 0x1c) = *(float *)(iVar1 + 0x18) + 1.0;
    iVar2 = *(int *)(iVar1 + 4);
    if (((iVar2 != 0) && (iVar2 != -1)) && (piVar3 = *(int **)(iVar2 + 0x58), piVar3 != (int *)0x0))
    {
      (**(code **)(*piVar3 + 0x24))(piVar3,iVar2,(int *)(iVar1 + 4));
    }
    if ((undefined4 *)unaff_EBX[1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)unaff_EBX[1])(1);
      unaff_EBX[1] = 0;
      return;
    }
  }
  unaff_EBX[1] = 0;
  return;
}
