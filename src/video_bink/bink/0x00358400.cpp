/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EE82DAD3520EBA2C00052768B1DE9B4AC7FCA6C5D1E0117B33DA2F1C459764EA
 * Entry: 0x00358400, Ghidra index: 13158, label: FUN_00358400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b168c;
extern uint32_t switchD_00358757_caseD_4[];
extern uint32_t switchD_00358757_switchD[];
uint FUN_00358400(uint *param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,
                 uint param_7,uint param_8,uint param_9,uint param_10,uint param_11)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  uint local_8;
  
  local_8 = 0;
  if ((param_1 == (uint *)0x0) || (param_2 == 0)) {
    return 0;
  }
  uVar5 = (uint)(((ulonglong)param_7 * (ulonglong)param_1[0x95]) / (ulonglong)*param_1);
  iVar6 = (int)(((ulonglong)param_9 * (ulonglong)param_1[0x95]) / (ulonglong)*param_1);
  uVar7 = (uint)(((ulonglong)param_8 * (ulonglong)param_1[0x96]) / (ulonglong)param_1[1]);
  param_10 = (uint)(((ulonglong)param_10 * (ulonglong)param_1[0x96]) / (ulonglong)param_1[1]);
  uVar3 = param_1[0x95];
  if (uVar3 <= uVar5) {
    uVar5 = uVar3;
  }
  uVar12 = param_1[0x96];
  if (uVar12 <= uVar7) {
    uVar7 = uVar12;
  }
  if (uVar3 < uVar5 + iVar6) {
    iVar6 = uVar3 - uVar5;
  }
  if (uVar12 < uVar7 + param_10) {
    param_10 = uVar12 - uVar7;
  }
  if (((iVar6 == 0) || (param_10 == 0)) || (param_1[0xc2] != 0)) {
    return param_1[0xc2];
  }
  uVar12 = param_11 | param_1[8] & 0x70030000;
  uVar3 = param_11 & 0xf;
  param_1[0x4e] = 1;
  FUN_003610e0(uVar3);
  if (param_3 < 0) {
    param_2 = param_2 - ((param_4 - param_6) + -1) * param_3;
    param_6 = 0;
  }
  if (((param_1[0xbe] != 0) && (param_1[5] != 0)) && (param_1[0x3f] == 0)) {
    FUN_00357180();
    iVar8 = FUN_0035b1a0();
    lVar4 = (((ulonglong)((param_1[0x9c] - param_1[0xa1]) * 1000) * (ulonglong)param_1[6]) /
             (ulonglong)param_1[5] & 0xffffffff) * (ulonglong)*(uint *)(param_1[0xc0] + 0x68);
    uVar9 = (uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10;
    uVar10 = (iVar8 - param_1[0xce]) - param_1[0xa0];
    if (uVar9 <= uVar10) {
      if (param_1[0xa2] < uVar10 - uVar9) {
        uVar9 = param_1[0xcd];
        param_1[0xcd] = uVar9 + 1;
        if (uVar9 + 1 < 4) {
          if (((param_11 & 0x80000) == 0) && ((param_1[8] & 0x80000) == 0)) {
            param_1[0xc1] = 1;
            param_1[0xc3] = param_1[0xc3] + 1;
            param_1[0x4e] = 0;
            return 1;
          }
          local_8 = 1;
        }
        else {
          param_1[0xcd] = 0;
        }
        goto LAB_003586a0;
      }
      param_1[0xcd] = 0;
    }
    param_1[0xc1] = 0;
  }
LAB_003586a0:
  if (((param_1[0x42] == 0) && (param_1[0x4c] == 0)) &&
     (((param_1[0x56] + 1) * 100) / (param_1[0x55] + 1) < 0x4b)) {
    iVar8 = FUN_0035ad70(DAT_004b168c,param_1 + 0x83);
    if (iVar8 == 0) {
      if ((param_1[8] & 0x8000000) == 0) {
        FUN_0035af40();
      }
    }
    else {
      (*(code *)param_1[0x48])(param_1 + 0x44);
      FUN_0035ae30(DAT_004b168c,param_1 + 0x83);
    }
  }
  param_1[0xba] = uVar12;
  if (-1 < (int)uVar12) {
    pcVar11 = (char *)param_1[0x37];
    pcVar1 = pcVar11 + 1;
    do {
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    if (param_1[0x39] <= (uint)((int)pcVar11 - (int)pcVar1)) goto switchD_00358757_switchD;
    switch(uVar3) {
    case 5:
      if (param_1[0x31] != 0) {
        FUN_00366580(param_2,param_5,param_6,param_3,param_1[0x37],param_1[0x38],
                     param_1[param_1[0x2e] + 0x2f],uVar5,uVar7,iVar6,param_10,param_1[0x33],
                     param_1[0x34],param_1[param_1[0x2e] + 0x31],uVar12);
        param_1[0x4e] = 0;
        return local_8;
      }
    case 3:
      FUN_00365090(param_2,param_5,param_6,param_3,param_1[0x37],param_1[0x38],
                   param_1[param_1[0x2e] + 0x2f],uVar5,uVar7,iVar6,param_10,param_1[0x33],
                   param_1[0x34],uVar12);
      param_1[0x4e] = 0;
      return local_8;
    case 7:
      if (param_1[0x31] != 0) {
        FUN_00368ed0(param_2,param_5,param_6,param_3,param_1[0x37],param_1[0x38],
                     param_1[param_1[0x2e] + 0x2f],uVar5,uVar7,iVar6,param_10,param_1[0x33],
                     param_1[0x34],param_1[param_1[0x2e] + 0x31],uVar12);
        param_1[0x4e] = 0;
        return local_8;
      }
      break;
    case 8:
      if (param_1[0x31] != 0) {
        FUN_0036a000(param_2,param_5,param_6,param_3,param_1[0x37],param_1[0x38],
                     param_1[param_1[0x2e] + 0x2f],uVar5,uVar7,iVar6,param_10,param_1[0x33],
                     param_1[0x34],param_1[param_1[0x2e] + 0x31],uVar12);
        param_1[0x4e] = 0;
        return local_8;
      }
      break;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      break;
    case 0xd:
      FUN_0036b120(param_2,param_5,param_6,param_3,param_1[0x37],param_1[0x38],
                   param_1[param_1[0x2e] + 0x2f],uVar5,uVar7,iVar6,param_10,param_1[0x33],
                   param_1[0x34],uVar12);
    default:
switchD_00358757_caseD_4:
      param_1[0x4e] = 0;
      return local_8;
    }
    FUN_00367940(param_2,param_5,param_6,param_3,param_1[0x37],param_1[0x38],
                 param_1[param_1[0x2e] + 0x2f],uVar5,uVar7,iVar6,param_10,param_1[0x33],
                 param_1[0x34],uVar12);
    param_1[0x4e] = 0;
    return local_8;
  }
switchD_00358757_switchD:
  switch(uVar3) {
  default:
    goto switchD_00358757_caseD_4;
  case 5:
    if (param_1[0x31] != 0) {
      FUN_00366530(param_2,param_5,param_6,param_3,param_1[param_1[0x2e] + 0x2f],uVar5,uVar7,iVar6,
                   param_10,param_1[0x33],param_1[0x34],param_1[param_1[0x2e] + 0x31],uVar12);
      param_1[0x4e] = 0;
      return local_8;
    }
  case 3:
    FUN_00365040(param_2,param_5,param_6,param_3,param_1[param_1[0x2e] + 0x2f],uVar5,uVar7,iVar6,
                 param_10,param_1[0x33],param_1[0x34],uVar12);
    param_1[0x4e] = 0;
    return local_8;
  case 7:
    if (param_1[0x31] != 0) {
      FUN_00368e80(param_2,param_5,param_6,param_3,param_1[param_1[0x2e] + 0x2f],uVar5,uVar7,iVar6,
                   param_10,param_1[0x33],param_1[0x34],param_1[param_1[0x2e] + 0x31],uVar12);
      param_1[0x4e] = 0;
      return local_8;
    }
    break;
  case 8:
    if (param_1[0x31] != 0) {
      FUN_00369fb0(param_2,param_5,param_6,param_3,param_1[param_1[0x2e] + 0x2f],uVar5,uVar7,iVar6,
                   param_10,param_1[0x33],param_1[0x34],param_1[param_1[0x2e] + 0x31],uVar12);
      param_1[0x4e] = 0;
      return local_8;
    }
    break;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
    break;
  case 0xd:
    FUN_0036b0a0(param_2,param_5,param_6,param_3,param_1[param_1[0x2e] + 0x2f],uVar5,uVar7,iVar6,
                 param_10,param_1[0x33],param_1[0x34],uVar12);
    param_1[0x4e] = 0;
    return local_8;
  }
  FUN_003678f0(param_2,param_5,param_6,param_3,param_1[param_1[0x2e] + 0x2f],uVar5,uVar7,iVar6,
               param_10,param_1[0x33],param_1[0x34],uVar12);
  param_1[0x4e] = 0;
  return local_8;
}
