/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9984918491D90CE201DF4BEE3364E848C86DBCDF4A720BAB953CC85DC0011F32
 * Entry: 0x00303fe0, Ghidra index: 11087, label: FUN_00303fe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00303fe0(float param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
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
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float *pfVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 *in_EAX;
  
  pfVar28 = (float *)*in_EAX;
  iVar29 = in_EAX[3];
  pfVar1 = pfVar28 + iVar29;
  pfVar2 = pfVar1 + iVar29 + 2;
  pfVar3 = pfVar1 + iVar29 + 1;
  fVar30 = pfVar28[iVar29 + 1] * pfVar1[iVar29 + 2] - pfVar1[2] * pfVar1[iVar29 + 1];
  fVar32 = pfVar1[2] * pfVar1[iVar29] - *pfVar1 * *pfVar2;
  fVar33 = *pfVar1 * *pfVar3 - pfVar1[1] * pfVar1[iVar29];
  fVar4 = pfVar28[2];
  fVar5 = *pfVar3;
  fVar6 = pfVar28[1];
  fVar7 = *pfVar2;
  fVar8 = *pfVar28;
  fVar9 = *pfVar2;
  fVar10 = pfVar1[iVar29];
  fVar11 = pfVar28[2];
  fVar12 = pfVar1[iVar29];
  fVar13 = pfVar28[1];
  fVar14 = *pfVar28;
  fVar15 = *pfVar3;
  fVar16 = pfVar1[2];
  fVar17 = pfVar28[1];
  fVar18 = pfVar1[1];
  fVar19 = pfVar28[2];
  fVar20 = *pfVar1;
  fVar21 = pfVar28[2];
  fVar22 = pfVar1[2];
  fVar23 = *pfVar28;
  fVar24 = pfVar1[1];
  fVar25 = *pfVar28;
  fVar26 = pfVar28[1];
  fVar27 = *pfVar1;
  fVar31 = fVar30 * *pfVar28 + fVar33 * pfVar28[2] + fVar32 * pfVar28[1];
  if (ABS(fVar31) < param_1 * param_1 * param_1) {
    return 1;
  }
  fVar31 = 1.0 / fVar31;
  *pfVar28 = fVar30 * fVar31;
  pfVar28[1] = fVar32 * fVar31;
  pfVar28[2] = fVar33 * fVar31;
  *pfVar1 = (fVar4 * fVar5 - fVar6 * fVar7) * fVar31;
  pfVar1[1] = (fVar8 * fVar9 - fVar10 * fVar11) * fVar31;
  pfVar1[2] = (fVar12 * fVar13 - fVar14 * fVar15) * fVar31;
  pfVar1[iVar29] = (fVar16 * fVar17 - fVar18 * fVar19) * fVar31;
  *pfVar3 = (fVar20 * fVar21 - fVar22 * fVar23) * fVar31;
  *pfVar2 = (fVar24 * fVar25 - fVar26 * fVar27) * fVar31;
  return 0;
}
