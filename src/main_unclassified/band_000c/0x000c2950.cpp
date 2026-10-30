/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6108CAD36CE7C0E93CFA743EC8439815B0F91270EABD02AFCE8AB756D20EA594
 * Entry: 0x000c2950, Ghidra index: 2376, label: FUN_000c2950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c2950(byte param_1)

{
  FUN_000c2970();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
