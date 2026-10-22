/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A06F88EB392CE51796024841931FAC8E9F21D9A75ECC69DE3CE10DD39615FAA5
 * Entry: 0x001553d0, Ghidra index: 4463, label: FUN_001553d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001553d0(byte param_1)

{
  FUN_001553f0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
