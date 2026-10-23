/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A3FA6F14E906443A629D0AE5B702B7469391EE5112615DE0C517C6F378EE44FA
 * Entry: 0x0005a8d0, Ghidra index: 910, label: FUN_0005a8d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005a8d0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int unaff_ESI;
  int unaff_EDI;
  
  piVar1 = *(int **)(unaff_EDI + 4);
  piVar2 = (int *)piVar1[1];
  if (piVar2[2] == unaff_ESI) {
    if (piVar2 != piVar1) {
      *(int *)piVar2[1] = *piVar2;
      *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(piVar2);
    }
  }
  else {
    if (piVar1 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)*piVar1;
    }
    for (; (piVar3 = piVar1, piVar2 != piVar1 && (piVar3 = piVar2, piVar2[2] != unaff_ESI));
        piVar2 = (int *)*piVar2) {
    }
    if (piVar3 != piVar1) {
      *(int *)piVar3[1] = *piVar3;
      *(int *)(*piVar3 + 4) = piVar3[1];
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(piVar3);
    }
  }
  return;
}
