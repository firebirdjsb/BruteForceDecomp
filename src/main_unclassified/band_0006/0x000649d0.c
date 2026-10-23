/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1AB735F460CB83E56C7E9E572A0C39CD44C810D95DB70EA6563C6FD033F23981
 * Entry: 0x000649d0, Ghidra index: 1097, label: FUN_000649d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000649d0(void)

{
  int *piVar1;
  int unaff_ESI;
  
  piVar1 = *(int **)(unaff_ESI + 0x60);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0x60) = 0;
  }
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
  FUN_00065260();
  return;
}
