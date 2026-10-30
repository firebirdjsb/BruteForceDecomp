/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C3DB84AE544A5E1AF09A31247F0DA05743AB5B5268CECC7021F1FB954492373E
 * Entry: 0x0034c320, Ghidra index: 12955, label: FUN_0034c320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034c320(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int *piVar3;
  int iVar4;
  
  iVar1 = *in_ECX;
  piVar3 = in_ECX;
  iVar4 = 0;
  while( true ) {
    iVar2 = iVar1;
    if (iVar2 == 0) {
      return;
    }
    if (iVar2 == param_1) break;
    piVar3 = (int *)(iVar2 + 0xc);
    iVar1 = *piVar3;
    iVar4 = iVar2;
  }
  *piVar3 = *(int *)(iVar2 + 0xc);
  if (*in_ECX == 0) {
    in_ECX[1] = 0;
    return;
  }
  if (in_ECX[1] != iVar2) {
    return;
  }
  in_ECX[1] = iVar4;
  return;
}
