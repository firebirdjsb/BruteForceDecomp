/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2F772F2AD54875C468C236347817F08FF9A7A2178C3807BF3E7C6F076B1EA2B5
 * Entry: 0x00145330, Ghidra index: 4191, label: FUN_00145330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00145330(byte param_1)

{
  FUN_00145350();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
