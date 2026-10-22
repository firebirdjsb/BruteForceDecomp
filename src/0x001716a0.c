/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C8D9444E8FBC25A94D41F3CEFFA079BC98B7C28A4D50F92BDB41C706660B4A6A
 * Entry: 0x001716a0, Ghidra index: 4854, label: FUN_001716a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_001716a0(void)

{
  float *in_ECX;
  
  return SQRT((float10)(in_ECX[2] * in_ECX[2] + *in_ECX * *in_ECX +
                       in_ECX[3] * in_ECX[3] + in_ECX[1] * in_ECX[1]));
}
