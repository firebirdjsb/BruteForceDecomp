/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2D52C99E3A3D219D204C8302512DBC645C52E147255D498966A2E67E6F88F0A5
 * Entry: 0x003512aa, Ghidra index: 13062, label: FUN_003512aa
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_003512aa(int param_1,uint *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int in_ECX;
  undefined4 uVar8;
  uint *puVar9;
  uint local_20;
  int local_1c;
  uint *local_18;
  undefined4 *local_14;
  uint local_c;
  undefined1 local_8;
  
  local_8 = KeRaiseIrqlToDpcLevel();
  iVar5 = param_1;
  if (param_1 == 0) {
    *(byte *)(in_ECX + 0x8c4) = *(byte *)(in_ECX + 0x8c4) & 0xfd;
    uVar8 = 0;
    goto LAB_00351392;
  }
  FUN_003511e5();
  *(undefined4 *)(in_ECX + 0xa70) = 0;
  if (((uint)param_2 & 1) == 0) {
LAB_0035133e:
    if ((*(byte *)(in_ECX + 0x8c4) & 1) == 0) {
      *(undefined4 *)(in_ECX + 0x910) = *(undefined4 *)(iVar5 + 0x18c);
      *(undefined2 *)(in_ECX + 0x914) = *(undefined2 *)(iVar5 + 400);
      *(ushort *)(in_ECX + 0x916) =
           CONCAT11((char)*(undefined2 *)(param_1 + 0x192),
                    (char)((ushort)*(undefined2 *)(param_1 + 0x192) >> 8));
      iVar5 = param_1;
    }
    uVar8 = 0;
    uVar4 = PhyGetLinkState(0);
    if ((uVar4 & 1) != 0) {
      if ((*(byte *)(iVar5 + 0x40) & 1) != 0) {
        pbVar1 = (byte *)(iVar5 + 0x42);
        if (((*(int *)pbVar1 == 0) && (*(short *)(iVar5 + 0x46) == 0)) || ((*pbVar1 & 1) != 0)) {
          *(uint *)(in_ECX + 0xa70) = *(uint *)(in_ECX + 0xa70) | 0x80000040;
        }
        else {
          *(uint *)(in_ECX + 0xa70) = *(uint *)(in_ECX + 0xa70) | 0x20;
          FUN_0034d40c(pbVar1);
        }
      }
      if ((*(byte *)(iVar5 + 0x40) & 8) != 0) {
        *(uint *)(in_ECX + 0xa70) = *(uint *)(in_ECX + 0xa70) | 8;
        *(byte *)(in_ECX + 0x8c4) = *(byte *)(in_ECX + 0x8c4) | 0x40;
        param_2 = (uint *)(in_ECX + 0x8f0);
        puVar9 = (uint *)(iVar5 + 0x54);
        local_14 = (undefined4 *)0x2;
        do {
          local_c = *puVar9;
          if (local_c != 0) {
            iVar3 = FUN_0034cc6e();
            if (iVar3 == 0) {
              *(uint *)(in_ECX + 0xa70) = *(uint *)(in_ECX + 0xa70) | 0x80000080;
            }
            else {
              *param_2 = local_c;
              param_2 = param_2 + 1;
            }
          }
          puVar9 = puVar9 + 1;
          local_14 = (undefined4 *)((int)local_14 + -1);
        } while (local_14 != (undefined4 *)0x0);
      }
      if ((*(ushort *)(iVar5 + 0x40) & 2) != 0) {
        *(uint *)(in_ECX + 0xa70) = *(uint *)(in_ECX + 0xa70) | 2;
        if ((*(byte *)(in_ECX + 0x8c4) & 4) == 0) {
          iVar3 = FUN_0034fdff(in_ECX + 0x95a,0x40,iVar5 + 0x84,0x40);
          if (iVar3 == 0) {
            *(uint *)(in_ECX + 0xa70) = *(uint *)(in_ECX + 0xa70) | 0x80000100;
          }
          iVar3 = FUN_0034fdff(in_ECX + 0x99a,0x40,iVar5 + 0xc4,0x40);
          if (iVar3 == 0) {
            *(uint *)(in_ECX + 0xa70) = *(uint *)(in_ECX + 0xa70) | 0x80000200;
          }
          iVar3 = FUN_0034fdff(in_ECX + 0x9da,0x28,iVar5 + 0x104,0x28);
          if (iVar3 == 0) {
            *(uint *)(in_ECX + 0xa70) = *(uint *)(in_ECX + 0xa70) | 0x80000400;
          }
          iVar3 = FUN_0034fdff(in_ECX + 0xa02,0x28,iVar5 + 300,0x28);
          if (iVar3 == 0) {
            *(uint *)(in_ECX + 0xa70) = *(uint *)(in_ECX + 0xa70) | 0x80000800;
          }
        }
        *(undefined4 *)(in_ECX + 0xa44) = *(undefined4 *)(iVar5 + 0x194);
        *(undefined2 *)(in_ECX + 0xa48) = *(undefined2 *)(iVar5 + 0x198);
        *(undefined2 *)(in_ECX + 0xa4a) = *(undefined2 *)(param_1 + 0x19a);
        *(undefined4 *)(in_ECX + 0xa58) = *(undefined4 *)(in_ECX + 0x1d8);
        uVar4 = (byte)~(byte)((uint)*(undefined4 *)(in_ECX + 0xa70) >> 0x1b) & 0xffffff10;
        goto LAB_0035165a;
      }
      if ((*(ushort *)(iVar5 + 0x40) & 4) == 0) {
        iVar3 = FUN_0034fdff(in_ECX + 0x932,0x28,iVar5 + 0x5c,0x28);
        if (iVar3 == 0) {
          *(uint *)(in_ECX + 0xa70) = *(uint *)(in_ECX + 0xa70) | 0x80000100;
        }
        if ((*(byte *)(in_ECX + 0x8c4) & 1) == 0) {
          iVar3 = *(int *)(iVar5 + 0x160);
          *(int *)(in_ECX + 0x8e8) = iVar3;
          if ((iVar3 == 0) || (iVar3 = FUN_0034cc6e(), iVar3 != 0)) {
            iVar3 = *(int *)(iVar5 + 0x158);
            if (*(uint *)(iVar5 + 0x154) == 0 && iVar3 == 0) goto LAB_00351656;
            if (((0x1c19256 < iVar3) &&
                ((((0x1c19257 < iVar3 || (0x41647fff < *(uint *)(iVar5 + 0x154))) &&
                  ((uint)*(byte *)(in_ECX + 0x22) * 0xe10 <= *(uint *)(iVar5 + 0x15c))) &&
                 ((*(uint *)(iVar5 + 0x15c) <= (uint)*(byte *)(in_ECX + 0x23) * 0x15180 &&
                  (iVar3 = FUN_0034cc6e(), iVar3 != 0)))))) &&
               (uVar4 = *(uint *)(iVar5 + 0x164),
               uVar4 = ~((uVar4 & 0xff0000 | uVar4 >> 0x10) >> 8 |
                        (uVar4 << 0x10 | uVar4 & 0xff00) << 8), (uVar4 & uVar4 + 1) == 0)) {
              local_14 = (undefined4 *)(iVar5 + 0x168);
              iVar3 = FUN_0034cc6e();
              if (iVar3 != 0) {
                local_c = 0;
                puVar9 = (uint *)(iVar5 + 0x16c);
                param_2 = (uint *)(iVar5 + 0x17c);
                local_18 = puVar9;
                do {
                  for (; (puVar9 < param_2 && (*puVar9 != 0)); puVar9 = puVar9 + 1) {
                    iVar3 = FUN_0034cc6e();
                    if (iVar3 == 0) goto LAB_0035164f;
                  }
                  local_c = local_c + 1;
                  puVar9 = (uint *)(iVar5 + 0x17c);
                  param_2 = (uint *)(iVar5 + 0x18c);
                } while (local_c < 2);
                KeQuerySystemTime(&local_20);
                if ((*(int *)(iVar5 + 0x158) <= local_1c) &&
                   ((*(int *)(iVar5 + 0x158) < local_1c || (*(uint *)(iVar5 + 0x154) <= local_20))))
                {
                  uVar4 = *(uint *)(iVar5 + 0x15c);
                  lVar2 = (ulonglong)uVar4 * 10000000;
                  local_c = (uint)((ulonglong)lVar2 >> 0x20);
                  uVar7 = (uint)lVar2;
                  iVar3 = local_c + *(int *)(iVar5 + 0x158) +
                          (uint)CARRY4(uVar7,*(uint *)(iVar5 + 0x154));
                  if ((local_1c <= iVar3) &&
                     ((local_1c < iVar3 || (local_20 < uVar7 + *(uint *)(iVar5 + 0x154))))) {
                    iVar3 = __alldiv(local_20 - *(uint *)(iVar5 + 0x154),
                                     (local_1c - *(int *)(iVar5 + 0x158)) -
                                     (uint)(local_20 < *(uint *)(iVar5 + 0x154)),10000000,0);
                    uVar4 = uVar4 - iVar3;
                    if ((uint)*(byte *)(in_ECX + 0x22) * 0xe10 <= uVar4) {
                      *(undefined4 *)(in_ECX + 0x918) = *(undefined4 *)(in_ECX + 0x1d8);
                      *(uint *)(in_ECX + 0x91c) = uVar4 >> 1;
                      *(uint *)(in_ECX + 0x920) = uVar4 * 7 >> 3;
                      *(uint *)(in_ECX + 0x924) = uVar4;
                      *(undefined4 *)(in_ECX + 0x8e8) = *(undefined4 *)(iVar5 + 0x160);
                      *(undefined4 *)(in_ECX + 0x8ec) = *(undefined4 *)(iVar5 + 0x164);
                      *(undefined4 *)(in_ECX + 0x928) = *local_14;
                      *(uint *)(in_ECX + 0x900) = *local_18;
                      *(uint *)(in_ECX + 0x904) = local_18[1];
                      *(uint *)(in_ECX + 0x908) = local_18[2];
                      *(uint *)(in_ECX + 0x90c) = local_18[3];
                      if ((*(ushort *)(in_ECX + 0x8c4) & 0x40) == 0) {
                        *(undefined4 *)(in_ECX + 0x8f0) = *(undefined4 *)(param_1 + 0x17c);
                        *(undefined4 *)(in_ECX + 0x8f4) = *(undefined4 *)(param_1 + 0x180);
                        *(undefined4 *)(in_ECX + 0x8f8) = *(undefined4 *)(param_1 + 0x184);
                        *(undefined4 *)(in_ECX + 0x8fc) = *(undefined4 *)(param_1 + 0x188);
                      }
                      *(ushort *)(in_ECX + 0x8c4) = *(ushort *)(in_ECX + 0x8c4) | 0x10;
                      goto LAB_00351656;
                    }
                  }
                }
                *(byte *)(in_ECX + 0xa71) = *(byte *)(in_ECX + 0xa71) | 2;
                goto LAB_00351656;
              }
            }
          }
          else {
            *(int *)(in_ECX + 0x8e8) = 0;
          }
LAB_0035164f:
          *(byte *)(in_ECX + 0xa71) = *(byte *)(in_ECX + 0xa71) | 4;
        }
LAB_00351656:
        uVar4 = 6;
        goto LAB_0035165a;
      }
      *(uint *)(in_ECX + 0xa70) = *(uint *)(in_ECX + 0xa70) | 4;
      puVar9 = (uint *)(in_ECX + 0x8e8);
      *puVar9 = *(uint *)(iVar5 + 0x48);
      *(undefined4 *)(in_ECX + 0x8ec) = *(undefined4 *)(iVar5 + 0x4c);
      *(undefined4 *)(in_ECX + 0x900) = *(undefined4 *)(iVar5 + 0x50);
      iVar5 = FUN_0034cc6e();
      if (iVar5 == 0) {
        *puVar9 = 0;
        *(uint *)(in_ECX + 0xa70) = *(uint *)(in_ECX + 0xa70) | 0x80000100;
      }
      uVar4 = *(uint *)(in_ECX + 0x8ec);
      if ((uVar4 == 0) ||
         (uVar4 = ~((uVar4 & 0xff0000 | uVar4 >> 0x10) >> 8 | (uVar4 << 0x10 | uVar4 & 0xff00) << 8)
         , (uVar4 & uVar4 + 1) != 0)) {
        puVar6 = (undefined4 *)FUN_0034ca0b(&param_1);
        uVar8 = *puVar6;
        *(uint *)(in_ECX + 0xa70) = *(uint *)(in_ECX + 0xa70) | 0x80000200;
        *(undefined4 *)(in_ECX + 0x8ec) = uVar8;
      }
      iVar5 = FUN_0034cc6e();
      uVar4 = 0;
      if (iVar5 == 0) {
LAB_003515eb:
        *(uint *)(in_ECX + 0x900) = 0;
        *(uint *)(in_ECX + 0xa70) = *(uint *)(in_ECX + 0xa70) | 0x80000400;
      }
      else {
        uVar4 = 0;
        if ((*puVar9 != 0) &&
           (uVar4 = *puVar9 & *(uint *)(in_ECX + 0x8ec),
           uVar4 != (*(uint *)(in_ECX + 0x8ec) & *(uint *)(in_ECX + 0x900)))) goto LAB_003515eb;
      }
      uVar4 = CONCAT31((int3)(uVar4 >> 8),*puVar9 != 0);
LAB_0035165a:
      FUN_00350db4(uVar4,0);
      KfLowerIrql();
      return 0;
    }
    *(uint *)(in_ECX + 0xa70) = *(uint *)(in_ECX + 0xa70) | 0x80000010;
  }
  else {
    *(byte *)(in_ECX + 0x8c4) = *(byte *)(in_ECX + 0x8c4) | 1;
    if (((uint)param_2 & 2) != 0) {
      *(ushort *)(in_ECX + 0x8c4) = *(ushort *)(in_ECX + 0x8c4) | 2;
    }
    if (((uint)param_2 & 4) == 0) goto LAB_0035133e;
    iVar3 = FUN_0034c68a((uint)*(byte *)(in_ECX + 0x26) * 0x18c + 4,0x4a54454e);
    *(int *)(in_ECX + 0xa2c) = iVar3;
    if (iVar3 != 0) {
      *(byte *)(in_ECX + 0x8c4) = *(byte *)(in_ECX + 0x8c4) | 4;
      goto LAB_0035133e;
    }
    uVar8 = 0x2747;
  }
  FUN_00350db4(0,0);
LAB_00351392:
  KfLowerIrql();
  return uVar8;
}
