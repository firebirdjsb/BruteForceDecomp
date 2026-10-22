/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4182D4F5DDD2DDF7E1E9DC519BB4B62D45BD5F24B8F7F5FCFB4FD2B7450E18A0
 * Entry: 0x0010a100, Ghidra index: 3420, label: FUN_0010a100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010a100(byte param_1)

{
  FUN_0010a120();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
