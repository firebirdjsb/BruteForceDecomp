/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1FA29251255B7728BFDDB11EC635833498096B51FEC6842BAD614DBFFD88D178
 * Entry: 0x0037ef88, Ghidra index: 13493, label: FUN_0037ef88
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ee4c;
extern uint32_t DAT_0037ee58;
extern uint32_t DAT_00412678;
extern uint32_t DAT_0041267a;
extern uint32_t DAT_0041267c;
extern uint32_t DAT_00412680;
extern uint32_t DAT_004126d0;
extern uint32_t PTR_XBE_FILE_HEADER_0037ee4d;
extern uint32_t _DAT_0037ee2c;
extern uint32_t _DAT_0037ee30;
extern uint32_t _DAT_0037ee44;
extern uint32_t _DAT_0037ee48;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0037ef88(void)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined **ppuVar10;
  undefined4 *puVar11;
  undefined4 local_64 [20];
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  uVar8 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = 0;
  if (DAT_0037ee58 == 0) {
    DAT_0037ee58 = 1;
    local_14 = FUN_0037f2c2();
    ppuVar10 = &XAPILIB__g_DeviceTypeInfoTableBegin;
    do {
      if (*ppuVar10 != (undefined *)0x0) {
        uVar2 = *(undefined4 *)(*ppuVar10 + 4);
        local_64[uVar8] = uVar2;
        uVar8 = uVar8 + 1;
        if (local_14 == 0) {
          uVar3 = XAPILIB__IUsbInit_GetMaxDeviceTypeCount(uVar2);
          (*ppuVar10)[1] = uVar3;
        }
        if (*(code **)(*ppuVar10 + 0x14) != (code *)0x0) {
          (**(code **)(*ppuVar10 + 0x14))();
        }
        uVar6 = *(uint *)(*ppuVar10 + 0x28);
        uVar4 = (uint)(byte)(*ppuVar10)[1];
        if ((uVar6 & 4) == 0) {
          if ((uVar6 & 8) == 0) {
            local_c = local_c + uVar4;
          }
          else {
            local_10 = local_10 + uVar4;
          }
        }
        else {
          local_8 = local_8 + uVar4;
        }
      }
      ppuVar10 = ppuVar10 + 1;
    } while (ppuVar10 < &XAPILIB__g_DeviceTypeInfoTableEnd);
    if (local_10 == 0) {
      DAT_00412678 = 8;
      if (local_8 == 0) {
        DAT_00412678 = 4;
      }
    }
    else {
      DAT_00412678 = 0xc;
    }
    if (4 < local_c) {
      local_c = 4;
    }
    if (4 < local_8) {
      local_8 = 4;
    }
    local_14 = local_8 + local_10;
    if (8 < local_14) {
      local_14 = 8;
    }
    local_14 = local_14 + local_c;
    puVar5 = (undefined4 *)
             FUN_00382086(local_14 * 0xab + uVar8 * 4 + (uint)DAT_00412678 * 0x16,0x5f444958);
    puVar9 = local_64;
    puVar11 = puVar5;
    _DAT_0037ee2c = uVar8;
    _DAT_0037ee30 = puVar5;
    _DAT_0037ee44 = uVar8;
    _DAT_0037ee48 = puVar5;
    for (uVar6 = uVar8 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    DAT_00412680 = (undefined4 *)0x0;
    DAT_0041267c = puVar5 + uVar8;
    for (uVar8 = local_14; uVar8 != 0; uVar8 = uVar8 + -1) {
      *(undefined4 **)((int)DAT_0041267c + 0xa7) = DAT_00412680;
      DAT_00412680 = DAT_0041267c;
      DAT_0041267c = (undefined4 *)((int)DAT_0041267c + 0xab);
    }
    uVar8 = 0;
    DAT_0041267a = 0;
    if (DAT_00412678 != 0) {
      iVar7 = 0;
      do {
        pbVar1 = (byte *)(iVar7 + 4 + (int)DAT_0041267c);
        *pbVar1 = *pbVar1 & 0xfe;
        uVar8 = uVar8 + 1;
        iVar7 = iVar7 + 0x16;
      } while (uVar8 < DAT_00412678);
    }
    if (local_c != 0) {
      DAT_0037ee4c = 0;
      PTR_XBE_FILE_HEADER_0037ee4d._0_1_ = (undefined1)local_c;
      FUN_0037f2ce(&DAT_0037ee4c);
    }
    if (local_10 != 0) {
      DAT_0037ee4c = 2;
      PTR_XBE_FILE_HEADER_0037ee4d._0_1_ = (undefined1)local_10;
      FUN_0037f2ce(&DAT_0037ee4c);
    }
    if (local_8 != 0) {
      DAT_0037ee4c = 1;
      PTR_XBE_FILE_HEADER_0037ee4d._0_1_ = (undefined1)local_8;
      FUN_0037f2ce(&DAT_0037ee4c);
    }
    KeInitializeTimerEx(&DAT_004126d0,0);
  }
  return;
}
