/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 68A8349ADEBECD65520F6321C2DD2836B6E01D96E02FCA64B97CE2FA8ADED3DB
 * Entry: 0x000e3720, Ghidra index: 2818, label: FUN_000e3720
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e3720(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x5c) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x5c));
  }
  *(undefined4 *)(unaff_ESI + 0x5c) = 0;
  *(undefined4 *)(unaff_ESI + 0x60) = 0;
  *(undefined4 *)(unaff_ESI + 100) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x54)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 0x40));
  }
  *(undefined4 *)(unaff_ESI + 0x54) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x50) = 0;
  *(undefined1 *)(unaff_ESI + 0x40) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x18)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 4));
  }
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined4 *)(unaff_ESI + 0x18) = 0xf;
  *(undefined1 *)(unaff_ESI + 4) = 0;
  return;
}
