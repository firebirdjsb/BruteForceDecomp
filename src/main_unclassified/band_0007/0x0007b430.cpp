/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D611D7E09B8718A57186DF95F3E402C9F19306A7140B4913ED2A7A0EE61619ED
 * Entry: 0x0007b430, Ghidra index: 1466, label: FUN_0007b430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00085660(void);

void FUN_0007b430(void)

{
  int unaff_ESI;
  
  FUN_00085660();
  if (*(int *)(unaff_ESI + 0x80) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x80));
  }
  *(undefined4 *)(unaff_ESI + 0x80) = 0;
  *(undefined4 *)(unaff_ESI + 0x84) = 0;
  *(undefined4 *)(unaff_ESI + 0x88) = 0;
  if (7 < *(uint *)(unaff_ESI + 0x54)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 0x40));
  }
  *(undefined4 *)(unaff_ESI + 0x54) = 7;
  *(undefined4 *)(unaff_ESI + 0x50) = 0;
  *(undefined2 *)(unaff_ESI + 0x40) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x38)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 0x24));
  }
  *(undefined4 *)(unaff_ESI + 0x38) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x34) = 0;
  *(undefined1 *)(unaff_ESI + 0x24) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 8));
  }
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  *(undefined4 *)(unaff_ESI + 0x1c) = 0xf;
  *(undefined1 *)(unaff_ESI + 8) = 0;
  return;
}
