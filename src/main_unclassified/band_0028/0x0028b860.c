/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5C1D68A78C9A94508C386468692B8C14098AE262B7DA0BB8E2714C6292BC93D
 * Entry: 0x0028b860, Ghidra index: 9179, label: FUN_0028b860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
FUN_0028b860(undefined4 param_1,float *param_2,float *param_3,float *param_4,float *param_5,
            float param_6,float *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  
  fVar17 = param_6 * param_6;
  fVar18 = fVar17 * param_6;
  uVar1 = *(undefined8 *)(param_3 + 1);
  fVar7 = param_2[2];
  fVar8 = param_2[1];
  fVar9 = param_4[2];
  fVar10 = param_4[1];
  uVar2 = *(undefined8 *)(param_4 + 1);
  uVar3 = *(undefined8 *)(param_3 + 1);
  uVar4 = *(undefined8 *)(param_2 + 1);
  fVar11 = param_5[2];
  fVar12 = param_5[1];
  uVar5 = *(undefined8 *)(param_4 + 1);
  uVar6 = *(undefined8 *)(param_3 + 1);
  fVar13 = param_2[2];
  fVar14 = param_2[1];
  fVar15 = param_5[2];
  fVar16 = param_5[1];
  *param_7 = (*param_3 * 2.0 +
             fVar17 * (((*param_2 * 2.0 - *param_3 * 5.0) + *param_4 * 4.0) - *param_5) +
             fVar18 * (((-*param_2 + *param_3 * 3.0) - *param_4 * 3.0) + *param_5) +
             param_6 * (-*param_2 + *param_4)) * 0.5;
  param_7[1] = ((float)uVar1 * 2.0 +
               param_6 * (-fVar8 + fVar10) +
               fVar18 * ((((float)uVar6 * 3.0 + -fVar14) - (float)uVar5 * 3.0) + fVar16) +
               fVar17 * (((float)uVar2 * 4.0 + ((float)uVar4 * 2.0 - (float)uVar3 * 5.0)) - fVar12))
               * 0.5;
  param_7[2] = ((float)((ulonglong)uVar1 >> 0x20) * 2.0 +
               param_6 * (-fVar7 + fVar9) +
               fVar18 * ((((float)((ulonglong)uVar6 >> 0x20) * 3.0 + -fVar13) -
                         (float)((ulonglong)uVar5 >> 0x20) * 3.0) + fVar15) +
               fVar17 * (((float)((ulonglong)uVar2 >> 0x20) * 4.0 +
                         ((float)((ulonglong)uVar4 >> 0x20) * 2.0 -
                         (float)((ulonglong)uVar3 >> 0x20) * 5.0)) - fVar11)) * 0.5;
  return 0;
}
