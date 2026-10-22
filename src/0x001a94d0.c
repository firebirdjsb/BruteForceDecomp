/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 04CB009347F862F419AC8131A25995DC8D43F3C31D8E2FE184A6FA4DF3E05E1E
 * Entry: 0x001a94d0, Ghidra index: 5464, label: FUN_001a94d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001a94d0(void)

{
  int unaff_ESI;
  
  if (unaff_ESI == 0) {
    return;
  }
  if (*(int *)(unaff_ESI + 4) != 0) {
    FUN_001d6330(*(undefined4 *)(unaff_ESI + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 4));
  }
  *(undefined4 *)(unaff_ESI + 4) = 0;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0();
}
