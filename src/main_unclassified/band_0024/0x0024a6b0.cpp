/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E4EFAE23E4B663D2FB0ECB584D951CB72DB56855A6A7E21AA40A1170D7F03934
 * Entry: 0x0024a6b0, Ghidra index: 8213, label: FUN_0024a6b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024a6b0(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 4) != 0) {
    FUN_0024a730(*(int *)(unaff_ESI + 4),*(undefined4 *)(unaff_ESI + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 4));
  }
  *(undefined4 *)(unaff_ESI + 4) = 0;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  return;
}
