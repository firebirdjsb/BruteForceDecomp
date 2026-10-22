/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F95A3A95FF785D2EDA5AED900118C3A9176FCBEEE783B6CBDB200F75E2B47D99
 * Entry: 0x000be380, Ghidra index: 2317, label: FUN_000be380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000be380(byte param_1)

{
  FUN_000be3a0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
