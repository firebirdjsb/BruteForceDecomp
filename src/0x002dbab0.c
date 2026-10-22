/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A6D045A58353526FB35F79273C26B1B220648158B9A30CD8232B29180BAF2592
 * Entry: 0x002dbab0, Ghidra index: 10288, label: FUN_002dbab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002dbab0(int param_1,int param_2,int param_3,float param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  
  param_4 = -param_4;
  uVar1 = *(int *)(param_1 + 4) + *(int *)(param_1 + 0x24) * param_2 * 4;
  uVar2 = *(int *)(param_1 + 4) + *(int *)(param_1 + 0x24) * param_3 * 4;
  pfVar9 = (float *)(uVar1 & 0xfffffff0);
  pfVar8 = (float *)(uVar2 & 0xfffffff0);
  iVar10 = ((int)(uVar1 - (int)pfVar9) >> 2) + *(int *)(param_1 + 0x28);
  do {
    fVar4 = *pfVar9;
    fVar5 = pfVar9[1];
    fVar6 = pfVar9[2];
    fVar7 = pfVar9[3];
    pfVar9 = pfVar9 + 4;
    *pfVar8 = param_4 * fVar4 + *pfVar8;
    pfVar8[1] = param_4 * fVar5 + pfVar8[1];
    pfVar8[2] = param_4 * fVar6 + pfVar8[2];
    pfVar8[3] = param_4 * fVar7 + pfVar8[3];
    pfVar8 = pfVar8 + 4;
    iVar11 = iVar10 + -4;
    bVar3 = 3 < iVar10;
    iVar10 = iVar11;
  } while (iVar11 != 0 && bVar3);
  *(undefined4 *)(uVar2 + param_2 * 4) = 0;
  return;
}
