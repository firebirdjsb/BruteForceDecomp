/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E3F8975E5D93F0D9998F084A2B15D0C4C6C2CCF8F692F70F8E7D3F808ED0E95
 * Entry: 0x000c17c0, Ghidra index: 2355, label: FUN_000c17c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_000c17c0(void)

{
  int in_EAX;
  float10 fVar1;
  
  fVar1 = (float10)1.0;
  if (*(char *)(in_EAX + 0x7c) != '\0') {
    return (float10)0.0;
  }
  if ((*(byte *)(in_EAX + 0xbc) & 1) != 0) {
    fVar1 = (float10)1.0 - (float10)*(float *)(in_EAX + 0x98) / (float10)*(float *)(in_EAX + 0x9c);
  }
  return fVar1;
}
