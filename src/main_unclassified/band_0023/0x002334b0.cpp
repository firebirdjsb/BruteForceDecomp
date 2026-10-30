/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9BB0B4B943F96BFC083B393902034811AAC5F139DD27A66A158A7FE6308AAC60
 * Entry: 0x002334b0, Ghidra index: 7783, label: FUN_002334b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002334b0(void)

{
  float *in_EAX;
  float *in_ECX;
  float *in_EDX;
  
  *in_EAX = in_ECX[6] * in_EDX[2] + *in_EDX * *in_ECX + in_EDX[1] * in_ECX[3];
  in_EAX[1] = in_ECX[1] * *in_EDX + in_ECX[7] * in_EDX[2] + in_EDX[1] * in_ECX[4];
  in_EAX[2] = in_ECX[2] * *in_EDX + in_ECX[8] * in_EDX[2] + in_EDX[1] * in_ECX[5];
  in_EAX[3] = in_EDX[3] * *in_ECX + in_EDX[5] * in_ECX[6] + in_EDX[4] * in_ECX[3];
  in_EAX[4] = in_EDX[3] * in_ECX[1] + in_EDX[4] * in_ECX[4] + in_EDX[5] * in_ECX[7];
  in_EAX[5] = in_EDX[3] * in_ECX[2] + in_EDX[4] * in_ECX[5] + in_EDX[5] * in_ECX[8];
  in_EAX[6] = in_EDX[7] * in_ECX[3] + in_ECX[6] * in_EDX[8] + in_EDX[6] * *in_ECX;
  in_EAX[7] = in_ECX[1] * in_EDX[6] + in_ECX[4] * in_EDX[7] + in_ECX[7] * in_EDX[8];
  in_EAX[8] = in_ECX[2] * in_EDX[6] + in_ECX[5] * in_EDX[7] + in_ECX[8] * in_EDX[8];
  return;
}
