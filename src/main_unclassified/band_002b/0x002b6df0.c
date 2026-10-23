/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9EED43B9EB4C7046BDD5BFA356FE3633CF2276689BD88A150B47FC8834F34D48
 * Entry: 0x002b6df0, Ghidra index: 9836, label: FUN_002b6df0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b6df0(void)

{
  float *in_EAX;
  float *in_ECX;
  float *in_EDX;
  
  *in_EDX = in_EAX[1] * in_ECX[1] + in_EAX[2] * in_ECX[2] + *in_EAX * *in_ECX;
  in_EDX[1] = *in_ECX * in_EAX[4] + in_EAX[6] * in_ECX[2] + in_EAX[5] * in_ECX[1];
  in_EDX[2] = in_EAX[8] * *in_ECX + in_EAX[10] * in_ECX[2] + in_EAX[9] * in_ECX[1];
  in_EDX[4] = *in_EAX * in_ECX[4] + in_ECX[5] * in_EAX[1] + in_ECX[6] * in_EAX[2];
  in_EDX[5] = in_EAX[4] * in_ECX[4] + in_ECX[6] * in_EAX[6] + in_ECX[5] * in_EAX[5];
  in_EDX[6] = in_ECX[5] * in_EAX[9] + in_EAX[8] * in_ECX[4] + in_ECX[6] * in_EAX[10];
  in_EDX[8] = in_ECX[9] * in_EAX[1] + in_ECX[10] * in_EAX[2] + in_ECX[8] * *in_EAX;
  in_EDX[9] = in_EAX[5] * in_ECX[9] + in_ECX[8] * in_EAX[4] + in_EAX[6] * in_ECX[10];
  in_EDX[10] = in_ECX[10] * in_EAX[10] + in_EAX[8] * in_ECX[8] + in_EAX[9] * in_ECX[9];
  return;
}
