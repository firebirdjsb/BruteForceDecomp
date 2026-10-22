/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B1492B02920C9BB53CE092DF38C9F192B25F62D191CABB2EBEA636DA60E0B3F4
 * Entry: 0x00179190, Ghidra index: 4982, label: FUN_00179190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00179190(byte param_1)

{
  FUN_001791b0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
