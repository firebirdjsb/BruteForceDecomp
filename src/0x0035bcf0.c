/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 52FF51F8013E0D6BA71CA6B18DE2FDBB6D7049D47FC1EDB239373D8F7C81A8B9
 * Entry: 0x0035bcf0, Ghidra index: 13205, label: FUN_0035bcf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00387f98;
extern uint32_t PTR_DAT_004b5240;
void FUN_0035bcf0(int *param_1,undefined4 *param_2,uint *param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  uint *puVar7;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  char local_28 [16];
  uint *local_18;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_18 = (uint *)*param_1;
  local_14 = param_1[1];
  uVar5 = param_1[2];
  local_c = param_1[3];
  if (local_c < 4) {
    local_10 = *local_18 >> (4 - (byte)local_c & 0x1f);
    uVar5 = *local_18 << ((byte)local_c & 0x1f) | uVar5;
    local_c = local_c + 0x1c;
    local_18 = local_18 + 1;
  }
  else {
    local_10 = uVar5 >> 4;
    local_c = local_c - 4;
  }
  uVar5 = uVar5 & 0xf;
  *param_2 = (&PTR_DAT_004b5240)[uVar5];
  *param_3 = (uint)(byte)(&DAT_00387f98)[uVar5];
  if (uVar5 == 0) {
    uVar5 = 0;
    do {
      *(char *)(uVar5 + param_4) = (char)uVar5;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x10);
  }
  else {
    if (local_c == 0) {
      local_10 = *local_18;
      local_18 = local_18 + 1;
      local_c = 0x1f;
    }
    else {
      local_c = local_c - 1;
    }
    uVar5 = local_10 >> 1;
    bVar1 = (byte)local_c;
    if ((local_10 & 1) == 0) {
      if (local_c < 2) {
        local_10 = *local_18 >> (2 - bVar1 & 0x1f);
        uVar5 = *local_18 << (bVar1 & 0x1f) | uVar5;
        local_c = local_c + 0x1e;
        local_18 = local_18 + 1;
      }
      else {
        local_10 = local_10 >> 3;
        local_c = local_c - 2;
      }
      uVar5 = uVar5 & 3;
      param_2 = (undefined4 *)0x0;
      puVar7 = local_18;
      if (uVar5 == 0) {
        iVar2 = param_4 - (param_4 + 1);
        do {
          if (local_c == 0) {
            local_10 = *local_18;
            local_18 = local_18 + 1;
            local_c = 0x1f;
          }
          else {
            local_c = local_c - 1;
          }
          uVar5 = local_10 & 1;
          local_10 = local_10 >> 1;
          pcVar6 = (char *)(param_4 + 1 + (int)param_2);
          cVar4 = (char)param_2;
          if (uVar5 == 0) {
            pcVar6[iVar2] = cVar4;
            *pcVar6 = cVar4 + '\x01';
          }
          else {
            pcVar6[iVar2] = cVar4 + '\x01';
            *pcVar6 = cVar4;
          }
          param_2 = (undefined4 *)((int)param_2 + 2);
        } while (param_2 < 0x10);
      }
      else {
        do {
          if (local_c == 0) {
            local_10 = *puVar7;
            puVar7 = puVar7 + 1;
            local_c = 0x1f;
          }
          else {
            local_c = local_c - 1;
          }
          uVar3 = local_10 & 1;
          local_10 = local_10 >> 1;
          cVar4 = (char)param_2;
          if (uVar3 == 0) {
            local_28[(int)param_2] = cVar4;
            local_28[(int)param_2 + 1] = cVar4 + '\x01';
          }
          else {
            local_28[(int)param_2] = cVar4 + '\x01';
            local_28[(int)param_2 + 1] = cVar4;
          }
          param_2 = (undefined4 *)((int)param_2 + 2);
        } while (param_2 < 0x10);
        local_18 = puVar7;
        if (uVar5 == 1) {
          FUN_0035bc50(local_28,local_28 + 2,2);
          FUN_0035bc50(local_28 + 4,local_28 + 6,2);
          FUN_0035bc50(local_28 + 8,local_28 + 10,2);
          FUN_0035bc50(local_28 + 0xc,local_28 + 0xe,2);
        }
        else {
          FUN_0035bc50(local_28,local_28 + 2,2);
          FUN_0035bc50(local_28 + 4,local_28 + 6,2);
          FUN_0035bc50(local_28 + 8,local_28 + 10,2);
          FUN_0035bc50(local_28 + 0xc,local_28 + 0xe,2);
          if (uVar5 == 2) {
            FUN_0035bc50(local_38,local_34,4);
            FUN_0035bc50(local_30,local_2c,4);
          }
          else {
            FUN_0035bc50(local_38,local_34,4);
            FUN_0035bc50(local_30,local_2c,4);
            FUN_0035bc50(local_28,local_28 + 8,8);
          }
        }
      }
    }
    else {
      if (local_c < 3) {
        uVar3 = *local_18 >> (3 - bVar1 & 0x1f);
        uVar5 = *local_18 << (bVar1 & 0x1f) | uVar5;
        local_c = local_c + 0x1d;
        local_18 = local_18 + 1;
      }
      else {
        uVar3 = local_10 >> 4;
        local_c = local_c - 3;
      }
      local_8 = uVar5 & 7;
      param_3 = (uint *)0xffff;
      param_2 = (undefined4 *)0x0;
      do {
        if (local_c < 4) {
          local_10 = *local_18 >> (4 - (byte)local_c & 0x1f);
          uVar3 = *local_18 << ((byte)local_c & 0x1f) | uVar3;
          local_c = local_c + 0x1c;
          local_18 = local_18 + 1;
        }
        else {
          local_10 = uVar3 >> 4;
          local_c = local_c - 4;
        }
        bVar1 = (byte)uVar3 & 0xf;
        param_3 = (uint *)((uint)param_3 & ~(1 << bVar1));
        *(byte *)((int)param_2 + param_4) = bVar1;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar3 = local_10;
      } while (param_2 <= local_8);
      cVar4 = '\0';
      pcVar6 = (char *)(param_4 + local_8);
      do {
        if (((uint)param_3 & 1) != 0) {
          pcVar6 = pcVar6 + 1;
          *pcVar6 = cVar4;
        }
        param_3 = (uint *)((uint)param_3 >> 1);
        cVar4 = cVar4 + '\x01';
      } while (param_3 != (uint *)0x0);
    }
  }
  *param_1 = (int)local_18;
  param_1[1] = local_14;
  param_1[2] = local_10;
  param_1[3] = local_c;
  return;
}
