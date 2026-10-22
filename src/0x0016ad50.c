/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2DD0A8116F0B87891AF1F65568D9C2C04EF2FF127E041A0BABDD7EBF17AA1798
 * Entry: 0x0016ad50, Ghidra index: 4768, label: FUN_0016ad50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016ad50(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int in_EDX;
  int unaff_ESI;
  
  piVar3 = *(int **)(unaff_ESI + 0x2c);
  if (piVar3 != *(int **)(unaff_ESI + 0x30)) {
    while (*piVar3 != in_EDX) {
      piVar3 = piVar3 + 1;
      if (piVar3 == *(int **)(unaff_ESI + 0x30)) {
        return;
      }
    }
    piVar1 = *(int **)(unaff_ESI + 0x30);
    piVar2 = piVar3 + 1;
    if (piVar2 != piVar1) {
      iVar4 = (int)piVar3 - (int)piVar2;
      do {
        *(int *)(iVar4 + (int)piVar2) = *piVar2;
        piVar2 = piVar2 + 1;
      } while (piVar2 != piVar1);
    }
    *(int *)(unaff_ESI + 0x30) = *(int *)(unaff_ESI + 0x30) + -4;
  }
  return;
}
