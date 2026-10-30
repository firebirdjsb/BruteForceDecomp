/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0C5EA81790AF8961DEA9E956910429333212ED33D8E85F19D64C040B8C741F56
 * Entry: 0x00074580, Ghidra index: 1324, label: FUN_00074580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00074580(void)

{
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x24) != 0) {
    FUN_00076430(*(undefined4 *)(unaff_EDI + 0x28),unaff_EDI + 0x20);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x24));
  }
  *(undefined4 *)(unaff_EDI + 0x24) = 0;
  *(undefined4 *)(unaff_EDI + 0x28) = 0;
  *(undefined4 *)(unaff_EDI + 0x2c) = 0;
  if (0xf < *(uint *)(unaff_EDI + 0x18)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 4));
  }
  *(undefined4 *)(unaff_EDI + 0x14) = 0;
  *(undefined4 *)(unaff_EDI + 0x18) = 0xf;
  *(undefined1 *)(unaff_EDI + 4) = 0;
  return;
}
