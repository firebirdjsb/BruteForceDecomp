/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 65926B752680A5488A62BD799C5F298E17946692FFBA95286E947F0EF3F175F1
 * Entry: 0x000b8250, Ghidra index: 2218, label: FUN_000b8250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b8250(byte param_1)

{
  FUN_000b8270();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
