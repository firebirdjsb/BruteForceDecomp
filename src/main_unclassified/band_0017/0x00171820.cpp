/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC61321642BF7C1421AEA96DC30FFA75F929308FD8A710A67A81F023818C28C7
 * Entry: 0x00171820, Ghidra index: 4858, label: FUN_00171820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00171820(byte param_1)

{
  FUN_00171890();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
