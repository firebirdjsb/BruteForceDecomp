/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 837561DBAB9C5466603622112D5126412CC4FC88EB33A8706D8EB6F58429FC08
 * Entry: 0x0021a4b0, Ghidra index: 7510, label: FUN_0021a4b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0021a4b0(byte param_1)

{
  FUN_0021a4d0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
