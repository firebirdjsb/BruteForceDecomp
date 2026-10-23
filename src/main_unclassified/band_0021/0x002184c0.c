/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7C2E76D4F042AF9BEE3613ED1BDFCB1119CC08725F235F867DDC854A0B087150
 * Entry: 0x002184c0, Ghidra index: 7472, label: FUN_002184c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002184c0(void)

{
  int unaff_EDI;
  
  if ((*(int *)(unaff_EDI + 4) != 0) &&
     ((*(int *)(unaff_EDI + 8) - *(int *)(unaff_EDI + 4)) / 0x14 != 0)) {
    FUN_00218e40(*(int *)(unaff_EDI + 8));
    *(int *)(unaff_EDI + 8) = *(int *)(unaff_EDI + 8) + -0x14;
  }
  return;
}
