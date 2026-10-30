/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F41752302F5146AC93370AC49B1633EC3D369537C1E7197DB5439C98B3C1015B
 * Entry: 0x00337110, Ghidra index: 12460, label: FUN_00337110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00337110(int param_1,uint param_2,int param_3)

{
  short *psVar1;
  undefined4 *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  
  iVar6 = param_1;
  if ((((param_3 != 0) || (0x3d < param_2)) &&
      (iVar16 = *(int *)(param_1 + 4), param_2 == iVar16 + 0x20U)) && (param_3 == 0)) {
    iVar5 = *(int *)(param_1 + 0x2a);
    if (iVar5 < 0) {
      return -0x7feafff9;
    }
    iVar7 = FUN_00335894(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    iVar17 = *(int *)(param_1 + 0x3a);
    puVar2 = (undefined4 *)(iVar16 + 0x20 + param_1);
    puVar13 = (undefined4 *)(param_1 + 0x3e + iVar17 * 4);
    if (puVar13 <= puVar2) {
      iVar16 = param_1 + 0x3e;
      uVar8 = FUN_003358ca(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
      FUN_003476a4(uVar8,iVar16,iVar17);
      psVar1 = (short *)(param_1 + 0x34);
      uVar3 = 0;
      puVar11 = puVar13;
      param_1 = iVar5;
      if (*psVar1 != 0) {
        do {
          puVar12 = (undefined4 *)((int)puVar11 + 6);
          if (puVar2 < puVar12) {
            return -0x7feaffff;
          }
          uVar4 = *(ushort *)(iVar6 + 0x28);
          puVar9 = (undefined4 *)((uint)*(ushort *)(puVar11 + 1) + (int)puVar12);
          if (uVar4 < 2) {
            puVar14 = (undefined4 *)((int)puVar11 + 0x1a);
            if (puVar2 < puVar14) {
              return -0x7feaffff;
            }
            if (puVar9 < puVar14) {
              return -0x7feaffff;
            }
            uVar10 = (uint)*(ushort *)(puVar11 + 6);
            puVar13 = (undefined4 *)((int)puVar14 + uVar10);
            if (puVar2 < puVar13) {
              return -0x7feaffff;
            }
            if (puVar9 < puVar13) {
              return -0x7feaffff;
            }
            uVar4 = *(ushort *)((int)puVar11 + 0x12);
            if (uVar4 != 0) {
              if (uVar4 == 1) {
                if (-1 < (int)puVar11[5]) {
                  param_1 = FUN_003366cd(*(undefined4 *)(iVar7 + 0x40),
                                         *(undefined4 *)((int)puVar11 + 10),
                                         *(undefined4 *)((int)puVar11 + 0xe),puVar14,uVar10,
                                         0x40000000,*puVar12);
                }
                if (*(int *)(iVar7 + 0x4c) != 0) {
                  iVar16 = puVar11[5];
                  if (iVar16 < 0) {
                    if (iVar16 == -0x7ff8fadc) {
                      puVar11[5] = 0x80152007;
                    }
                    else if (iVar16 == -0x7ff8fadb) {
                      puVar11[5] = 0x80152008;
                    }
                    *(undefined4 *)(*(int *)(iVar7 + 0x4c) + 0x10) = puVar11[5];
                  }
                  else {
                    *(undefined4 *)(*(int *)(iVar7 + 0x4c) + 0x10) = 0x1500f0;
                  }
                  XAPILIB__SetEvent(*(undefined4 *)(*(int *)(iVar7 + 0x4c) + 8));
                }
              }
              else if (uVar4 == 2) {
                if (-1 < (int)puVar11[5]) {
                  uVar8 = *puVar12;
                  uVar15 = 0x80000000;
LAB_0033739c:
                  param_1 = FUN_003366cd(*(undefined4 *)(iVar7 + 0x40),
                                         *(undefined4 *)((int)puVar11 + 10),
                                         *(undefined4 *)((int)puVar11 + 0xe),puVar14,uVar10,uVar15,
                                         uVar8);
                }
              }
              else if (uVar4 == 3) {
                if (-1 < (int)puVar11[5]) {
                  uVar8 = *puVar12;
                  uVar15 = 0;
                  goto LAB_0033739c;
                }
              }
              else if ((uVar4 < 4) || (5 < uVar4)) {
                param_1 = -0x7ff8ffa9;
              }
              else if (-1 < (int)puVar11[5]) {
                param_1 = FUN_00336802(*(undefined4 *)(iVar7 + 0x40),
                                       *(undefined4 *)((int)puVar11 + 10),
                                       *(undefined4 *)((int)puVar11 + 0xe),*puVar12);
              }
            }
          }
          else if (uVar4 == 2) {
            puVar14 = (undefined4 *)((int)puVar11 + 0x22);
            if (puVar2 < puVar14) {
              return -0x7feaffff;
            }
            if (puVar9 < puVar14) {
              return -0x7feaffff;
            }
            uVar4 = *(ushort *)(puVar11 + 8);
            puVar13 = (undefined4 *)
                      ((int)puVar14 + (uint)uVar4 + (uint)*(ushort *)((int)puVar11 + 0x1e));
            if (puVar2 < puVar13) {
              return -0x7feaffff;
            }
            if (puVar9 < puVar13) {
              return -0x7feaffff;
            }
            if ((uVar4 < 9) && (*(ushort *)((int)puVar11 + 0x1e) < 0x19)) {
              FUN_0033651d(*(undefined4 *)(iVar7 + 0x40),*puVar12,*(undefined4 *)((int)puVar11 + 10)
                           ,*(undefined4 *)((int)puVar11 + 0xe),*(undefined4 *)((int)puVar11 + 0x12)
                           ,*(undefined4 *)((int)puVar11 + 0x16),
                           *(undefined4 *)((int)puVar11 + 0x1a),
                           CONCAT22((short)((uint)puVar2 >> 0x10),uVar4),
                           *(ushort *)((int)puVar11 + 0x1e) + 0x1c + (int)puVar12,
                           *(undefined2 *)((int)puVar11 + 0x1e),puVar14);
            }
          }
          else if (uVar4 == 3) {
            puVar13 = (undefined4 *)((int)puVar11 + 0x22);
            if (puVar2 < puVar13) {
              return -0x7feaffff;
            }
            if (puVar9 < puVar13) {
              return -0x7feaffff;
            }
            FUN_00336922(*(undefined4 *)(iVar7 + 0x40),*puVar12,*(undefined4 *)((int)puVar11 + 10),
                         *(undefined4 *)((int)puVar11 + 0x16),*(undefined4 *)((int)puVar11 + 0xe),
                         *(undefined4 *)((int)puVar11 + 0x12),*(undefined4 *)((int)puVar11 + 0x1a),
                         *(undefined4 *)((int)puVar11 + 0x1e));
          }
          else {
            puVar13 = puVar12;
            if (uVar4 == 4) {
              puVar13 = puVar11 + 8;
              if (puVar2 < puVar13) {
                return -0x7feaffff;
              }
              if (puVar9 < puVar13) {
                return -0x7feaffff;
              }
              if (*(short *)((int)puVar11 + 0x1e) == 0) {
                uVar8 = 0x20000000;
              }
              else {
                uVar8 = 0x10000000;
              }
              FUN_003368d0(*(undefined4 *)(iVar7 + 0x40),*puVar12,*(undefined4 *)((int)puVar11 + 10)
                           ,0,uVar8);
            }
          }
          if (puVar13 != puVar9) {
            return -0x7feaffff;
          }
          uVar3 = uVar3 + 1;
          puVar11 = puVar13;
        } while (uVar3 < *(ushort *)(iVar6 + 0x34));
      }
      if (puVar13 == puVar2) {
        return param_1;
      }
    }
  }
  return -0x7feaffff;
}
