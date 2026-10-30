/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C93746BA24F1CA42B8E70B1DF05F205ED508565B629B538CE637839013C6C9DE
 * Entry: 0x0021ab60, Ghidra index: 7514, label: FUN_0021ab60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0021ab60(undefined4 param_1)

{
  int iVar1;
  int unaff_ESI;
  int *piVar2;
  
  piVar2 = (int *)(unaff_ESI + 0x7c);
  iVar1 = 8;
  do {
    if (*piVar2 != 0) {
      FUN_0021a850(unaff_ESI,piVar2,param_1,0);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (*(int *)(unaff_ESI + 0xec) != 0) {
    FUN_0021d270(param_1);
  }
  if ((*(int **)(unaff_ESI + 0x9c) != (int *)0x0) && (iVar1 = 0, 0 < **(int **)(unaff_ESI + 0x9c)))
  {
    do {
      FUN_0021d270(param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < **(int **)(unaff_ESI + 0x9c));
  }
  return;
}
