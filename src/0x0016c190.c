/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 04491BAE90E4A821D4C52FE4873E9286DB9BAC3A320F5ADDA3224745ECCE9F37
 * Entry: 0x0016c190, Ghidra index: 4778, label: FUN_0016c190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016c190(void)

{
  float fVar1;
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
  undefined4 *puVar16;
  float *pfVar17;
  float fVar18;
  int iVar19;
  float *pfVar20;
  int iVar21;
  int iVar22;
  int unaff_ESI;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  int local_4;
  
  puVar16 = *(undefined4 **)(unaff_ESI + 0x10);
  pfVar20 = (float *)puVar16[1];
  pfVar17 = (float *)*puVar16;
  fVar1 = pfVar20[2];
  fVar2 = pfVar17[2];
  fVar3 = pfVar20[1];
  fVar4 = pfVar17[1];
  fVar5 = *pfVar20;
  fVar6 = *pfVar17;
  pfVar20 = (float *)*puVar16;
  fVar7 = pfVar20[2];
  fVar8 = pfVar20[1];
  fVar9 = *pfVar20;
  if (*(int *)(unaff_ESI + 0x10) == 0) {
    iVar21 = 0;
  }
  else {
    iVar21 = *(int *)(unaff_ESI + 0x14) - *(int *)(unaff_ESI + 0x10) >> 2;
  }
  pfVar20 = (float *)puVar16[iVar21 + -1];
  pfVar17 = (float *)puVar16[iVar21 + -2];
  fVar10 = pfVar20[2];
  fVar11 = pfVar17[2];
  fVar12 = pfVar20[1];
  fVar13 = pfVar17[1];
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  fVar14 = pfVar20[2];
  fVar15 = pfVar20[1];
  fVar18 = (*pfVar20 - *pfVar17) + *pfVar20;
  pfVar20 = (float *)FUN_002ea01d(0x10);
  pfVar20[3] = (float)(*(int *)(**(int **)(unaff_ESI + 0x10) + 0xc) + -1);
  *pfVar20 = fVar9 - (fVar5 - fVar6);
  pfVar20[1] = fVar8 - (fVar3 - fVar4);
  pfVar20[2] = fVar7 - (fVar1 - fVar2);
  FUN_001611d0();
  iVar21 = *(int *)(unaff_ESI + 0x10);
  if (iVar21 != *(int *)(unaff_ESI + 0x14)) {
    do {
      iVar19 = local_8;
      iVar22 = iVar21 + 4;
      if ((local_c == 0) || ((uint)(local_4 - local_c >> 2) <= (uint)(local_8 - local_c >> 2))) {
        FUN_000a7d80(local_8,iVar21);
      }
      else {
        FUN_0003efa0(local_8,1,local_10,fVar18);
        local_8 = iVar19 + 4;
      }
      iVar21 = iVar22;
    } while (iVar22 != *(int *)(unaff_ESI + 0x14));
  }
  pfVar20 = (float *)FUN_002ea01d(0x10);
  pfVar20[3] = *(float *)(*(int *)(*(int *)(unaff_ESI + 0x14) + -4) + 0xc);
  *pfVar20 = fVar18;
  pfVar20[1] = (fVar12 - fVar13) + fVar15;
  pfVar20[2] = (fVar10 - fVar11) + fVar14;
  FUN_001611d0();
  FUN_0010bc40();
  *(undefined4 *)(unaff_ESI + 4) = 1;
  if (*(int *)(unaff_ESI + 0x10) == 0) {
    iVar21 = 0;
  }
  else {
    iVar21 = *(int *)(unaff_ESI + 0x14) - *(int *)(unaff_ESI + 0x10) >> 2;
  }
  *(int *)(unaff_ESI + 8) = iVar21 + -2;
  if (local_c == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(local_c);
}
