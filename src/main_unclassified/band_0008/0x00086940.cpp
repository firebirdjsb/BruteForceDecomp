/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D1995B19F5BEF9B843E02FAC7BDAEC14B913167E14A7E4B4021F6E4A5CDAD5FC
 * Entry: 0x00086940, Ghidra index: 1590, label: FUN_00086940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00086940(void)

{
  int unaff_ESI;
  
  if (0xf < *(uint *)(unaff_ESI + 0x38)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 0x24));
  }
  *(undefined4 *)(unaff_ESI + 0x38) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x34) = 0;
  *(undefined1 *)(unaff_ESI + 0x24) = 0;
  if (7 < *(uint *)(unaff_ESI + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 8));
  }
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  *(undefined4 *)(unaff_ESI + 0x1c) = 7;
  *(undefined2 *)(unaff_ESI + 8) = 0;
  return;
}
