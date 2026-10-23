/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A3DD2BE40A5437B09C6700449FDB83E508CA13EA70B582D6B13A95D628C67B2
 * Entry: 0x002b7070, Ghidra index: 9840, label: FUN_002b7070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b7070(void)

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
  fVar3 = in_ECX[6];
  fVar4 = in_EAX[2];
  fVar5 = in_ECX[5];
  fVar6 = in_EAX[1];
  fVar7 = in_ECX[8];
  fVar8 = *in_EAX;
  fVar9 = in_ECX[10];
  fVar10 = in_EAX[2];
  fVar11 = in_ECX[9];
  fVar12 = in_EAX[1];
  *in_EDX = *in_EAX * *in_ECX + in_ECX[1] * in_EAX[1] + in_ECX[2] * in_EAX[2];
  in_EDX[1] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2;
  in_EDX[2] = fVar11 * fVar12 + fVar9 * fVar10 + fVar7 * fVar8;
  return;
}
