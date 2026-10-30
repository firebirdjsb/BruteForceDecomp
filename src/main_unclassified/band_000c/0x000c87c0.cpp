/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 392B6105839AB42364B3B07D112E79A1BE3285FF288C7698BB090BE036599544
 * Entry: 0x000c87c0, Ghidra index: 2471, label: FUN_000c87c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c87c0(byte param_1)

{
  FUN_000c87e0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
