/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 973DD3AD13E55AF665F055C46B1A858B688C84F70940708E04B0D98C5A16E13B
 * Entry: 0x000e13c0, Ghidra index: 2769, label: FUN_000e13c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e13c0(void)

{
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x5c) != 0) {
    FUN_000e2ca0(*(int *)(unaff_EDI + 0x5c),*(undefined4 *)(unaff_EDI + 0x60),unaff_EDI + 0x58);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x5c));
  }
  *(undefined4 *)(unaff_EDI + 0x5c) = 0;
  *(undefined4 *)(unaff_EDI + 0x60) = 0;
  *(undefined4 *)(unaff_EDI + 100) = 0;
  if (*(int *)(unaff_EDI + 0x4c) != 0) {
    FUN_000e3c30(*(undefined4 *)(unaff_EDI + 0x50),unaff_EDI + 0x48);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x4c));
  }
  *(undefined4 *)(unaff_EDI + 0x4c) = 0;
  *(undefined4 *)(unaff_EDI + 0x50) = 0;
  *(undefined4 *)(unaff_EDI + 0x54) = 0;
  if (*(int *)(unaff_EDI + 0x3c) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 0x3c));
  }
  *(undefined4 *)(unaff_EDI + 0x3c) = 0;
  *(undefined4 *)(unaff_EDI + 0x40) = 0;
  *(undefined4 *)(unaff_EDI + 0x44) = 0;
  return;
}
