/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8722B66270E18624C92D9A8CD7222CE4BCDD408A09DF48BB4ADF90C22DD2E23F
 * Entry: 0x002c78e0, Ghidra index: 10106, label: FUN_002c78e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c78e0(byte param_1)

{
  FUN_002c7950();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
