/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 49D1E35D42F2B2687A427B649937C1AD6B63475B266F4DBD827C0CF46BD5E96D
 * Entry: 0x003416c2, Ghidra index: 12676, label: FUN_003416c2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b7610;
int FUN_003416c2(int param_1,undefined4 *param_2,uint *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte local_f8 [4];
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 *local_ec;
  byte local_e8;
  undefined4 local_e4;
  undefined4 *local_e0;
  int local_d4;
  undefined4 local_9c;
  undefined *local_98;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_54;
  undefined4 *local_50;
  uint local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  uint local_30;
  int local_2c;
  undefined4 auStack_28 [9];
  
  local_44 = 0;
  FUN_002ebea0();
  uVar3 = *param_3;
  local_3c = (undefined4 *)&stack0x00000aa4;
  local_30 = 0;
  local_2c = 0;
  puVar4 = (undefined4 *)&stack0xfffffeec;
  local_40 = &stack0xfffffeec;
  local_38 = (undefined4 *)&stack0xfffffeec;
  for (iVar1 = 0x2ee; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_34 = param_2;
  if (param_2 != (undefined4 *)0x0) {
    local_30 = uVar3;
  }
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = (undefined4 *)0x0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  pbVar5 = local_f8;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    pbVar5[0] = 0;
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    pbVar5[3] = 0;
    pbVar5 = pbVar5 + 4;
  }
  puVar4 = (undefined4 *)(param_1 + 0x108);
  puVar7 = (undefined4 *)(param_4 + 0x2a0);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_0033f26e();
  FUN_0033f26e();
  FUN_00344fef();
  local_98 = &DAT_003b7610;
  iVar1 = FUN_0033df31();
  if ((iVar1 < 0) || (iVar1 = FUN_0033fc8c(), iVar1 != 0)) {
LAB_003419ef:
    iVar1 = -0x3fffff66;
  }
  else {
    local_e8 = local_e8 | 0x40;
    local_60 = FUN_0033f342();
    local_e0 = &local_60;
    local_d4 = param_4 + 0x2a0;
    local_68 = 0x10;
    local_64 = param_1 + 0x140;
    local_e4 = 0x20;
    auStack_28[local_2c] = local_38;
    local_2c = local_2c + 1;
    local_6c = 0x17;
    iVar1 = FUN_0033fe3a();
    if (-1 < iVar1) {
      iVar1 = FUN_0033fbee();
      if (iVar1 == 0) {
        FUN_0033f362();
        iVar1 = FUN_00341540();
        uVar3 = local_54;
        puVar4 = (undefined4 *)&stack0xfffffeec;
        if (iVar1 == 0) {
          if (local_30 < local_54) {
            FUN_002ebea0();
          }
          else {
            puVar4 = (undefined4 *)0x0;
          }
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = local_34;
          }
          puVar7 = local_50;
          puVar6 = puVar4;
          for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar6 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar6 = puVar6 + 1;
          }
          for (uVar2 = uVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined1 *)puVar6 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar6 = (undefined4 *)((int)puVar6 + 1);
          }
          local_2c = local_2c + -1;
          puVar7 = (undefined4 *)auStack_28[local_2c];
          puVar6 = puVar7;
          for (uVar2 = (uint)((int)local_38 - (int)puVar7) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          for (uVar2 = (int)local_38 - (int)puVar7 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined1 *)puVar6 = 0;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
          }
          local_38 = puVar7;
          if (puVar4 != (undefined4 *)0x0) {
            local_38 = (undefined4 *)((int)puVar7 + (uVar3 + 3 & 0xfffffffc));
            if (local_3c < local_38) {
              local_38 = puVar7;
              puVar7 = (undefined4 *)0x0;
            }
            local_50 = puVar7;
            for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar7 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar7 = puVar7 + 1;
            }
            for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(undefined1 *)puVar7 = *(undefined1 *)puVar4;
              puVar4 = (undefined4 *)((int)puVar4 + 1);
              puVar7 = (undefined4 *)((int)puVar7 + 1);
            }
          }
          local_5c = 0;
          local_f8[0] = local_f8[0] | 0x80;
          local_ec = &local_5c;
          local_58 = 1;
          iVar1 = FUN_003400ea();
          if (iVar1 < 0) {
            return iVar1;
          }
          iVar1 = FUN_0033f885();
          if (iVar1 < 0) {
            return iVar1;
          }
          iVar1 = FUN_00340734();
          if (-1 < iVar1) {
            local_4c = *param_3;
            local_48 = param_2;
            local_f4 = 5;
            local_f0 = 0xc;
            iVar1 = FUN_0033fa74();
            if (iVar1 == 0) {
              *param_3 = local_4c;
              *(undefined4 *)(param_4 + 0x78 + *(int *)(param_4 + 0x74) * 4) = local_9c;
              *(int *)(param_4 + 0x74) = *(int *)(param_4 + 0x74) + 1;
              return 0;
            }
          }
          goto LAB_003419ef;
        }
      }
      iVar1 = -0x3fffff66;
    }
    local_2c = local_2c + -1;
    uVar2 = (int)local_38 - (int)auStack_28[local_2c];
    puVar4 = (undefined4 *)auStack_28[local_2c];
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  return iVar1;
}
