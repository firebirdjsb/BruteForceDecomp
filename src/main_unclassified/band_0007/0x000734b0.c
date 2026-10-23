/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E4D4EC9B22056F4DF765FC1ED08F16025C78AAAF86B8A114AF63C0CC37998C52
 * Entry: 0x000734b0, Ghidra index: 1297, label: FUN_000734b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000734b0(float param_1)

{
  int in_ECX;
  
  if (param_1 < 0.0) {
    *(undefined4 *)(in_ECX + 0x7c) = 0;
    *(float *)(in_ECX + 0x80) = *(float *)(in_ECX + 0x78) * 0.0;
    return;
  }
  if (10.0 < param_1) {
    param_1 = 10.0;
  }
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  *(float *)(in_ECX + 0x80) = param_1 * *(float *)(in_ECX + 0x78);
  return;
}
