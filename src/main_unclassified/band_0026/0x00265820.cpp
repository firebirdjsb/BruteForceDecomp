/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A80547D6D6455F41E89AFE33C9BE784AF1C98FAEF867DA726B39346383EAE697
 * Entry: 0x00265820, Ghidra index: 8724, label: FUN_00265820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00265820(byte param_1)

{
  FUN_00264f80();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
