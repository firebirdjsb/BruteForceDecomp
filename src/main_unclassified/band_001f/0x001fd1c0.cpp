/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8D37A218FCA1EC589BF97643A563DE7851CFC031D142AAC086E0D8CB35EE7C18
 * Entry: 0x001fd1c0, Ghidra index: 7186, label: FUN_001fd1c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001fd1c0(byte param_1)

{
  FUN_00201400();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
