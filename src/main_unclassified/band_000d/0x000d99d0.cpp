/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B73594BC7A3220983A932AD30D65C34A132D6FC3F0EC621227D4249152CEDBB3
 * Entry: 0x000d99d0, Ghidra index: 2682, label: FUN_000d99d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000d99d0(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int unaff_EDI;
  
  if (*(undefined4 **)(unaff_EDI + 0xa50) == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)**(undefined4 **)(unaff_EDI + 0xa50);
  }
  if (piVar2 != *(int **)(unaff_EDI + 0xa50)) {
    do {
      piVar1 = (int *)piVar2[3];
      if ((piVar1 != (int *)0x0) && ((*(byte *)((int)piVar1 + 0x3d) & 0x40) != 0)) {
        (**(code **)(*piVar1 + 0x1c))(param_1);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(unaff_EDI + 0xa50));
  }
  return;
}
