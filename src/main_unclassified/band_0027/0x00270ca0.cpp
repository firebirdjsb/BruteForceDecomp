/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 44EB8FAF92C228A641A20D9C998D062F570A67C9C95041BD70D0708587D7E584
 * Entry: 0x00270ca0, Ghidra index: 8797, label: FUN_00270ca0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00270ca0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  *in_ECX = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x2d) == '\0') {
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
