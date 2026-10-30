/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6F02F2086593B6CBAC14CA30EE1CA3997D212D624AD6C156C20BD292B220DCC7
 * Entry: 0x001a7460, Ghidra index: 5397, label: FUN_001a7460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a7460(void)

{
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(unaff_EDI + 8) - *(int *)(unaff_EDI + 4) >> 6;
    if (iVar1 != 0) goto LAB_001a7484;
  }
  FUN_001ab750();
LAB_001a7484:
  FUN_001b23e0(0);
  return iVar1 * 0x40 + *(int *)(unaff_EDI + 4);
}
