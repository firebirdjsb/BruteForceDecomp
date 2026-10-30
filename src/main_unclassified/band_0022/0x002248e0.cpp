/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A4C7B39C6E7FE2696508275CE92DA635B31A4F6078CCB8EBF8F174A4BB15EA3A
 * Entry: 0x002248e0, Ghidra index: 7621, label: FUN_002248e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002248e0(void)

{
  int unaff_EDI;
  undefined1 local_4 [4];
  
  FUN_00224880();
  if (*(int *)(unaff_EDI + 0x6c) != 0) {
    FUN_0008f6e0();
  }
  FUN_00225e60(local_4,**(undefined4 **)(unaff_EDI + 0x5c),*(undefined4 **)(unaff_EDI + 0x5c));
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x5c));
}
