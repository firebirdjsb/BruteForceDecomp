/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D3CF4625ADD27E7D8801BC7CD69D37F7160D0AFC6D8ADC576394514CF4B1B718
 * Entry: 0x000b3600, Ghidra index: 2165, label: FUN_000b3600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b3600(byte param_1)

{
  FUN_000b3620();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
