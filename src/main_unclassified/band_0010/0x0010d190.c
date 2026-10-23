/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 33C514679F78A59B5856B2799959345F740BAB2DBA650279BB8DBB21D9EEB831
 * Entry: 0x0010d190, Ghidra index: 3487, label: FUN_0010d190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010d190(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int in_ECX;
  float *in_EDX;
  
  fVar4 = 1.0 - *(float *)(in_ECX + 0x18) / *(float *)(in_ECX + 0x14);
  if (0.0 <= fVar4) {
    if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
  }
  else {
    fVar4 = 0.0;
  }
  fVar1 = *(float *)(in_ECX + 0xc);
  fVar2 = *(float *)(in_ECX + 4);
  fVar3 = *(float *)(in_ECX + 4);
  in_EDX[1] = (*(float *)(in_ECX + 0x10) - *(float *)(in_ECX + 8)) * fVar4 + *(float *)(in_ECX + 8);
  *in_EDX = (fVar1 - fVar2) * fVar4 + fVar3;
  return;
}
