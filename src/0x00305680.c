/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8BBA557C21243731DC2E762E15574D763D7E3EE0DB03F1F1FC297EC38A2A15FE
 * Entry: 0x00305680, Ghidra index: 11095, label: FUN_00305680
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00305680(void)

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
  
  fVar8 = *in_EAX + *in_EAX;
  fVar10 = in_EAX[1] + in_EAX[1];
  fVar11 = in_EAX[2] + in_EAX[2];
  fVar9 = fVar8 * *in_EAX;
  fVar1 = *in_EAX;
  fVar2 = *in_EAX;
  fVar3 = in_EAX[1];
  fVar4 = in_EAX[1];
  fVar5 = in_EAX[2];
  fVar8 = fVar8 * in_EAX[3];
  fVar6 = in_EAX[3];
  fVar7 = in_EAX[3];
  in_ECX[2] = fVar11 * fVar2 - fVar10 * fVar6;
  in_ECX[1] = fVar10 * fVar1 + fVar11 * fVar7;
  *in_ECX = 1.0 - (fVar11 * fVar5 + fVar10 * fVar3);
  in_ECX[5] = 1.0 - (fVar11 * fVar5 + fVar9);
  in_ECX[4] = fVar10 * fVar1 - fVar11 * fVar7;
  in_ECX[6] = fVar8 + fVar11 * fVar4;
  in_ECX[9] = fVar11 * fVar4 - fVar8;
  in_ECX[8] = fVar10 * fVar6 + fVar11 * fVar2;
  in_ECX[10] = 1.0 - (fVar10 * fVar3 + fVar9);
  return;
}
