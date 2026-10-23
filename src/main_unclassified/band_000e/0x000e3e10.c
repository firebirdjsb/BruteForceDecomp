/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 77F01614E7DDB5C8231B3D761BC5A9E643C79572C66AC2B7A06B88082EB057C4
 * Entry: 0x000e3e10, Ghidra index: 2833, label: FUN_000e3e10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_000e3e10(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0xc) == 0) {
    return 0;
  }
  puVar1 = *(undefined4 **)(unaff_EDI + 8);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)*puVar1;
  }
  if (piVar2 != *(int **)(unaff_EDI + 8)) {
    do {
      puVar1 = (undefined4 *)piVar2[2];
      if (puVar1[1] == param_1) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(puVar1);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(unaff_EDI + 8));
  }
  return (uint)puVar1 & 0xffffff00;
}
