/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1F6FDFDF679E4270CCC00C271887CEAC6E70E9A9D7B5169AF59DCB5662A6E7A6
 * Entry: 0x001a8f80, Ghidra index: 5452, label: FUN_001a8f80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a8f80(void)

{
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(unaff_EDI + 8) - *(int *)(unaff_EDI + 4) >> 3;
    if (iVar1 != 0) goto LAB_001a8fa4;
  }
  FUN_001afbe0();
LAB_001a8fa4:
  FUN_001b4d80();
  return *(int *)(unaff_EDI + 4) + iVar1 * 8;
}
