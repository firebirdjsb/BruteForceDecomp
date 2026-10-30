/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6D82574C0DC5A1A56E3FE3EAD1E7D5A5AF1303EB6AAC6092C54B0F5ECB0F743E
 * Entry: 0x002fcff0, Ghidra index: 10988, label: FUN_002fcff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002fcff0(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float *unaff_EBX;
  int iVar11;
  int iVar12;
  float *pfVar13;
  int local_c;
  int local_8;
  
  iVar12 = param_1 >> 1;
  iVar7 = param_3 / param_1;
  iVar11 = 0;
  iVar8 = 1;
  local_c = 1;
  if (3 < iVar12 + -1) {
    pfVar13 = unaff_EBX + param_3;
    local_8 = 4;
    pfVar10 = (float *)(param_2 + -0xc + param_1 * 4);
    pfVar9 = (float *)(param_2 + 0xc);
    do {
      iVar11 = iVar11 + iVar7;
      fVar1 = unaff_EBX[iVar11];
      pfVar13 = pfVar13 + -iVar7;
      fVar2 = *pfVar13;
      fVar3 = unaff_EBX[iVar11];
      iVar11 = iVar11 + iVar7;
      fVar4 = *pfVar13;
      pfVar13 = pfVar13 + -iVar7;
      fVar5 = pfVar9[-2];
      fVar6 = pfVar10[2];
      pfVar9[-2] = (fVar1 - fVar2) * pfVar9[-2] + (fVar3 + fVar4) * pfVar10[2];
      pfVar10[2] = (fVar3 + fVar4) * fVar5 - (fVar1 - fVar2) * fVar6;
      fVar1 = unaff_EBX[iVar11];
      fVar2 = *pfVar13;
      fVar3 = unaff_EBX[iVar11];
      iVar11 = iVar11 + iVar7;
      fVar4 = *pfVar13;
      pfVar13 = pfVar13 + -iVar7;
      fVar5 = pfVar9[-1];
      fVar6 = pfVar10[1];
      pfVar9[-1] = (fVar1 - fVar2) * pfVar9[-1] + (fVar3 + fVar4) * pfVar10[1];
      pfVar10[1] = (fVar3 + fVar4) * fVar5 - (fVar1 - fVar2) * fVar6;
      fVar1 = unaff_EBX[iVar11];
      fVar2 = *pfVar13;
      fVar3 = unaff_EBX[iVar11];
      iVar11 = iVar11 + iVar7;
      fVar4 = *pfVar13;
      pfVar13 = pfVar13 + -iVar7;
      iVar8 = local_c + 4;
      fVar5 = *pfVar9;
      fVar6 = *pfVar10;
      *pfVar9 = (fVar1 - fVar2) * *pfVar9 + (fVar3 + fVar4) * *pfVar10;
      *pfVar10 = (fVar3 + fVar4) * fVar5 - (fVar1 - fVar2) * fVar6;
      fVar1 = unaff_EBX[iVar11];
      fVar2 = *pfVar13;
      fVar3 = unaff_EBX[iVar11];
      fVar4 = *pfVar13;
      fVar5 = pfVar9[1];
      fVar6 = pfVar10[-1];
      pfVar9[1] = (fVar1 - fVar2) * pfVar9[1] + (fVar3 + fVar4) * pfVar10[-1];
      pfVar10[-1] = (fVar3 + fVar4) * fVar5 - (fVar1 - fVar2) * fVar6;
      local_8 = local_8 + 4;
      pfVar10 = pfVar10 + -4;
      pfVar9 = pfVar9 + 4;
      local_c = iVar8;
    } while (local_8 < iVar12);
  }
  if (iVar8 < iVar12) {
    pfVar13 = unaff_EBX + iVar11;
    pfVar10 = unaff_EBX + (param_3 - iVar11);
    pfVar9 = (float *)(param_2 + (param_1 - iVar8) * 4);
    do {
      pfVar10 = pfVar10 + -iVar7;
      fVar1 = pfVar13[iVar7];
      pfVar13 = pfVar13 + iVar7;
      fVar2 = *pfVar10;
      fVar3 = *pfVar10;
      iVar8 = iVar8 + 1;
      fVar4 = *pfVar13;
      fVar5 = *(float *)(param_2 + -4 + iVar8 * 4);
      fVar6 = *pfVar9;
      *(float *)(param_2 + -4 + iVar8 * 4) =
           (fVar3 + fVar4) * *pfVar9 + (fVar1 - fVar2) * *(float *)(param_2 + -4 + iVar8 * 4);
      *pfVar9 = (fVar3 + fVar4) * fVar5 - (fVar1 - fVar2) * fVar6;
      pfVar9 = pfVar9 + -1;
    } while (iVar8 < iVar12);
  }
  *(float *)(param_2 + iVar12 * 4) = *(float *)(param_2 + iVar12 * 4) * *unaff_EBX;
  return;
}
