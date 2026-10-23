/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F44FF58D239931D79BCC3B6E9801DC5C573A2796BB3EF35E72FA643706CD2A9D
 * Entry: 0x000cb680, Ghidra index: 2517, label: FUN_000cb680
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000cb680(byte param_1)

{
  FUN_000cb6a0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
