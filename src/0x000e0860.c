/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E9ED3A768E7A6820E32F6D2386617645BE205D7B478894A65359F7979EE51B06
 * Entry: 0x000e0860, Ghidra index: 2750, label: FUN_000e0860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e0860(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int unaff_EDI;
  
  piVar1 = *(int **)(unaff_EDI + 4);
  if (piVar1 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)*piVar1;
  }
  do {
    while( true ) {
      piVar2 = piVar3;
      if (piVar2 == piVar1) {
        return;
      }
      if (piVar2[2] == *param_1) break;
      piVar3 = (int *)*piVar2;
    }
    piVar3 = (int *)*piVar2;
  } while (piVar2 == *(int **)(unaff_EDI + 4));
  *(int *)piVar2[1] = *piVar2;
  *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(piVar2);
}
