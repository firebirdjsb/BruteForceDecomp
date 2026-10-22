/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3E0887D12DF277BD05C3BCE158FB45BBA3EFB5FD4EE81AD3F2C89A3C33460BFA
 * Entry: 0x002c6450, Ghidra index: 10083, label: FUN_002c6450
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002c6450(undefined4 *param_1,float param_2,undefined4 param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float local_44;
  undefined1 local_10 [16];
  
  pbVar11 = (byte *)*param_1;
  if (((*pbVar11 & 0xc0) == 0) && (*(int *)(*(int *)(pbVar11 + 0xc) + 300) != 5)) {
    pfVar1 = (float *)(pbVar11 + 0x9c);
    fVar14 = (float)*(undefined8 *)(pbVar11 + 0xa0);
    fVar15 = (float)((ulonglong)*(undefined8 *)(pbVar11 + 0xa0) >> 0x20);
    local_44 = param_2;
    iVar13 = 1;
    fVar14 = (fVar14 * fVar14 + fVar15 * fVar15 + *pfVar1 * *pfVar1) * param_2 * param_2;
    if (0.027777778 < fVar14) {
      iVar13 = (int)SQRT(fVar14 * 144.0) + 1;
      local_44 = param_2 / (float)iVar13;
    }
    FUN_002b3eb0(param_3,pfVar1,local_44);
    fVar14 = *(float *)(pbVar11 + 0x18);
    fVar15 = *(float *)(pbVar11 + 0x1c);
    iVar12 = 1;
    fVar2 = *(float *)(pbVar11 + 0x34);
    fVar3 = *(float *)(pbVar11 + 0x1c);
    fVar4 = *(float *)(pbVar11 + 0x14);
    fVar5 = *(float *)(pbVar11 + 0x38);
    fVar6 = *(float *)(pbVar11 + 0x14);
    fVar7 = *(float *)(pbVar11 + 0x18);
    fVar8 = *(float *)(pbVar11 + 0x3c);
    while( true ) {
      fVar9 = *pfVar1;
      fVar10 = *pfVar1;
      *pfVar1 = *pfVar1 + *(float *)(pbVar11 + 0xa0) * *(float *)(pbVar11 + 0xa4) *
                          (fVar14 - fVar15) * fVar2 * local_44;
      *(ulonglong *)(pbVar11 + 0xa0) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(pbVar11 + 0xa0) >> 0x20) +
                    *(float *)(pbVar11 + 0xa0) * fVar10 * (fVar6 - fVar7) * fVar8 * local_44,
                    (float)*(undefined8 *)(pbVar11 + 0xa0) +
                    *(float *)(pbVar11 + 0xa4) * fVar9 * (fVar3 - fVar4) * fVar5 * local_44);
      if (iVar13 <= iVar12) break;
      FUN_002b3eb0(local_10,pfVar1,local_44);
      FUN_002b3d00();
      iVar12 = iVar12 + 1;
    }
  }
  else {
    FUN_002b3f70(param_3,pbVar11 + 0x9c,param_2);
  }
  return;
}
