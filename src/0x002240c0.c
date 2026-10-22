/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DF9CD1C8A845E6957F9616CE1B78C49BDFE4EB2EF0673D03B45AD6D3C3C928B1
 * Entry: 0x002240c0, Ghidra index: 7611, label: FUN_002240c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002240c0(byte param_1)

{
  FUN_002240e0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
