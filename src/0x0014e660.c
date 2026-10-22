/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FAA0E48165B35943FF1387D18C9AE6E596B9C017F2F1FB89C2F1E3EBC1CF7054
 * Entry: 0x0014e660, Ghidra index: 4388, label: FUN_0014e660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014e660(byte param_1)

{
  FUN_0014e680();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
