/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3142ADD37104F813B9CABD01970C59AC5229E301323CBF02C763487430EA9747
 * Entry: 0x00169d80, Ghidra index: 4762, label: FUN_00169d80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00169d80(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  int in_EDX;
  float10 fVar4;
  
  fVar4 = (float10)fpatan(-(float10)*(float *)(in_ECX + 4),(float10)*(float *)(in_ECX + 0x10));
  fVar2 = *(float *)(*(int *)(in_EDX + 0x3c) + 0x10);
  fVar3 = *(float *)(*(int *)(in_EDX + 0x3c) + 0x14);
  fVar1 = (float)fVar4;
  if ((fVar2 != 0.0) && (fVar3 != 0.0)) {
    if (fVar1 < fVar2) {
      FUN_0016b210(in_ECX,fVar2 - fVar1);
      return;
    }
    if (fVar3 < fVar1) {
      FUN_0016b210(in_ECX,-(fVar1 - fVar3));
    }
  }
  return;
}
