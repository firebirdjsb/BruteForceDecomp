/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F267B96EBBAB3EF2045360319A8B74D2D701FD10D1D7903E2C22545CA5AE573F
 * Entry: 0x002bae30, Ghidra index: 9893, label: FUN_002bae30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bae30(int param_1)

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
  float *in_EAX;
  float *in_ECX;
  float *unaff_EBX;
  float *unaff_ESI;
  float *unaff_EDI;
  
  fVar1 = *in_EAX;
  fVar2 = in_ECX[2];
  fVar3 = in_EAX[2];
  fVar4 = *in_ECX;
  fVar5 = in_EAX[1];
  fVar6 = *in_ECX;
  fVar7 = *in_EAX;
  fVar8 = in_ECX[1];
  fVar9 = *(float *)(param_1 + 0x38);
  fVar10 = *(float *)(param_1 + 0x3c);
  *unaff_ESI = (in_EAX[2] * in_ECX[1] - in_EAX[1] * in_ECX[2]) * *(float *)(param_1 + 0x34);
  unaff_ESI[1] = (fVar1 * fVar2 - fVar3 * fVar4) * fVar9;
  unaff_ESI[2] = (fVar5 * fVar6 - fVar7 * fVar8) * fVar10;
  fVar1 = *(float *)(param_1 + 0x40);
  fVar2 = unaff_EBX[1];
  fVar3 = unaff_EBX[2];
  *unaff_EDI = fVar1 * *unaff_EBX;
  unaff_EDI[1] = fVar1 * fVar2;
  unaff_EDI[2] = fVar1 * fVar3;
  return;
}
