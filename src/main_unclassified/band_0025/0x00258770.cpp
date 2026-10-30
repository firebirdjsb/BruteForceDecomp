/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 072AA384E3E8DFCA3D06290477252A280FA04418465F456D79A3F91399B703EC
 * Entry: 0x00258770, Ghidra index: 8472, label: FUN_00258770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00258770(byte param_1)

{
  FUN_002587f0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
