/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C27691511986A6D56742DBFEFE61C7A0304FF55BEF44042D3CDA8AA29F0DD3C7
 * Entry: 0x002fcb00, Ghidra index: 10983, label: FUN_002fcb00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002fcb00(void)

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
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float *in_EAX;
  int in_ECX;
  
  fVar1 = *(float *)(in_ECX + 4);
  fVar2 = *(float *)(in_ECX + 0x10);
  fVar3 = *(float *)(in_ECX + 0x14);
  fVar4 = *in_EAX;
  fVar5 = in_EAX[1];
  fVar6 = in_EAX[9];
  fVar7 = *in_EAX;
  fVar8 = in_EAX[1];
  fVar9 = in_EAX[8];
  fVar10 = ((in_EAX[4] - in_EAX[0xd]) - (in_EAX[0xc] + in_EAX[5])) * fVar1;
  fVar11 = (in_EAX[0xc] + in_EAX[5] + (in_EAX[4] - in_EAX[0xd])) * fVar1;
  fVar12 = ((in_EAX[0xd] + in_EAX[4]) - (in_EAX[5] - in_EAX[0xc])) * fVar1;
  fVar1 = ((in_EAX[5] - in_EAX[0xc]) + in_EAX[0xd] + in_EAX[4]) * fVar1;
  fVar19 = (in_EAX[2] - in_EAX[0xb]) * fVar2 - (in_EAX[3] + in_EAX[10]) * fVar3;
  fVar18 = (in_EAX[3] + in_EAX[10]) * fVar2 + (in_EAX[2] - in_EAX[0xb]) * fVar3;
  fVar17 = (in_EAX[0xb] + in_EAX[2]) * fVar3 - (in_EAX[3] - in_EAX[10]) * fVar2;
  fVar16 = (in_EAX[0xb] + in_EAX[2]) * fVar2 + (in_EAX[3] - in_EAX[10]) * fVar3;
  fVar15 = (in_EAX[6] - in_EAX[0xf]) * fVar3 - (in_EAX[7] + in_EAX[0xe]) * fVar2;
  fVar14 = (in_EAX[6] - in_EAX[0xf]) * fVar2 + (in_EAX[7] + in_EAX[0xe]) * fVar3;
  fVar13 = (in_EAX[0xf] + in_EAX[6]) * fVar2 - (in_EAX[7] - in_EAX[0xe]) * fVar3;
  fVar2 = (in_EAX[7] - in_EAX[0xe]) * fVar2 + (in_EAX[0xf] + in_EAX[6]) * fVar3;
  fVar3 = fVar10 + (fVar4 - in_EAX[9]);
  fVar21 = fVar11 + in_EAX[8] + fVar5;
  fVar20 = fVar15 + fVar19;
  fVar22 = fVar14 + fVar18;
  *in_EAX = fVar20 + fVar3;
  in_EAX[1] = fVar22 + fVar21;
  in_EAX[2] = fVar3 - fVar20;
  in_EAX[3] = fVar21 - fVar22;
  fVar10 = (fVar4 - in_EAX[9]) - fVar10;
  fVar11 = (in_EAX[8] + fVar5) - fVar11;
  fVar19 = fVar19 - fVar15;
  fVar18 = fVar18 - fVar14;
  in_EAX[4] = fVar10 - fVar18;
  in_EAX[5] = fVar19 + fVar11;
  in_EAX[6] = fVar18 + fVar10;
  in_EAX[7] = fVar11 - fVar19;
  fVar4 = (fVar6 + fVar7) - fVar1;
  fVar10 = fVar12 + (fVar8 - fVar9);
  fVar5 = fVar17 - fVar13;
  fVar3 = fVar16 - fVar2;
  in_EAX[8] = fVar5 + fVar4;
  in_EAX[9] = fVar3 + fVar10;
  in_EAX[10] = fVar4 - fVar5;
  in_EAX[0xb] = fVar10 - fVar3;
  fVar1 = fVar1 + fVar6 + fVar7;
  fVar12 = (fVar8 - fVar9) - fVar12;
  fVar13 = fVar13 + fVar17;
  fVar2 = fVar2 + fVar16;
  in_EAX[0xc] = fVar1 - fVar2;
  in_EAX[0xd] = fVar13 + fVar12;
  in_EAX[0xe] = fVar2 + fVar1;
  in_EAX[0xf] = fVar12 - fVar13;
  return;
}
