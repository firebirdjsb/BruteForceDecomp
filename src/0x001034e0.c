/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 125FB641C29E3BAB14FE889F97D2C01F94573600B08405996ED5C13F0795452C
 * Entry: 0x001034e0, Ghidra index: 3298, label: FUN_001034e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001034e0(void)

{
  int unaff_EDI;
  
  if (CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(unaff_EDI + 0x6b),*(undefined1 *)(unaff_EDI + 0x68)
                                ),*(undefined1 *)(unaff_EDI + 0x69)),
               *(undefined1 *)(unaff_EDI + 0x6a)) != 0) {
    FUN_001035f0();
    FUN_000ef000(unaff_EDI,0x3f800000);
  }
  return;
}
