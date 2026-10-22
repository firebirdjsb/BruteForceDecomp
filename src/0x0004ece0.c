/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ED39D8D3130FE98C571F7147BC0CBA1967E90E1CC1CC6022A7722E4A1DB9AE36
 * Entry: 0x0004ece0, Ghidra index: 684, label: FUN_0004ece0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0004ece0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int in_ECX;
  uint uVar7;
  int iVar8;
  int iVar9;
  int local_15c;
  uint local_158;
  undefined1 local_154 [4];
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  undefined4 local_140;
  int local_13c;
  int local_134;
  int local_130;
  int local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114 [20];
  undefined1 *local_c4;
  undefined1 local_c0 [4];
  int local_bc;
  int local_b8;
  int local_b4;
  int local_ac;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_9c [2];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_7c;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_14;
  int local_10;
  undefined4 local_c;
  
  puVar5 = *(undefined4 **)(in_ECX + 4);
  puVar1 = *(undefined4 **)(in_ECX + 8);
  if (puVar5 != puVar1) {
    local_94 = 0;
    local_90 = 0;
    local_8c = 0;
    do {
      local_9c[0] = *puVar5;
      FUN_0004f6b0(local_9c);
      local_13c = FUN_0004ea20();
      if (puVar5[2] != 0) {
        local_158 = 0;
        while( true ) {
          uVar7 = 0;
          iVar9 = *(int *)(puVar5[2] + 4);
          if ((iVar9 == 0) || ((uint)((*(int *)(puVar5[2] + 8) - iVar9) / 0x70) <= local_158))
          break;
          uVar2 = *(undefined4 *)(local_158 * 0x70 + *(int *)(puVar5[2] + 4));
          iVar9 = local_158 * 0x70 + *(int *)(puVar5[2] + 4);
          FUN_0004e9a0();
          local_11c = *(undefined4 *)(iVar9 + 0x24);
          local_118 = *(undefined4 *)(iVar9 + 0x28);
          local_bc = 0;
          local_b8 = 0;
          local_b4 = 0;
          local_ac = 0;
          local_a8 = 0;
          local_a4 = 0;
          local_150 = 0;
          local_14c = 0;
          local_148 = 0;
          local_120 = uVar2;
          while ((iVar6 = local_14c, iVar8 = *(int *)(iVar9 + 0x30), iVar8 != 0 &&
                 (uVar7 < (uint)(*(int *)(iVar9 + 0x34) - iVar8 >> 3)))) {
            uVar2 = *(undefined4 *)(iVar8 + 4 + uVar7 * 8);
            local_114[uVar7 * 2] = *(undefined4 *)(iVar8 + uVar7 * 8);
            local_114[uVar7 * 2 + 1] = uVar2;
            if ((local_150 == 0) ||
               ((uint)(local_148 - local_150 >> 2) <= (uint)(local_14c - local_150 >> 2))) {
              FUN_000a7d80(local_14c,local_114 + uVar7 * 2);
              uVar7 = uVar7 + 1;
            }
            else {
              FUN_0003efa0(local_14c,1,local_154,puVar1);
              local_14c = iVar6 + 4;
              uVar7 = uVar7 + 1;
            }
          }
          if (local_150 == 0) {
            uVar7 = 0;
LAB_0004ef75:
            local_114[uVar7 * 2] = 0;
          }
          else {
            uVar7 = local_14c - local_150 >> 2;
            if (uVar7 < 10) goto LAB_0004ef75;
            local_114[0x12] = 0;
          }
          if ((*(int *)(iVar9 + 0x40) != 0) &&
             (*(int *)(iVar9 + 0x44) - *(int *)(iVar9 + 0x40) >> 3 != 0)) {
            FUN_001aa220();
            uVar7 = 0;
            iVar8 = local_b8;
            while ((iVar6 = *(int *)(iVar9 + 0x40), iVar6 != 0 &&
                   (uVar7 < (uint)(*(int *)(iVar9 + 0x44) - iVar6 >> 3)))) {
              iVar3 = *(int *)(iVar6 + uVar7 * 8);
              if (iVar3 == 0x3b) {
LAB_0004efa0:
                uVar7 = uVar7 + 1;
              }
              else {
                puVar4 = *(undefined4 **)(iVar6 + 4 + uVar7 * 8);
                local_140 = 0;
                if (puVar4 != (undefined4 *)0x0) {
                  local_140 = *puVar4;
                }
                local_144 = iVar3;
                if ((local_bc == 0) ||
                   ((uint)(local_b4 - local_bc >> 3) <= (uint)(iVar8 - local_bc >> 3))) {
                  FUN_001e10c0(iVar8,&local_144);
                  iVar8 = local_b8;
                  goto LAB_0004efa0;
                }
                FUN_00144b10(iVar8,1,local_c0,puVar1);
                iVar8 = iVar8 + 8;
                uVar7 = uVar7 + 1;
                local_b8 = iVar8;
              }
            }
          }
          if ((*(int *)(iVar9 + 0x50) != 0) &&
             ((*(int *)(iVar9 + 0x54) - *(int *)(iVar9 + 0x50)) / 0xc != 0)) {
            local_15c = 0;
            for (uVar7 = 0;
                (*(int *)(iVar9 + 0x50) != 0 &&
                (uVar7 < (uint)((*(int *)(iVar9 + 0x54) - *(int *)(iVar9 + 0x50)) / 0xc)));
                uVar7 = uVar7 + 1) {
              iVar8 = *(int *)(local_15c + *(int *)(iVar9 + 0x50));
              iVar6 = local_15c + *(int *)(iVar9 + 0x50);
              if (iVar8 != 0) {
                local_130 = *(int *)(iVar6 + 4);
                local_128 = 0;
                local_124 = 0x7f7fffff;
                if (local_130 != -0x400000) {
                  local_124 = *(undefined4 *)(iVar6 + 4U & (local_130 == -0x400000) - 1);
                  local_134 = local_130;
                }
                if (*(undefined4 **)(iVar6 + 8) != (undefined4 *)0x0) {
                  local_128 = **(undefined4 **)(iVar6 + 8);
                }
                local_12c = iVar8;
                FUN_0004f530(&local_12c);
              }
              local_15c = local_15c + 0xc;
            }
          }
          iVar8 = local_13c;
          local_c4 = (undefined1 *)0x0;
          if (*(int *)(*(int *)(iVar9 + 0x5c) + 0x10) != 0) {
            iVar9 = **(int **)(*(int *)(iVar9 + 0x5c) + 0x10);
            if (iVar9 == 0) {
              local_c4 = &LAB_003ffca4;
            }
            else if (iVar9 == 1) {
              local_c4 = &LAB_003ffcc4;
            }
            else if (iVar9 == 2) {
              local_c4 = &LAB_003ffce4;
            }
            else {
              local_c4 = (undefined1 *)0x0;
            }
          }
          iVar9 = *(int *)(local_13c + 8);
          if ((iVar9 == 0) ||
             ((uint)(*(int *)(local_13c + 0x10) - iVar9 >> 7) <=
              (uint)(*(int *)(local_13c + 0xc) - iVar9 >> 7))) {
            FUN_00050250(local_13c + 4,*(undefined4 *)(local_13c + 0xc),1,&local_120);
          }
          else {
            iVar9 = *(int *)(local_13c + 0xc);
            FUN_00050c70(iVar9,1,&local_120,local_13c + 4,puVar1);
            *(int *)(iVar8 + 0xc) = iVar9 + 0x80;
          }
          if (local_150 != 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00237ec0(local_150);
          }
          local_150 = 0;
          local_14c = 0;
          local_148 = 0;
          if (local_ac != 0) {
            iVar9 = local_ac;
            if (local_ac != local_a8) {
              do {
                FUN_000e35e0(0);
                iVar9 = iVar9 + 0xc;
              } while (iVar9 != local_a8);
            }
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00237ec0(local_ac);
          }
          local_ac = 0;
          local_a8 = 0;
          local_a4 = 0;
          if (local_bc != 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00237ec0(local_bc);
          }
          local_158 = local_158 + 1;
          local_bc = 0;
          local_b8 = 0;
          local_b4 = 0;
        }
      }
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      local_88 = 0;
      local_7c = 0;
      FUN_0004f640();
      if (local_14 != 0) {
        iVar9 = local_14;
        if (local_14 != local_10) {
          do {
            FUN_000e35e0(0);
            iVar9 = iVar9 + 0xc;
          } while (iVar9 != local_10);
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(local_14);
      }
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      if (local_24 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(local_24);
      }
      puVar5 = puVar5 + 3;
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
    } while (puVar5 != puVar1);
  }
  return;
}
