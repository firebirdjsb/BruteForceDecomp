/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0696FDC327CAE0EF362B11DC8BC2E529C6B7FF6B4F0CA3673204BC84612ABEB2
 * Entry: 0x00278160, Ghidra index: 8918, label: FUN_00278160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00278160(float *param_1,float param_2)

{
  float *in_EAX;
  float *in_ECX;
  float *in_EDX;
  
  if (in_EAX == (float *)0x0) {
    in_EAX = in_EDX;
  }
  if (param_1 == (float *)0x0) {
    param_1 = in_ECX;
  }
  return ((float10)*in_EDX + (float10)*in_EDX +
         ((float10)*in_ECX - (float10)*in_EAX) * (float10)param_2 +
         ((((float10)*in_EDX * (float10)3.0 - (float10)*in_EAX) - (float10)*in_ECX * (float10)3.0) +
         (float10)*param_1) * (float10)param_2 * (float10)param_2 * (float10)param_2 +
         (((float10)*in_ECX * (float10)4.0 +
          (((float10)*in_EAX + (float10)*in_EAX) - (float10)*in_EDX * (float10)5.0)) -
         (float10)*param_1) * (float10)param_2 * (float10)param_2) * (float10)0.5;
}
