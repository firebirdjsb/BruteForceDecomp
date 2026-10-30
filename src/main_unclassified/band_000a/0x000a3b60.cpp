/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6A13C01A24822B5A0BE7F58DE14B236172928341B76FD3F522AEADA1EDB45841
 * Entry: 0x000a3b60, Ghidra index: 1948, label: FUN_000a3b60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000a3b60(byte param_1)

{
  FUN_000a3700();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
