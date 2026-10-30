/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E627B364B57CEC30AE12F1FFE6BB73D72B9134D4E5560F946ABAE372C4F7A49F
 * Entry: 0x00141090, Ghidra index: 4097, label: FUN_00141090
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00141090(float param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int unaff_ESI;
  
  if (*(undefined4 **)(unaff_ESI + 0x20) == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)**(undefined4 **)(unaff_ESI + 0x20);
  }
  piVar1 = *(int **)(unaff_ESI + 0x20);
  do {
    while( true ) {
      piVar2 = piVar3;
      if (piVar2 == piVar1) {
        return;
      }
      piVar2[3] = (int)((float)piVar2[3] - param_1);
      if ((float)piVar2[3] < 0.0 != ((float)piVar2[3] == 0.0)) break;
      piVar3 = (int *)*piVar2;
    }
    piVar3 = (int *)*piVar2;
  } while (piVar2 == *(int **)(unaff_ESI + 0x20));
  *(int **)piVar2[1] = (int *)*piVar2;
  *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(piVar2);
}
