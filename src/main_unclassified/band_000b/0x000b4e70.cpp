/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 73746657A461D4D181C6DFEBB79184A7B9A52304F2D4728EDCEBAA311E17A05C
 * Entry: 0x000b4e70, Ghidra index: 2181, label: FUN_000b4e70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b4e70(byte param_1)

{
  FUN_000b4e90();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
