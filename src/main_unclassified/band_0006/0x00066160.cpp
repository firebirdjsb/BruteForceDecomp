/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1357A0A3A341B012724DC2DF78A54AE8A3A0B1633561D1A323CA6D7C41646033
 * Entry: 0x00066160, Ghidra index: 1114, label: FUN_00066160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00066160(void)

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
  
  fVar1 = in_EDX[1];
  fVar2 = in_ECX[1];
  fVar3 = in_EDX[2];
  fVar4 = in_ECX[2];
  fVar5 = *in_ECX;
  fVar6 = *in_EDX;
  fVar7 = in_EDX[4];
  fVar8 = in_ECX[1];
  fVar9 = in_EDX[3];
  fVar10 = *in_ECX;
  fVar11 = in_EDX[5];
  fVar12 = in_ECX[2];
  in_EAX[2] = in_EDX[8] * in_ECX[2] + in_EDX[6] * *in_ECX + in_EDX[7] * in_ECX[1];
  *in_EAX = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2;
  in_EAX[1] = fVar11 * fVar12 + fVar9 * fVar10 + fVar7 * fVar8;
  return;
}
