/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EA9AE5401D8ECE939C638A3282D4D4B75B0AF9A1A75081B055DB954F6209D9E4
 * Entry: 0x002c9620, Ghidra index: 10138, label: FUN_002c9620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c9620(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float *in_EAX;
  int in_ECX;
  float *in_EDX;
  
  fVar1 = *(float *)(in_ECX + 0x20);
  fVar2 = *in_EAX;
  fVar3 = *(float *)(in_ECX + 0x28);
  fVar4 = in_EAX[2];
  fVar5 = *(float *)(in_ECX + 0x24);
  fVar6 = in_EAX[1];
  fVar7 = *(float *)(in_ECX + 0x30);
  fVar8 = *in_EAX;
  fVar9 = *(float *)(in_ECX + 0x38);
  fVar10 = in_EAX[2];
  fVar11 = *(float *)(in_ECX + 0x34);
  fVar12 = in_EAX[1];
  *in_EDX = *(float *)(in_ECX + 0x10) * *in_EAX +
            *(float *)(in_ECX + 0x14) * in_EAX[1] + *(float *)(in_ECX + 0x18) * in_EAX[2];
  in_EDX[1] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2;
  in_EDX[2] = fVar11 * fVar12 + fVar9 * fVar10 + fVar7 * fVar8;
  return;
}
