/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 935B88AD31D3725F6207AA21E0490ED49242151D70F54666D78641AE85450B90
 * Entry: 0x000a0c60, Ghidra index: 1903, label: FUN_000a0c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000a0c60(void)

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
  float *in_EAX;
  float *in_ECX;
  float *in_EDX;
  
  fVar7 = *in_EDX - in_ECX[9];
  fVar8 = in_EDX[1] - in_ECX[10];
  fVar9 = in_EDX[2] - in_ECX[0xb];
  fVar1 = in_ECX[6];
  fVar2 = in_ECX[3];
  fVar3 = *in_ECX;
  fVar4 = in_ECX[7];
  fVar5 = in_ECX[4];
  fVar6 = in_ECX[1];
  in_EAX[2] = fVar7 * in_ECX[2] + fVar8 * in_ECX[5] + fVar9 * in_ECX[8];
  *in_EAX = fVar7 * fVar3 + fVar8 * fVar2 + fVar9 * fVar1;
  in_EAX[1] = fVar7 * fVar6 + fVar8 * fVar5 + fVar9 * fVar4;
  return;
}
