/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 851DB87EAEB20A43840240C30655738D2F211A59D0B18149955B1D01E06AAF83
 * Entry: 0x002500c0, Ghidra index: 8338, label: FUN_002500c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002500c0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  *in_ECX = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x11) == '\0') {
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
