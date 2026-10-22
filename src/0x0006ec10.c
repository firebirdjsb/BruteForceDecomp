/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6A247F0D09FDF704697688B0265F52C34FC3BD04DD9791992756FEF38C0FF053
 * Entry: 0x0006ec10, Ghidra index: 1249, label: FUN_0006ec10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0006ec10(void)

{
  float *in_EAX;
  float *in_ECX;
  float *in_EDX;
  
  *in_EAX = *in_EDX * *in_ECX +
            in_EDX[1] * in_ECX[1] + in_EDX[2] * in_ECX[2] + in_EDX[3] * in_ECX[3];
  in_EAX[1] = in_EDX[5] * in_ECX[1] +
              in_EDX[6] * in_ECX[2] + in_EDX[4] * *in_ECX + in_EDX[7] * in_ECX[3];
  in_EAX[2] = in_EDX[9] * in_ECX[1] +
              in_EDX[10] * in_ECX[2] + in_EDX[8] * *in_ECX + in_EDX[0xb] * in_ECX[3];
  in_EAX[3] = in_EDX[0xd] * in_ECX[1] +
              in_EDX[0xe] * in_ECX[2] + in_EDX[0xc] * *in_ECX + in_EDX[0xf] * in_ECX[3];
  return;
}
