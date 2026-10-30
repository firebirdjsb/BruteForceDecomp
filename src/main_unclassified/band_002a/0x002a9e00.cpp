/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A8014ABA79F32C63375F74377EA1C212EFA7F5DD20B9F80BB29710F862B5223
 * Entry: 0x002a9e00, Ghidra index: 9642, label: FUN_002a9e00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a9e00(void)

{
  int *piVar1;
  int unaff_ESI;
  
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
