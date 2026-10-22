/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9004B5EC69289553B15D31C4D71E5819725F37362AB8D5D499A333979B1150EA
 * Entry: 0x00304530, Ghidra index: 11088, label: FUN_00304530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00304530(void)

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
  float *in_ECX;
  float *in_EDX;
  
  fVar1 = in_ECX[4];
  fVar2 = *in_EAX;
  fVar7 = in_ECX[8];
  fVar3 = in_ECX[5];
  fVar4 = in_EAX[1];
  fVar8 = *in_EAX;
  fVar5 = in_ECX[6];
  fVar6 = in_EAX[2];
  fVar9 = in_ECX[9];
  fVar10 = in_EAX[1];
  fVar11 = in_ECX[10];
  fVar12 = in_EAX[2];
  *in_EDX = in_ECX[2] * in_EAX[2] + in_EAX[1] * in_ECX[1] + *in_ECX * *in_EAX;
  in_EDX[1] = fVar2 * fVar1 + fVar4 * fVar3 + fVar6 * fVar5;
  in_EDX[2] = fVar8 * fVar7 + fVar10 * fVar9 + fVar12 * fVar11;
  fVar1 = in_ECX[4];
  fVar7 = in_ECX[8];
  fVar2 = in_EAX[4];
  fVar3 = in_ECX[5];
  fVar8 = in_EAX[4];
  fVar4 = in_EAX[5];
  fVar5 = in_ECX[6];
  fVar9 = in_ECX[9];
  fVar6 = in_EAX[6];
  fVar10 = in_EAX[5];
  fVar11 = in_ECX[10];
  fVar12 = in_EAX[6];
  in_EDX[4] = in_ECX[2] * in_EAX[6] + in_EAX[4] * *in_ECX + in_EAX[5] * in_ECX[1];
  in_EDX[5] = fVar2 * fVar1 + fVar4 * fVar3 + fVar6 * fVar5;
  in_EDX[6] = fVar8 * fVar7 + fVar10 * fVar9 + fVar12 * fVar11;
  fVar1 = in_ECX[4];
  fVar7 = in_ECX[8];
  fVar2 = in_EAX[8];
  fVar3 = in_ECX[5];
  fVar8 = in_EAX[8];
  fVar4 = in_EAX[9];
  fVar5 = in_ECX[6];
  fVar9 = in_ECX[9];
  fVar6 = in_EAX[10];
  fVar10 = in_EAX[9];
  fVar11 = in_ECX[10];
  fVar12 = in_EAX[10];
  in_EDX[8] = in_EAX[9] * in_ECX[1] + in_EAX[10] * in_ECX[2] + *in_ECX * in_EAX[8];
  in_EDX[9] = fVar2 * fVar1 + fVar4 * fVar3 + fVar6 * fVar5;
  in_EDX[10] = fVar8 * fVar7 + fVar10 * fVar9 + fVar12 * fVar11;
  return;
}
