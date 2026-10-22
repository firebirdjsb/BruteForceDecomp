/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 552C840424A28A224F32F6DE4F474880631E83255688B5E15AD1CE5C7778C338
 * Entry: 0x000645b0, Ghidra index: 1089, label: FUN_000645b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x000645ed) */
/* WARNING: Removing unreachable block (ram,0x000645c8) */
/* WARNING: Removing unreachable block (ram,0x0006460d) */

void FUN_000645b0(void)

{
  uint in_EAX;
  float *in_ECX;
  
  *in_ECX = (float)(in_EAX >> 0x10 & 0xff) * 0.003921569;
  in_ECX[1] = (float)(in_EAX >> 8 & 0xff) * 0.003921569;
  in_ECX[2] = (float)(in_EAX & 0xff) * 0.003921569;
  return;
}
