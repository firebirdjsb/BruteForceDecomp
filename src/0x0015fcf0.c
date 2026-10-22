/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8F0848400AC153799EEAFD2641D2791B759C595CF6D56CE5EA4E6569E0EE369F
 * Entry: 0x0015fcf0, Ghidra index: 4580, label: FUN_0015fcf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0015fcf0(void)

{
  int *piVar1;
  int *piVar2;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x110) != 0) {
    piVar1 = *(int **)(unaff_EDI + 0x10c);
    piVar2 = (int *)*piVar1;
    while (piVar2 != piVar1) {
      FUN_00076220();
      FUN_0015fef0();
      if ((undefined4 *)piVar2[5] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar2[5])(1);
        piVar2[5] = 0;
      }
      piVar1 = *(int **)(unaff_EDI + 0x10c);
    }
    FUN_00161410(*(undefined4 *)(*(int *)(unaff_EDI + 0x10c) + 4));
    *(int *)(*(int *)(unaff_EDI + 0x10c) + 4) = *(int *)(unaff_EDI + 0x10c);
    *(undefined4 *)(unaff_EDI + 0x110) = 0;
    *(undefined4 *)*(undefined4 *)(unaff_EDI + 0x10c) = *(undefined4 *)(unaff_EDI + 0x10c);
    *(int *)(*(int *)(unaff_EDI + 0x10c) + 8) = *(int *)(unaff_EDI + 0x10c);
  }
  return;
}
