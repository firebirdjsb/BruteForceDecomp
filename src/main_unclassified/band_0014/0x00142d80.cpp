/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 74A7CB863AC0FBB4693D79F54944D551E45658EC8452525852ECDD8E1AEA1B73
 * Entry: 0x00142d80, Ghidra index: 4137, label: FUN_00142d80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00142d80(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x24) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x24));
  }
  *(undefined4 *)(unaff_ESI + 0x24) = 0;
  *(undefined4 *)(unaff_ESI + 0x28) = 0;
  *(undefined4 *)(unaff_ESI + 0x2c) = 0;
  if (*(int *)(unaff_ESI + 0x14) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x14));
  }
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  if (*(int *)(unaff_ESI + 4) != 0) {
    FUN_00144b90(*(undefined4 *)(unaff_ESI + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 4));
  }
  *(undefined4 *)(unaff_ESI + 4) = 0;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  return;
}
