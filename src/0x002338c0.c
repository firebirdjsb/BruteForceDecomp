/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5897040BE668154EA2E3C435098155BB2F0738FF57A70BFA63AC39F047CF75E1
 * Entry: 0x002338c0, Ghidra index: 7787, label: FUN_002338c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float * FUN_002338c0(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = *param_3;
  fVar2 = param_3[9];
  fVar12 = (float)*(undefined8 *)(param_3 + 1);
  fVar13 = (float)((ulonglong)*(undefined8 *)(param_3 + 1) >> 0x20);
  fVar3 = param_3[3];
  fVar4 = param_3[10];
  fVar14 = (float)*(undefined8 *)(param_3 + 4);
  fVar15 = (float)((ulonglong)*(undefined8 *)(param_3 + 4) >> 0x20);
  fVar5 = param_3[6];
  fVar6 = param_3[0xb];
  fVar16 = (float)*(undefined8 *)(param_3 + 7);
  fVar17 = (float)((ulonglong)*(undefined8 *)(param_3 + 7) >> 0x20);
  fVar7 = *param_2;
  fVar8 = param_2[1];
  fVar9 = param_2[2];
  fVar10 = param_2[3];
  param_1[9] = fVar9 * fVar6 + fVar8 * fVar4 + fVar7 * fVar2 + param_2[9];
  *param_1 = fVar9 * fVar5 + fVar8 * fVar3 + fVar7 * fVar1;
  *(ulonglong *)(param_1 + 1) =
       CONCAT44(fVar9 * fVar17 + fVar8 * fVar15 + fVar7 * fVar13,
                fVar9 * fVar16 + fVar8 * fVar14 + fVar7 * fVar12);
  fVar7 = param_2[4];
  fVar8 = param_2[5];
  fVar9 = param_2[6];
  fVar11 = param_2[7];
  param_1[10] = fVar8 * fVar6 + fVar7 * fVar4 + fVar10 * fVar2 + param_2[10];
  param_1[3] = fVar8 * fVar5 + fVar7 * fVar3 + fVar10 * fVar1;
  *(ulonglong *)(param_1 + 4) =
       CONCAT44(fVar8 * fVar17 + fVar7 * fVar15 + fVar10 * fVar13,
                fVar8 * fVar16 + fVar7 * fVar14 + fVar10 * fVar12);
  fVar7 = param_2[8];
  param_1[0xb] = fVar7 * fVar6 + fVar11 * fVar4 + fVar9 * fVar2 + param_2[0xb];
  param_1[6] = fVar7 * fVar5 + fVar11 * fVar3 + fVar9 * fVar1;
  *(ulonglong *)(param_1 + 7) =
       CONCAT44(fVar7 * fVar17 + fVar11 * fVar15 + fVar9 * fVar13,
                fVar7 * fVar16 + fVar11 * fVar14 + fVar9 * fVar12);
  return param_1;
}
