/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F649FFBCFD3010D4045134DC481258191FEE4315C370683384B62B1F9E8602B1
 * Entry: 0x003607f0, Ghidra index: 13227, label: FUN_003607f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
/* 0x00360b02/0x00360c05/0x00360c92/0x00360e02 call DWORD [0x00414b38].
 * ABI_UNVERIFIED: host pointer width and callee prototype remain unknown. */
extern code *DAT_00414b38;
extern uint32_t DAT_004be760;
extern uint32_t DAT_004be764;
extern uint32_t DAT_004be768;
extern uint32_t DAT_004be76c;
extern uint32_t DAT_004be770;
extern uint32_t DAT_004be774;
extern uint32_t DAT_004be778;
extern uint32_t DAT_004be77c;
extern uint32_t _DAT_004be7a8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003607f0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,uint param_8,uint param_9,uint param_10,uint param_11,uint param_12,
                 uint param_13,uint param_14,int param_15,int *param_16)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  byte bVar9;
  undefined4 *puVar10;
  byte *local_b8;
  int local_b0;
  int local_ac;
  uint local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  uint local_90;
  int local_8c;
  uint local_88;
  uint local_84;
  int local_80;
  uint local_7c;
  int local_78;
  byte *local_74;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined4 local_58 [21];
  
  iVar2 = param_4;
  local_88 = param_11;
  uVar7 = param_14 & 0x70000000;
  local_70 = param_13;
  local_7c = param_12;
  local_a4 = param_4;
  if (uVar7 == 0x60000000) {
    param_9 = param_9 >> 1;
    param_11 = param_11 >> 1;
    param_4 = param_4 * 2;
    local_b0 = param_6;
    param_6 = param_6 * 2;
    uVar6 = param_12 * 2;
    uVar3 = param_13 >> 1;
  }
  else {
    local_b0 = 0;
    uVar6 = param_12;
    uVar3 = param_13;
  }
  _DAT_004be7a8 = param_1;
  DAT_004be760 = iVar2 * param_3 + param_1 + *param_16 * param_2;
  if ((uVar7 == 0x20000000) || (uVar7 == 0x50000000)) {
    param_4 = param_4 * 2;
  }
  iVar2 = param_6 - (param_10 >> 4);
  local_ac = param_4;
  FUN_0035ff40(param_14,&local_ac,0x10,param_11,&local_94);
  FUN_0035ff40(param_14,&param_4,0x20,param_11,&local_68);
  if (((uVar7 == 0x30000000) || (uVar7 == 0x50000000)) || (local_98 = 1, uVar7 == 0x40000000)) {
    local_98 = 2;
  }
  DAT_004be764 = DAT_004be760 + param_4;
  DAT_004be768 = param_7 + param_9 * uVar6 + param_8;
  DAT_004be778 = param_9 * uVar6 + param_8 + param_15;
  DAT_004be76c = DAT_004be768 + uVar6;
  DAT_004be77c = DAT_004be778 + uVar6;
  uVar7 = uVar6 >> 1;
  local_9c = uVar7 - 8;
  local_5c = uVar7 - 0x10;
  local_a8 = param_10 & 0xf;
  local_60 = (uVar6 * 0xf - param_10) + local_a8;
  local_8c = ((param_10 >> 1 & 7) + uVar7 * 8) - (param_10 >> 1);
  local_a0 = *param_16 * local_98 * 0x10;
  local_84 = (local_a8 - param_10) * (*param_16 * local_98 & 0xfffffffU) + param_4 * 0xf;
  if ((param_14 & 0x10000) == 0) {
    DAT_004be774 = uVar6 * uVar3 + param_7;
    iVar5 = (uVar3 >> 1) * uVar7 + DAT_004be774;
  }
  else {
    iVar5 = uVar6 * uVar3 + param_7;
    DAT_004be774 = (uVar3 >> 1) * uVar7 + iVar5;
  }
  iVar4 = (param_9 >> 1) * uVar7 + (param_8 >> 1);
  DAT_004be770 = iVar5 + iVar4;
  DAT_004be774 = DAT_004be774 + iVar4;
  local_ac = (param_9 - 1) + param_11;
  local_80 = (param_8 - 1) + param_10;
  local_b8 = (byte *)(((int)(param_8 + ((int)param_8 >> 0x1f & 0xfU)) >> 4) +
                     param_5 + (param_9 >> 4) * param_6);
  iVar5 = param_9 + 0xf;
  if ((int)(param_9 + 0xf) <= local_ac) {
    do {
      local_6c = iVar5;
      local_90 = param_8;
      if ((int)(param_8 + 0x1f) <= local_80) {
        local_74 = local_b8 + local_b0;
        local_64 = 1 - local_b0;
        local_78 = param_8 + 0x1f;
        do {
          bVar9 = (*local_b8 != 0) + (local_74[local_64] != 0) * '\x02';
          if (local_b0 != 0) {
            bVar9 = bVar9 | (*local_74 != 0) + (local_b8[local_b0 + 1] != 0) * '\x02';
          }
          if (bVar9 == 1) {
            puVar8 = &DAT_004be760;
            puVar10 = local_58;
            for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar10 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar10 = puVar10 + 1;
            }
            iVar5 = 8;
            do {
              (*DAT_00414b38)(4);
              DAT_004be768 = DAT_004be76c + -0x10 + uVar6;
              DAT_004be76c = DAT_004be768 + uVar6;
              DAT_004be778 = DAT_004be77c + -0x10 + uVar6;
              DAT_004be77c = DAT_004be778 + uVar6;
              DAT_004be774 = DAT_004be774 + local_9c;
              DAT_004be770 = DAT_004be770 + local_9c;
              DAT_004be760 = DAT_004be764 + local_94;
              DAT_004be764 = DAT_004be760 + param_4;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
LAB_00360d02:
            puVar8 = local_58;
            puVar10 = &DAT_004be760;
            for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar10 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar10 = puVar10 + 1;
            }
          }
          else {
            if (bVar9 == 2) {
              puVar8 = &DAT_004be760;
              puVar10 = local_58;
              for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar10 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar10 = puVar10 + 1;
              }
              DAT_004be76c = DAT_004be76c + 0x10;
              DAT_004be768 = DAT_004be768 + 0x10;
              DAT_004be778 = DAT_004be778 + 0x10;
              DAT_004be77c = DAT_004be77c + 0x10;
              iVar5 = 8;
              DAT_004be770 = DAT_004be770 + 8;
              DAT_004be774 = DAT_004be774 + 8;
              DAT_004be760 = DAT_004be760 + local_a0;
              DAT_004be764 = DAT_004be764 + local_a0;
              do {
                (*DAT_00414b38)(4);
                DAT_004be768 = DAT_004be76c + -0x10 + uVar6;
                DAT_004be76c = DAT_004be768 + uVar6;
                DAT_004be778 = DAT_004be77c + -0x10 + uVar6;
                DAT_004be77c = DAT_004be778 + uVar6;
                DAT_004be774 = DAT_004be774 + local_9c;
                DAT_004be770 = DAT_004be770 + local_9c;
                DAT_004be760 = DAT_004be764 + local_94;
                DAT_004be764 = DAT_004be760 + param_4;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
              goto LAB_00360d02;
            }
            if (bVar9 == 3) {
              puVar8 = &DAT_004be760;
              puVar10 = local_58;
              for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar10 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar10 = puVar10 + 1;
              }
              iVar5 = 8;
              do {
                (*DAT_00414b38)(8);
                DAT_004be768 = DAT_004be76c + -0x20 + uVar6;
                DAT_004be76c = DAT_004be768 + uVar6;
                DAT_004be778 = DAT_004be77c + -0x20 + uVar6;
                DAT_004be77c = DAT_004be778 + uVar6;
                DAT_004be774 = DAT_004be774 + local_5c;
                DAT_004be770 = DAT_004be770 + local_5c;
                DAT_004be760 = DAT_004be764 + local_68;
                DAT_004be764 = DAT_004be760 + param_4;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
              goto LAB_00360d02;
            }
          }
          DAT_004be768 = DAT_004be768 + 0x20;
          DAT_004be77c = DAT_004be77c + 0x20;
          DAT_004be778 = DAT_004be778 + 0x20;
          DAT_004be76c = DAT_004be76c + 0x20;
          DAT_004be774 = DAT_004be774 + 0x10;
          DAT_004be770 = DAT_004be770 + 0x10;
          DAT_004be764 = DAT_004be764 + local_a0 * 2;
          DAT_004be760 = DAT_004be760 + local_a0 * 2;
          local_90 = local_90 + 0x20;
          local_78 = local_78 + 0x20;
          local_b8 = local_b8 + 2;
          local_74 = local_74 + 2;
        } while (local_78 <= local_80);
      }
      if ((int)(local_90 + 0xf) <= local_80) {
        bVar9 = *local_b8;
        if (local_b0 != 0) {
          bVar9 = bVar9 | local_b8[local_b0];
        }
        local_b8 = local_b8 + 1;
        if (bVar9 != 0) {
          puVar8 = &DAT_004be760;
          puVar10 = local_58;
          for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
          iVar5 = 8;
          do {
            (*DAT_00414b38)(4);
            DAT_004be768 = DAT_004be76c + -0x10 + uVar6;
            DAT_004be76c = DAT_004be768 + uVar6;
            DAT_004be778 = DAT_004be77c + -0x10 + uVar6;
            DAT_004be77c = DAT_004be778 + uVar6;
            DAT_004be774 = DAT_004be774 + local_9c;
            DAT_004be770 = DAT_004be770 + local_9c;
            DAT_004be760 = DAT_004be764 + local_94;
            DAT_004be764 = DAT_004be760 + param_4;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          puVar8 = local_58;
          puVar10 = &DAT_004be760;
          for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
        }
        DAT_004be76c = DAT_004be76c + 0x10;
        DAT_004be77c = DAT_004be77c + 0x10;
        DAT_004be770 = DAT_004be770 + 8;
        DAT_004be774 = DAT_004be774 + 8;
        DAT_004be764 = DAT_004be764 + local_a0;
      }
      DAT_004be768 = DAT_004be76c + local_60;
      DAT_004be76c = DAT_004be768 + uVar6;
      DAT_004be778 = DAT_004be77c + local_60;
      DAT_004be77c = DAT_004be778 + uVar6;
      DAT_004be774 = DAT_004be774 + local_8c;
      DAT_004be770 = DAT_004be770 + local_8c;
      DAT_004be760 = local_84 + DAT_004be764;
      DAT_004be764 = DAT_004be760 + param_4;
      local_6c = local_6c + 0x10;
      local_b8 = local_b8 + iVar2;
      iVar5 = local_6c;
    } while (local_6c <= local_ac);
  }
  uVar7 = local_88;
  if (local_a8 != 0) {
    uVar3 = param_10 & 0xfffffff0;
    FUN_003603c0(param_1,uVar3 * local_98 + param_2,param_3,local_a4,param_7,uVar3,param_10 - uVar3,
                 local_88,local_70,param_14,param_15,param_16);
  }
  if ((param_11 & 0xf) != 0) {
    uVar1 = ((ulonglong)(param_11 & 0xfffffff0) * (ulonglong)local_88) / (ulonglong)param_11;
    local_8c = (int)uVar1;
    local_84 = local_7c * param_4;
    FUN_003603c0(param_1,param_2,
                 (int)(((uVar1 & 0xffffffff) * (ulonglong)local_84) / (ulonglong)(local_a4 * uVar6))
                 + param_3,local_a4,param_7,0,param_10,uVar7 - local_8c,local_70,param_14,param_15,
                 param_16);
  }
  return;
}
