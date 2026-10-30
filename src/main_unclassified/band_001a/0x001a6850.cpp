/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C4D242913807F9CEB8EDC64793E3E3074A0644ACF4698631B5CF5B9422114DE7
 * Entry: 0x001a6850, Ghidra index: 5366, label: FUN_001a6850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a6850(void)

{
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(unaff_EDI + 8) - *(int *)(unaff_EDI + 4)) / 0x30;
    if (iVar1 != 0) goto LAB_001a6885;
  }
  FUN_001aa0e0();
LAB_001a6885:
  FUN_001b1890();
  return iVar1 * 0x30 + *(int *)(unaff_EDI + 4);
}
