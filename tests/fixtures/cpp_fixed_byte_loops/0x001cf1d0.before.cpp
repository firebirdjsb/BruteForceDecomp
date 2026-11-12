/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 31827F1D12C85B7E074B3237900FAE2C66A2C7EFF19B9EFCA676188C81BC265C
 * Entry: 0x001cf1d0, Ghidra index: 6096, label: FUN_001cf1d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cf1d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_1 = *in_ECX;
    param_1[1] = in_ECX[1];
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(in_ECX + 2);
    *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)in_ECX + 9);
  }
  return;
}
