/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6FBEFD9904CF13F1AB1EB98539ACEBCA5007412BD7066C8602195E82BAA4CF51
 * Entry: 0x000613b0, Ghidra index: 1020, label: FUN_000613b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00060c00(void);

void FUN_000613b0(byte param_1)

{
  FUN_00060c00();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
