/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B9BB860D3DC3ED31BC9F80663D9BC6652A666A89CF3D60B60007DB5591818E29
 * Entry: 0x000addd0, Ghidra index: 2079, label: FUN_000addd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000addd0(byte param_1)

{
  FUN_000addf0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
