/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C3F4B5FB145224F4313351C2F851F8F1348D14F9F2E37F2BE08B446E6069D794
 * Entry: 0x00039460, Ghidra index: 398, label: FUN_00039460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00039460(void)

{
  float *in_EAX;
  float *in_ECX;
  
  return ((float10)*in_EAX - (float10)*in_ECX) * ((float10)*in_EAX - (float10)*in_ECX) +
         (float10)(in_EAX[2] - in_ECX[2]) * (float10)(in_EAX[2] - in_ECX[2]) +
         (float10)(in_EAX[1] - in_ECX[1]) * (float10)(in_EAX[1] - in_ECX[1]);
}
