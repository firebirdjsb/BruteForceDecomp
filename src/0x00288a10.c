/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 36B1524EFDA7BFADABFF8C2CC26B98B090612438837AC5A90B3D732747F95598
 * Entry: 0x00288a10, Ghidra index: 9116, label: FUN_00288a10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00288a10(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBX;
  int *piVar3;
  
  do {
    piVar1 = *(int **)(unaff_EBX + 4);
    if (piVar1 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)*piVar1;
    }
    if (piVar3 == piVar1) {
      return;
    }
    iVar2 = piVar3[2];
    if (iVar2 != 0) {
      FUN_00288610(iVar2);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar2);
    }
  } while (piVar3 == *(int **)(unaff_EBX + 4));
  *(int *)piVar3[1] = *piVar3;
  *(int *)(*piVar3 + 4) = piVar3[1];
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(piVar3);
}
