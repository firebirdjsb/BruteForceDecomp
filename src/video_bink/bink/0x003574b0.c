/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D22831356CDF0BF9FA390EC47B3211D3F424C9DFDF0D0DC895638771ACD9A6F9
 * Entry: 0x003574b0, Ghidra index: 13157, label: FUN_003574b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Matched to C-draft definitions, NOT verified original Xbox callback ABI. */
extern undefined4 FUN_0035f8d0(undefined4 *param_1,undefined4 param_2,uint param_3);
extern undefined1 * FUN_0035a8c0(int param_1);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00387b18;
extern uint32_t DAT_00387b28;
extern uint32_t DAT_004128d0;
extern uint32_t DAT_004128d8;
extern uint32_t *DAT_004b1680;
extern uint32_t *DAT_004b1684;
extern uint32_t DAT_004b1688;
extern uint32_t DAT_004b168c;
extern uint32_t DAT_004b1690;
extern uint32_t DAT_004b1694;
extern uint32_t DAT_004b1698;
extern uint32_t DAT_004b169c;
extern uint32_t DAT_004b16a0;
extern uint32_t DAT_004b16a4;
extern uint32_t DAT_004b16c4;
/* WARNING: Removing unreachable block (ram,0x00358011) */

int * FUN_003574b0(int *param_1,uint param_2)

{
  char *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  code *pcVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int *piVar14;
  undefined4 *puVar15;
  int *piVar16;
  undefined4 *puVar17;
  bool bVar18;
  uint local_3cc;
  uint local_3c8;
  longlong local_3c4;
  undefined4 local_3bc;
  int local_3b8 [4];
  int local_3a8;
  int local_3a4;
  int local_3a0;
  int local_39c;
  uint local_398;
  uint local_394;
  int local_390;
  int local_38c [5];
  int local_378;
  uint local_374;
  uint local_36c;
  uint local_368;
  undefined4 local_364;
  undefined4 uStack_2d0;
  int local_2c0;
  int local_2bc;
  uint local_2b8;
  uint local_2b4;
  undefined1 local_2b0 [4];
  uint local_2ac;
  uint local_2a8;
  undefined4 local_2a4;
  int local_2a0;
  int local_29c;
  code *apcStack_288 [2];
  undefined1 local_280 [4];
  undefined1 local_27c [20];
  code *local_268;
  int local_138;
  int local_134;
  undefined1 local_130 [4];
  undefined1 local_12c [4];
  undefined1 local_128 [4];
  undefined1 local_124 [64];
  int local_e4;
  undefined4 local_d4;
  int local_d0;
  uint local_cc;
  uint local_c8;
  int local_c4;
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  undefined1 local_b8 [4];
  undefined1 local_b4 [4];
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  undefined1 local_a8 [28];
  undefined1 local_8c [16];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c [23];
  
  if ((param_2 & 0x4000) == 0) {
    DAT_004b16a0 = 1;
    DAT_004b16a4 = 0;
  }
  piVar8 = local_38c;
  for (iVar13 = 0xe3; iVar13 != 0; iVar13 = iVar13 + -1) {
    *piVar8 = 0;
    piVar8 = piVar8 + 1;
  }
  local_d4 = FUN_0035b1a0();
  uVar6 = param_2 & 0x4000000;
  DAT_004128d8 = '\0';
  if (uVar6 == 0) {
    pcVar10 = FUN_0035f8d0;
    if (((param_2 & 0x2000000) != 0) && (DAT_004b16c4 != (code *)0x0)) {
      pcVar10 = DAT_004b16c4;
    }
    DAT_004b16c4 = (code *)0x0;
    iVar13 = (*pcVar10)(local_27c,param_1,param_2);
    if (iVar13 == 0) {
      if (DAT_004128d8 == '\0') {
        FUN_00356e00("Error opening file.");
      }
      return (int *)0x0;
    }
    (*apcStack_288[0])(apcStack_288,0,&local_3c4,0x2c);
  }
  else {
    piVar8 = param_1;
    piVar14 = local_3b8;
    for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
      *piVar14 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar14 = piVar14 + 1;
    }
  }
  if ((((local_3b8[0] != 0x664b4942) && (local_3b8[0] != 0x674b4942)) &&
      (local_3b8[0] != 0x684b4942)) && (local_3b8[0] != 0x694b4942)) {
    FUN_00356e00("Not a Bink file.");
    goto LAB_00357d81;
  }
  if (local_3b8[2] == 0) {
    iVar13 = 0;
    do {
      pcVar1 = &DAT_00387b28 + iVar13;
      (&DAT_004128d8)[iVar13] = *pcVar1;
      iVar13 = iVar13 + 1;
    } while (*pcVar1 != '\0');
    goto LAB_00357d81;
  }
  uVar7 = (local_3a4 + 1U >> 1) + 7;
  local_2b8 = uVar7 & 0xfffffff8;
  local_2c0 = local_2b8 * 2;
  local_2b4 = (local_3a0 + 1U >> 1) + 7 & 0xfffffff8;
  local_2bc = local_2b4 * 2;
  local_2ac = (uVar7 & 0x7ffffff8) >> 3;
  local_36c = param_2 & 0x8fffffff;
  local_38c[0] = local_3a4;
  local_38c[1] = local_3a0;
  local_138 = local_3a4;
  local_134 = local_3a0;
  local_368 = local_394;
  if ((local_394 & 0x100000) == 0) {
    local_36c = param_2 & 0x8fefffff;
  }
  local_36c = local_394 & 0x20000 | local_36c;
  uVar7 = param_2 & 0x70000000;
  if (uVar7 != 0x70000000) {
    if (uVar7 == 0) {
      uVar7 = local_394 & 0x70000000;
    }
    local_36c = local_36c | uVar7;
    if (uVar7 < 0x30000001) {
      if (uVar7 == 0x30000000) {
        local_38c[0] = local_3a4 * 2;
      }
      else if ((uVar7 == 0x10000000) || (uVar7 == 0x20000000)) goto LAB_003576df;
    }
    else if ((uVar7 == 0x40000000) || (uVar7 == 0x50000000)) {
      local_38c[0] = local_3a4 * 2;
LAB_003576df:
      local_38c[1] = local_3a0 * 2;
    }
  }
  if ((local_3b8[0] == 0x664b4942) || (local_3b8[0] == 0x674b4942)) {
    local_36c = local_36c | 0x18000;
  }
  else if (local_3b8[0] == 0x684b4942) {
    local_36c = local_36c | 0x8000;
  }
  local_38c[2] = local_3b8[2];
  local_2a0 = local_3a8;
  if (((param_2 & 0x1000) == 0) || (DAT_004b1694 == -1)) {
    local_378 = local_39c;
    local_374 = local_398;
  }
  else {
    local_378 = DAT_004b1694;
    local_374 = DAT_004128d0;
    DAT_004b1694 = -1;
  }
  local_364 = local_3b8[1];
  local_29c = local_390;
  local_2a4 = local_3b8[3];
  local_d0 = local_39c;
  local_c8 = ((local_398 >> 1) + local_39c) / local_398;
  local_2a8 = local_2ac * local_2bc >> 4;
  local_cc = local_398;
  if (local_c8 == 0) {
    local_c8 = 1;
  }
  local_c4 = local_c8 * 4 + -4;
  FUN_002f8cb0(local_2b0,local_2a8 + 0x10);
  FUN_002f8cb0(local_c0,local_c8 * 4);
  FUN_002f8cb0(local_bc,local_c8 * 4);
  FUN_002f8cb0(local_b8,local_c8 * 4);
  FUN_002f8cb0(local_b4,local_c8 * 4);
  FUN_002f8cb0(local_b0,local_c8 * 4);
  FUN_002f8cb0(local_ac,local_c8 * 4);
  FUN_002f8cb0(local_a8,local_c8 * 4);
  uVar7 = DAT_004b16a0;
  if (DAT_004b16a0 == 0) {
    uVar7 = 1;
  }
  FUN_002f8cb0(local_8c,uVar7 * 0x178);
  FUN_002f8cb0(local_130,DAT_004b16a0 * 4);
  FUN_0035d2a0(&local_7c,local_2c0);
  FUN_002f8cb0(&local_7c,local_7c);
  FUN_002f8cb0(&local_78,local_78);
  FUN_002f8cb0(&local_74,local_74);
  FUN_002f8cb0(&local_70,local_70);
  FUN_002f8cb0(&local_6c,local_6c);
  FUN_002f8cb0(&local_68,local_68);
  FUN_002f8cb0(&local_64,local_64);
  FUN_002f8cb0(&local_60,local_60);
  FUN_002f8cb0(local_5c,local_5c[0]);
  if (uVar6 == 0) {
    FUN_002f8cb0(local_280,local_2a0 * 4 + 4);
    FUN_002f8cb0(local_12c,local_29c * 4);
    FUN_002f8cb0(local_128,local_29c * 4);
    FUN_002f8cb0(local_124,local_29c * 4);
  }
  iVar13 = FUN_002f8d90();
  local_e4 = local_e4 + 0x38c + iVar13;
  piVar8 = (int *)FUN_002f8da0(0x38c);
  if (piVar8 != (int *)0x0) {
    piVar14 = local_38c;
    piVar16 = piVar8;
    for (iVar13 = 0xe3; iVar13 != 0; iVar13 = iVar13 + -1) {
      *piVar16 = *piVar14;
      piVar14 = piVar14 + 1;
      piVar16 = piVar16 + 1;
    }
    piVar8[0x4a] = (int)piVar8;
    *(undefined4 *)piVar8[0xb4] = 0;
    *(undefined4 *)piVar8[0xb5] = 0;
    *(undefined4 *)piVar8[0xb6] = 0;
    *(undefined4 *)piVar8[0xb7] = 0;
    *(undefined4 *)piVar8[0xb8] = 0;
    *(undefined4 *)piVar8[0xb9] = 0;
    if (uVar6 == 0) {
      piVar14 = piVar8 + 0x44;
      (*(code *)*piVar14)(piVar14,0xffffffff,piVar8[0x98],piVar8[0x3c] << 2);
      (*(code *)*piVar14)(piVar14,0xffffffff,piVar8[0x99],piVar8[0x3c] << 2);
      (*(code *)*piVar14)(piVar14,0xffffffff,piVar8[0x9a],piVar8[0x3c] << 2);
      (*(code *)*piVar14)(piVar14,0xffffffff,piVar8[0x43],piVar8[0x3b] * 4 + 4);
    }
    else {
      piVar8[0x98] = (int)(param_1 + 0xb);
      iVar13 = piVar8[0x3c];
      piVar8[0x99] = (int)(param_1 + iVar13 + 0xb);
      piVar8[0x9a] = (int)(param_1 + iVar13 * 2 + 0xb);
      piVar8[0x43] = (int)(param_1 + iVar13 * 3 + 0xb);
    }
    iVar13 = FUN_003572e0(piVar8[2],piVar8[0xb1],piVar8 + 0x3e,&local_3c8);
    piVar8[0x3d] = iVar13;
    if ((piVar8[8] & 0x100000U) == 0) {
      uVar7 = local_3c8;
      if (local_3c8 == 0) goto LAB_00357bcf;
    }
    else {
      FUN_002f8cb0(piVar8 + 0x31,piVar8[0x33] * piVar8[0x34]);
      uVar7 = local_3c8;
      if (local_3c8 == 0) {
        FUN_002f8cb0(piVar8 + 0x32,piVar8[0x33] * piVar8[0x34]);
LAB_00357bcf:
        FUN_002f8cb0(piVar8 + 0x30,piVar8[0x34] * piVar8[0x33] + piVar8[0x36] * piVar8[0x35] * 2);
      }
    }
    iVar13 = piVar8[0x34] * piVar8[0x33] + piVar8[0x36] * piVar8[0x35] * 2;
    iVar9 = FUN_002f8d90();
    piVar8[0xaa] = piVar8[0xaa] + iVar9 + iVar13;
    iVar13 = FUN_002f8da0(iVar13);
    piVar8[0x2f] = iVar13;
    if (iVar13 != 0) {
      if (uVar7 != 0) {
        piVar8[0x30] = iVar13;
        piVar8[0x32] = piVar8[0x31];
      }
      if (((param_2 & 0x1000000) == 0) || (DAT_004b1698 == -1)) {
        piVar8[0x94] = piVar8[0x3d];
      }
      else {
        piVar8[0x94] = DAT_004b1698;
        DAT_004b1698 = -1;
      }
      if (((param_2 & 0x400000) == 0) || (DAT_004b169c == 0xffffffff)) {
        local_3c8 = 0;
      }
      else {
        local_3c8 = DAT_004b169c;
        DAT_004b169c = 0xffffffff;
      }
      if (uVar6 != 0) {
        piVar8[0x42] = (*(uint *)piVar8[0x43] & 0xfffffffe) + (int)param_1;
LAB_00357e3b:
        *(undefined1 *)(piVar8[0x39] + piVar8[0x37]) = 0;
        uVar6 = piVar8[5];
        piVar8[3] = -1;
        if (uVar6 == 0) {
          piVar8[0xa2] = 2000;
        }
        else {
          local_3bc = 2000;
          piVar8[0xa2] = (int)(((ulonglong)(uint)piVar8[6] * 2000) / (ulonglong)uVar6);
          local_3c8 = uVar6;
        }
        piVar8[0xa9] = 1;
        FUN_003571b0();
        iVar13 = FUN_0035b1a0();
        piVar8[0xae] = iVar13 - piVar8[0xae];
        *(undefined4 *)(piVar8[0xc0] + 0x68) = 0x10000;
        piVar8[0xbe] = 0;
        if (((piVar8[0x3c] != 0) && (DAT_004b16a0 != 0)) && (uVar6 = 0, DAT_004b16a0 != 0)) {
          do {
            iVar13 = 0;
            if (0 < piVar8[0x3c]) {
              piVar14 = (int *)piVar8[0x9a];
              do {
                if (*piVar14 == (&DAT_004b16a4)[uVar6]) {
                  *(int *)(piVar8[0x97] + piVar8[0xbe] * 4) = iVar13;
                  piVar8[0xbe] = piVar8[0xbe] + 1;
                  break;
                }
                iVar13 = iVar13 + 1;
                piVar14 = piVar14 + 1;
              } while (iVar13 < piVar8[0x3c]);
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < DAT_004b16a0);
        }
        DAT_004b16a4 = 0;
        DAT_004b16a0 = 1;
        local_3cc = 0;
        if (piVar8[0xbe] != 0) {
          iVar13 = 0;
          do {
            *(undefined4 *)(piVar8[0xc0] + 0x2c + iVar13) = 0;
            if ((*(uint *)(piVar8[0x99] + *(int *)(piVar8[0x97] + local_3cc * 4) * 4) & 0x90000000)
                != 0) {
              if (DAT_004b1684 == (code *)0x0) {
                if (DAT_004b1680 == (code *)0x0) {
LAB_00357fb2:
                  DAT_004b1680 = FUN_0035a8c0;
                }
                else if (DAT_004b1680 != FUN_0035a8c0) {
                  if (DAT_004b1688 != 0) goto LAB_00358289;
                  goto LAB_00357fb2;
                }
                pcVar10 = (code *)(*DAT_004b1680)(0);
                if (pcVar10 != (code *)0x0) {
                  DAT_004b1684 = pcVar10;
                }
                if (DAT_004b1684 == (code *)0x0) goto LAB_00358289;
              }
              uVar6 = *(uint *)(piVar8[0x99] + *(int *)(piVar8[0x97] + local_3cc * 4) * 4);
              uVar7 = uVar6 & 0xffff;
              if ((local_378 != 0) && (local_374 != 0)) {
                dVar5 = (double)(int)local_cc;
                if ((int)local_cc < 0) {
                  dVar5 = dVar5 + 4294967296.0;
                }
                dVar4 = (double)local_378;
                if (local_378 < 0) {
                  dVar4 = dVar4 + 4294967296.0;
                }
                dVar2 = (double)local_d0;
                if (local_d0 < 0) {
                  dVar2 = dVar2 + 4294967296.0;
                }
                dVar3 = (double)(int)local_374;
                if ((int)local_374 < 0) {
                  dVar3 = dVar3 + 4294967296.0;
                }
                local_3c4 = (longlong)ROUND((dVar4 * dVar5 * (double)uVar7) / (dVar3 * dVar2));
                uVar7 = (uint)local_3c4;
              }
              iVar9 = (*DAT_004b1684)(piVar8[0xc0] + iVar13,uVar7,(uVar6 >> 0x1e & 1) * 8 + 8,
                                      (uVar6 >> 0x1d & 1) + 1,piVar8[8],piVar8);
              if (iVar9 != 0) {
                piVar14 = (int *)(piVar8[0xc0] + 0x58 + iVar13);
                if (*piVar14 == 0) {
                  *piVar14 = -1;
                }
                *(uint *)(piVar8[0xc0] + 0x28 + iVar13) =
                     *(int *)(piVar8[0x98] + *(int *)(piVar8[0x97] + local_3cc * 4) * 4) + 0xffU &
                     0xffffff00;
                iVar9 = *(int *)(piVar8[0xc0] + 0x28 + iVar13);
                iVar11 = FUN_002f8d90();
                piVar8[0xaa] = piVar8[0xaa] + iVar11 + iVar9;
                uVar12 = FUN_002f8da0(iVar9);
                *(undefined4 *)(piVar8[0xc0] + 0x2c + iVar13) = uVar12;
                iVar9 = piVar8[0xc0] + iVar13;
                if (*(int *)(piVar8[0xc0] + 0x2c + iVar13) == 0) {
                  (**(code **)(iVar9 + 0x1c))(iVar9);
                }
                else {
                  DAT_004b1688 = DAT_004b1688 + 1;
                  *(uint *)(iVar9 + 0x44) =
                       (uint)((*(uint *)(piVar8[0x99] + *(int *)(piVar8[0x97] + local_3cc * 4) * 4)
                               >> 0x1b & 8) == 0);
                  iVar9 = piVar8[0xc0];
                  *(int *)(iVar9 + 0x30 + iVar13) =
                       *(int *)(iVar9 + 0x2c + iVar13) + *(int *)(iVar9 + 0x28 + iVar13);
                  *(undefined4 *)(piVar8[0xc0] + 0x34 + iVar13) =
                       *(undefined4 *)(piVar8[0xc0] + 0x2c + iVar13);
                  *(undefined4 *)(piVar8[0xc0] + 0x38 + iVar13) =
                       *(undefined4 *)(piVar8[0xc0] + 0x2c + iVar13);
                  local_3c8 = 0x2ee - *(int *)(piVar8[0xc0] + 100 + iVar13);
                  uVar6 = ((*(uint *)(piVar8[0x99] + *(int *)(piVar8[0x97] + local_3cc * 4) * 4) >>
                            0x1d & 1) + 1) * uVar7 * 2;
                  local_3bc = 1000;
                  local_3c4 = CONCAT44(local_3c4._4_4_,uVar6);
                  *(uint *)(piVar8[0xc0] + 0x4c + iVar13) =
                       (uint)(((ulonglong)uVar6 * (ulonglong)local_3c8) / 1000) & 0xfffffffc;
                  iVar9 = piVar8[0xc0];
                  uVar6 = *(uint *)(iVar9 + 0x28 + iVar13);
                  if (uVar6 < *(uint *)(iVar9 + 0x4c + iVar13)) {
                    *(uint *)(iVar9 + iVar13 + 0x4c) = uVar6;
                  }
                  uVar6 = *(uint *)(piVar8[0x99] + *(int *)(piVar8[0x97] + local_3cc * 4) * 4);
                  if (((int)uVar6 < 0) || ((uVar6 & 0x10000000) == 0)) {
                    uVar12 = 0;
                  }
                  else {
                    uVar12 = 1;
                  }
                  uVar12 = FUN_0035b940(uVar6 & 0xffff,(uVar6 >> 0x1d & 1) + 1,uVar12);
                  *(undefined4 *)(piVar8[0xc0] + 0x3c + iVar13) = uVar12;
                  *(uint *)(piVar8[0xc0] + 0x48 + iVar13) =
                       piVar8[2] - (uint)(piVar8[0xaf] * 3) / (uint)(piVar8[0xb0] << 2);
                  *(undefined4 *)(piVar8[0xc0] + 0x40 + iVar13) = 0;
                }
              }
            }
LAB_00358289:
            if (*(int *)(piVar8[0xc0] + 0x68 + iVar13) == 0) {
              *(undefined4 *)(piVar8[0xc0] + 0x68 + iVar13) = 0x10000;
            }
            if (*(int *)(piVar8[0xc0] + 0x2c + iVar13) == 0) {
              iVar9 = piVar8[0xbe];
              puVar15 = (undefined4 *)(piVar8[0x97] + local_3cc * 4);
              piVar8[0xbe] = iVar9 + -1;
              puVar17 = puVar15;
              for (uVar6 = (iVar9 + -1) - local_3cc & 0x3fffffff; puVar15 = puVar15 + 1, uVar6 != 0;
                  uVar6 = uVar6 - 1) {
                *puVar17 = *puVar15;
                puVar17 = puVar17 + 1;
              }
              for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
                *(undefined1 *)puVar17 = *(undefined1 *)puVar15;
                puVar15 = (undefined4 *)((int)puVar15 + 1);
                puVar17 = (undefined4 *)((int)puVar17 + 1);
              }
            }
            else {
              local_3cc = local_3cc + 1;
              iVar13 = iVar13 + 0x178;
            }
          } while (local_3cc < (uint)piVar8[0xbe]);
        }
        if (piVar8[0xbe] != 0) {
          bVar18 = DAT_004b1690 == 0;
          piVar8[0xa8] = 1;
          if (bVar18) {
            DAT_004b1690 = FUN_0035ab10(0x14);
            FUN_0035acd0(DAT_004b1690);
          }
          FUN_0035aba0(DAT_004b1690,piVar8 + 0xd3,&LAB_00357450,FUN_00357470);
        }
        if (((piVar8[8] & 0x8000000U) == 0) && (piVar8[0x42] == 0)) {
          if (DAT_004b168c == 0) {
            DAT_004b168c = FUN_0035ab10(5);
            FUN_0035acd0(DAT_004b168c);
          }
          FUN_0035aba0(DAT_004b168c,piVar8 + 0x83,&LAB_00357370,FUN_003573c0);
        }
        piVar8[0x81] = (int)&LAB_00357420;
        piVar8[0x7f] = (int)&LAB_003573e0;
        piVar8[0x80] = (int)&LAB_00357400;
        piVar8[0x82] = (int)&LAB_00357440;
        if ((piVar8[0x42] == 0) && ((param_2 & 0x200000) == 0)) {
          do {
            iVar13 = (*(code *)piVar8[0x48])(piVar8 + 0x44);
          } while (iVar13 != 0);
        }
        return piVar8;
      }
      piVar14 = piVar8 + 0x44;
      uVar6 = (*(code *)piVar8[0x46])(piVar14,piVar8[0x94]);
      iVar13 = piVar8[10];
      piVar8[0x94] = uVar6;
      if ((uint)(iVar13 * 9) / 10 <= uVar6) {
        param_2 = param_2 | 0x2000;
        piVar8[8] = piVar8[8] | 0x2000;
      }
      if ((param_2 & 0x2000) == 0) {
        FUN_002f8cb0(piVar8 + 0x41,piVar8[0x3a]);
        iVar13 = FUN_00356de0();
        piVar8[0x93] = iVar13;
        if (iVar13 == 0) {
          piVar8[0x94] = 0;
        }
        (*(code *)piVar8[0x47])(piVar14,iVar13,piVar8[0x94],piVar8[10] + 8,local_3c8);
        goto LAB_00357e3b;
      }
      uVar6 = *(uint *)piVar8[0x43];
      iVar9 = FUN_00356de0();
      piVar8[0x42] = iVar9;
      if (iVar9 != 0) {
        (*(code *)piVar8[0x47])(piVar14,0,0,piVar8[10] + 8,local_3c8);
        (*(code *)piVar8[0x45])
                  (piVar14,0,*(uint *)piVar8[0x43] & 0xfffffffe,piVar8[0x42],
                   (iVar13 - (uVar6 & 0xfffffffe)) + 8);
        (*(code *)piVar8[0x49])(piVar14);
        piVar8[0x50] = 0;
        goto LAB_00357e3b;
      }
      FUN_002f8e70(uStack_2d0);
    }
    FUN_002f8e70(piVar8);
  }
  iVar13 = 0;
  do {
    pcVar1 = &DAT_00387b18 + iVar13;
    (&DAT_004128d8)[iVar13] = *pcVar1;
    iVar13 = iVar13 + 1;
  } while (*pcVar1 != '\0');
LAB_00357d81:
  if ((param_2 & 0x4000000) == 0) {
    (*local_268)(local_27c);
  }
  return (int *)0x0;
}
