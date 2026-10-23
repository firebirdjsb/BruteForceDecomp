/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 303A1E583291208D7E62B15C36D2CF825D8A24E5AEC94DD6D163791666214F59
 * Entry: 0x00319f88, Ghidra index: 12255, label: FUN_00319f88
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00319f88(float param_1)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_ECX;
  uint *extraout_ECX;
  int extraout_ECX_00;
  uint *extraout_ECX_01;
  int extraout_ECX_02;
  uint *extraout_ECX_03;
  uint *extraout_ECX_04;
  int *piVar8;
  int iVar9;
  undefined8 uVar10;
  
  *in_ECX = 0;
  iVar6 = in_ECX[6];
  fVar2 = param_1 * *(float *)(*(int *)in_ECX[5] + 8) * *(float *)(iVar6 + 0x10);
  fVar3 = (float)*(int *)(iVar6 + 0x1c) * *(float *)(iVar6 + 0x20);
  uVar10 = FUN_00319a67(fVar3 + (float)*(int *)(iVar6 + 0x14) * *(float *)(iVar6 + 0x18));
  piVar8 = (int *)((ulonglong)uVar10 >> 0x20);
  uVar5 = (int)uVar10 + *piVar8;
  if (uVar5 != extraout_ECX[1]) {
    *extraout_ECX = *extraout_ECX | 1;
    extraout_ECX[1] = uVar5;
  }
  fVar4 = (1.0 - (float)piVar8[8]) * (float)piVar8[7];
  iVar6 = FUN_00319a67(fVar4 + (1.0 - (float)piVar8[6]) * (float)piVar8[5]);
  iVar6 = iVar6 + *(int *)(*(int *)(extraout_ECX_00 + 0x18) + 4);
  if (iVar6 < -10000) {
    iVar6 = -10000;
  }
  else if (0 < iVar6) {
    iVar6 = 0;
  }
  if (1.0 < fVar2) {
    if (fVar2 < 1e-05 == (fVar2 == 1e-05)) {
      fVar1 = (float10)log2((float10)fVar2);
      param_1 = (float)FUN_00319a67((float)((float10)0.3010299956639812 * fVar1 * (float10)2000.0));
    }
    else {
      param_1 = -NAN;
    }
    fVar3 = (float)(int)param_1 + fVar3;
  }
  iVar7 = FUN_00319a67(fVar3);
  uVar5 = iVar7 + *(int *)(extraout_ECX_01[6] + 8);
  if (uVar5 != extraout_ECX_01[2]) {
    *extraout_ECX_01 = *extraout_ECX_01 | 2;
    extraout_ECX_01[2] = uVar5;
  }
  uVar10 = FUN_00319a67(fVar4);
  iVar7 = (int)((ulonglong)uVar10 >> 0x20);
  iVar9 = (int)uVar10 + *(int *)(*(int *)(extraout_ECX_02 + 0x18) + 8);
  if ((iVar7 <= iVar9) && (iVar7 = iVar9, 0 < iVar9)) {
    iVar7 = 0;
  }
  uVar5 = FUN_00319df2(0,iVar6,*(undefined4 *)(**(int **)(extraout_ECX_02 + 0x14) + 0x2c),0x473b8000
                      );
  if (uVar5 != extraout_ECX_03[3]) {
    *extraout_ECX_03 = *extraout_ECX_03 | 4;
    extraout_ECX_03[3] = uVar5;
  }
  uVar5 = FUN_00319df2(0,iVar7,*(undefined4 *)(*(int *)extraout_ECX_03[5] + 0x2c),0x473b8000);
  if (uVar5 != extraout_ECX_04[4]) {
    *extraout_ECX_04 = *extraout_ECX_04 | 8;
    extraout_ECX_04[4] = uVar5;
  }
  return;
}
