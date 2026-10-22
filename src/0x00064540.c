/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2D32E2F8C46A2E0DF9980A9F8D60CA6B59AB91F05C9C1851373DC1D595F3A901
 * Entry: 0x00064540, Ghidra index: 1088, label: FUN_00064540
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00064540(void)

{
  float *in_ECX;
  
  return ((int)(*in_ECX * 255.0) << 8 | (int)(in_ECX[1] * 255.0)) << 8 | (int)(in_ECX[2] * 255.0);
}
