/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A092E2C28794C3BDCBDE0E9F5981413BE5D5EFB13A0562D9AF5A0C7A147034DC
 * Entry: 0x00305880, Ghidra index: 11097, label: FUN_00305880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00305880(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  float *pfVar2;
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
  float *pfVar19;
  int iVar20;
  int iVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  byte *unaff_EBX;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  int local_28;
  int local_20;
  
  if ((*unaff_EBX & 0xc) == 0) {
    pfVar25 = (float *)param_1[2];
    pfVar26 = (float *)param_1[1];
    local_20 = 0;
    pfVar22 = (float *)FUN_002df600();
    local_28 = 0;
    pfVar23 = pfVar26 + 5;
    do {
      fVar3 = *(float *)(unaff_EBX + 0xa4);
      fVar4 = pfVar23[1];
      fVar5 = *(float *)(unaff_EBX + 0xa0);
      fVar6 = *pfVar23;
      fVar7 = pfVar23[-1];
      fVar8 = *(float *)(unaff_EBX + 0x9c);
      fVar9 = *(float *)(unaff_EBX + 0xb0);
      fVar10 = pfVar23[-4];
      fVar11 = *pfVar26;
      fVar12 = *(float *)(unaff_EBX + 0xac);
      fVar13 = *(float *)(unaff_EBX + 0xb4);
      fVar14 = pfVar23[-3];
      fVar15 = pfVar22[1];
      fVar16 = *pfVar23;
      fVar17 = pfVar22[2];
      fVar18 = pfVar23[1];
      *pfVar25 = *pfVar22 * pfVar23[-1];
      pfVar25[1] = fVar15 * fVar16;
      pfVar25[2] = fVar17 * fVar18;
      fVar15 = pfVar23[4];
      *(float *)(param_3 + (int)fVar15 * 4) =
           fVar13 * fVar14 + fVar11 * fVar12 + fVar9 * fVar10 +
           *(float *)(param_3 + (int)fVar15 * 4) + fVar7 * fVar8 + fVar5 * fVar6 + fVar3 * fVar4;
      pfVar19 = (float *)param_1[1];
      iVar20 = param_2[3];
      iVar21 = *param_2;
      iVar1 = iVar21 + iVar20 * (int)fVar15 * 4;
      fVar3 = *(float *)(unaff_EBX + 0x40);
      if (pfVar19 < (float *)(local_28 + (int)pfVar19)) {
        pfVar24 = pfVar19 + 5;
        pfVar27 = pfVar19;
        do {
          pfVar28 = pfVar27 + 0xc;
          fVar4 = pfVar24[4];
          pfVar2 = (float *)(iVar21 + (int)fVar15 * 4 + (int)fVar4 * iVar20 * 4);
          fVar5 = *pfVar24 * pfVar25[1] +
                  pfVar24[1] * pfVar25[2] +
                  pfVar24[-1] * *pfVar25 +
                  (*pfVar26 * *pfVar27 + pfVar24[-3] * pfVar23[-3] + pfVar24[-4] * pfVar23[-4]) *
                  fVar3;
          *pfVar2 = fVar5 + *pfVar2;
          *(float *)(iVar1 + (int)fVar4 * 4) = fVar5 + *(float *)(iVar1 + (int)fVar4 * 4);
          pfVar24 = pfVar24 + 0xc;
          pfVar27 = pfVar28;
        } while (pfVar28 < (float *)(local_28 + (int)pfVar19));
      }
      fVar3 = *pfVar26;
      pfVar19 = (float *)(*param_2 + (param_2[3] + 1) * (int)fVar15 * 4);
      local_28 = local_28 + 0x30;
      pfVar26 = pfVar26 + 0xc;
      *pfVar19 = pfVar25[2] * pfVar23[1] + pfVar23[-1] * *pfVar25 + *pfVar23 * pfVar25[1] +
                 (fVar3 * fVar3 + pfVar23[-3] * pfVar23[-3] + pfVar23[-4] * pfVar23[-4]) *
                 *(float *)(unaff_EBX + 0x40) + *pfVar19;
      local_20 = local_20 + 1;
      pfVar23 = pfVar23 + 0xc;
      pfVar25 = pfVar25 + 4;
    } while (local_20 < *param_1);
  }
  return;
}
