/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 00FBC903748FA409C38322A0A27ADD25E2A69C05968280033E53768774130105
 * Entry: 0x0016c400, Ghidra index: 4780, label: FUN_0016c400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016c400(void)

{
  undefined1 *unaff_EDI;
  
  if (*(undefined4 **)(unaff_EDI + 0x10) != *(undefined4 **)(unaff_EDI + 0x14)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(**(undefined4 **)(unaff_EDI + 0x10));
  }
  if (*(int *)(unaff_EDI + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 0x10));
  }
  *(undefined4 *)(unaff_EDI + 0x10) = 0;
  *(undefined4 *)(unaff_EDI + 0x14) = 0;
  *(undefined4 *)(unaff_EDI + 0x18) = 0;
  *unaff_EDI = 0;
  return;
}
