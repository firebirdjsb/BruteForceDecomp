/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1DEA60E4FD5F6E8E8F23B90970764D583360E66A9EF82EDA4FD345EF440AC225
 * Entry: 0x00039510, Ghidra index: 400, label: FUN_00039510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00039510(void)

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
  float fVar13;
  float fVar14;
  float *in_EAX;
  float *in_ECX;
  float *in_EDX;
  
  fVar1 = in_ECX[1];
  fVar2 = in_EDX[1];
  fVar3 = in_ECX[2];
  fVar4 = in_EDX[2];
  fVar5 = *in_EDX;
  fVar6 = *in_ECX;
  fVar7 = in_ECX[9];
  fVar8 = in_ECX[4];
  fVar9 = in_EDX[1];
  fVar10 = in_ECX[3];
  fVar11 = *in_EDX;
  fVar12 = in_ECX[5];
  fVar13 = in_EDX[2];
  fVar14 = in_ECX[10];
  in_EAX[2] = in_ECX[8] * in_EDX[2] + in_ECX[6] * *in_EDX + in_ECX[7] * in_EDX[1] + in_ECX[0xb];
  *in_EAX = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + fVar7;
  in_EAX[1] = fVar12 * fVar13 + fVar10 * fVar11 + fVar8 * fVar9 + fVar14;
  return;
}
