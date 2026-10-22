/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7FE73E3F2E05F548B6895931B8FCD5664C4ED899C458B33745864B48AD9BAED8
 * Entry: 0x001a9470, Ghidra index: 5463, label: FUN_001a9470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a9470(void)

{
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(unaff_EDI + 8) - *(int *)(unaff_EDI + 4) >> 5;
    if (iVar1 != 0) goto LAB_001a9494;
  }
  FUN_001b1400();
LAB_001a9494:
  FUN_001b5bb0(0);
  return iVar1 * 0x20 + *(int *)(unaff_EDI + 4);
}
