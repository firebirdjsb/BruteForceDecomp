/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0040797F96979F3494ED37375F7EDDE25F7913916972FEAEBE7BC875465614C9
 * Entry: 0x002d5de0, Ghidra index: 10233, label: FUN_002d5de0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d5de0(void)

{
  int *piVar1;
  int iVar2;
  int *in_EDX;
  int *unaff_ESI;
  
  if (in_EDX == (int *)0x0) {
    return;
  }
  piVar1 = (int *)in_EDX[1];
  iVar2 = *in_EDX;
  if (piVar1 == (int *)0x0) {
    *unaff_ESI = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 4) = 0;
      unaff_ESI[1] = *(int *)(iVar2 + 8);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    }
    unaff_ESI[1] = 0x501502f9;
  }
  else {
    *piVar1 = iVar2;
    if (iVar2 != 0) {
      *(int **)(iVar2 + 4) = piVar1;
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0();
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0();
}
