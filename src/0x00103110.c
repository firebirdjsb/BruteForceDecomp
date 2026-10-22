/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4FA8F651A0EE5401A32AA19BEB4A29F4F33399A61F1713FA050D086A18C1F29F
 * Entry: 0x00103110, Ghidra index: 3288, label: FUN_00103110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_00103110(int *param_1)

{
  undefined1 uVar1;
  int in_ECX;
  int *piVar2;
  
  piVar2 = *(int **)(in_ECX + 0x7c);
  uVar1 = 0;
  if (piVar2 != *(int **)(in_ECX + 0x80)) {
    while (*(int *)(*piVar2 + 0x24) != *param_1) {
      piVar2 = piVar2 + 1;
      if (piVar2 == *(int **)(in_ECX + 0x80)) {
        return uVar1;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}
