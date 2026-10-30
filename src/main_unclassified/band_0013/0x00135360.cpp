/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3648F9271EE8D4D8F021BF083DDA336CB5680FB263CB43A3DF9D4AF0B42BFF36
 * Entry: 0x00135360, Ghidra index: 3873, label: FUN_00135360
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00135360(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int in_EAX;
  
  piVar1 = *(int **)(in_EAX + 8);
  piVar2 = (int *)*piVar1;
  while (piVar2 != piVar1) {
    puVar3 = (undefined4 *)piVar2[4];
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
    FUN_0012aba0();
    piVar1 = *(int **)(in_EAX + 8);
  }
  FUN_001354d0(*(undefined4 *)(*(int *)(in_EAX + 8) + 4));
  *(int *)(*(int *)(in_EAX + 8) + 4) = *(int *)(in_EAX + 8);
  *(undefined4 *)(in_EAX + 0xc) = 0;
  *(undefined4 *)*(undefined4 *)(in_EAX + 8) = *(undefined4 *)(in_EAX + 8);
  *(int *)(*(int *)(in_EAX + 8) + 8) = *(int *)(in_EAX + 8);
  return;
}
