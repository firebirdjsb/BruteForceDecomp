/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E8964D9B736DB7A3FC505EB481BBE0ADB5314236D1D5FF04B067BE455AECAF6D
 * Entry: 0x001a6de0, Ghidra index: 5382, label: FUN_001a6de0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001a6de0(void)

{
  int unaff_ESI;
  
  if (unaff_ESI == 0) {
    return;
  }
  if (*(int *)(unaff_ESI + 4) != 0) {
    FUN_00086b80(*(undefined4 *)(unaff_ESI + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 4));
  }
  *(undefined4 *)(unaff_ESI + 4) = 0;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0();
}
