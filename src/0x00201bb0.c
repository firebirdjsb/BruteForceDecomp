/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E9629D289C54906C15F1F71388ABFF9D063C73ABD4D8F1AB752000803B37175B
 * Entry: 0x00201bb0, Ghidra index: 7264, label: FUN_00201bb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00201bb0(byte param_1)

{
  FUN_00201bd0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
