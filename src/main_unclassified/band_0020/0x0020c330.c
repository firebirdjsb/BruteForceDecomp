/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 67A9155C54895917E4219A03B842C85A20C0EAB880E666A9FF3031F67C2D445D
 * Entry: 0x0020c330, Ghidra index: 7351, label: FUN_0020c330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0020c330(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 4) != 0) {
    FUN_0020d8a0(*(int *)(unaff_ESI + 4),*(undefined4 *)(unaff_ESI + 8));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 4));
  }
  *(undefined4 *)(unaff_ESI + 4) = 0;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  return;
}
