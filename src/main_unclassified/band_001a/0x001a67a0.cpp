/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D5878B10AA9F6F395E4E61DBCD07D302F4E0FA4FE2932BE79D61A2DDCF4F9873
 * Entry: 0x001a67a0, Ghidra index: 5364, label: FUN_001a67a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a67a0(void)

{
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(unaff_EDI + 8) - *(int *)(unaff_EDI + 4)) / 0x1c;
    if (iVar1 != 0) goto LAB_001a67d4;
  }
  FUN_001a9ea0();
LAB_001a67d4:
  FUN_001b1740();
  return iVar1 * 0x1c + *(int *)(unaff_EDI + 4);
}
