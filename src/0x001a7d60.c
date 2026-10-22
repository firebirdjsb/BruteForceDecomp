/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 10943DAF7F8718DF4D5CFB87EA72F2AD447B36565A166E8D2EA358D5BB8427B1
 * Entry: 0x001a7d60, Ghidra index: 5418, label: FUN_001a7d60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a7d60(void)

{
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(unaff_EDI + 8) - *(int *)(unaff_EDI + 4) >> 6;
    if (iVar1 != 0) goto LAB_001a7d87;
  }
  FUN_001acaf0();
LAB_001a7d87:
  FUN_001b2fc0(0,0,0,0,0,0);
  return iVar1 * 0x40 + *(int *)(unaff_EDI + 4);
}
