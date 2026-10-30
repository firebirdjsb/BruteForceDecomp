/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 740740C35E57A51E1E947BD0341B228D6FF17DFA166C9584F40E39E050FA54AF
 * Entry: 0x003049c0, Ghidra index: 11090, label: FUN_003049c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003049c0(void)

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
  
  fVar1 = *in_EAX;
  fVar2 = in_ECX[2];
  fVar3 = in_EAX[2];
  fVar4 = in_ECX[10];
  fVar5 = in_EAX[1];
  fVar6 = in_ECX[6];
  fVar7 = in_EAX[2];
  fVar8 = in_ECX[9];
  fVar9 = in_EAX[1];
  fVar10 = in_ECX[5];
  fVar11 = in_ECX[1];
  fVar12 = *in_EAX;
  *in_EDX = in_EAX[2] * in_ECX[8] + in_ECX[4] * in_EAX[1] + *in_ECX * *in_EAX;
  in_EDX[1] = fVar11 * fVar12 + fVar9 * fVar10 + fVar7 * fVar8;
  in_EDX[2] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2;
  fVar1 = in_ECX[10];
  fVar2 = in_EAX[6];
  fVar3 = in_EAX[5];
  fVar4 = in_ECX[6];
  fVar5 = in_EAX[4];
  fVar6 = in_ECX[2];
  fVar7 = in_ECX[9];
  fVar8 = in_EAX[6];
  fVar9 = in_EAX[4];
  fVar10 = in_ECX[1];
  fVar11 = in_EAX[5];
  fVar12 = in_ECX[5];
  in_EDX[4] = in_ECX[4] * in_EAX[5] + in_ECX[8] * in_EAX[6] + in_EAX[4] * *in_ECX;
  in_EDX[5] = fVar11 * fVar12 + fVar9 * fVar10 + fVar7 * fVar8;
  in_EDX[6] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2;
  fVar1 = in_EAX[9];
  fVar2 = in_ECX[6];
  fVar3 = in_ECX[2];
  fVar4 = in_EAX[8];
  fVar5 = in_ECX[10];
  fVar6 = in_EAX[10];
  fVar7 = in_EAX[10];
  fVar8 = in_ECX[8];
  fVar9 = in_EAX[9];
  fVar10 = in_ECX[4];
  fVar11 = *in_ECX;
  fVar12 = in_EAX[8];
  in_EDX[9] = in_ECX[9] * in_EAX[10] + in_ECX[1] * in_EAX[8] + in_EAX[9] * in_ECX[5];
  in_EDX[8] = fVar11 * fVar12 + fVar9 * fVar10 + fVar7 * fVar8;
  in_EDX[10] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2;
  return;
}
