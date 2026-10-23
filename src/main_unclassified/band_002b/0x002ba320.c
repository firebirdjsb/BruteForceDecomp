/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 79E95ADC862101334751098CDC2F5E7090A852B7E09D134356A9D7F0D5D9575B
 * Entry: 0x002ba320, Ghidra index: 9882, label: FUN_002ba320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_002ba320(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *in_EAX;
  int in_ECX;
  float10 fVar6;
  
  fVar1 = in_EAX[2] * in_EAX[2];
  fVar2 = in_EAX[1] * in_EAX[1];
  fVar3 = *in_EAX * *in_EAX;
  fVar4 = (fVar2 + fVar1) * *(float *)(in_ECX + 0x34);
  fVar5 = (fVar3 + fVar1) * *(float *)(in_ECX + 0x38);
  fVar1 = (fVar3 + fVar2) * *(float *)(in_ECX + 0x3c);
  if (fVar4 < fVar5) {
    fVar4 = fVar5;
  }
  fVar6 = (float10)fVar4;
  if (fVar6 < (float10)fVar1) {
    fVar6 = (float10)fVar1;
  }
  return (float10)1.0 / (fVar6 + (float10)*(float *)(in_ECX + 0x40));
}
