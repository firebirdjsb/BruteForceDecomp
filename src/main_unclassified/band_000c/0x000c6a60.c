/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4AE8971BE30D3AEBC505FF7754803F2F63600C8031D46CE4DB8AD74A6CC29AAE
 * Entry: 0x000c6a60, Ghidra index: 2444, label: FUN_000c6a60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c6a60(byte param_1)

{
  FUN_000c6a80();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
