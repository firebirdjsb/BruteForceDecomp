/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 473EC14735E503C9998500A5A80EA49320F0378ADF0EC3E98F3EF3C11496BAFC
 * Entry: 0x002b0b10, Ghidra index: 9732, label: FUN_002b0b10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b0b10(void)

{
  int *piVar1;
  int unaff_ESI;
  
  piVar1 = *(int **)(unaff_ESI + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x3c) = 0;
  }
  piVar1 = *(int **)(unaff_ESI + 0x38);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x38) = 0;
  }
  piVar1 = *(int **)(unaff_ESI + 0x34);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x34) = 0;
  }
  piVar1 = *(int **)(unaff_ESI + 0x30);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x30) = 0;
  }
  FUN_00062050();
  return;
}
