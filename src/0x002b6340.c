/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 24BEF9ABDFA5C04DF5F5F6A4157587D51B1AF6F262F00440E3E7B49AAE308536
 * Entry: 0x002b6340, Ghidra index: 9820, label: FUN_002b6340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002b6340(float *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
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
  
  fVar2 = param_1[6];
  fVar3 = *(float *)(param_2 + 0x38);
  fVar4 = param_1[5];
  fVar5 = *(float *)(param_2 + 0x34);
  fVar6 = param_1[4];
  fVar7 = *(float *)(param_2 + 0x30);
  fVar8 = param_1[10];
  fVar9 = *(float *)(param_2 + 0x38);
  fVar10 = param_1[9];
  fVar11 = *(float *)(param_2 + 0x34);
  fVar12 = param_1[8];
  fVar13 = *(float *)(param_2 + 0x30);
  fVar14 = param_1[2];
  fVar15 = *(float *)(param_2 + 0x38);
  fVar16 = param_1[1];
  fVar17 = *(float *)(param_2 + 0x34);
  fVar18 = *param_1;
  fVar19 = *(float *)(param_2 + 0x30);
  FUN_002b6240(param_1,param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd);
  *(float *)(param_3 + 0x30) = param_1[0xc] + fVar18 * fVar19 + fVar16 * fVar17 + fVar14 * fVar15;
  *(ulonglong *)(param_3 + 0x34) =
       CONCAT44((float)((ulonglong)uVar1 >> 0x20) +
                fVar12 * fVar13 + fVar10 * fVar11 + fVar8 * fVar9,
                (float)uVar1 + fVar6 * fVar7 + fVar4 * fVar5 + fVar2 * fVar3);
  return;
}
