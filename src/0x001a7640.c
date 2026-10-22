/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 55AE8DB87758BEF5D3AD0F484C05ED7FEB1750956E347478D4496F3ED6DBC302
 * Entry: 0x001a7640, Ghidra index: 5403, label: FUN_001a7640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a7640(void)

{
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(unaff_EDI + 8) - *(int *)(unaff_EDI + 4)) / 0x14;
    if (iVar1 != 0) goto LAB_001a7672;
  }
  FUN_001abcf0();
LAB_001a7672:
  FUN_001b2730();
  return *(int *)(unaff_EDI + 4) + iVar1 * 0x14;
}
