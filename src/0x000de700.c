/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0CF2A7D8E7F56EAEBB51A2CD7750F7A59BFEE8261F8CA797EC84EC799A553617
 * Entry: 0x000de700, Ghidra index: 2716, label: FUN_000de700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000de700(void)

{
  int in_EDX;
  int *piVar1;
  int unaff_EDI;
  
  if (*(undefined4 **)(unaff_EDI + 0xc28) == (undefined4 *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)**(undefined4 **)(unaff_EDI + 0xc28);
  }
  while( true ) {
    if (piVar1 == *(int **)(unaff_EDI + 0xc28)) {
      return 0;
    }
    if ((piVar1[2] != 0) && (piVar1[2] == in_EDX)) break;
    piVar1 = (int *)*piVar1;
  }
  if ((undefined4 *)piVar1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)piVar1[2])(1);
  }
  if (piVar1 != *(int **)(unaff_EDI + 0xc28)) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(piVar1);
  }
  return 1;
}
