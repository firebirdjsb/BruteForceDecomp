/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4D3B71A59376AE121D8E795B498B6A4E8DEEBB7A53D7CB894B73CC7D8ECA9C47
 * Entry: 0x002fc910, Ghidra index: 10982, label: FUN_002fc910
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002fc910(void)

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
  float *in_EAX;
  int in_ECX;
  
  fVar1 = *(float *)(in_ECX + 4);
  fVar6 = in_EAX[4] + in_EAX[0xc] + in_EAX[8] + *in_EAX;
  fVar8 = in_EAX[5] + in_EAX[0xd] + in_EAX[1] + in_EAX[9];
  fVar7 = (in_EAX[8] + *in_EAX) - (in_EAX[4] + in_EAX[0xc]);
  fVar9 = (in_EAX[1] + in_EAX[9]) - (in_EAX[5] + in_EAX[0xd]);
  fVar10 = (*in_EAX - in_EAX[8]) - (in_EAX[5] - in_EAX[0xd]);
  fVar5 = (in_EAX[4] - in_EAX[0xc]) + (in_EAX[1] - in_EAX[9]);
  fVar11 = (in_EAX[5] - in_EAX[0xd]) + (*in_EAX - in_EAX[8]);
  fVar12 = (in_EAX[1] - in_EAX[9]) - (in_EAX[4] - in_EAX[0xc]);
  fVar13 = in_EAX[6] + in_EAX[0xe] + in_EAX[2] + in_EAX[10];
  fVar15 = in_EAX[7] + in_EAX[0xf] + in_EAX[3] + in_EAX[0xb];
  fVar14 = (in_EAX[2] + in_EAX[10]) - (in_EAX[6] + in_EAX[0xe]);
  fVar16 = (in_EAX[3] + in_EAX[0xb]) - (in_EAX[7] + in_EAX[0xf]);
  fVar4 = (in_EAX[2] - in_EAX[10]) - (in_EAX[7] - in_EAX[0xf]);
  fVar3 = (in_EAX[6] - in_EAX[0xe]) + (in_EAX[3] - in_EAX[0xb]);
  fVar17 = (in_EAX[7] - in_EAX[0xf]) + (in_EAX[2] - in_EAX[10]);
  fVar18 = (in_EAX[3] - in_EAX[0xb]) - (in_EAX[6] - in_EAX[0xe]);
  fVar2 = (fVar4 - fVar3) * fVar1;
  fVar3 = (fVar3 + fVar4) * fVar1;
  fVar4 = (fVar17 - fVar18) * fVar1;
  fVar1 = (fVar18 + fVar17) * fVar1;
  in_EAX[8] = fVar2 + fVar10;
  in_EAX[9] = fVar3 + fVar5;
  in_EAX[10] = fVar10 - fVar2;
  in_EAX[0xb] = fVar5 - fVar3;
  in_EAX[0xc] = fVar11 - fVar1;
  in_EAX[0xd] = fVar4 + fVar12;
  in_EAX[0xe] = fVar1 + fVar11;
  in_EAX[0xf] = fVar12 - fVar4;
  *in_EAX = fVar13 + fVar6;
  in_EAX[1] = fVar15 + fVar8;
  in_EAX[2] = fVar6 - fVar13;
  in_EAX[3] = fVar8 - fVar15;
  in_EAX[4] = fVar7 - fVar16;
  in_EAX[5] = fVar14 + fVar9;
  in_EAX[6] = fVar16 + fVar7;
  in_EAX[7] = fVar9 - fVar14;
  return;
}
