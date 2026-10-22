/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0DA3A19C768FDF65B6334766551D2237C4A5E0952F14725EC6CDB6D19F573E1A
 * Entry: 0x00348dc9, Ghidra index: 12909, label: FUN_00348dc9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00348dc9(void)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0xa78);
  if (piVar1 != (int *)0x0) {
    while (piVar1 != (int *)(in_ECX + 0xa78)) {
      piVar2 = (int *)*piVar1;
      FUN_00348065(piVar1);
      piVar1 = piVar2;
    }
  }
  return;
}
