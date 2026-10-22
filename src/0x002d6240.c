/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 90F7C12EFEA7F53CD52368ED16404D99774E6BEF609C73813049D296B35289D3
 * Entry: 0x002d6240, Ghidra index: 10237, label: FUN_002d6240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d6240(byte param_1)

{
  FUN_002d6260();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
