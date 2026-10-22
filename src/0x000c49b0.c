/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CAAC0B5AFB79F97FC3150768F8A0252B9222000FC87B8624E577FC25E06618BF
 * Entry: 0x000c49b0, Ghidra index: 2409, label: FUN_000c49b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c49b0(byte param_1)

{
  FUN_000c49d0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
