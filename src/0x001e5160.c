/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 65BFC00EDC03AA302A83DD1E6D1CB64472598DA10C53A23B358D203FB03B324E
 * Entry: 0x001e5160, Ghidra index: 6792, label: FUN_001e5160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e5160(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x264) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x264));
  }
  if (*(int *)(unaff_ESI + 0x268) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x268));
  }
  if (*(int *)(unaff_ESI + 0x24c) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x24c));
  }
  if (*(int *)(unaff_ESI + 0x250) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(unaff_ESI + 0x250));
  }
  return;
}
