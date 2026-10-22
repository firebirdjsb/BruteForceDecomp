/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 811A9FDE66CCF1A2513E97510E193AD919B2350EC7B3F4FC3B8FA701A2C70B12
 * Entry: 0x00058ef0, Ghidra index: 887, label: FUN_00058ef0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00058ef0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_EAX;
  int in_ECX;
  
  fVar1 = *(float *)(in_ECX + 0x1c) - *(float *)(in_EAX + 0x1c);
  fVar2 = *(float *)(in_ECX + 0x18) - *(float *)(in_EAX + 0x18);
  fVar3 = *(float *)(in_ECX + 0x14) - *(float *)(in_EAX + 0x14);
  return (float10)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
}
