/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 70F77BEDF5209E68AD93A246E9A20877B704AB7E8E18D7CB3AB18BA47B97EBAC
 * Entry: 0x001a6e30, Ghidra index: 5383, label: FUN_001a6e30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a6e30(void)

{
  undefined4 in_ECX;
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(unaff_EDI + 8) - *(int *)(unaff_EDI + 4) >> 2;
    if (iVar1 != 0) goto LAB_001a6e55;
  }
  FUN_0001b650();
LAB_001a6e55:
  FUN_0014c470(in_ECX);
  return *(int *)(unaff_EDI + 4) + iVar1 * 4;
}
