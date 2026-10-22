/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2C0447519CF91B3A8A6F9EE989DAEFC78D9A84022497298FAE29CA73040D42A8
 * Entry: 0x00285320, Ghidra index: 9074, label: FUN_00285320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00285320(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  int local_d0;
  int local_cc;
  int local_c0;
  undefined4 *local_b8;
  undefined4 *local_b4;
  undefined4 *local_b0;
  uint auStack_80 [8];
  uint auStack_60 [8];
  int local_40 [8];
  uint auStack_20 [8];
  
  iVar1 = *(int *)(param_3 + 0x20);
  iVar2 = *(int *)(param_3 + 0xc);
  local_b0 = (undefined4 *)(iVar1 * param_4 + *(int *)(param_3 + 0x18));
  iVar3 = *(int *)(param_3 + 0x34);
  puVar17 = (undefined4 *)(iVar2 * param_4 + *(int *)(param_3 + 4));
  uVar4 = *(uint *)(param_3 + 0xf4);
  local_b4 = (undefined4 *)(iVar3 * param_4 + *(int *)(param_3 + 0x2c));
  iVar5 = *(int *)(param_3 + 0x48);
  local_b8 = (undefined4 *)(iVar5 * param_4 + *(int *)(param_3 + 0x40));
  uVar9 = uVar4 >> 8 & 0xf;
  iVar10 = 0;
  if (uVar9 != 0) {
    puVar14 = (uint *)(param_3 + 0x58);
    do {
      uVar15 = puVar14[1];
      uVar13 = *puVar14;
      auStack_20[iVar10] = uVar15;
      auStack_60[iVar10] = uVar13;
      local_40[iVar10] = uVar15 * param_4 + puVar14[-1];
      iVar10 = iVar10 + 1;
      puVar14 = puVar14 + 5;
    } while (iVar10 < (int)uVar9);
  }
  uVar15 = param_2 >> 8 & 0xf;
  iVar10 = 0;
  if (uVar15 != 0) {
    bVar8 = 0x10;
    do {
      switch(param_2 >> (bVar8 & 0x1f) & 3) {
      case 0:
        auStack_80[iVar10] = 8;
        break;
      case 1:
        auStack_80[iVar10] = 0xc;
        break;
      case 2:
        auStack_80[iVar10] = 0x10;
        break;
      case 3:
        auStack_80[iVar10] = 4;
      }
      iVar10 = iVar10 + 1;
      bVar8 = bVar8 + 2;
    } while (iVar10 < (int)uVar15);
  }
  local_cc = 0;
  if ((param_2 & 2) == 0) {
    if ((param_2 & 4) != 0) {
      local_cc = 0x10;
    }
  }
  else {
    local_cc = 0xc;
  }
  local_c0 = 0;
  if ((param_2 & 0x10) != 0) {
    local_c0 = 0xc;
  }
  local_d0 = 0;
  if ((param_2 & 0x40) != 0) {
    local_d0 = 4;
  }
  if ((param_2 & 0x80) != 0) {
    local_d0 = local_d0 + 4;
  }
  iVar10 = FUN_000916c0();
  local_cc = iVar10 + local_d0 + local_c0 + local_cc;
  puVar20 = (undefined4 *)((param_4 + param_5) * local_cc + param_1);
  puVar11 = (undefined4 *)(local_cc * param_4 + param_1);
  if (puVar11 < puVar20) {
    puVar19 = puVar11 + 5;
    do {
      uVar6 = puVar17[2];
      uVar7 = puVar17[1];
      *puVar11 = *puVar17;
      puVar19[-4] = uVar7;
      puVar19[-3] = uVar6;
      puVar17 = (undefined4 *)((int)puVar17 + iVar2);
      puVar16 = puVar19 + -2;
      if ((param_2 & 0x10) != 0) {
        if ((uVar4 & 0x10) != 0) {
          uVar6 = local_b0[2];
          uVar7 = local_b0[1];
          *puVar16 = *local_b0;
          puVar19[-1] = uVar7;
          *puVar19 = uVar6;
          local_b0 = (undefined4 *)((int)local_b0 + iVar1);
        }
        puVar16 = puVar19 + 1;
      }
      if ((param_2 & 0x40) != 0) {
        if ((uVar4 & 0x40) == 0) {
          *puVar16 = 0xffffffff;
        }
        else {
          *puVar16 = *local_b4;
          local_b4 = (undefined4 *)((int)local_b4 + iVar3);
        }
        puVar16 = puVar16 + 1;
      }
      if ((param_2 & 0x80) != 0) {
        if ((uVar4 & 0x80) == 0) {
          *puVar16 = 0xffffffff;
        }
        else {
          *puVar16 = *local_b8;
          local_b8 = (undefined4 *)((int)local_b8 + iVar5);
        }
        puVar16 = puVar16 + 1;
      }
      iVar10 = 0;
      if (uVar15 != 0) {
        do {
          if (iVar10 < (int)uVar9) {
            uVar13 = auStack_60[iVar10];
            puVar18 = (undefined4 *)local_40[iVar10];
            puVar21 = puVar16;
            for (uVar12 = uVar13 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *puVar21 = *puVar18;
              puVar18 = puVar18 + 1;
              puVar21 = puVar21 + 1;
            }
            for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
              *(undefined1 *)puVar21 = *(undefined1 *)puVar18;
              puVar18 = (undefined4 *)((int)puVar18 + 1);
              puVar21 = (undefined4 *)((int)puVar21 + 1);
            }
            local_40[iVar10] = auStack_20[iVar10] + local_40[iVar10];
          }
          else {
            uVar13 = auStack_80[iVar10];
            puVar18 = puVar16;
            for (uVar12 = uVar13 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *puVar18 = 0;
              puVar18 = puVar18 + 1;
            }
            for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
              *(undefined1 *)puVar18 = 0;
              puVar18 = (undefined4 *)((int)puVar18 + 1);
            }
          }
          puVar16 = (undefined4 *)((int)puVar16 + auStack_80[iVar10]);
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)uVar15);
      }
      puVar11 = (undefined4 *)((int)puVar11 + local_cc);
      puVar19 = (undefined4 *)((int)puVar19 + local_cc);
    } while (puVar11 < puVar20);
  }
  return;
}
