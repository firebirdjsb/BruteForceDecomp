/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 15BD0349D66C36D25D032578B0FEB4AE6CA63584B8D96F333CC6486A67862BA7
 * Entry: 0x000a1930, Ghidra index: 1910, label: FUN_000a1930
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000a1930(byte param_1)

{
  FUN_000a0d30();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
