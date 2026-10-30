/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 089A39126A1AA96447DD4E3D9B3F061716E06FC298C464824C3C37C73525CAC5
 * Entry: 0x0023ce40, Ghidra index: 7946, label: FUN_0023ce40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0023ce40(float *param_1,float *param_2,float *param_3)

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
  
  fVar5 = *param_3;
  fVar6 = param_3[1];
  fVar7 = param_3[2];
  fVar8 = param_3[3];
  fVar9 = param_3[4];
  fVar10 = param_3[5];
  fVar11 = param_3[6];
  fVar12 = param_3[7];
  fVar13 = param_3[8];
  fVar14 = param_3[9];
  fVar15 = param_3[10];
  fVar16 = param_3[0xb];
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[9];
  *param_1 = fVar3 * fVar11 + fVar2 * fVar8 + fVar1 * fVar5 + 0.0;
  param_1[1] = fVar3 * fVar12 + fVar2 * fVar9 + fVar1 * fVar6 + 0.0;
  param_1[2] = fVar3 * fVar13 + fVar2 * fVar10 + fVar1 * fVar7 + 0.0;
  param_1[3] = fVar4 + fVar3 * fVar16 + fVar2 * fVar15 + fVar1 * fVar14;
  fVar1 = param_2[3];
  fVar2 = param_2[4];
  fVar3 = param_2[5];
  fVar4 = param_2[10];
  param_1[4] = fVar3 * fVar11 + fVar2 * fVar8 + fVar1 * fVar5 + 0.0;
  param_1[5] = fVar3 * fVar12 + fVar2 * fVar9 + fVar1 * fVar6 + 0.0;
  param_1[6] = fVar3 * fVar13 + fVar2 * fVar10 + fVar1 * fVar7 + 0.0;
  param_1[7] = fVar4 + fVar3 * fVar16 + fVar2 * fVar15 + fVar1 * fVar14;
  fVar1 = param_2[6];
  fVar2 = param_2[7];
  fVar3 = param_2[8];
  fVar4 = param_2[0xb];
  param_1[8] = fVar3 * fVar11 + fVar2 * fVar8 + fVar1 * fVar5 + 0.0;
  param_1[9] = fVar3 * fVar12 + fVar2 * fVar9 + fVar1 * fVar6 + 0.0;
  param_1[10] = fVar3 * fVar13 + fVar2 * fVar10 + fVar1 * fVar7 + 0.0;
  param_1[0xb] = fVar4 + fVar3 * fVar16 + fVar2 * fVar15 + fVar1 * fVar14;
  return;
}
