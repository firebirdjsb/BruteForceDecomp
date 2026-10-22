/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 88BCA626709402D4C5016BCB34AD9BE286D9C4C0246D101C69F727F21B49F558
 * Entry: 0x001a6d80, Ghidra index: 5381, label: FUN_001a6d80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a6d80(void)

{
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(unaff_EDI + 8) - *(int *)(unaff_EDI + 4) >> 6;
    if (iVar1 != 0) goto LAB_001a6da7;
  }
  FUN_001b1020();
LAB_001a6da7:
  FUN_001b5960();
  return iVar1 * 0x40 + *(int *)(unaff_EDI + 4);
}
