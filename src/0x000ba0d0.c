/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B4D93E763951E29690AD48E7F4B0C6F915C0349A1E6DA4137B8B1740C221F421
 * Entry: 0x000ba0d0, Ghidra index: 2249, label: FUN_000ba0d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000ba0d0(void)

{
  undefined4 *puVar1;
  undefined4 *in_EDX;
  int *piVar2;
  int unaff_EDI;
  
  if (*(undefined4 **)(unaff_EDI + 0x1354) == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)**(undefined4 **)(unaff_EDI + 0x1354);
  }
  while( true ) {
    if (piVar2 == *(int **)(unaff_EDI + 0x1354)) {
      return 0;
    }
    puVar1 = (undefined4 *)piVar2[2];
    if (puVar1 == in_EDX) break;
    piVar2 = (int *)*piVar2;
  }
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  if (piVar2 != *(int **)(unaff_EDI + 0x1354)) {
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(piVar2);
  }
  return 1;
}
