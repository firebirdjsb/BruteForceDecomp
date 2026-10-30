/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 82E2698DD23B987626E5EA54FF04BD96BD6F38361594908402236985458C02BD
 * Entry: 0x00234cd0, Ghidra index: 7811, label: FUN_00234cd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00234cd0(void)

{
  float *in_EAX;
  float *in_ECX;
  float *in_EDX;
  float *unaff_ESI;
  
  *unaff_ESI = *in_ECX * *in_EAX + in_ECX[1] * in_EAX[1] + in_ECX[2] * in_EAX[2] + *in_EDX;
  unaff_ESI[1] = in_ECX[4] * in_EAX[1] + in_ECX[3] * *in_EAX + in_ECX[5] * in_EAX[2] + in_EDX[1];
  unaff_ESI[2] = in_ECX[7] * in_EAX[1] + in_ECX[6] * *in_EAX + in_ECX[8] * in_EAX[2] + in_EDX[2];
  return;
}
