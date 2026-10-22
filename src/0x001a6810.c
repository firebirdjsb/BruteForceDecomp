/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C8D065CE444632CDAFCF52C0F1A97D3C4E30C45C27D4409377ED7C7C871E3F83
 * Entry: 0x001a6810, Ghidra index: 5365, label: FUN_001a6810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a6810(void)

{
  undefined4 in_ECX;
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(unaff_EDI + 8) - *(int *)(unaff_EDI + 4) >> 2;
    if (iVar1 != 0) goto LAB_001a6835;
  }
  FUN_001a9fd0(in_ECX);
LAB_001a6835:
  FUN_001b1810(0);
  return *(int *)(unaff_EDI + 4) + iVar1 * 4;
}
