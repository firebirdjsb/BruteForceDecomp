/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BCF1DF19DBC3EA26140C026CEFE15209AB95E4026A3CE70F4F973AD8F76E5142
 * Entry: 0x002430a0, Ghidra index: 8046, label: FUN_002430a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002430a0(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x28));
  }
  *(undefined4 *)(unaff_ESI + 0x28) = 0;
  if (*(int *)(unaff_ESI + 0x24) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x24));
  }
  *(undefined4 *)(unaff_ESI + 0x24) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 0x1c));
}
