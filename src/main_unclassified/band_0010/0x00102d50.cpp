/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 23C1495074F3C378FF34A9966B09596F4CD6FBE2D2B0E704DF0C042636C399C2
 * Entry: 0x00102d50, Ghidra index: 3280, label: FUN_00102d50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00102d50(void)

{
  int *piVar1;
  int unaff_EDI;
  
  piVar1 = *(int **)(unaff_EDI + 0x7c);
  if (piVar1 != *(int **)(unaff_EDI + 0x80)) {
    do {
      if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar1)(1);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)(unaff_EDI + 0x80));
  }
  if (*(int *)(unaff_EDI + 0x7c) == 0) {
    *(undefined4 *)(unaff_EDI + 0x7c) = 0;
    *(undefined4 *)(unaff_EDI + 0x80) = 0;
    *(undefined4 *)(unaff_EDI + 0x84) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(int *)(unaff_EDI + 0x7c));
}
