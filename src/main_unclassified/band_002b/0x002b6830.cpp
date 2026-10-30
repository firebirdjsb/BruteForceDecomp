/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3E4F6063292A21234E40AE9B482B9378BFCF5899C0D3DF50141F0DE5653BE060
 * Entry: 0x002b6830, Ghidra index: 9830, label: FUN_002b6830
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b6830(void)

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
  float *in_EDX;
  float *unaff_ESI;
  
  fVar1 = *unaff_ESI;
  fVar2 = unaff_ESI[1];
  fVar3 = unaff_ESI[2];
  fVar4 = *in_EDX;
  fVar5 = in_EDX[1];
  fVar6 = in_EDX[2];
  fVar7 = *in_ECX;
  fVar8 = in_ECX[1];
  fVar9 = in_ECX[2];
  fVar10 = (fVar8 - fVar2) * (fVar6 - fVar3) - (fVar9 - fVar3) * (fVar5 - fVar2);
  *in_EAX = fVar10;
  fVar6 = (fVar9 - fVar3) * (fVar4 - fVar1) - (fVar7 - fVar1) * (fVar6 - fVar3);
  in_EAX[1] = fVar6;
  fVar4 = (fVar7 - fVar1) * (fVar5 - fVar2) - (fVar8 - fVar2) * (fVar4 - fVar1);
  in_EAX[2] = fVar4;
  in_EAX[3] = -(fVar10 * fVar1 + fVar6 * fVar2 + fVar4 * fVar3);
  return;
}
