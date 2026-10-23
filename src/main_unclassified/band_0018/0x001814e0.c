/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E8E16589154747054CF1AF50934962091C42DBE2C2516728C450769744EC9DCE
 * Entry: 0x001814e0, Ghidra index: 5155, label: FUN_001814e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_001814e0(void)

{
  int in_ECX;
  float10 fVar1;
  
  if (*(float *)(in_ECX + 8) < 1.1920929e-07) {
    return (float10)*(float *)(in_ECX + 0x14);
  }
  fVar1 = (float10)*(float *)(in_ECX + 4) / (float10)*(float *)(in_ECX + 8);
  if ((float10)1.0 < fVar1) {
    fVar1 = (float10)1.0;
  }
  return ((float10)*(float *)(in_ECX + 0x14) - (float10)*(float *)(in_ECX + 0x10)) * fVar1 +
         (float10)*(float *)(in_ECX + 0x10);
}
