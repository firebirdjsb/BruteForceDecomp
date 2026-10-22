/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9876CD71914948760A48C658AEFDD2E9CFDC582B5963A5E1CD0404672CB4A4EB
 * Entry: 0x002b4100, Ghidra index: 9782, label: FUN_002b4100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b4100(void)

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
  *in_ECX = 1.0 - (fVar11 * fVar5 + fVar10 * fVar3);
  in_ECX[1] = fVar10 * fVar1 - fVar11 * fVar7;
  in_ECX[2] = fVar10 * fVar6 + fVar11 * fVar2;
  in_ECX[4] = fVar11 * fVar7 + fVar10 * fVar1;
  in_ECX[5] = 1.0 - (fVar11 * fVar5 + fVar9);
  in_ECX[6] = fVar11 * fVar4 - fVar8;
  in_ECX[8] = fVar11 * fVar2 - fVar10 * fVar6;
  in_ECX[9] = fVar8 + fVar11 * fVar4;
  in_ECX[10] = 1.0 - (fVar10 * fVar3 + fVar9);
  return;
}
