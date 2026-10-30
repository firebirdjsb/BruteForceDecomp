/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6B164C35AD480A23FA60A5FBF0799063CA1D05F2AFA78E04FFA4E76365C7A0C8
 * Entry: 0x00067af0, Ghidra index: 1135, label: FUN_00067af0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000676d0(void);

void FUN_00067af0(byte param_1)

{
  FUN_000676d0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
