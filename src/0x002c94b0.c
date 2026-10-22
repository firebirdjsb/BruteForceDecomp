/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ACEE9556990406D33F9E63672A1B3A8622FCA66B1B5839BF9CA274212192EFAE
 * Entry: 0x002c94b0, Ghidra index: 10137, label: FUN_002c94b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_002c94b0(int param_1)

{
  int iVar1;
  float fVar2;
  int in_ECX;
  float10 fVar3;
  float10 fVar4;
  
  iVar1 = *(int *)(param_1 + 0x90);
  fVar2 = *(float *)(iVar1 + 0x158) + *(float *)(iVar1 + 0x150) + 1e-10;
  fVar3 = (float10)fVar2 * (float10)*(float *)(in_ECX + 0x20);
  fVar4 = (float10)*(float *)(iVar1 + 4) * (float10)*(float *)(in_ECX + 0x24);
  if (fVar4 < fVar3) {
    fVar3 = (float10)(float)fVar4;
  }
  if (fVar3 < (float10)*(float *)(in_ECX + 0x28)) {
    fVar3 = (float10)*(float *)(in_ECX + 0x28);
  }
  if ((float10)*(float *)(in_ECX + 0x2c) < fVar3) {
    fVar3 = (float10)*(float *)(in_ECX + 0x2c);
  }
  fVar3 = fVar3 - (float10)*(float *)(*(int *)(in_ECX + 8) + 0xb4) * (float10)fVar2;
  fVar2 = fVar2 * *(float *)(in_ECX + 0x30) + *(float *)(iVar1 + 4);
  if (fVar3 < (float10)fVar2) {
    fVar3 = (float10)fVar2;
  }
  return fVar3;
}
