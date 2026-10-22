/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C34B5D8DBB8BCD9CF4CA2396DD3686E35A42A3D327543D8BD6AFF83F3B7AD2C
 * Entry: 0x000e36d0, Ghidra index: 2817, label: FUN_000e36d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e36d0(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x128) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x128));
  }
  *(undefined4 *)(unaff_ESI + 0x128) = 0;
  *(undefined4 *)(unaff_ESI + 300) = 0;
  *(undefined4 *)(unaff_ESI + 0x130) = 0;
  if (*(int *)(unaff_ESI + 0x118) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x118));
  }
  *(undefined4 *)(unaff_ESI + 0x118) = 0;
  *(undefined4 *)(unaff_ESI + 0x11c) = 0;
  *(undefined4 *)(unaff_ESI + 0x120) = 0;
  return;
}
