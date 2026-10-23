/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A4DC87E723982BE2CF10C5459A4E4571AD905151413910838D7A6010AE882711
 * Entry: 0x000e3e90, Ghidra index: 2834, label: FUN_000e3e90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e3e90(void)

{
  int *piVar1;
  int *piVar2;
  int unaff_ESI;
  
  piVar1 = *(int **)(unaff_ESI + 4);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)*piVar1;
  }
  if (piVar2 != piVar1) {
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(piVar2);
  }
  return;
}
