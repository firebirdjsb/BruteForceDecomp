/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 03E3BAF12E81C57C4A36092801DBD09ADFB0F1684A5526031C610E5930383BB7
 * Entry: 0x00110ca0, Ghidra index: 3552, label: FUN_00110ca0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00110ca0(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x14) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x14));
  }
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  return;
}
