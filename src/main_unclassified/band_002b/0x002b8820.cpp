/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E2DFA3DA9EE3E68E0E87BA1C743CE50CB9641EB9A387898E143C403FDA706E49
 * Entry: 0x002b8820, Ghidra index: 9859, label: FUN_002b8820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float * FUN_002b8820(float *param_1,float param_2,float param_3)

{
  float fVar1;
  int iVar2;
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
  undefined4 uVar15;
  
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xf] = 0.0;
  param_1[0x12] = param_3;
  param_1[0x11] = param_2;
  fVar1 = param_1[0x12];
  if (*(int *)((int)fVar1 + 0x3c) == 0) {
    uVar15 = FUN_002bbeb0();
    *(undefined4 *)((int)fVar1 + 0x3c) = uVar15;
  }
  if ((*(char *)((int)fVar1 + 0x70) < '\b') &&
     (*(int *)(*(int *)((int)fVar1 + 0x3c) + 0x60) < *(int *)(*(int *)((int)fVar1 + 0x14) + 0x120)))
  {
    FUN_002bbf70();
  }
  iVar2 = *(int *)((int)fVar1 + 0x3c);
  FUN_002b7910(iVar2,(int)param_2 + 0x10,param_1);
  fVar1 = *(float *)((int)param_2 + 0x40);
  fVar3 = *(float *)((int)param_2 + 0x44);
  fVar4 = *(float *)((int)param_2 + 0x48);
  fVar5 = *(float *)((int)param_2 + 0x4c);
  fVar6 = *(float *)(iVar2 + 0x14);
  fVar7 = *(float *)(iVar2 + 0x18);
  fVar8 = *(float *)(iVar2 + 0x1c);
  fVar9 = *(float *)(iVar2 + 0x24);
  fVar10 = *(float *)(iVar2 + 0x28);
  fVar11 = *(float *)(iVar2 + 0x2c);
  fVar12 = *(float *)(iVar2 + 0x34);
  fVar13 = *(float *)(iVar2 + 0x38);
  fVar14 = *(float *)(iVar2 + 0x3c);
  param_1[0xc] = *(float *)(iVar2 + 0x10) * fVar1 + *(float *)(iVar2 + 0x20) * fVar3 +
                 *(float *)(iVar2 + 0x30) * fVar4;
  param_1[0xd] = fVar6 * fVar1 + fVar9 * fVar3 + fVar12 * fVar4;
  param_1[0xe] = fVar7 * fVar1 + fVar10 * fVar3 + fVar13 * fVar4;
  param_1[0xf] = fVar8 * fVar5 + fVar11 * fVar5 + fVar14 * fVar5;
  param_1[0x13] = *(float *)((int)param_2 + 4);
  fVar1 = param_1[0x13];
  param_1[8] = *param_1 + param_1[0xc] * fVar1;
  *(ulonglong *)(param_1 + 9) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 1) >> 0x20) +
                (float)((ulonglong)*(undefined8 *)(param_1 + 0xd) >> 0x20) * fVar1,
                (float)*(undefined8 *)(param_1 + 1) + (float)*(undefined8 *)(param_1 + 0xd) * fVar1)
  ;
  param_1[4] = *param_1;
  param_1[5] = param_1[1];
  param_1[6] = param_1[2];
  fVar1 = param_1[0x13] * 0.5;
  param_1[4] = param_1[4] + param_1[0xc] * fVar1;
  *(ulonglong *)(param_1 + 5) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 5) >> 0x20) +
                (float)((ulonglong)*(undefined8 *)(param_1 + 0xd) >> 0x20) * fVar1,
                (float)*(undefined8 *)(param_1 + 5) + (float)*(undefined8 *)(param_1 + 0xd) * fVar1)
  ;
  param_1[0x10] = (float)(*(uint *)((int)param_2 + 8) >> 3 & 1);
  return param_1;
}
