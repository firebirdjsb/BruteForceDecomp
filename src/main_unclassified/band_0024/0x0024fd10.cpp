/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3924D5638BB6343EC50CDC84089AA8D86D7CFB40449D6F48ED661FB68229875D
 * Entry: 0x0024fd10, Ghidra index: 8329, label: FUN_0024fd10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024fd10(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 8);
  *(int *)(in_ECX + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x45) == '\0') {
    *(int *)(*piVar1 + 4) = in_ECX;
  }
  piVar1[1] = *(int *)(in_ECX + 4);
  if (in_ECX == *(int *)(*(int *)(param_1 + 4) + 4)) {
    *(int **)(*(int *)(param_1 + 4) + 4) = piVar1;
    *piVar1 = in_ECX;
    *(int **)(in_ECX + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(in_ECX + 4);
  if (in_ECX == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = in_ECX;
    *(int **)(in_ECX + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = in_ECX;
  *(int **)(in_ECX + 4) = piVar1;
  return;
}
