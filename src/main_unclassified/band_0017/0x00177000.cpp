/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7338A9CA1970B6E4108AE5BAD56C6183C42FFC9E9D2312C0C4AC085C9BE4EAB5
 * Entry: 0x00177000, Ghidra index: 4946, label: FUN_00177000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00177000(byte param_1)

{
  FUN_00177020();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
