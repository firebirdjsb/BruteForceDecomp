/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C78FECB02AF73E600C1FCB169D2F4B6FC10D4CF34B0E8FC280E7506EE2952DB3
 * Entry: 0x00173810, Ghidra index: 4890, label: FUN_00173810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00173810(byte param_1)

{
  FUN_00173830();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
