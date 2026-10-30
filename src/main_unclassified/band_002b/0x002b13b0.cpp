/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F6952FD4828AA73639BAAA0B709832131882EEF5E33220F8A7D9F1682573FD3F
 * Entry: 0x002b13b0, Ghidra index: 9738, label: FUN_002b13b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b13b0(byte param_1)

{
  FUN_002b13d0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
