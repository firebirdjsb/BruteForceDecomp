/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 272FF6FDD827A4A9ECB87138E8988757B5D9BF62DA335D3A9262168512CF0CCD
 * Entry: 0x00103380, Ghidra index: 3294, label: FUN_00103380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00103380(byte param_1)

{
  FUN_001033a0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
