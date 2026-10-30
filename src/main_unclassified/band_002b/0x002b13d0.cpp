/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E1F5DC6539E9201BFE4C7994699B97D15A0C8BB1661F5E081B35E1F1F26E7EB1
 * Entry: 0x002b13d0, Ghidra index: 9739, label: FUN_002b13d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b13d0(void)

{
  int *piVar1;
  int unaff_ESI;
  
  piVar1 = *(int **)(unaff_ESI + 0x5c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x5c) = 0;
  }
  piVar1 = *(int **)(unaff_ESI + 0x58);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x58) = 0;
  }
  piVar1 = *(int **)(unaff_ESI + 0x54);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x54) = 0;
  }
  piVar1 = *(int **)(unaff_ESI + 0x50);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x50) = 0;
  }
  piVar1 = *(int **)(unaff_ESI + 0x4c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x4c) = 0;
  }
  FUN_00065260();
  return;
}
