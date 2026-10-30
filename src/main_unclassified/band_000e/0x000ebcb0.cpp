/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 94097A894C4583218CD5E2B43AA1395A7C7E91C64AE924E6A7EED33F1FD20F60
 * Entry: 0x000ebcb0, Ghidra index: 2909, label: FUN_000ebcb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ebcb0(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x94) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x94));
  }
  *(undefined4 *)(unaff_ESI + 0x94) = 0;
  *(undefined4 *)(unaff_ESI + 0x98) = 0;
  *(undefined4 *)(unaff_ESI + 0x9c) = 0;
  if (*(int *)(unaff_ESI + 0x44) != 0) {
    FUN_0008f6e0();
  }
  if (*(int *)(unaff_ESI + 0x3c) != 0) {
    FUN_0008f6e0();
  }
  FUN_00059bf0();
  return;
}
