/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 09FAFC574ED686EC41B9C227FFC843C096B25F079A754F9D1095B59FB3EFA912
 * Entry: 0x00284ae0, Ghidra index: 9072, label: FUN_00284ae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00284ae0(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
  int iVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint uVar20;
  undefined4 *puVar21;
  int *piVar22;
  uint uVar23;
  int iVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  int local_100;
  int *local_f0;
  int *local_ec;
  int *local_e4;
  int aiStack_a0 [8];
  int aiStack_80 [8];
  uint auStack_60 [8];
  int aiStack_40 [8];
  int aiStack_20 [8];
  
  iVar1 = *(int *)(param_3 + 4);
  iVar2 = *(int *)(param_3 + 0xc);
  iVar3 = *(int *)(param_3 + 0x18);
  iVar4 = *(int *)(param_3 + 0x20);
  iVar24 = param_4 * 4;
  local_f0 = (int *)(*(int *)(param_3 + 0x24) + iVar24);
  iVar5 = *(int *)(param_3 + 0x2c);
  uVar6 = *(uint *)(param_3 + 0xf4);
  piVar22 = (int *)(*(int *)(param_3 + 0x10) + iVar24);
  local_e4 = (int *)(*(int *)(param_3 + 0x38) + iVar24);
  iVar7 = *(int *)(param_3 + 0x34);
  iVar8 = *(int *)(param_3 + 0x40);
  local_ec = (int *)(*(int *)(param_3 + 0x4c) + iVar24);
  iVar9 = *(int *)(param_3 + 0x48);
  uVar15 = uVar6 >> 8 & 0xf;
  iVar16 = 0;
  if (uVar15 != 0) {
    piVar12 = (int *)(param_3 + 0x60);
    do {
      aiStack_20[iVar16] = piVar12[-3];
      aiStack_80[iVar16] = *piVar12 + iVar24;
      aiStack_40[iVar16] = piVar12[-1];
      auStack_60[iVar16] = piVar12[-2];
      iVar16 = iVar16 + 1;
      piVar12 = piVar12 + 5;
    } while (iVar16 < (int)uVar15);
  }
  uVar23 = param_2 >> 8 & 0xf;
  iVar16 = 0;
  if (uVar23 != 0) {
    bVar14 = 0x10;
    do {
      switch(param_2 >> (bVar14 & 0x1f) & 3) {
      case 0:
        aiStack_a0[iVar16] = 8;
        break;
      case 1:
        aiStack_a0[iVar16] = 0xc;
        break;
      case 2:
        aiStack_a0[iVar16] = 0x10;
        break;
      case 3:
        aiStack_a0[iVar16] = 4;
      }
      iVar16 = iVar16 + 1;
      bVar14 = bVar14 + 2;
    } while (iVar16 < (int)uVar23);
  }
  local_100 = 0;
  if ((param_2 & 2) == 0) {
    if ((param_2 & 4) != 0) {
      local_100 = 0x10;
    }
  }
  else {
    local_100 = 0xc;
  }
  iVar16 = 0;
  if ((param_2 & 0x10) != 0) {
    iVar16 = 0xc;
  }
  iVar24 = 0;
  if ((param_2 & 0x40) != 0) {
    iVar24 = 4;
  }
  if ((param_2 & 0x80) != 0) {
    iVar24 = iVar24 + 4;
  }
  iVar13 = FUN_000916c0();
  local_100 = iVar13 + iVar24 + iVar16 + local_100;
  puVar21 = (undefined4 *)((param_4 + param_5) * local_100 + param_1);
  puVar26 = (undefined4 *)(local_100 * param_4 + param_1);
  if (puVar26 < puVar21) {
    puVar25 = puVar26 + 5;
    do {
      iVar16 = *piVar22 * iVar2;
      uVar10 = *(undefined4 *)(iVar16 + 8 + iVar1);
      puVar17 = (undefined4 *)(iVar16 + iVar1);
      uVar11 = puVar17[1];
      *puVar26 = *puVar17;
      puVar25[-3] = uVar10;
      piVar22 = piVar22 + 1;
      puVar25[-4] = uVar11;
      puVar17 = puVar25 + -2;
      if ((param_2 & 0x10) != 0) {
        if ((uVar6 & 0x10) != 0) {
          puVar18 = (undefined4 *)(*local_f0 * iVar4 + iVar3);
          uVar10 = puVar18[2];
          uVar11 = puVar18[1];
          *puVar17 = *puVar18;
          *puVar25 = uVar10;
          local_f0 = local_f0 + 1;
          puVar25[-1] = uVar11;
        }
        puVar17 = puVar25 + 1;
      }
      if ((param_2 & 0x40) != 0) {
        if ((uVar6 & 0x40) == 0) {
          *puVar17 = 0xffffffff;
        }
        else {
          *puVar17 = *(undefined4 *)(*local_e4 * iVar7 + iVar5);
          local_e4 = local_e4 + 1;
        }
        puVar17 = puVar17 + 1;
      }
      if ((param_2 & 0x80) != 0) {
        if ((uVar6 & 0x80) == 0) {
          *puVar17 = 0xffffffff;
        }
        else {
          *puVar17 = *(undefined4 *)(*local_ec * iVar9 + iVar8);
          local_ec = local_ec + 1;
        }
        puVar17 = puVar17 + 1;
      }
      iVar16 = 0;
      if (uVar23 != 0) {
        do {
          if (iVar16 < (int)uVar15) {
            piVar12 = (int *)aiStack_80[iVar16];
            uVar20 = auStack_60[iVar16];
            puVar18 = (undefined4 *)(aiStack_40[iVar16] * *piVar12 + aiStack_20[iVar16]);
            puVar27 = puVar17;
            for (uVar19 = uVar20 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
              *puVar27 = *puVar18;
              puVar18 = puVar18 + 1;
              puVar27 = puVar27 + 1;
            }
            for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
              *(undefined1 *)puVar27 = *(undefined1 *)puVar18;
              puVar18 = (undefined4 *)((int)puVar18 + 1);
              puVar27 = (undefined4 *)((int)puVar27 + 1);
            }
            aiStack_80[iVar16] = (int)(piVar12 + 1);
          }
          puVar17 = (undefined4 *)((int)puVar17 + aiStack_a0[iVar16]);
          iVar16 = iVar16 + 1;
        } while (iVar16 < (int)uVar23);
      }
      puVar26 = (undefined4 *)((int)puVar26 + local_100);
      puVar25 = (undefined4 *)((int)puVar25 + local_100);
    } while (puVar26 < puVar21);
  }
  return;
}
