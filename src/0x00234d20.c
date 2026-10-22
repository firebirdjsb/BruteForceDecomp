/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5A90B27F059B9201B1918454DFB1FB50D99624CD7E3F701278F82DE889113E9
 * Entry: 0x00234d20, Ghidra index: 7812, label: FUN_00234d20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00234d20(float *param_1)

{
  float *in_EAX;
  float *in_ECX;
  float *in_EDX;
  float *unaff_ESI;
  float *unaff_EDI;
  
  *param_1 = (((*unaff_ESI * *in_EDX + unaff_ESI[1] * in_EDX[1] + unaff_ESI[2] * in_EDX[2] +
               *unaff_EDI) - *in_ECX * *in_EAX) - in_ECX[1] * in_EAX[1]) - in_ECX[2] * in_EAX[2];
  param_1[1] = (((unaff_ESI[4] * in_EDX[1] + unaff_ESI[5] * in_EDX[2] + unaff_ESI[3] * *in_EDX +
                 unaff_EDI[1]) - in_ECX[3] * *in_EAX) - in_ECX[4] * in_EAX[1]) -
               in_ECX[5] * in_EAX[2];
  param_1[2] = (((unaff_ESI[7] * in_EDX[1] + unaff_ESI[8] * in_EDX[2] + unaff_ESI[6] * *in_EDX +
                 unaff_EDI[2]) - in_ECX[6] * *in_EAX) - in_ECX[7] * in_EAX[1]) -
               in_ECX[8] * in_EAX[2];
  return;
}
