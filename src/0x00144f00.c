/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ADE78011A22B673EC25BCA7591AB79BA62069669426E5FA20EB6C683277D4A18
 * Entry: 0x00144f00, Ghidra index: 4182, label: FUN_00144f00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00144f00(byte param_1)

{
  FUN_00144f20();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
