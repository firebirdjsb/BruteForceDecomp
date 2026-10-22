/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0E542C593F096720A266159F79A681E02383418EE95E2818CBD85D614DF2840B
 * Entry: 0x001a9610, Ghidra index: 5467, label: FUN_001a9610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a9610(void)

{
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(unaff_EDI + 8) - *(int *)(unaff_EDI + 4)) / 0x18;
    if (iVar1 != 0) goto LAB_001a9645;
  }
  FUN_001b0960();
LAB_001a9645:
  FUN_001b5600();
  return *(int *)(unaff_EDI + 4) + iVar1 * 0x18;
}
