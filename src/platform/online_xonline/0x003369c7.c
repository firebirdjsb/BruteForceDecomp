/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3589930FC4FB1E272CE5CB86AE9708AADAB7676FAE06E48ABC56198CF4B57F49
 * Entry: 0x003369c7, Ghidra index: 12459, label: FUN_003369c7
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_s__xpnfront_xpresence_srf_003b7608;
int FUN_003369c7(int *param_1)

{
  undefined4 *puVar1;
  byte *pbVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  int in_ECX;
  char *pcVar10;
  char *pcVar11;
  uint uVar12;
  char *pcVar13;
  int *piVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 local_40 [8];
  uint local_38;
  int local_34;
  int *local_30;
  int local_2c;
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  iVar5 = (int)param_1;
  iVar15 = *(int *)((int)param_1 + 0x10);
  local_c = in_ECX;
  if (iVar15 == 0) {
    iVar15 = FUN_003353e9(param_1);
    if ((iVar15 != 0) || (iVar15 = FUN_003354e5(param_1), iVar15 != 0)) {
      XAPILIB__SetEvent(*(undefined4 *)((int)param_1 + 8));
      goto LAB_00337108;
    }
    *(undefined4 *)((int)param_1 + 0x10) = 1;
LAB_00336e79:
    iVar15 = FUN_00330c3e(*(undefined4 *)(in_ECX + 0x15c0));
    if ((iVar15 == 0x1500f0) &&
       (iVar15 = FUN_00330c3e(*(undefined4 *)(in_ECX + 0x15c8)), iVar15 == 0x1500f0)) {
      local_8 = 0;
      local_18 = (int *)(in_ECX + 0x12dc);
      do {
        if ((local_18[-3] != 0 || local_18[-2] != 0) && (*local_18 == 0)) {
          *(undefined4 *)((int)param_1 + 0x1c) = 0;
          *(undefined4 *)((int)param_1 + 0x20) = 0;
          *(undefined4 *)((int)param_1 + 0x24) = 0;
          *(undefined4 *)((int)param_1 + 0x28) = 0;
          *(undefined4 *)((int)param_1 + 0x2c) = 0;
          *(int *)((int)param_1 + 0x24) = local_18[0xd];
          iVar15 = FUN_0033d2ef(*(undefined4 *)(in_ECX + 0x15bc),(undefined4 *)((int)param_1 + 0x1c)
                               );
          if (iVar15 < 0) goto LAB_003370a3;
          *(undefined4 *)((int)param_1 + 0x1c) = 0;
          *(undefined4 *)((int)param_1 + 0x20) = 0;
          *(undefined4 *)((int)param_1 + 0x24) = 0;
          *(undefined4 *)((int)param_1 + 0x28) = 0;
          *(undefined4 *)((int)param_1 + 0x2c) = 0;
          *(int *)((int)param_1 + 0x24) = local_18[0xe];
          iVar15 = FUN_0033d2ef(*(undefined4 *)(in_ECX + 0x15c4),(undefined4 *)((int)param_1 + 0x1c)
                               );
          if (iVar15 < 0) goto LAB_003370a3;
        }
        local_8 = local_8 + 1;
        local_18 = local_18 + 0x2e;
      } while (local_8 < 4);
      pcVar10 = *(char **)((int)param_1 + 0x3c);
      local_8 = 0;
      piVar6 = (int *)(local_c + 0x12d0);
      iVar15 = local_c;
      do {
        local_28 = piVar6;
        if ((*piVar6 != 0 || piVar6[1] != 0) && (piVar6[3] == 0)) {
          pcVar10[0] = -0x17;
          pcVar10[1] = '\x03';
          pcVar10[2] = '\0';
          pcVar10[3] = '\0';
          pcVar7 = (char *)(local_8 + 0xc + *(int *)((int)param_1 + 0x38));
          local_30 = (int *)(pcVar7 + 1);
          do {
            cVar3 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar3 != '\0');
          *(char **)(pcVar10 + 4) = pcVar7 + ((*(ushort *)(piVar6 + 0x14) + 0x27) - (int)local_30);
          piVar14 = (int *)(iVar15 + 0x15b0);
          *(int *)(pcVar10 + 8) = *piVar14;
          *piVar14 = *piVar14 + 1;
          FUN_00347aa1(pcVar10 + 0xc,0);
          piVar6[2] = *(int *)(pcVar10 + 8);
          pcVar8 = (char *)(local_8 + 0xc + *(int *)((int)param_1 + 0x38));
          pcVar7 = pcVar8 + 1;
          do {
            cVar3 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar3 != '\0');
          local_30 = (int *)(pcVar8 + (1 - (int)pcVar7));
          *(int *)(pcVar10 + 0x20) = *local_28;
          *(int *)(pcVar10 + 0x24) = local_28[1];
          uVar18 = *(undefined4 *)(local_c + 4);
          *(short *)(pcVar10 + 0x2c) = (short)local_30;
          *(undefined4 *)(pcVar10 + 0x28) = uVar18;
          *(undefined4 *)(pcVar10 + 0x2e) = *(undefined4 *)(local_28[0x10] + 8);
          *(undefined4 *)(pcVar10 + 0x32) = *(undefined4 *)(local_28[0x11] + 8);
          pcVar10[0x3a] = '\0';
          pcVar10[0x3b] = '\0';
          pcVar10[0x3c] = '\0';
          pcVar10[0x3d] = '\0';
          pcVar10[0x3e] = '\0';
          pcVar10[0x3f] = '\0';
          pcVar10[0x40] = '\0';
          pcVar10[0x41] = '\0';
          pcVar10[0x36] = '\x05';
          pcVar10[0x37] = '\0';
          pcVar10[0x38] = '\0';
          pcVar10[0x39] = '\0';
          iVar15 = local_28[0x14];
          pcVar10[0x44] = '\0';
          pcVar10[0x45] = '\0';
          *(short *)(pcVar10 + 0x42) = (short)iVar15;
          pcVar11 = (char *)(local_8 + 0xc + *(int *)((int)param_1 + 0x38));
          pcVar13 = pcVar10 + 0x46;
          for (uVar12 = (uint)local_30 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar12 = (uint)local_30 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *pcVar13 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar13 = pcVar13 + 1;
          }
          uVar4 = *(ushort *)(local_28 + 0x14);
          piVar6 = local_28 + 0x15;
          piVar14 = (int *)(pcVar8 + (0x48 - (int)pcVar7) + (int)pcVar10);
          for (uVar12 = (uint)(uVar4 >> 2); uVar12 != 0; uVar12 = uVar12 - 1) {
            *piVar14 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar14 = piVar14 + 1;
          }
          for (uVar12 = uVar4 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(char *)piVar14 = (char)*piVar6;
            piVar6 = (int *)((int)piVar6 + 1);
            piVar14 = (int *)((int)piVar14 + 1);
          }
          pcVar8 = (char *)(local_8 + 0xc + *(int *)((int)param_1 + 0x38));
          pcVar7 = pcVar8 + 1;
          do {
            cVar3 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar3 != '\0');
          pcVar10 = pcVar8 + (int)(pcVar10 +
                                  ((uint)*(ushort *)(local_28 + 0x14) - (int)pcVar7) + 0x47);
          iVar15 = local_c;
        }
        local_8 = local_8 + 0x70;
        piVar6 = local_28 + 0x2e;
      } while (local_8 < 0x1c0);
      local_28 = piVar6;
      iVar9 = FUN_0033e9f8(0x10,0x8021);
      if (iVar9 != 0) {
        *(undefined4 *)(iVar9 + 8) = 0;
        *(undefined4 *)(iVar9 + 0xc) = 1;
        iVar15 = FUN_00338505(1,PTR_s__xpnfront_xpresence_srf_003b7608,
                              *(undefined4 *)((int)param_1 + 0x44),(int)param_1 + 0x48,0,0,
                              *(undefined4 *)((int)param_1 + 0x3c),
                              *(undefined4 *)((int)param_1 + 0x40),30000,
                              *(undefined4 *)((int)param_1 + 8),1,iVar9);
        if (-1 < iVar15) {
          *(undefined4 *)(iVar9 + 4) = *(undefined4 *)((int)param_1 + 0x18);
          *(int *)((int)param_1 + 0x18) = iVar9;
          *(undefined4 *)((int)param_1 + 0x10) = 4;
          goto LAB_0033710c;
        }
        FUN_0033ea20(iVar9);
        goto LAB_00337108;
      }
      iVar15 = -0x7ff8fff2;
    }
    else {
LAB_00337108:
      if (-1 < iVar15) goto LAB_0033710c;
    }
LAB_003370a3:
    FUN_003356c8(iVar5);
  }
  else {
    if (iVar15 == 1) goto LAB_00336e79;
    if (iVar15 == 3) {
LAB_00336b5a:
      iVar15 = FUN_00330c3e(*(undefined4 *)(in_ECX + 0x15c0));
      if ((iVar15 == 0x1500f0) &&
         (iVar15 = FUN_00330c3e(*(undefined4 *)(in_ECX + 0x15c8)), iVar15 == 0x1500f0)) {
        FUN_00335451(iVar5);
        FUN_0033554d(iVar5);
        *(undefined4 *)(iVar5 + 0x10) = 0xc;
LAB_00336ba7:
        iVar15 = 0x1500f0;
        goto LAB_003370a3;
      }
      goto LAB_00337108;
    }
    if (iVar15 == 4) {
      local_1c = 0;
      local_2c = 0;
      local_18 = (int *)0x0;
      iVar15 = FUN_00330c3e(**(undefined4 **)((int)param_1 + 0x18));
      if (iVar15 != 0) {
        if (-1 < iVar15) {
          if (iVar15 != 0x1500f0) goto LAB_00337108;
          iVar15 = FUN_003385e8(**(undefined4 **)((int)param_1 + 0x18),&local_1c,0,&local_38,
                                local_40,&local_2c,0);
          if (-1 < iVar15) {
            if ((local_1c != 0) && (local_2c == 200)) {
              piVar6 = (int *)(local_c + 0x12dc);
              iVar15 = 4;
              do {
                if ((piVar6[-3] != 0 || piVar6[-2] != 0) && (*piVar6 == 0)) {
                  local_18 = (int *)((int)local_18 + 1);
                }
                piVar6 = piVar6 + 0x2e;
                iVar15 = iVar15 + -1;
              } while (iVar15 != 0);
              local_10 = local_1c;
              local_28 = (int *)0x0;
              param_1 = (int *)0x0;
              iVar9 = local_1c;
              if (local_18 != (int *)0x0) {
                do {
                  local_10 = iVar9;
                  if (((((local_34 == 0) && (local_38 < (int)param_1 + 0x20U)) ||
                       (*(uint *)(iVar9 + 4) < 0x10)) ||
                      ((param_1 = (int *)((int)param_1 + 0x20U + *(uint *)(iVar9 + 4)),
                       local_34 == 0 && (local_38 < param_1)))) ||
                     (local_30 = (int *)FUN_003358f2(*(undefined4 *)(iVar9 + 8)),
                     local_30 == (int *)0x0)) {
LAB_00336e35:
                    iVar15 = -0x7feaffff;
                    goto LAB_003370a3;
                  }
                  local_24 = iVar9 + 0x30;
                  local_20 = *(int *)(iVar9 + 4) + -0x10 + local_24;
                  iVar15 = *(int *)(iVar9 + 0x20);
                  if ((iVar15 < 0) || (iVar15 == 0x1512f0)) {
                    if ((iVar15 != -0x7feaee00) && (iVar15 != 0x1512f0)) {
                      iVar15 = *(int *)(local_10 + 0x20);
                      goto LAB_00337108;
                    }
                    local_14 = *(int **)(iVar5 + 0x38);
                    local_8 = 0;
                    do {
                      if (((*local_14 == *local_30) && (local_14[1] == local_30[1])) &&
                         ((*(byte *)(local_14 + 2) & 3) == 0)) break;
                      local_8 = local_8 + 1;
                      local_14 = local_14 + 0x1c;
                    } while (local_8 < 4);
                    if (local_8 < 4) {
                      piVar6 = (int *)(local_8 * 0x70 + 0x6c + *(int *)(iVar5 + 0x38));
                      if (-1 < *piVar6) {
                        *piVar6 = *(int *)(iVar9 + 0x20);
                      }
                      pbVar2 = (byte *)(local_8 + 0x64c + local_c);
                      *pbVar2 = *pbVar2 | 1;
                    }
                  }
                  local_14 = (int *)local_30[0x10];
                  if (*(int *)((int)local_14 + 8) == *(int *)(iVar9 + 0x24)) {
                    if (*(int *)((int)local_14 + 8) != 0) {
                      *(undefined4 *)((int)local_14 + 8) = 0xffffffff;
                    }
                  }
                  else {
                    iVar15 = FUN_00336410(local_14,*(undefined2 *)(local_10 + 0x28),
                                          *(int *)(iVar9 + 0x24),&local_24,local_20);
                    iVar9 = local_10;
                    if (iVar15 < 0) goto LAB_003370a3;
                  }
                  local_14 = (int *)local_30[0x11];
                  if (*(int *)((int)local_14 + 8) == *(int *)(iVar9 + 0x2a)) {
                    local_10 = iVar9;
                    if (*(int *)((int)local_14 + 8) != 0) {
                      *(undefined4 *)((int)local_14 + 8) = 0xffffffff;
                    }
                  }
                  else {
                    iVar15 = FUN_00335972(local_14,*(undefined2 *)(local_10 + 0x2e),
                                          *(int *)(iVar9 + 0x2a),&local_24,local_20);
                    if (iVar15 < 0) goto LAB_003370a3;
                    if (local_24 != local_20) goto LAB_00336e35;
                  }
                  local_28 = (int *)((int)local_28 + 1);
                  local_30[3] = 1;
                  iVar9 = local_10 + 0x20 + *(int *)(local_10 + 4);
                  local_10 = iVar9;
                } while (local_28 < local_18);
              }
              FUN_00330c53(**(undefined4 **)(iVar5 + 0x18));
              FUN_0033ea20(*(undefined4 *)(iVar5 + 0x18));
              *(undefined4 *)(iVar5 + 0x18) = 0;
              XAPILIB__SetEvent(*(undefined4 *)(iVar5 + 8));
              *(undefined4 *)(iVar5 + 0x10) = 10;
              goto LAB_0033710c;
            }
            iVar15 = -0x7fffbffb;
          }
        }
        goto LAB_003370a3;
      }
    }
    else if (iVar15 == 10) {
      iVar15 = FUN_00330c3e(*(undefined4 *)(in_ECX + 0x15c0));
      if ((iVar15 != 0x1500f0) ||
         (iVar15 = FUN_00330c3e(*(undefined4 *)(in_ECX + 0x15c8)), iVar15 != 0x1500f0))
      goto LAB_00337108;
      if (*(int *)((int)param_1 + 0x30) != 0) {
        FUN_0033e9ea(*(int *)((int)param_1 + 0x30));
        *(undefined4 *)((int)param_1 + 0x30) = 0;
      }
      param_1 = (int *)(in_ECX + 0x1314);
      uVar12 = 0;
      do {
        if ((param_1[-1] != 0) && (iVar15 = FUN_00335879(uVar12), iVar15 == 0)) {
          if (*(int *)(param_1[-1] + 8) == -1) {
            FUN_0033e9ea(param_1[-1]);
            param_1[-1] = 0;
            goto LAB_00336a93;
          }
          puVar1 = (undefined4 *)(uVar12 * 0xb8 + 0x1310 + in_ECX);
          *(undefined4 *)(iVar5 + 0x30) = *puVar1;
          *puVar1 = 0;
          uVar18 = *(undefined4 *)(iVar5 + 0x30);
          uVar17 = *(undefined4 *)(in_ECX + 0x15c0);
          uVar16 = *(undefined4 *)(in_ECX + 0x15bc);
LAB_00336b11:
          iVar15 = FUN_0033def3(uVar16,uVar17,uVar18,uVar18,1);
          if (iVar15 < 0) goto LAB_003370a3;
          break;
        }
LAB_00336a93:
        iVar15 = *param_1;
        if (iVar15 != 0) {
          if (*(int *)(iVar15 + 8) != -1) {
            puVar1 = (undefined4 *)(uVar12 * 0xb8 + 0x1314 + in_ECX);
            *(undefined4 *)(iVar5 + 0x30) = *puVar1;
            *puVar1 = 0;
            uVar18 = *(undefined4 *)(iVar5 + 0x30);
            uVar17 = *(undefined4 *)(in_ECX + 0x15c8);
            uVar16 = *(undefined4 *)(in_ECX + 0x15c4);
            goto LAB_00336b11;
          }
          FUN_0033e9ea(iVar15);
          *param_1 = 0;
        }
        param_1 = param_1 + 0x2e;
        uVar12 = uVar12 + 1;
      } while (uVar12 < 4);
      if (*(int *)(iVar5 + 0x30) == 0) {
        iVar15 = FUN_0033542b(iVar5);
        if ((iVar15 < 0) || (iVar15 = FUN_00335527(iVar5), iVar15 < 0)) goto LAB_003370a3;
        *(undefined4 *)(iVar5 + 0x10) = 3;
        in_ECX = local_c;
        goto LAB_00336b5a;
      }
    }
    else if (iVar15 == 0xc) goto LAB_00336ba7;
LAB_0033710c:
    iVar15 = 0;
  }
  return iVar15;
}
