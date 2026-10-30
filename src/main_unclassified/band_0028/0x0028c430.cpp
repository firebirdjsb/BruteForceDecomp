/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 716D10315EB99E774A4EC207C399F0C94B6DE8C602F2603F712E82844A814A22
 * Entry: 0x0028c430, Ghidra index: 9181, label: FUN_0028c430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0028c430(int param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int unaff_EBX;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x5d) = 0;
  }
  if (param_3 != 0) {
    *(int *)(param_1 + 0x58) = param_3;
    *(undefined4 *)(param_1 + 0x54) = 1;
    param_3 = param_3 + 3;
    uVar7 = 0x28c4a1;
    FUN_001b2a50(0,0,0);
    FUN_00143e20(0);
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    FUN_0028dbc0(uVar7,0,0,0);
    FUN_0028db40(uVar7,uVar8,uVar9,uVar10);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x54);
    if (*(uint *)(param_1 + 0x54) <= *(uint *)(param_1 + 0x58)) {
      do {
        iVar4 = *(int *)(param_1 + 0x10) * 0xc;
        uVar7 = *(undefined4 *)(iVar4 + -4 + unaff_EBX);
        puVar5 = (undefined4 *)(*(int *)(param_1 + 0x18) + iVar4);
        uVar8 = *(undefined4 *)(iVar4 + -8 + unaff_EBX);
        *puVar5 = *(undefined4 *)(iVar4 + -0xc + unaff_EBX);
        puVar5[1] = uVar8;
        puVar5[2] = uVar7;
        if (*(char *)(param_1 + 0x5d) != '\0') {
          iVar4 = *(int *)(param_1 + 0x10) * 0x10;
          uVar7 = *(undefined4 *)(iVar4 + -4 + param_2);
          puVar5 = (undefined4 *)(*(int *)(param_1 + 0x28) + iVar4);
          uVar8 = *(undefined4 *)(iVar4 + -8 + param_2);
          uVar9 = *(undefined4 *)(iVar4 + -0xc + param_2);
          *puVar5 = *(undefined4 *)(iVar4 + -0x10 + param_2);
          puVar5[1] = uVar9;
          puVar5[2] = uVar8;
          puVar5[3] = uVar7;
        }
        uVar6 = *(int *)(param_1 + 0x10) + 1;
        *(uint *)(param_1 + 0x10) = uVar6;
      } while (uVar6 <= *(uint *)(param_1 + 0x58));
    }
    if (*(char *)(param_1 + 0x5d) != '\0') {
      puVar5 = *(undefined4 **)(param_1 + 0x28);
      *puVar5 = puVar5[4];
      puVar5[1] = puVar5[5];
      puVar5[2] = puVar5[6];
      puVar5[3] = puVar5[7];
      iVar4 = *(int *)(param_1 + 0x58) * 0x10;
      uVar7 = *(undefined4 *)(iVar4 + 0xc + *(int *)(param_1 + 0x28));
      puVar5 = (undefined4 *)(iVar4 + *(int *)(param_1 + 0x28));
      puVar5[4] = *puVar5;
      puVar5[5] = puVar5[1];
      puVar5[6] = puVar5[2];
      puVar5[7] = uVar7;
    }
    iVar4 = *(int *)(param_1 + 0x18);
    FUN_0028b860(param_1,iVar4 + 0xc,iVar4 + 0xc,iVar4 + 0x18,iVar4 + 0x18,0x3dcccccd,iVar4);
    pfVar3 = *(float **)(param_1 + 0x18);
    *pfVar3 = pfVar3[3] - (*pfVar3 - pfVar3[3]);
    pfVar3[1] = pfVar3[4] - (pfVar3[1] - pfVar3[4]);
    pfVar3[2] = pfVar3[5] - (pfVar3[2] - pfVar3[5]);
    iVar4 = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x58) * 0xc;
    FUN_0028b860(param_1,iVar4 + -0xc,iVar4 + -0xc,iVar4,iVar4,0x3f666666,iVar4 + 0xc);
    fVar2 = *(float *)(*(int *)(param_1 + 0x18) + 8 + *(int *)(param_1 + 0x58) * 0xc);
    pfVar3 = (float *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x58) * 0xc);
    pfVar3[3] = (*pfVar3 - pfVar3[3]) + *pfVar3;
    pfVar3[4] = (pfVar3[1] - pfVar3[4]) + pfVar3[1];
    pfVar3[5] = (fVar2 - pfVar3[5]) + pfVar3[2];
  }
  *(undefined4 *)(param_1 + 8) = 0x10;
  *(undefined4 *)(param_1 + 0xc) = 0x3d800000;
  *(int *)(param_1 + 0x10) = param_3;
  FUN_0028ca40();
  uVar6 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    do {
      iVar4 = uVar6 * 4;
      iVar1 = uVar6 * 4;
      uVar6 = uVar6 + 1;
      *(float *)(*(int *)(param_1 + 0x38) + iVar1) =
           *(float *)(*(int *)(param_1 + 0x38) + iVar4) / *(float *)(param_1 + 4);
    } while (uVar6 < *(uint *)(param_1 + 0x10));
  }
  return;
}
