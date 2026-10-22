/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1890B6B273C85A7B10308BF3A9FF9D78DB85C3C1E62B2E8E683423F6361ACDB4
 * Entry: 0x002af4d0, Ghidra index: 9717, label: FUN_002af4d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002af4d0(void)

{
  int *piVar1;
  int unaff_ESI;
  
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
