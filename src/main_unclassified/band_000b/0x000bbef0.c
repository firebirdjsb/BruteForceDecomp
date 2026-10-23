/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6630C5D4EB0586B3659D8C51320B9ED9EE9278B651158FD372390BFE106C3E33
 * Entry: 0x000bbef0, Ghidra index: 2284, label: FUN_000bbef0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000bbef0(float param_1)

{
  float fVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  fVar1 = *(float *)(in_ECX + 0x50);
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  if (fVar1 != 0.0) {
    *(float *)(in_ECX + 0x54) = 1.0 / fVar1;
    return;
  }
  *(undefined4 *)(in_ECX + 0x58) = 0;
  return;
}
