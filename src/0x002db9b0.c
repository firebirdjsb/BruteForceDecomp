/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DAB5543FA3A9E859BBBCBB00929AAA5FC3032B254D67BE59C5F22CD55EBC40F7
 * Entry: 0x002db9b0, Ghidra index: 10287, label: FUN_002db9b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002db9b0(int param_1,int param_2,int param_3,float param_4)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  fVar3 = -param_4;
  param_3 = *(int *)(param_1 + 0x24) * param_3;
  iVar12 = *(int *)(param_1 + 0x24) * param_2;
  uVar1 = *(int *)(param_1 + 8) + 4 + (iVar12 + param_2) * 4;
  pfVar9 = (float *)(uVar1 & 0xfffffff0);
  pfVar8 = (float *)(*(int *)(param_1 + 8) + 4 + (param_3 + param_2) * 4 & 0xfffffff0);
  iVar11 = ((((int)(uVar1 - (int)pfVar9) >> 2) + *(int *)(param_1 + 0x28)) - param_2) + -1;
  do {
    fVar4 = *pfVar9;
    fVar5 = pfVar9[1];
    fVar6 = pfVar9[2];
    fVar7 = pfVar9[3];
    pfVar9 = pfVar9 + 4;
    *pfVar8 = fVar3 * fVar4 + *pfVar8;
    pfVar8[1] = fVar3 * fVar5 + pfVar8[1];
    pfVar8[2] = fVar3 * fVar6 + pfVar8[2];
    pfVar8[3] = fVar3 * fVar7 + pfVar8[3];
    pfVar8 = pfVar8 + 4;
    iVar10 = iVar11 + -4;
    bVar2 = 3 < iVar11;
    iVar11 = iVar10;
  } while (iVar10 != 0 && bVar2);
  uVar1 = *(int *)(param_1 + 4) + iVar12 * 4;
  param_4 = -param_4;
  pfVar8 = (float *)(uVar1 & 0xfffffff0);
  pfVar9 = (float *)(*(int *)(param_1 + 4) + param_3 * 4 & 0xfffffff0);
  iVar11 = ((int)(uVar1 - (int)pfVar8) >> 2) + *(int *)(param_1 + 0x28);
  do {
    fVar3 = *pfVar8;
    fVar4 = pfVar8[1];
    fVar5 = pfVar8[2];
    fVar6 = pfVar8[3];
    pfVar8 = pfVar8 + 4;
    *pfVar9 = param_4 * fVar3 + *pfVar9;
    pfVar9[1] = param_4 * fVar4 + pfVar9[1];
    pfVar9[2] = param_4 * fVar5 + pfVar9[2];
    pfVar9[3] = param_4 * fVar6 + pfVar9[3];
    pfVar9 = pfVar9 + 4;
    iVar12 = iVar11 + -4;
    bVar2 = 3 < iVar11;
    iVar11 = iVar12;
  } while (iVar12 != 0 && bVar2);
  *(undefined4 *)(*(int *)(param_1 + 8) + (param_3 + param_2) * 4) = 0;
  return;
}
