/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E898FB36259400ACB912941503FCEC74EAF53D07DD6522062CE05326DDDD002E
 * Entry: 0x00235a00, Ghidra index: 7816, label: FUN_00235a00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00235a00(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x3c) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x3c));
  }
  *(undefined4 *)(unaff_ESI + 0x3c) = 0;
  *(undefined4 *)(unaff_ESI + 0x40) = 0;
  *(undefined4 *)(unaff_ESI + 0x44) = 0;
  return;
}
