/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2919F521BB4F379EF668915A93DD38E36A23558FBB1AB7EB76A3DFE51023BAEA
 * Entry: 0x000ec3f0, Ghidra index: 2925, label: FUN_000ec3f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ec3f0(byte param_1)

{
  FUN_000ec410();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
