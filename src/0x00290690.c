/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1A7CCACBF8D2B8B81A5946EC185FB2755F08F9AA2D2F457F42948D95F32BC0C8
 * Entry: 0x00290690, Ghidra index: 9226, label: FUN_00290690
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00290690(void)

{
  float fVar1;
  short *in_EAX;
  float *in_ECX;
  
  in_ECX[1] = (float)(int)*in_EAX * 3.051851e-05;
  in_ECX[2] = (float)(int)in_EAX[1] * 3.051851e-05;
  fVar1 = (float)(int)in_EAX[2] * 3.051851e-05;
  in_ECX[3] = fVar1;
  fVar1 = ((1.0 - in_ECX[1] * in_ECX[1]) - in_ECX[2] * in_ECX[2]) - fVar1 * fVar1;
  if (0.0 < fVar1) {
    *in_ECX = SQRT(fVar1);
    return;
  }
  *in_ECX = 0.0;
  return;
}
