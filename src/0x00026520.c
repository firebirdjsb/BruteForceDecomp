/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8BCB11A0310D435E76BA69B55F858041B4A22E5DEC3995EB235849A0652041F3
 * Entry: 0x00026520, Ghidra index: 264, label: FUN_00026520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_00026520(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  undefined8 uStack_8;
  
  iVar5 = *(int *)(param_2 + 0x10);
  iVar9 = *(int *)(param_2 + 4);
  uVar6 = iVar5 * 3;
  if ((((*(int *)(iVar9 + 0x14 + iVar5 * 0x18) != 0) && (-1 < (int)(iVar5 + 1U))) && (iVar9 != 0))
     && ((iVar8 = *(int *)(param_2 + 8) - iVar9, uVar6 = iVar8 * 0x2aaaaaab,
         iVar5 + 1U < (uint)(iVar8 / 0x18) &&
         (uVar6 = 0, *(int *)(iVar9 + 0x2c + iVar5 * 0x18) != 0)))) {
    piVar4 = (int *)FUN_00023420();
    iVar5 = (**(code **)(*piVar4 + 0x3c))();
    if ((iVar5 == 0x1c) || (uVar6 = (**(code **)(*piVar4 + 0x3c))(), uVar6 == 0x1b)) {
      iVar5 = FUN_000120f0();
      fVar1 = (float)piVar4[7] - *(float *)(param_3 + 0x1c);
      fVar2 = (float)piVar4[6] - *(float *)(param_3 + 0x18);
      fVar3 = (float)piVar4[5] - *(float *)(param_3 + 0x14);
      uStack_8 = CONCAT44(fVar1,fVar2);
      fStack_1c = 0.0;
      fStack_20 = 0.0;
      fStack_24 = 0.0;
      fVar10 = (float)((uint)fVar2 & 0xffff0000);
      if (0.0 < fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) {
        uStack_8 = (ulonglong)(uint)fVar1 << 0x20;
        fStack_c = fVar3;
        pfVar7 = (float *)FUN_0001fd40();
        fStack_10 = pfVar7[2];
        fStack_14 = pfVar7[1];
        fStack_18 = *pfVar7;
        FUN_000198e0(0x41200000);
        (**(code **)(*(int *)(iVar5 + 0x1b4) + 0x3c))(&fStack_18);
        iVar9 = (*(int *)(param_3 + 0x24) << 0x14) >> 0x14;
        fVar1 = (float)iVar9;
        if (iVar9 < 0) {
          fVar1 = fVar1 + 4.2949673e+09;
        }
        fVar10 = 7.0;
        if ((3.0 < fVar1) && (fVar10 = 7.0, fVar1 < 20.0)) {
          fVar10 = fVar1;
        }
        fStack_24 = fVar10 * fStack_18;
        fStack_20 = fVar10 * fStack_14;
        fVar10 = fVar10 * fStack_10;
        uStack_8 = CONCAT44(fVar10,fStack_20);
        fStack_1c = fVar10;
        fStack_c = fStack_24;
      }
      fVar1 = fStack_24 * fStack_24 + fStack_1c * fStack_1c + fStack_20 * fStack_20;
      uVar6 = CONCAT22((short)((uint)fVar10 >> 0x10),
                       (ushort)(fVar1 < 0.0) << 8 | (ushort)isnan(fVar1) << 10 |
                       (ushort)(fVar1 == 0.0) << 0xe);
      if ((fVar1 >= 0.0 && (fVar1 == 0.0) == 0) &&
         (uVar6 = FUN_00024540(param_1,0x6f,0,0,0,0xbf800000,0), uVar6 == 1)) {
        *(uint *)(param_1 + 0x3c4) = *(uint *)(param_1 + 0x3c4) | 0x1000;
        uVar6 = FUN_0012b630(iVar5,&fStack_24);
      }
    }
  }
  return uVar6 & 0xffffff00;
}
