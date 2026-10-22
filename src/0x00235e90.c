/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 42AC544A231CECC325FC52402AD9F62BD773ECC2EA46D2916738061F73102C7B
 * Entry: 0x00235e90, Ghidra index: 7828, label: FUN_00235e90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_00235e90(int *param_1,int *param_2,int *param_3,int *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  uint *puVar11;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined1 local_70 [12];
  undefined1 local_64 [28];
  uint local_48 [4];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int *local_c;
  
  if ((param_4[4] != 0) && (*(int *)(param_4[4] + 100) != 0)) {
    return 0;
  }
  if ((*param_1 != 0) && (iVar8 = *(int *)(*param_1 + 0x14), iVar8 != 0)) {
    piVar9 = *(int **)(iVar8 + 4);
    if (piVar9 != *(int **)(iVar8 + 8)) {
      do {
        if (*piVar9 == *param_2) goto LAB_00235eed;
        piVar9 = piVar9 + 0xe;
      } while (piVar9 != *(int **)(iVar8 + 8));
    }
  }
  piVar9 = (int *)0x0;
LAB_00235eed:
  if ((*param_4 != 0) && (iVar8 = *(int *)(*param_4 + 0x14), iVar8 != 0)) {
    piVar10 = *(int **)(iVar8 + 4);
    if (piVar10 != *(int **)(iVar8 + 8)) {
      do {
        if (*piVar10 == *param_3) goto LAB_00235f1d;
        piVar10 = piVar10 + 0xe;
      } while (piVar10 != *(int **)(iVar8 + 8));
    }
  }
  piVar10 = (int *)0x0;
LAB_00235f1d:
  if ((piVar9 != (int *)0x0) && (piVar10 != (int *)0x0)) {
    puVar11 = local_48;
    for (iVar8 = 0x12; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    local_48[0] = piVar10[1];
    if (local_48[0] == 0xfb850ce) {
      pfVar6 = (float *)FUN_0016b1d0();
      pfVar7 = (float *)(piVar9 + 6);
      pfVar1 = pfVar6 + 1;
      local_80 = (float)piVar9[5] * *pfVar6 -
                 (*pfVar1 * *pfVar7 + (float)piVar9[7] * pfVar6[2] + (float)piVar9[8] * pfVar6[3]);
      fVar2 = (float)piVar9[5];
      fVar3 = *pfVar6;
      local_74 = (pfVar6[2] * *pfVar7 - (float)piVar9[7] * *pfVar1) +
                 fVar2 * (float)((ulonglong)*(undefined8 *)(pfVar6 + 2) >> 0x20) +
                 fVar3 * (float)((ulonglong)*(undefined8 *)(piVar9 + 7) >> 0x20);
      local_78 = ((float)piVar9[8] * *pfVar1 - pfVar6[3] * *pfVar7) +
                 fVar2 * (float)*(undefined8 *)(pfVar6 + 2) +
                 fVar3 * (float)*(undefined8 *)(piVar9 + 7);
      local_7c = fVar2 * *pfVar1 + fVar3 * *pfVar7 +
                 ((float)piVar9[7] * pfVar6[3] - pfVar6[2] * (float)piVar9[8]);
      pfVar7 = (float *)FUN_0001fb70(&local_80,local_70,piVar10 + 2);
      local_30 = (float)piVar9[4] - pfVar7[2];
      local_34 = (float)piVar9[3] - pfVar7[1];
      local_38 = (float)piVar9[2] - *pfVar7;
      local_2c = local_80;
      local_28 = local_7c;
      local_24 = local_78;
      local_20 = local_74;
    }
    else if ((local_48[0] == 0xe94eb66a) || (local_48[0] == 0xfd8f670c)) {
      local_48[3] = piVar9[4];
      local_48[2] = piVar9[3];
      local_48[1] = piVar9[2];
      local_30 = (float)piVar10[4];
      local_34 = (float)piVar10[3];
      local_38 = (float)piVar10[2];
      pfVar7 = (float *)(piVar10 + 6);
      pfVar1 = (float *)(piVar9 + 6);
      local_2c = (float)piVar10[5] * (float)piVar9[5] -
                 (*pfVar1 * *pfVar7 +
                 (float)piVar9[7] * (float)piVar10[7] + (float)piVar9[8] * (float)piVar10[8]);
      fVar2 = (float)piVar9[5];
      fVar3 = (float)piVar10[5];
      local_20 = (*pfVar1 * (float)piVar10[7] - (float)piVar9[7] * *pfVar7) +
                 fVar2 * (float)((ulonglong)*(undefined8 *)(piVar10 + 7) >> 0x20) +
                 fVar3 * (float)((ulonglong)*(undefined8 *)(piVar9 + 7) >> 0x20);
      local_78 = ((float)piVar9[8] * *pfVar7 - (float)piVar10[8] * *pfVar1) +
                 fVar2 * (float)*(undefined8 *)(piVar10 + 7) +
                 fVar3 * (float)*(undefined8 *)(piVar9 + 7);
      local_28 = fVar2 * *pfVar7 + fVar3 * *pfVar1 +
                 ((float)piVar9[7] * (float)piVar10[8] - (float)piVar9[8] * (float)piVar10[7]);
      local_24 = local_78;
      puVar5 = (undefined4 *)FUN_0001fb70(&local_2c,local_64,piVar10 + 9);
      local_14 = puVar5[2];
      local_18 = puVar5[1];
      local_1c = *puVar5;
      FUN_00236ea0(1);
      *local_c = piVar10[0xc];
      local_c[1] = piVar10[0xd];
    }
    uVar4 = FUN_00236420(local_48,param_4);
    FUN_00235a00();
    return uVar4;
  }
  return 0;
}
