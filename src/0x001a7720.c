/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3C20D878322223E8ABACD166D58E686192F20C4ABFF341240C76C16004F9027D
 * Entry: 0x001a7720, Ghidra index: 5405, label: FUN_001a7720
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a7720(void)

{
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(unaff_EDI + 8) - *(int *)(unaff_EDI + 4)) / 0x14;
    if (iVar1 != 0) goto LAB_001a7752;
  }
  FUN_001abab0();
LAB_001a7752:
  FUN_001b25f0();
  return *(int *)(unaff_EDI + 4) + iVar1 * 0x14;
}
