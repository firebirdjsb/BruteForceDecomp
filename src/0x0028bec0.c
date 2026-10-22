/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C1CFD369B76319D7FEB83CBDEA470C2E7D8B13FFF9BB7533D9ECA1975BBB810C
 * Entry: 0x0028bec0, Ghidra index: 9180, label: FUN_0028bec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
FUN_0028bec0(undefined4 param_1,float *param_2,float *param_3,float *param_4,float *param_5,
            float param_6,float *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  
  fVar6 = param_2[2];
  fVar7 = param_2[1];
  fVar8 = param_4[2];
  fVar9 = param_4[1];
  uVar1 = *(undefined8 *)(param_4 + 1);
  uVar2 = *(undefined8 *)(param_3 + 1);
  uVar3 = *(undefined8 *)(param_2 + 1);
  fVar10 = param_5[2];
  fVar11 = param_5[1];
  fVar16 = param_6 + param_6;
  uVar4 = *(undefined8 *)(param_4 + 1);
  uVar5 = *(undefined8 *)(param_3 + 1);
  fVar12 = param_2[2];
  fVar13 = param_2[1];
  fVar14 = param_5[2];
  fVar15 = param_5[1];
  fVar17 = param_6 * param_6 * 3.0;
  *param_7 = (-*param_2 + *param_4 +
             fVar16 * (((*param_2 * 2.0 - *param_3 * 5.0) + *param_4 * 4.0) - *param_5) +
             fVar17 * (((-*param_2 + *param_3 * 3.0) - *param_4 * 3.0) + *param_5)) * 0.5;
  param_7[1] = (-fVar7 + fVar9 +
               fVar16 * (((float)uVar1 * 4.0 + ((float)uVar3 * 2.0 - (float)uVar2 * 5.0)) - fVar11)
               + fVar17 * ((((float)uVar5 * 3.0 + -fVar13) - (float)uVar4 * 3.0) + fVar15)) * 0.5;
  param_7[2] = (-fVar6 + fVar8 +
               fVar16 * (((float)((ulonglong)uVar1 >> 0x20) * 4.0 +
                         ((float)((ulonglong)uVar3 >> 0x20) * 2.0 -
                         (float)((ulonglong)uVar2 >> 0x20) * 5.0)) - fVar10) +
               fVar17 * ((((float)((ulonglong)uVar5 >> 0x20) * 3.0 + -fVar12) -
                         (float)((ulonglong)uVar4 >> 0x20) * 3.0) + fVar14)) * 0.5;
  fVar6 = 1.0 / SQRT(param_7[2] * param_7[2] + param_7[1] * param_7[1] + *param_7 * *param_7);
  *param_7 = fVar6 * *param_7;
  param_7[1] = fVar6 * param_7[1];
  param_7[2] = fVar6 * param_7[2];
  return 0;
}
