/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BCFFD4D0EFC959079C7B1F33E069EFA3887B22A0736F2E3B984447AD9ABC7A5D
 * Entry: 0x00257600, Ghidra index: 8454, label: FUN_00257600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00257600(void)

{
  int *piVar1;
  int unaff_ESI;
  
  piVar1 = *(int **)(unaff_ESI + 0x20);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x20) = 0;
  }
  piVar1 = *(int **)(unaff_ESI + 0x1c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  }
  piVar1 = *(int **)(unaff_ESI + 0x18);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x18) = 0;
  }
  piVar1 = *(int **)(unaff_ESI + 0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x14) = 0;
  }
  piVar1 = *(int **)(unaff_ESI + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x10) = 0;
  }
  piVar1 = *(int **)(unaff_ESI + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0xc) = 0;
  }
  return;
}
