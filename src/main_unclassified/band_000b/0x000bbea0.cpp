/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8AFDF69FA527741D89FC69A70D19C4B5F741156BA5535C2EEB4E55C859FC9159
 * Entry: 0x000bbea0, Ghidra index: 2283, label: FUN_000bbea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000bbea0(float param_1)

{
  float fVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x5c) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  fVar1 = *(float *)(in_ECX + 0x4c);
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  if (fVar1 != 0.0) {
    *(float *)(in_ECX + 0x54) = 1.0 / fVar1;
    return;
  }
  *(undefined4 *)(in_ECX + 0x58) = 0x3f800000;
  return;
}
