/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9CBC768EEC8F200694A3E5BD61B429813C352A025EEB266FDF8EDBACE4780FD5
 * Entry: 0x001a7500, Ghidra index: 5400, label: FUN_001a7500
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a7500(void)

{
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(unaff_EDI + 8) - *(int *)(unaff_EDI + 4)) / 0x1c;
    if (iVar1 != 0) goto LAB_001a7534;
  }
  FUN_001ab860();
LAB_001a7534:
  FUN_001b2470();
  return iVar1 * 0x1c + *(int *)(unaff_EDI + 4);
}
