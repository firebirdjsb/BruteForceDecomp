/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 97F5493A3DE892F92484498EF4A5A62785D434C3742E6B2DE888D211279ECBBC
 * Entry: 0x000d14d0, Ghidra index: 2598, label: FUN_000d14d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_000d14d0(void)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  uint uVar11;
  undefined1 *unaff_ESI;
  float local_14;
  
  iVar10 = *(int *)(unaff_ESI + 4);
  fVar4 = *(float *)(iVar10 + 8);
  iVar5 = *(int *)(unaff_ESI + 0x24);
  piVar1 = (int *)(unaff_ESI + 0x28);
  piVar2 = (int *)(unaff_ESI + 0x24);
  if (iVar5 == *piVar1) {
    puVar3 = (uint *)(unaff_ESI + 0x20);
    uVar11 = *(int *)(unaff_ESI + 0x20) + 1;
    *puVar3 = uVar11;
    if (uVar11 == *(uint *)(unaff_ESI + 0x2c)) {
      return uVar11 & 0xffffff00;
    }
    fVar8 = *(float *)(iVar10 + 8) * 0.5;
    fVar8 = ((float)(int)uVar11 * *(float *)(iVar10 + 8) + fVar8) -
            (float)*(int *)(*(int *)(iVar10 + 0x20) + 4) * fVar8;
    fVar9 = fVar8 - *(float *)(unaff_ESI + 0x14);
    fVar4 = fVar4 * 0.5;
    if (0.0 <= fVar9) {
      fVar9 = fVar9 - fVar4;
      if (fVar9 < 0.0 == (fVar9 == 0.0)) goto LAB_000d15bb;
      local_14 = *(float *)(unaff_ESI + 0x18);
    }
    else {
      fVar9 = fVar4 + fVar9;
      if (0.0 <= fVar9) {
        local_14 = *(float *)(unaff_ESI + 0x18);
      }
      else {
LAB_000d15bb:
        local_14 = *(float *)(unaff_ESI + 0x18) * *(float *)(unaff_ESI + 0x18) - fVar9 * fVar9;
        if (local_14 <= 1.1920929e-07) {
          local_14 = 0.0;
        }
        else {
          local_14 = SQRT(local_14);
        }
      }
    }
    FUN_001f4740(iVar10,piVar2,puVar3,*(float *)(unaff_ESI + 0xc) - local_14,fVar8);
    FUN_001f4740(*(undefined4 *)(unaff_ESI + 4),piVar1,puVar3,local_14 + *(float *)(unaff_ESI + 0xc)
                 ,fVar8);
    uVar11 = *puVar3;
    *piVar1 = *piVar1 + 1;
    iVar10 = *piVar2;
    *piVar2 = iVar10 + 1;
    if (-1 < iVar10) {
      piVar1 = *(int **)(*(int *)(unaff_ESI + 4) + 0x20);
      iVar5 = *piVar1;
      if (((iVar10 < iVar5) && (-1 < (int)uVar11)) && ((int)uVar11 < piVar1[1])) {
        iVar10 = (iVar5 * uVar11 + iVar10) * 0x40 + *(int *)(*(int *)(unaff_ESI + 4) + 0x18);
        goto LAB_000d1662;
      }
    }
  }
  else {
    *piVar2 = iVar5 + 1;
    iVar6 = *(int *)(unaff_ESI + 0x20);
    if (-1 < iVar5) {
      iVar7 = **(int **)(iVar10 + 0x20);
      if (((iVar5 < iVar7) && (-1 < iVar6)) && (iVar6 < (*(int **)(iVar10 + 0x20))[1])) {
        iVar10 = (iVar7 * iVar6 + iVar5) * 0x40 + *(int *)(iVar10 + 0x18);
        goto LAB_000d1662;
      }
    }
  }
  iVar10 = 0;
LAB_000d1662:
  *(int *)(unaff_ESI + 8) = iVar10;
  if (iVar10 == 0) {
    *unaff_ESI = 1;
  }
  return CONCAT31((int3)((uint)iVar10 >> 8),1);
}
