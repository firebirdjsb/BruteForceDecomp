/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EB9BBA8CBA817E854E36F04E25F4F15EFC4F47DDE6909AFB02D96678BE166644
 * Entry: 0x0007e130, Ghidra index: 1495, label: FUN_0007e130
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0007e130(void)

{
  int *piVar1;
  int *piVar2;
  int *in_ECX;
  int *piVar3;
  int iVar4;
  int unaff_EDI;
  
  piVar3 = *(int **)(unaff_EDI + 0x580);
  if (piVar3 != *(int **)(unaff_EDI + 0x584)) {
    while (*(int *)*piVar3 != *in_ECX) {
      piVar3 = piVar3 + 1;
      if (piVar3 == *(int **)(unaff_EDI + 0x584)) {
        return;
      }
    }
    if (*piVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*piVar3);
    }
    piVar1 = *(int **)(unaff_EDI + 0x584);
    piVar2 = piVar3 + 1;
    if (piVar2 != piVar1) {
      iVar4 = (int)piVar3 - (int)piVar2;
      do {
        *(int *)(iVar4 + (int)piVar2) = *piVar2;
        piVar2 = piVar2 + 1;
      } while (piVar2 != piVar1);
    }
    *(int *)(unaff_EDI + 0x584) = *(int *)(unaff_EDI + 0x584) + -4;
  }
  return;
}
