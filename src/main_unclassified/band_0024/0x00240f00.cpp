/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BCD4BEC0DF632FECD38542A67CFF8611CA5630AFAAFC0DE13DEA78DEB68D26FA
 * Entry: 0x00240f00, Ghidra index: 7993, label: FUN_00240f00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00240f00(void)

{
  int unaff_ESI;
  
  if (unaff_ESI == 0) {
    return;
  }
  if (*(int *)(unaff_ESI + 4) != 0) {
    FUN_0024a990(*(undefined4 *)(unaff_ESI + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 4));
  }
  *(undefined4 *)(unaff_ESI + 4) = 0;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0();
}
