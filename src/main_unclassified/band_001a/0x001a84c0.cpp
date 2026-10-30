/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 73F0F80DA21C10FAFD1AF4823F7C9B0AA5610F9909FE0BF356C62E6CB4C22D71
 * Entry: 0x001a84c0, Ghidra index: 5438, label: FUN_001a84c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a84c0(void)

{
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(unaff_EDI + 8) - *(int *)(unaff_EDI + 4)) / 0x44;
    if (iVar1 != 0) goto LAB_001a84f5;
  }
  FUN_001ada60();
LAB_001a84f5:
  FUN_001b3980();
  return iVar1 * 0x44 + *(int *)(unaff_EDI + 4);
}
