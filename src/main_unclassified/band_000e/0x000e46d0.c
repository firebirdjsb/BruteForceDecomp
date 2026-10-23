/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B764CCE54681D221F6DE8F96035E973EDB6B27B7F3B7CABB9711B99F2F30D536
 * Entry: 0x000e46d0, Ghidra index: 2849, label: FUN_000e46d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e46d0(byte param_1)

{
  FUN_000e46f0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
