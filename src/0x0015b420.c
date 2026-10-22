/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 64DA82D823D9F5384EA926055D5A577FE1CE2BDD44C8C4B6C505706414016369
 * Entry: 0x0015b420, Ghidra index: 4525, label: FUN_0015b420
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0015b420(void)

{
  undefined4 uVar1;
  int *piVar2;
  int in_EDX;
  int unaff_ESI;
  
  piVar2 = *(int **)(in_EDX + 0x178);
  uVar1 = 0;
  if (piVar2 != *(int **)(in_EDX + 0x17c)) {
    while (*(int *)(*piVar2 + 4) != unaff_ESI) {
      piVar2 = piVar2 + 1;
      if (piVar2 == *(int **)(in_EDX + 0x17c)) {
        return uVar1;
      }
    }
    uVar1 = *(undefined4 *)*piVar2;
  }
  return uVar1;
}
