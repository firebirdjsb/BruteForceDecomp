/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0FBE57D3665C62BCEFBB59BD2DE65B776A6BDE48D95937AC70CF1EEA6E268478
 * Entry: 0x0024e7d0, Ghidra index: 8303, label: FUN_0024e7d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0024e7d0(void)

{
  int *piVar1;
  int *piVar2;
  int in_EAX;
  uint in_ECX;
  uint in_EDX;
  int *piVar3;
  
  piVar1 = *(int **)(in_EAX + 0x7c);
  piVar3 = *(int **)(in_EAX + 0x78);
  if (piVar3 != piVar1) {
    do {
      if (in_ECX <= *(uint *)(*piVar3 + 8)) break;
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar1);
    if ((piVar3 != piVar1) && (piVar2 = piVar3, *(uint *)(*piVar3 + 8) <= in_EDX)) {
      for (; (piVar2 != piVar1 && (*(uint *)(*piVar2 + 8) <= in_EDX)); piVar2 = piVar2 + 1) {
      }
      FUN_0024e860();
      FUN_0024f210(piVar3,piVar2);
    }
  }
  return 0;
}
