/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE36B6824F3F535D9893C345DCC5145A7705BD2E6BC3BABE816C1C00DBE03DA3
 * Entry: 0x001e8c80, Ghidra index: 6846, label: FUN_001e8c80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e8c80(int param_1)

{
  int *piVar1;
  int *piVar2;
  int unaff_ESI;
  
  piVar2 = (int *)0x0;
  if (*(undefined4 **)(unaff_ESI + 0xc) != (undefined4 *)0x0) {
    piVar2 = (int *)**(undefined4 **)(unaff_ESI + 0xc);
  }
  do {
    while( true ) {
      piVar1 = piVar2;
      if (piVar1 == *(int **)(unaff_ESI + 0xc)) {
        return;
      }
      if (piVar1[6] == param_1) break;
      piVar2 = (int *)*piVar1;
    }
    piVar2 = (int *)*piVar1;
  } while (piVar1 == *(int **)(unaff_ESI + 0xc));
  *(int **)piVar1[1] = (int *)*piVar1;
  *(int *)(*piVar1 + 4) = piVar1[1];
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(piVar1);
}
