/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6BAC63655E708EB6CDE3428A7FED92EB765E16EB39B2D1959A84894CC265354A
 * Entry: 0x002414f0, Ghidra index: 8008, label: FUN_002414f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002414f0(void)

{
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(unaff_EDI + 8) - *(int *)(unaff_EDI + 4) >> 6;
    if (iVar1 != 0) goto LAB_00241517;
  }
  FUN_002425e0();
LAB_00241517:
  FUN_00243940(0);
  return iVar1 * 0x40 + *(int *)(unaff_EDI + 4);
}
