/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4524F58A617EA8BA9A2276239330E04EA845D39D3C12742A64BC20799D8D4B51
 * Entry: 0x000a6b40, Ghidra index: 1975, label: FUN_000a6b40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000a6b40(byte param_1)

{
  FUN_000a52a0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
