/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BC2E07FA2B3F4D317175F53B94CD7BDA637F179A73C84A4F61919C4C4574BB8F
 * Entry: 0x00340983, Ghidra index: 12671, label: FUN_00340983
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b7610;
int FUN_00340983(int param_1,undefined4 *param_2,int param_3,undefined4 *param_4,undefined4 *param_5
                )

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  uint uVar8;
  byte local_f0 [4];
  undefined4 local_ec;
  undefined4 local_e8;
  int local_e4;
  byte local_e0;
  undefined4 local_dc;
  undefined4 *local_d8;
  undefined4 *local_cc;
  undefined4 local_94;
  undefined *local_90;
  undefined1 *local_68;
  undefined1 *local_64;
  undefined1 *local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  undefined4 local_c;
  int local_8;
  
  FUN_002ebea0();
  uVar1 = *param_4;
  local_58 = 0;
  local_54 = 0;
  local_64 = &stack0x00000694;
  puVar6 = (undefined4 *)&stack0xfffffec4;
  local_68 = &stack0xfffffec4;
  local_60 = &stack0xfffffec4;
  for (iVar5 = 500; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_5c = param_3;
  if (param_3 != 0) {
    local_58 = uVar1;
  }
  pbVar7 = local_f0;
  for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
    pbVar7[0] = 0;
    pbVar7[1] = 0;
    pbVar7[2] = 0;
    pbVar7[3] = 0;
    pbVar7 = pbVar7 + 4;
  }
  local_e4 = 0;
  local_1c = param_2 + 0x14;
  local_18 = 0x17;
  local_14 = 0x10;
  local_10 = local_1c;
  if (param_5[0x2a] == 0) {
    param_5[0x1b] = *local_1c;
    param_5[0x1c] = param_2[0x15];
    param_5[0x1d] = param_2[0x16];
    param_5[0x1e] = param_2[0x17];
  }
  else {
    FUN_0033f9b0();
    iVar5 = FUN_0034018d();
    if (iVar5 < 0) {
      return -0x3fffff66;
    }
  }
  local_24 = param_5 + 0x1b;
  local_2c = 0x17;
  local_28 = 0x10;
  iVar5 = FUN_003400ea();
  if (iVar5 < 0) {
    return iVar5;
  }
  FUN_0033f362();
  iVar5 = FUN_0034055e();
  if (iVar5 < 0) {
    return iVar5;
  }
  iVar5 = FUN_0033f885();
  if (-1 < iVar5) {
    iVar5 = FUN_0033f6cd();
    if (iVar5 < 0) {
      return iVar5;
    }
    if ((param_5[0x1f] != 0) && (iVar5 = FUN_0033f7f6(), iVar5 < 0)) {
      return iVar5;
    }
    if (local_e4 != 0) {
      local_f0[0] = local_f0[0] | 0x80;
    }
    local_20 = FUN_0033f342();
    local_d8 = &local_20;
    local_dc = 0x20;
    FUN_00344fef();
    FUN_0033f26e();
    if (*(char *)(param_2 + 9) == '\0') {
      XAPILIB__lstrcpynA();
    }
    else {
      iVar5 = FUN_0033df31();
      if (iVar5 < 0) {
        return -0x3fffff66;
      }
    }
    while (puVar3 = (undefined1 *)FUN_002eb0b0(), puVar3 != (undefined1 *)0x0) {
      *puVar3 = 0x5f;
    }
    iVar5 = FUN_0033fc8c();
    if (iVar5 == 0) {
      local_e0 = local_e0 | 0x80;
      XAPILIB__lstrcpynA();
      iVar5 = FUN_0033fc8c();
      if (iVar5 == 0) {
        local_e0 = local_e0 | 0x40;
        local_cc = param_2 + 0xe;
        local_c = *param_4;
        local_8 = param_3;
        local_ec = 5;
        local_e8 = 10;
        local_90 = &DAT_003b7610;
        iVar5 = FUN_0033fa74();
        if (iVar5 == 0) {
          *param_4 = local_c;
          puVar6 = (undefined4 *)param_5[0x2a];
          param_4 = (undefined4 *)0x0;
          iVar5 = 0;
          if (puVar6 != (undefined4 *)0x0) {
            *param_5 = *puVar6;
            param_5[1] = puVar6[1];
            uVar8 = 0;
            piVar4 = param_5 + 2;
            do {
              iVar5 = *(int *)(uVar8 + 8 + param_5[0x2a]);
              iVar2 = *(int *)(uVar8 + 0xc + param_5[0x2a]);
              if (iVar5 != 0 || iVar2 != 0) {
                param_4 = (undefined4 *)((int)param_4 + 1);
                *piVar4 = iVar5;
                piVar4[1] = iVar2;
                piVar4 = piVar4 + 2;
              }
              uVar8 = uVar8 + 8;
              iVar5 = (int)param_4;
            } while (uVar8 < 0x20);
          }
          if (param_1 == 0) {
            param_5[iVar5 * 2 + 2] = *param_2;
            param_5[iVar5 * 2 + 3] = param_2[1];
          }
          param_5[param_5[0xe] + 0xf] = local_94;
          param_5[0xe] = param_5[0xe] + 1;
          param_5[0x17] = *local_1c;
          param_5[0x18] = local_1c[1];
          param_5[0x19] = local_1c[2];
          param_5[0x1a] = local_1c[3];
          return 0;
        }
      }
    }
    return -0x3fffff66;
  }
  return iVar5;
}
