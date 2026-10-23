/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E777FA64C16CF15FB3A777C6CA1BC4A1C17FB4ED6B0A3B6A7E6A7D4D86B5777B
 * Entry: 0x00241810, Ghidra index: 8017, label: FUN_00241810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00241810(void)

{
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x58) != 0) {
    FUN_0024a930(*(undefined4 *)(unaff_EDI + 0x5c),unaff_EDI + 0x54);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x58));
  }
  *(undefined4 *)(unaff_EDI + 0x58) = 0;
  *(undefined4 *)(unaff_EDI + 0x5c) = 0;
  *(undefined4 *)(unaff_EDI + 0x60) = 0;
  if (*(int *)(unaff_EDI + 0x48) != 0) {
    FUN_0024a8d0(*(undefined4 *)(unaff_EDI + 0x4c),unaff_EDI + 0x44);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x48));
  }
  *(undefined4 *)(unaff_EDI + 0x48) = 0;
  *(undefined4 *)(unaff_EDI + 0x4c) = 0;
  *(undefined4 *)(unaff_EDI + 0x50) = 0;
  if (*(int *)(unaff_EDI + 0x38) != 0) {
    FUN_0024a850(*(int *)(unaff_EDI + 0x38),*(undefined4 *)(unaff_EDI + 0x3c),unaff_EDI + 0x34);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x38));
  }
  *(undefined4 *)(unaff_EDI + 0x38) = 0;
  *(undefined4 *)(unaff_EDI + 0x3c) = 0;
  *(undefined4 *)(unaff_EDI + 0x40) = 0;
  FUN_002439f0();
  if (0xf < *(uint *)(unaff_EDI + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 8));
  }
  *(undefined4 *)(unaff_EDI + 0x1c) = 0xf;
  *(undefined4 *)(unaff_EDI + 0x18) = 0;
  *(undefined1 *)(unaff_EDI + 8) = 0;
  return;
}
