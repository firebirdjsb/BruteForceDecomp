/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C9FA95B6FEBA458E35B7104F3D39D40369A186DE2467AED6FB2B96003F18AA8B
 * Entry: 0x002a3d80, Ghidra index: 9536, label: FUN_002a3d80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a3d80(void)

{
  int *piVar1;
  int unaff_ESI;
  
  piVar1 = *(int **)(unaff_ESI + 0x6c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x34))(piVar1,7);
  }
  piVar1 = *(int **)(unaff_ESI + 0x70);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x34))(piVar1,7);
  }
  piVar1 = *(int **)(unaff_ESI + 0x70);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x70) = 0;
  }
  piVar1 = *(int **)(unaff_ESI + 0x6c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x6c) = 0;
  }
  return;
}
