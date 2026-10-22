/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5E5822CE11DF0CB52A2B393B2CCB5291C393CC8EC0950B6B21154EE43DF5F7B4
 * Entry: 0x002c71a0, Ghidra index: 10094, label: FUN_002c71a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c71a0(byte param_1)

{
  FUN_002c71c0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
