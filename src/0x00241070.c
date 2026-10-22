/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F4B25B04943B51527724C56E9827EC235E4C57AEB90DD04FFD8278E4E47AD70C
 * Entry: 0x00241070, Ghidra index: 7997, label: FUN_00241070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00241070(void)

{
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(unaff_EDI + 8) - *(int *)(unaff_EDI + 4)) / 0x14;
    if (iVar1 != 0) goto LAB_002410a2;
  }
  FUN_00241cd0();
LAB_002410a2:
  FUN_002432a0();
  return *(int *)(unaff_EDI + 4) + iVar1 * 0x14;
}
