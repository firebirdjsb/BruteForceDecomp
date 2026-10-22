/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C46804E947E318E566EFCA11CC397E9B3A3CC03D0CA9D90CED76587A9E94B9DA
 * Entry: 0x00087550, Ghidra index: 1616, label: FUN_00087550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00087550(void)

{
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x20) != 0) {
    FUN_00087630(*(undefined4 *)(unaff_EDI + 0x24),unaff_EDI + 0x1c);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 0x20));
  }
  *(undefined4 *)(unaff_EDI + 0x20) = 0;
  *(undefined4 *)(unaff_EDI + 0x24) = 0;
  *(undefined4 *)(unaff_EDI + 0x28) = 0;
  if (0xf < *(uint *)(unaff_EDI + 0x18)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EDI + 4));
  }
  *(undefined4 *)(unaff_EDI + 0x14) = 0;
  *(undefined4 *)(unaff_EDI + 0x18) = 0xf;
  *(undefined1 *)(unaff_EDI + 4) = 0;
  return;
}
