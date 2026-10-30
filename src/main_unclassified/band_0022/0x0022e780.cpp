/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A0081AEF0D1FF247EB6EEB03B7B06CDEDCBAF23A339F07CE06F762419E36C00B
 * Entry: 0x0022e780, Ghidra index: 7724, label: FUN_0022e780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0022e780(int *param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int local_158;
  int iStack_154;
  int iStack_150;
  undefined1 auStack_a8 [8];
  float fStack_a0;
  float fStack_94;
  float fStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_30 [48];
  
  *(byte *)((int)param_1 + 0x225) = *(byte *)((int)param_1 + 0x225) | 1;
  iVar8 = *(int *)(param_1[0x8a] + 0x140);
  if (((iVar8 != 0) && (local_158 = *(int *)(param_1[0x8a] + 0x144) - iVar8 >> 2, local_158 != 0))
     && (iVar8 = (**(code **)(*param_1 + 0x40))(), 0 < local_158)) {
    iVar11 = 0;
    iVar12 = 0;
    iStack_154 = 0;
    iStack_150 = 0x210;
    do {
      if (*(int *)(iStack_150 + (int)param_1) == -1) {
        uVar4 = *(undefined4 *)(iVar8 + 0x2c);
        puVar10 = (undefined4 *)(iVar12 + 0x22c + (int)param_1);
        uVar5 = *(undefined4 *)(iVar8 + 0x28);
        *puVar10 = *(undefined4 *)(iVar8 + 0x24);
        puVar10[1] = uVar5;
        puVar10[2] = uVar4;
        uVar5 = puVar10[1];
        *(undefined4 *)(iVar12 + 0x244 + (int)param_1) = *puVar10;
        *(undefined4 *)(iVar12 + 0x24c + (int)param_1) = uVar4;
        *(undefined4 *)(iVar12 + 0x248 + (int)param_1) = uVar5;
        fVar3 = *(float *)(iVar8 + 8);
        fVar6 = *(float *)(iVar8 + 0x20);
        fVar7 = *(float *)(iVar8 + 0x14);
        *(float *)(iVar12 + 0x25c + (int)param_1) = -fVar3;
        *(float *)((int)param_1 + iVar12 + 0x260) = -fVar7;
        *(float *)((int)param_1 + iVar12 + 0x264) = -fVar6;
        pfVar1 = (float *)(iVar12 + 0x274 + (int)param_1);
        fVar6 = *(float *)((int)param_1 + iVar12 + 0x264);
        *pfVar1 = -fVar3;
        pfVar1[1] = *(float *)((int)param_1 + iVar12 + 0x260);
        pfVar1[2] = fVar6;
        puVar10 = (undefined4 *)(iVar11 + 0x294 + (int)param_1);
        puVar10[7] = 0;
        puVar10[6] = 0;
        puVar10[5] = 0;
        puVar10[3] = 0;
        puVar10[2] = 0;
        puVar10[1] = 0;
        puVar10[8] = 0x3f800000;
        puVar10[4] = 0x3f800000;
        *puVar10 = 0x3f800000;
      }
      else {
        iVar9 = FUN_002338c0(auStack_30,*(int *)(iStack_150 + (int)param_1) + 0x14,
                             iStack_154 + 0x374 + param_1[3]);
        FUN_0003d6c0(auStack_a8,iVar9,iVar9 + 0x24);
        puVar10 = (undefined4 *)(iVar12 + 0x22c + (int)param_1);
        *puVar10 = uStack_84;
        puVar10[1] = uStack_80;
        puVar10[2] = uStack_7c;
        puVar2 = (undefined4 *)(iVar12 + 0x244 + (int)param_1);
        uVar4 = puVar10[2];
        uVar5 = puVar10[1];
        *puVar2 = *puVar10;
        puVar2[1] = uVar5;
        puVar2[2] = uVar4;
        *(float *)(iVar12 + 0x25c + (int)param_1) = -fStack_a0;
        *(float *)((int)param_1 + iVar12 + 0x260) = -fStack_94;
        *(float *)((int)param_1 + iVar12 + 0x264) = -fStack_88;
        pfVar1 = (float *)(iVar12 + 0x274 + (int)param_1);
        fVar3 = *(float *)((int)param_1 + iVar12 + 0x264);
        *pfVar1 = -fStack_a0;
        pfVar1[1] = *(float *)((int)param_1 + iVar12 + 0x260);
        pfVar1[2] = fVar3;
        puVar10 = (undefined4 *)FUN_002334b0();
        uStack_78 = *puVar10;
        uStack_74 = puVar10[1];
        uStack_70 = puVar10[2];
        uStack_6c = puVar10[3];
        uStack_58 = puVar10[8];
        uStack_68 = puVar10[4];
        uStack_64 = puVar10[5];
        uStack_60 = puVar10[6];
        uStack_5c = puVar10[7];
        puVar10 = (undefined4 *)(iVar11 + 0x294 + (int)param_1);
        *puVar10 = uStack_78;
        puVar10[1] = uStack_74;
        puVar10[2] = uStack_70;
        puVar10[3] = uStack_6c;
        puVar10[8] = uStack_58;
        puVar10[4] = uStack_68;
        puVar10[5] = uStack_64;
        puVar10[6] = uStack_60;
        puVar10[7] = uStack_5c;
      }
      iStack_154 = iStack_154 + 0x30;
      iStack_150 = iStack_150 + 4;
      iVar12 = iVar12 + 0xc;
      iVar11 = iVar11 + 0x24;
      local_158 = local_158 + -1;
    } while (local_158 != 0);
  }
  return;
}
