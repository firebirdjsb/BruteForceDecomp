/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3270441B20CF761547C0C1C6407D0948AAB67C3866564C8D9C9956EF9C590198
 * Entry: 0x000c3b50, Ghidra index: 2395, label: FUN_000c3b50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c3b50(byte param_1)

{
  FUN_000c3b70();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
