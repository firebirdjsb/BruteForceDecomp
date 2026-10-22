/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E7125ED56104CED21820922A968A9D5C625E65908C70B31D0D058A3A5DD7DB68
 * Entry: 0x0033488d, Ghidra index: 12419, label: CXo_XOnlineLogon
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * XONLINES__CXo_XOnlineLogon
                (int *param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  byte *pbVar5;
  undefined4 uVar6;
  int in_ECX;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint *puVar10;
  int *piVar11;
  undefined2 local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  uint local_20;
  uint local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int local_8;
  
  if (in_ECX == 0) {
    return (int *)0x80150005;
  }
  piVar8 = (int *)0x0;
  local_8 = in_ECX;
  uVar2 = XNetGetEthernetLinkStatus();
  if ((uVar2 & 1) == 0) {
    local_c = (int *)0x80151000;
    goto LAB_00334d7b;
  }
  FUN_00347a6a();
  piVar8 = (int *)FUN_0033e9b3(0x3a0,0x801a);
  local_18 = piVar8;
  if (piVar8 == (int *)0x0) {
LAB_00334d61:
    local_c = (int *)0x80150008;
    goto LAB_00334d7b;
  }
  local_14 = (int *)(local_8 + 0xbc);
  iVar3 = *local_14;
  if (iVar3 == 0) {
    *local_14 = (int)piVar8;
    iVar3 = 0;
  }
  if (iVar3 != 0) {
    local_c = (int *)0x80150009;
    goto LAB_00334d7b;
  }
  *(undefined4 *)(local_8 + 0xb8) = *(undefined4 *)(local_8 + 0xbc);
  iVar3 = FUN_0033e9b3(0x38e0,0x8043);
  piVar8[0x14] = iVar3;
  if (iVar3 == 0) goto LAB_00334d61;
  iVar3 = 0;
  piVar7 = (int *)0x0;
  if (0 < param_3) {
    local_18 = piVar8 + 0x9f;
    do {
      piVar11 = (int *)0x0;
      if (0 < (int)piVar7) {
        piVar9 = piVar8 + 0x9f;
        do {
          if (*piVar9 == *(int *)(param_2 + iVar3 * 4)) break;
          piVar11 = (int *)((int)piVar11 + 1);
          piVar9 = piVar9 + 5;
        } while ((int)piVar11 < (int)piVar7);
      }
      if (piVar11 == piVar7) {
        piVar7 = (int *)((int)piVar7 + 1);
        *local_18 = *(int *)(param_2 + iVar3 * 4);
        local_18 = local_18 + 5;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  if (param_1 != (int *)0x0) {
    iVar3 = 0;
    piVar11 = param_1;
    do {
      if (*piVar11 != 0 || piVar11[1] != 0) {
        piVar8[(int)piVar7 * 5 + 0x9f] = 1;
        piVar7 = (int *)((int)piVar7 + 1);
        break;
      }
      iVar3 = iVar3 + 1;
      piVar11 = piVar11 + 0x1c;
    } while (iVar3 < 4);
  }
  piVar8[(int)piVar7 * 5 + 0x9f] = 2;
  if (0 < (int)piVar7) {
    local_c = (int *)0x1;
    puVar4 = (uint *)(piVar8 + 0x9f);
    local_14 = piVar7;
    do {
      if ((int)local_c < (int)piVar7 + 1) {
        local_18 = (int *)(((int)piVar7 + 1) - (int)local_c);
        puVar10 = puVar4;
        do {
          puVar10 = puVar10 + 5;
          uVar2 = *puVar4;
          if (*puVar10 < uVar2) {
            *puVar4 = *puVar10;
            *puVar10 = uVar2;
          }
          local_18 = (int *)((int)local_18 + -1);
        } while (local_18 != (int *)0x0);
      }
      local_c = (int *)((int)local_c + 1);
      puVar4 = puVar4 + 5;
      local_14 = (int *)((int)local_14 + -1);
    } while (local_14 != (int *)0x0);
  }
  piVar7 = piVar8 + 0xa2;
  iVar3 = 0xc;
  do {
    *piVar7 = 1;
    piVar7 = piVar7 + 5;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  piVar7 = piVar8 + 0x2f;
  iVar3 = 0x70;
  if (param_1 == (int *)0x0) {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar7 = 0;
      piVar7 = piVar7 + 1;
    }
  }
  else {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar7 = *param_1;
      param_1 = param_1 + 1;
      piVar7 = piVar7 + 1;
    }
  }
  local_18 = (int *)0x0;
  puVar4 = (uint *)(piVar8 + 0x31);
  do {
    if ((puVar4[-2] != 0 || puVar4[-1] != 0) && ((*puVar4 & 3) != 0)) {
      *puVar4 = *puVar4 | 0x30000;
      iVar3 = 0;
      pbVar5 = (byte *)(piVar8 + 0x31);
      do {
        if (((*(uint *)(pbVar5 + -8) == puVar4[-2]) && (*(uint *)(pbVar5 + -4) == puVar4[-1])) &&
           ((*pbVar5 & 3) == 0)) break;
        iVar3 = iVar3 + 1;
        pbVar5 = pbVar5 + 0x70;
      } while (iVar3 < 4);
      if (iVar3 == 4) {
        local_c = (int *)0x80150004;
        goto LAB_00334d7b;
      }
    }
    local_18 = (int *)((int)local_18 + 1);
    puVar4 = puVar4 + 0x1c;
  } while ((int)local_18 < 4);
  *(undefined4 *)(local_8 + 0x538) = 0;
  local_14 = piVar8 + 0x2f;
  local_10 = (int *)0x4;
  do {
    if (*local_14 != 0 || local_14[1] != 0) {
      piVar7 = *(int **)(local_8 + 0x538);
      local_c = (int *)0x0;
      if (0 < (int)piVar7) {
        local_18 = (int *)(local_8 + 0x53c);
        do {
          if ((*(int *)*local_18 == *local_14) && (((int *)*local_18)[1] == local_14[1])) break;
          local_c = (int *)((int)local_c + 1);
          local_18 = local_18 + 1;
        } while ((int)local_c < (int)piVar7);
      }
      if (local_c == piVar7) {
        *(int **)(local_8 + 0x53c + (int)piVar7 * 4) = local_14;
        *(int *)(local_8 + 0x538) = *(int *)(local_8 + 0x538) + 1;
      }
    }
    local_14 = local_14 + 0x1c;
    local_10 = (int *)((int)local_10 + -1);
  } while (local_10 != (int *)0x0);
  iVar3 = *(int *)(local_8 + 0x538);
  local_10 = (int *)0x0;
  if (iVar3 != 1 && -1 < iVar3 + -1) {
    local_18 = (int *)0x1;
    local_14 = (int *)0x53c;
    do {
      local_c = local_18;
      if ((int)local_18 < iVar3) {
        local_10 = local_14 + 1;
        do {
          puVar4 = *(uint **)((int)local_10 + local_8);
          puVar10 = *(uint **)((int)local_14 + local_8);
          if ((puVar4[1] <= puVar10[1]) && ((puVar10[1] != puVar4[1] || (*puVar4 < *puVar10)))) {
            *(uint **)((int)local_14 + local_8) = puVar4;
            *(uint **)((int)local_10 + local_8) = puVar10;
          }
          local_c = (int *)((int)local_c + 1);
          local_10 = local_10 + 1;
        } while ((int)local_c < *(int *)(local_8 + 0x538));
      }
      local_14 = local_14 + 1;
      piVar7 = (int *)((int)local_18 + 1);
      iVar3 = *(int *)(local_8 + 0x538);
      bVar1 = (int)local_18 < iVar3 + -1;
      local_18 = piVar7;
    } while (bVar1);
  }
  FUN_00330c2d(piVar8);
  piVar8[0x13] = -1;
  *piVar8 = (int)FUN_003338cb;
  piVar8[1] = (int)FUN_003335a5;
  piVar8[3] = 0;
  piVar8[4] = 0;
  piVar8[0xe] = 1;
  piVar8[0xf] = 1;
  piVar8[0x10] = 1;
  if (*(int *)(local_8 + 0x90) != 0) {
    piVar8[0xf] = 0;
    piVar8[0x10] = 0;
    piVar8[0x11] = 1;
    *(undefined4 *)(local_8 + 0x90) = 0;
  }
  XAPILIB__GetSystemTimeAsFileTime(&local_20);
  if ((local_1c < 0x1c19a16) && ((local_1c < 0x1c19a15 || (local_20 < 0xf088ea60)))) {
    piVar8[0x10] = 0;
  }
  iVar3 = param_4;
  if (param_4 == 0) {
    uVar6 = XAPILIB__CreateEventA(0,0,0,0);
    *(undefined4 *)(local_8 + 0xb4) = uVar6;
    iVar3 = *(int *)(local_8 + 0xb4);
    if (iVar3 == 0) {
      piVar8[0xc] = piVar8[0xc] | 8;
      goto LAB_00334d61;
    }
  }
  piVar8[2] = iVar3;
  piVar8[5] = 1;
  *param_5 = piVar8;
  if ((*(int *)(local_8 + 0x664) == 0) || (*(int *)(local_8 + 0x664) == 8)) {
    local_c = (int *)FUN_0033ddf6(1,0,param_4,0,local_8 + 0x65c,local_8 + 0x660);
    if ((int)local_c < 0) {
      FUN_00331052();
    }
    else {
      *(undefined4 *)(local_8 + 0x664) = 1;
    }
  }
  if ((*(int *)(local_8 + 0xbdc) == 0) || (*(int *)(local_8 + 0xbdc) == 8)) {
    local_c = (int *)FUN_0033ddf6(2,0,param_4,0,local_8 + 0xbd4,local_8 + 0xbd8);
    if ((int)local_c < 0) {
      FUN_0033108f();
    }
    else {
      *(undefined4 *)(local_8 + 0xbdc) = 1;
    }
  }
  iVar3 = FUN_00345079(2,2,0);
  piVar8[0x13] = iVar3;
  if (iVar3 == -1) {
LAB_00334cde:
    piVar8[0xc] = piVar8[0xc] & 0xffff927fU | 0x9200;
    iVar3 = XAPILIB__GetLastError();
    piVar8[0xd] = iVar3;
    piVar8[3] = -0x7feafff9;
  }
  else {
    local_30 = 2;
    local_2c = 0;
    local_2e = 0xe904;
    iVar3 = FUN_003450b4(piVar8[0x13],&local_30,0x10);
    if (iVar3 != 0) goto LAB_00334cde;
    FUN_003450a5(piVar8[0x13],0xffff,0x4001,local_8,4);
    iVar3 = FUN_00335261();
    if ((iVar3 < 0) || (iVar3 = FUN_0033797f(piVar8 + 0x2f,piVar8[2],piVar8 + 0x29), iVar3 < 0))
    goto LAB_00334d61;
    FUN_003338cb(piVar8);
    local_c = (int *)0x0;
  }
  if (-1 < (int)local_c) {
    return local_c;
  }
LAB_00334d7b:
  *param_5 = 0;
  if (piVar8 != (int *)0x0) {
    if (piVar8[0x14] != 0) {
      thunk_FUN_0033e986(piVar8[0x14],0x8043);
    }
    if (*(int **)(local_8 + 0xbc) == piVar8) {
      *(undefined4 *)(local_8 + 0xbc) = 0;
      *(undefined4 *)(local_8 + 0xb8) = 0;
    }
    thunk_FUN_0033e986(piVar8,0x801a);
  }
  return local_c;
}
