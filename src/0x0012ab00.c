/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9AA07E69FC7B1DA31D6D56E64DC52965529749011D2DD988509C573D9BD12434
 * Entry: 0x0012ab00, Ghidra index: 3770, label: FUN_0012ab00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0012ab00(int param_1)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  *in_ECX = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x15) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = in_ECX;
  }
  *(int *)(iVar1 + 4) = in_ECX[1];
  if (in_ECX == *(int **)(*(int *)(param_1 + 4) + 4)) {
    *(int *)(*(int *)(param_1 + 4) + 4) = iVar1;
    *(int **)(iVar1 + 8) = in_ECX;
    in_ECX[1] = iVar1;
    return;
  }
  piVar2 = (int *)in_ECX[1];
  if (in_ECX == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = in_ECX;
    in_ECX[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = in_ECX;
  in_ECX[1] = iVar1;
  return;
}
