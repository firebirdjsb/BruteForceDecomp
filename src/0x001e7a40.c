/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FD73D66C6958FD859260ED3911B7C54972D7335D97DE9D55CE548B9ED2BD5BC9
 * Entry: 0x001e7a40, Ghidra index: 6821, label: FUN_001e7a40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e7a40(int param_1)

{
  int unaff_ESI;
  int unaff_EDI;
  
  if ((param_1 != 0) && (unaff_ESI != 0)) {
    FUN_001e7f50(unaff_EDI + 4);
    FUN_001e7f80(param_1);
    FUN_001e7fb0(param_1,unaff_EDI + 0x1c);
    FUN_001e7fe0(unaff_EDI + 0x28);
    *(byte *)(unaff_ESI + 6) = *(byte *)(unaff_EDI + 0x34) >> 3 & 1;
    *(byte *)(unaff_ESI + 5) = *(byte *)(unaff_EDI + 0x34) >> 4 & 1;
    if ((*(byte *)(unaff_EDI + 0x34) & 1) != 0) {
      *(undefined4 *)(unaff_ESI + 8) = 0xbf800000;
      *(float *)(unaff_ESI + 0xc) = *(float *)(unaff_EDI + 0x3c) + 0.5;
      return;
    }
    *(undefined4 *)(unaff_ESI + 8) = 0x3f800000;
    *(float *)(unaff_ESI + 0xc) = *(float *)(unaff_EDI + 0x3c) + 0.5;
  }
  return;
}
