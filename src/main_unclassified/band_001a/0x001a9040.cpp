/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 95DE6D169FA08334FB584874589392FCFED9C99F4157A466509773F5C2046FDE
 * Entry: 0x001a9040, Ghidra index: 5454, label: FUN_001a9040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a9040(void)

{
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(unaff_EDI + 8) - *(int *)(unaff_EDI + 4)) / 0x14;
    if (iVar1 != 0) goto LAB_001a9072;
  }
  FUN_001af960();
LAB_001a9072:
  FUN_001b4c10();
  return *(int *)(unaff_EDI + 4) + iVar1 * 0x14;
}
