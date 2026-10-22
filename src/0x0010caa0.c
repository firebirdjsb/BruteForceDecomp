/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A0366783404736138797AA1EABBE19C46F0A01F43C8D62723B12E2A1F9556C88
 * Entry: 0x0010caa0, Ghidra index: 3474, label: FUN_0010caa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0010caa0(void)

{
  int *piVar1;
  int unaff_EDI;
  
  piVar1 = *(int **)(unaff_EDI + 100);
  if (piVar1 != *(int **)(unaff_EDI + 0x68)) {
    do {
      if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar1)(1);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)(unaff_EDI + 0x68));
  }
  if (*(int *)(unaff_EDI + 100) == 0) {
    *(undefined4 *)(unaff_EDI + 100) = 0;
    *(undefined4 *)(unaff_EDI + 0x68) = 0;
    *(undefined4 *)(unaff_EDI + 0x6c) = 0;
    *(undefined4 *)(unaff_EDI + 0x70) = 0xffffffff;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(int *)(unaff_EDI + 100));
}
