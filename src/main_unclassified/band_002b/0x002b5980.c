/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ED8A7B97939E420BB30A2D83D4CB9CD5AB69E5F8BA38D122D015E6193630F037
 * Entry: 0x002b5980, Ghidra index: 9804, label: FUN_002b5980
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b5980(byte param_1)

{
  FUN_002b5850();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
