/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BD8404AC490D6FD5998635B9C0EC962C3D0A4FC6930010655F35C27A81C10DA4
 * Entry: 0x0001fd40, Ghidra index: 160, label: FUN_0001fd40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0001fd40(void)

{
  float fVar1;
  float *in_EAX;
  
  fVar1 = 1.0 / SQRT(in_EAX[2] * in_EAX[2] + in_EAX[1] * in_EAX[1] + *in_EAX * *in_EAX);
  *in_EAX = fVar1 * *in_EAX;
  in_EAX[1] = fVar1 * in_EAX[1];
  in_EAX[2] = fVar1 * in_EAX[2];
  return;
}
