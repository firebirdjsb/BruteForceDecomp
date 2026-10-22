/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 68C40DEAF8C546816F0D4DBDFE9C0DAF718BE4E3437E49E9AC8CD3A531E3B058
 * Entry: 0x000d43e0, Ghidra index: 2647, label: FUN_000d43e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000d43e0(float param_1,float param_2,float param_3)

{
  int in_ECX;
  
  *(float *)(in_ECX + 0xe7c) = param_1;
  *(float *)(in_ECX + 0xe84) = param_3;
  *(float *)(in_ECX + 0xe80) = param_2;
  if (((param_1 != 0.0) || (param_2 != 0.0)) || (param_3 != 0.0)) {
    *(byte *)(in_ECX + 2) = *(byte *)(in_ECX + 2) | 2;
  }
  return;
}
