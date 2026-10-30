/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 28F1F29810B1E1CD20F5C90C7E34601324BA03B7BA2031550944AFFDCC9BE368
 * Entry: 0x00150930, Ghidra index: 4407, label: FUN_00150930
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00150930(void)

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
  float *in_EAX;
  float *in_ECX;
  float *in_EDX;
  
  fVar1 = *in_EDX;
  fVar10 = in_EDX[1];
  fVar2 = in_EAX[4];
  fVar11 = in_EDX[2];
  fVar3 = in_EAX[8];
  fVar4 = in_EAX[5];
  fVar5 = in_EAX[9];
  fVar6 = in_EAX[6];
  fVar7 = in_EAX[0xd];
  fVar8 = in_EAX[10];
  fVar9 = in_EAX[0xe];
  *in_ECX = in_EAX[2] * fVar11 + in_EAX[1] * fVar10 + fVar1 * *in_EAX + in_EAX[0xc];
  in_ECX[1] = fVar6 * fVar11 + fVar4 * fVar10 + fVar2 * fVar1 + fVar7;
  in_ECX[2] = fVar8 * fVar11 + fVar5 * fVar10 + fVar3 * fVar1 + fVar9;
  return;
}
