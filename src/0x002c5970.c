/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B8E4D3326A7993AB2D668F9D15B23A6DBD6C65A6DD996D5C004345C7A5D4C5A1
 * Entry: 0x002c5970, Ghidra index: 10067, label: FUN_002c5970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c5970(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int in_EAX;
  
  fVar1 = *(float *)(in_EAX + 0x44);
  fVar2 = *(float *)(in_EAX + 0x30);
  fVar4 = fVar1 / (*(float *)(in_EAX + 0x50) + *(float *)(in_EAX + 0x54));
  fVar3 = fVar1 - fVar4 * *(float *)(in_EAX + 0x54);
  fVar4 = fVar4 * *(float *)(in_EAX + 0x50);
  fVar1 = ((fVar1 * fVar1 * *(float *)(in_EAX + 0x4c) - fVar4 * *(float *)(in_EAX + 0x48) * fVar4) -
          fVar3 * fVar3 * *(float *)(in_EAX + 0x4c)) * 0.5;
  *(float *)(in_EAX + 0x58) = fVar1;
  fVar3 = fVar2 / (*(float *)(in_EAX + 0x3c) + *(float *)(in_EAX + 0x40));
  fVar4 = fVar2 - fVar3 * *(float *)(in_EAX + 0x40);
  fVar3 = fVar3 * *(float *)(in_EAX + 0x3c);
  fVar2 = ((fVar2 * fVar2 * *(float *)(in_EAX + 0x38) - fVar3 * *(float *)(in_EAX + 0x34) * fVar3) -
          fVar4 * fVar4 * *(float *)(in_EAX + 0x38)) * 0.5;
  *(float *)(in_EAX + 0x5c) = fVar2;
  *(float *)(in_EAX + 0x68) = fVar2 + fVar1;
  return;
}
