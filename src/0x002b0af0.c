/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9A2B325F54058074FD50D3CB30777050CE445C5EF8A2D6717FA017C1B26C8C28
 * Entry: 0x002b0af0, Ghidra index: 9731, label: FUN_002b0af0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b0af0(byte param_1)

{
  FUN_002b0b10();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
