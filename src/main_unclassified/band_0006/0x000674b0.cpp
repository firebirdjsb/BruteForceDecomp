/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 96B04AEC39AEE4BB843C2EC56BDB53D6F3B555945F96A41264D00557394AC231
 * Entry: 0x000674b0, Ghidra index: 1128, label: FUN_000674b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000674b0(byte param_1)

{
  FUN_002ae5d0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
