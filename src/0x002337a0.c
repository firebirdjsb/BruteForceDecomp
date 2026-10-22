/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9845F4400F31673C8FFC0EC92B60D421983004F32EEE8BC70A60F9061E3EB58B
 * Entry: 0x002337a0, Ghidra index: 7786, label: FUN_002337a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined8 * FUN_002337a0(undefined8 *param_1,float *param_2,float *param_3)

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
  
  fVar1 = *param_2;
  fVar7 = *param_3;
  fVar8 = param_3[1];
  fVar9 = param_3[2];
  fVar10 = param_3[3];
  fVar2 = param_2[1];
  fVar11 = param_3[4];
  fVar12 = param_3[5];
  fVar13 = param_3[6];
  fVar14 = param_3[7];
  fVar3 = param_2[2];
  fVar15 = param_3[8];
  fVar16 = param_3[9];
  fVar17 = param_3[10];
  fVar18 = param_3[0xb];
  fVar4 = param_2[3];
  fVar19 = param_3[0xc];
  fVar20 = param_3[0xd];
  fVar21 = param_3[0xe];
  fVar22 = param_3[0xf];
  fVar5 = param_2[4];
  fVar6 = param_2[5];
  *param_1 = CONCAT44(fVar1 * fVar8 + fVar2 * fVar12 + fVar3 * fVar16 + fVar4 * fVar20,
                      fVar1 * fVar7 + fVar2 * fVar11 + fVar3 * fVar15 + fVar4 * fVar19);
  param_1[1] = CONCAT44(fVar1 * fVar10 + fVar2 * fVar14 + fVar3 * fVar18 + fVar4 * fVar22,
                        fVar1 * fVar9 + fVar2 * fVar13 + fVar3 * fVar17 + fVar4 * fVar21);
  fVar1 = param_2[6];
  fVar2 = param_2[9];
  fVar3 = param_2[7];
  fVar4 = param_2[8];
  param_1[2] = CONCAT44(fVar5 * fVar8 + fVar6 * fVar12 + fVar1 * fVar16 + fVar3 * fVar20,
                        fVar5 * fVar7 + fVar6 * fVar11 + fVar1 * fVar15 + fVar3 * fVar19);
  param_1[3] = CONCAT44(fVar5 * fVar10 + fVar6 * fVar14 + fVar1 * fVar18 + fVar3 * fVar22,
                        fVar5 * fVar9 + fVar6 * fVar13 + fVar1 * fVar17 + fVar3 * fVar21);
  fVar1 = param_2[10];
  fVar3 = param_2[0xb];
  fVar5 = param_2[0xd];
  param_1[4] = CONCAT44(fVar4 * fVar8 + fVar2 * fVar12 + fVar1 * fVar16 + fVar3 * fVar20,
                        fVar4 * fVar7 + fVar2 * fVar11 + fVar1 * fVar15 + fVar3 * fVar19);
  fVar6 = param_2[0xc];
  param_1[5] = CONCAT44(fVar4 * fVar10 + fVar2 * fVar14 + fVar1 * fVar18 + fVar3 * fVar22,
                        fVar4 * fVar9 + fVar2 * fVar13 + fVar1 * fVar17 + fVar3 * fVar21);
  fVar1 = param_2[0xe];
  fVar2 = param_2[0xf];
  *(float *)(param_1 + 6) = fVar6 * fVar7 + fVar5 * fVar11 + fVar1 * fVar15 + fVar2 * fVar19;
  *(float *)((int)param_1 + 0x34) = fVar6 * fVar8 + fVar5 * fVar12 + fVar1 * fVar16 + fVar2 * fVar20
  ;
  *(float *)(param_1 + 7) = fVar6 * fVar9 + fVar5 * fVar13 + fVar1 * fVar17 + fVar2 * fVar21;
  *(float *)((int)param_1 + 0x3c) =
       fVar6 * fVar10 + fVar5 * fVar14 + fVar1 * fVar18 + fVar2 * fVar22;
  return param_1;
}
