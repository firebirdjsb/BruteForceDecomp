/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0CE1C577BC17BF3A9F9FAD3183E968B6F766C4007685F4F479080C1F063EFF12
 * Entry: 0x00272070, Ghidra index: 8828, label: FUN_00272070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00272070(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBX;
  int *piVar3;
  
  piVar2 = *(int **)(unaff_EBX + 0x9c);
  if (piVar2 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)*piVar2;
  }
  if (piVar3 != *(int **)(unaff_EBX + 0x9c)) {
    do {
      iVar1 = piVar3[2];
      piVar2 = (int *)0x0;
      if (*(undefined4 **)(iVar1 + 0x9c) != (undefined4 *)0x0) {
        piVar2 = (int *)**(undefined4 **)(iVar1 + 0x9c);
      }
      if (piVar2 != *(int **)(iVar1 + 0x9c)) {
        do {
        } while (piVar2[2] != unaff_EBX);
        if (piVar2 != *(int **)(iVar1 + 0x9c)) {
          *(int *)piVar2[1] = *piVar2;
          *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(piVar2);
        }
      }
      if (piVar3 != *(int **)(unaff_EBX + 0x9c)) {
        *(undefined4 **)piVar3[1] = (undefined4 *)*piVar3;
        *(int *)(*piVar3 + 4) = piVar3[1];
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(piVar3);
      }
      piVar3 = *(int **)*piVar3;
    } while (piVar3 != *(int **)(unaff_EBX + 0x9c));
  }
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}
