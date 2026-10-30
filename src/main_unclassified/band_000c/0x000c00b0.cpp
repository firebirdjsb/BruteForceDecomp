/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 83D6949BD00FB4F0266E9BB1CFF19FBDC74074EAB035C71A57A2C4D58721B2C8
 * Entry: 0x000c00b0, Ghidra index: 2339, label: FUN_000c00b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c00b0(byte param_1)

{
  FUN_000c00d0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
