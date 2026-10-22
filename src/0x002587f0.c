/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4683368E8312803E82A6F685FBDBE7CA2048B8F77DBE1053B02C9B7F3154F805
 * Entry: 0x002587f0, Ghidra index: 8474, label: FUN_002587f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002587f0(void)

{
  int unaff_EDI;
  undefined1 local_4 [4];
  
  if (*(int *)(unaff_EDI + 0x38) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 0x38));
  }
  *(undefined4 *)(unaff_EDI + 0x38) = 0;
  *(undefined4 *)(unaff_EDI + 0x3c) = 0;
  *(undefined4 *)(unaff_EDI + 0x40) = 0;
  FUN_00258850(local_4,**(undefined4 **)(unaff_EDI + 0x28),*(undefined4 **)(unaff_EDI + 0x28));
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x28));
}
