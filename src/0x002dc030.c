/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5EEDD532F5DB5AAF205340C2B60C6A2D5D59FE10FB57695148AD37FCA9DC108F
 * Entry: 0x002dc030, Ghidra index: 10296, label: FUN_002dc030
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002dc030(int param_1,int param_2,int param_3,float param_4)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  
  param_4 = -param_4;
  uVar1 = *(int *)(param_1 + 4) + *(int *)(param_1 + 0x24) * param_2 * 4;
  pfVar10 = (float *)(uVar1 & 0xfffffff0);
  pfVar7 = (float *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x24) * param_3 * 4 & 0xfffffff0);
  iVar8 = ((int)(uVar1 - (int)pfVar10) >> 2) + *(int *)(param_1 + 0x28);
  do {
    fVar3 = *pfVar10;
    fVar4 = pfVar10[1];
    fVar5 = pfVar10[2];
    fVar6 = pfVar10[3];
    pfVar10 = pfVar10 + 4;
    *pfVar7 = param_4 * fVar3 + *pfVar7;
    pfVar7[1] = param_4 * fVar4 + pfVar7[1];
    pfVar7[2] = param_4 * fVar5 + pfVar7[2];
    pfVar7[3] = param_4 * fVar6 + pfVar7[3];
    pfVar7 = pfVar7 + 4;
    iVar9 = iVar8 + -4;
    bVar2 = 3 < iVar8;
    iVar8 = iVar9;
  } while (iVar9 != 0 && bVar2);
  return;
}
