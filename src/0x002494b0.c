/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 697B707C63DDD7F677454D80113A512A63B06D903DC02D84DF03FFBBDD85F072
 * Entry: 0x002494b0, Ghidra index: 8171, label: FUN_002494b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002494b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_1 = *in_ECX;
    param_1[1] = in_ECX[1];
    param_1[2] = in_ECX[2];
  }
  return;
}
