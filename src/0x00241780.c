/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D5DAEE22C83557C278B70E5D56899C30BD0105EC33EE5C34899DDFF4A99BA7C9
 * Entry: 0x00241780, Ghidra index: 8015, label: FUN_00241780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00241780(void)

{
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x14) != 0) {
    FUN_000e3c30(*(undefined4 *)(unaff_EDI + 0x18),unaff_EDI + 0x10);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x14));
  }
  *(undefined4 *)(unaff_EDI + 0x14) = 0;
  *(undefined4 *)(unaff_EDI + 0x18) = 0;
  *(undefined4 *)(unaff_EDI + 0x1c) = 0;
  if (*(int *)(unaff_EDI + 4) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_EDI + 4));
  }
  *(undefined4 *)(unaff_EDI + 4) = 0;
  *(undefined4 *)(unaff_EDI + 8) = 0;
  *(undefined4 *)(unaff_EDI + 0xc) = 0;
  return;
}
