/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F39EDEB31AE8DD1C986BA60AAB583FE9566513B9C1671E281D9A278334990E10
 * Entry: 0x00132bf0, Ghidra index: 3862, label: FUN_00132bf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00132bf0(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 4) != 0) {
    FUN_00132c50(*(int *)(unaff_ESI + 4),*(undefined4 *)(unaff_ESI + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 4));
  }
  *(undefined4 *)(unaff_ESI + 4) = 0;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  return;
}
