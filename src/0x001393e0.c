/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 26300410D51404F2881D75228A2D97B2832FD8FBFBE77E6822EFAFCD97CDDF94
 * Entry: 0x001393e0, Ghidra index: 3949, label: FUN_001393e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001393e0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    (**(code **)*param_1)();
  }
  return;
}
