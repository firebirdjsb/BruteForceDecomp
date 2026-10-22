/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A6BD1142256EBBE269A98F84C164652CDD9A13879C9C60429238F877E5BF9864
 * Entry: 0x0024db50, Ghidra index: 8300, label: FUN_0024db50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024db50(void)

{
  int unaff_ESI;
  
  if (0xf < *(uint *)(unaff_ESI + 0x34)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 0x20));
  }
  *(undefined4 *)(unaff_ESI + 0x34) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x30) = 0;
  *(undefined1 *)(unaff_ESI + 0x20) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x18)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 4));
  }
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined4 *)(unaff_ESI + 0x18) = 0xf;
  *(undefined1 *)(unaff_ESI + 4) = 0;
  return;
}
