/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2610E5B262BA7EB299FB8E17F8D44161E92DE72846B2BAED7CA4E9B6A6659FC5
 * Entry: 0x00048030, Ghidra index: 569, label: FUN_00048030
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00048030(void)

{
  int *piVar1;
  int *piVar2;
  int in_EDX;
  int unaff_ESI;
  
  piVar1 = *(int **)(in_EDX + 100);
  piVar2 = *(int **)(in_EDX + 0x60);
  if (piVar2 != piVar1) {
    do {
      if (*piVar2 == unaff_ESI) break;
      piVar2 = piVar2 + 2;
    } while (piVar2 != piVar1);
    if (piVar2 != piVar1) {
      piVar2[1] = 0x41200000;
      return;
    }
  }
  FUN_00064490();
  return;
}
