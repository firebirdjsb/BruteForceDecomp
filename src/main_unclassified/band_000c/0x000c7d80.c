/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E530EF3FFC632A353452374CC94CD41C910E0E3022F0E246C9D2F29D33C278A2
 * Entry: 0x000c7d80, Ghidra index: 2457, label: FUN_000c7d80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c7d80(byte param_1)

{
  FUN_000c7da0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
