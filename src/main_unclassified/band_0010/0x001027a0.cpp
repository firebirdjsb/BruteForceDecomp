/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BAF8BEE63EBC0167FA0EFF247F8A6DD8F40282FE0725608B3A71BE056871F59A
 * Entry: 0x001027a0, Ghidra index: 3275, label: FUN_001027a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001027a0(byte param_1)

{
  FUN_001027c0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
