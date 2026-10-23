/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DD557ACEE45E60D33D6A68178F4FA3CA3424994E30EA878472C06B6116102C32
 * Entry: 0x001cdab0, Ghidra index: 5978, label: FUN_001cdab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cdab0(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 4) != 0) {
    FUN_000762d0();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 4));
  }
  *(undefined4 *)(unaff_ESI + 4) = 0;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  return;
}
