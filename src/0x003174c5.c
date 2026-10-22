/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 06E8630DF9ABD22BE0A0CF9161D826F46288A075FBBA5B77B8A367EA5313FAF1
 * Entry: 0x003174c5, Ghidra index: 12176, label: FUN_003174c5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_003174c5(float param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)log2((float10)param_1);
  return (int)ROUND((float10)4096.0 * fVar1);
}
