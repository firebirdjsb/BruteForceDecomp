/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0C87553DBA0831BA50D0BF05D88F4C1D25B8D56834A89EB19F39D678EB56623F
 * Entry: 0x00265440, Ghidra index: 8720, label: FUN_00265440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00265440(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0xc) != 0) {
    return 0x80004005;
  }
  if (*(int *)(unaff_ESI + 4) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 4));
  }
  FUN_002656e0();
  FUN_002656e0();
  if (*(int *)(unaff_ESI + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 8));
  }
  return 0;
}
