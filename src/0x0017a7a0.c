/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5D8AE30B59CDABEB66751BDA3450C8DD0F405A03074BEE4D7C143E5A79EC6243
 * Entry: 0x0017a7a0, Ghidra index: 5013, label: FUN_0017a7a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017a7a0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
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
      cVar4 = (*(code *)*param_1)(piVar2 + 2);
      if (cVar4 != '\0') break;
      piVar3 = (int *)*piVar2;
    }
    piVar3 = (int *)*piVar2;
  } while (piVar2 == *(int **)(unaff_EDI + 4));
  *(int *)piVar2[1] = *piVar2;
  *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(piVar2);
}
