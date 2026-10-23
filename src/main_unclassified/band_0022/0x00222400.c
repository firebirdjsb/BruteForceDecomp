/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5E953C4EB04F505C96A199D75383CECFBB5DEDEA8B781B3CC2DF43791A7D3208
 * Entry: 0x00222400, Ghidra index: 7580, label: FUN_00222400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00222400(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int unaff_EBX;
  int *piVar3;
  
  if (*(undefined4 **)(unaff_EBX + 0x1bc) == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)**(undefined4 **)(unaff_EBX + 0x1bc);
  }
  piVar1 = *(int **)(unaff_EBX + 0x1bc);
  do {
    while( true ) {
      piVar2 = piVar3;
      if (piVar2 == piVar1) {
        return;
      }
      if (piVar2[2] == *param_1) break;
LAB_00222470:
      piVar3 = (int *)*piVar2;
    }
    piVar3 = piVar2 + 6;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 != 0) goto LAB_00222470;
    piVar3 = (int *)*piVar2;
    if (piVar2 != *(int **)(unaff_EBX + 0x1bc)) {
      *(int **)piVar2[1] = (int *)*piVar2;
      *(int *)(*piVar2 + 4) = piVar2[1];
      if (piVar2[9] != 0) {
        FUN_0008f6e0();
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(piVar2);
    }
  } while( true );
}
