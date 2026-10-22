/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9A12FED5D5C1B3CC66D56F23FFFDC884743C9ED5553A69BC96BDDD0214C2362A
 * Entry: 0x00061410, Ghidra index: 1022, label: FUN_00061410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00061410(byte param_1)

{
  FUN_0005f7b0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
