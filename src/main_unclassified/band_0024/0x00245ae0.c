/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CCFD9C27DAEB668270C7027743207637F285CDE91B1BEA9C504121B482793986
 * Entry: 0x00245ae0, Ghidra index: 8085, label: FUN_00245ae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00245ae0(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 4) != 0) {
    FUN_0024a7b0(*(undefined4 *)(unaff_ESI + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 4));
  }
  *(undefined4 *)(unaff_ESI + 4) = 0;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  return;
}
