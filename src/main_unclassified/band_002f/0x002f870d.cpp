/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8BCBD6ACAAA26CB463551D33B6043B763462333F268FCE041B2D73C1081D41BF
 * Entry: 0x002f870d, Ghidra index: 10954, label: FUN_002f870d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Call target FUN_00090020 has this exact signature in its current C draft.
 * Callback ABI, register inputs and Xbox behavior remain ABI_UNVERIFIED. */
extern undefined4 FUN_00090020(undefined4 param_1,int param_2,undefined4 param_3);
undefined4 FUN_002f870d(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined1 local_74 [8];
  uint local_6c;
  uint local_68;
  undefined1 local_54 [20];
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [2];
  undefined1 local_28 [8];
  uint local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_38 = param_1;
  local_3c = 0;
  local_34 = 0x40;
  iVar1 = NtOpenFile(&local_8,0x100003,&local_3c,local_28,0,0x18);
  if (iVar1 < 0) {
    XAPILIB__XapiSetLastNTError(iVar1);
    return 0;
  }
  uVar2 = NtDeviceIoControlFile(local_8,0,0,0,local_28,0x70000,0,0,local_54,0x18);
  if ((int)uVar2 < 0) {
    NtClose(local_8);
  }
  else {
    local_14 = FUN_002f8bb0();
    local_14 = local_14 & 0xff;
    uVar2 = NtDeviceIoControlFile(local_8,0,0,0,local_28,0x74004,0,0,local_74,0x20);
    if (-1 < (int)uVar2) {
      uVar2 = local_40 + 0xfffU & 0xfffff000;
      if (param_2 < uVar2) {
        param_2 = uVar2;
      }
      local_10 = 0x1000;
      if (0x1000 < uVar2) {
        local_10 = uVar2;
      }
      if ((local_68 != 0) || (local_10 < local_6c)) {
        iVar1 = __alldiv(local_6c,local_68,param_2,0);
        uVar3 = iVar1 + 1;
        if (0xffef < uVar3) {
          iVar1 = uVar3 * 4;
        }
        else {
          iVar1 = uVar3 * 2;
        }
        local_18 = iVar1 + -1 + uVar2 & ~(uVar2 - 1);
        uVar6 = local_6c - local_10;
        uVar5 = (uint)(local_6c < local_10);
        if (((local_68 != uVar5) || ((local_68 == uVar5 && (local_18 <= uVar6)))) &&
           ((local_68 - uVar5 != (uint)(uVar6 < local_18) || (param_2 <= uVar6 - local_18)))) {
          puVar4 = (undefined4 *)XAPILIB__LocalAlloc(0,uVar2);
          if (puVar4 == (undefined4 *)0x0) {
            NtClose(local_8);
            uVar2 = 0xc000009a;
          }
          else {
            puVar7 = puVar4;
            for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *puVar7 = 0xffffffff;
              puVar7 = puVar7 + 1;
            }
            for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
              *(undefined1 *)puVar7 = 0xff;
              puVar7 = (undefined4 *)((int)puVar7 + 1);
            }
            *puVar4 = 0x58544146;
            puVar4[3] = 1;
            puVar4[2] = param_2 >> ((byte)local_14 & 0x1f) & 0xff;
            *(undefined2 *)(puVar4 + 4) = 0;
            KeQuerySystemTime(local_30);
            puVar4[1] = local_30[0];
            local_20 = 0;
            local_1c = 0;
            local_c = local_10;
            do {
              local_14 = NtWriteFile(local_8,0,0,0,local_28,puVar4,uVar2,&local_20);
              if ((int)local_14 < 0) {
                XAPILIB__LocalFree(puVar4);
                goto LAB_002f89e6;
              }
              puVar7 = puVar4;
              for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                *puVar7 = 0;
                puVar7 = puVar7 + 1;
              }
              for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
                *(undefined1 *)puVar7 = 0;
                puVar7 = (undefined4 *)((int)puVar7 + 1);
              }
              bVar8 = CARRY4(local_20,uVar2);
              local_20 = local_20 + uVar2;
              local_1c = local_1c + (uint)bVar8;
              local_c = local_c - uVar2;
            } while (local_c != 0);
            puVar7 = puVar4;
            for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *puVar7 = 0;
              puVar7 = puVar7 + 1;
            }
            for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
              *(undefined1 *)puVar7 = 0;
              puVar7 = (undefined4 *)((int)puVar7 + 1);
            }
            local_20 = local_10;
            local_1c = 0;
            local_c = local_18;
            if (0xffef < uVar3) {
              puVar4[1] = 0xffffffff;
              *puVar4 = 0xfffffff8;
            }
            else {
              *(undefined2 *)((int)puVar4 + 2) = 0xffff;
              *(undefined2 *)puVar4 = 0xfff8;
            }
            do {
              local_14 = NtWriteFile(local_8,0,0,0,local_28,puVar4,uVar2,&local_20);
              if ((int)local_14 < 0) goto LAB_002f89de;
              *puVar4 = 0;
              puVar4[1] = 0;
              bVar8 = CARRY4(local_20,uVar2);
              local_20 = local_20 + uVar2;
              local_1c = local_1c + (uint)bVar8;
              local_c = local_c - uVar2;
            } while (local_c != 0);
            puVar7 = puVar4;
            for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
              *puVar7 = 0xffffffff;
              puVar7 = puVar7 + 1;
            }
            for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
              *(undefined1 *)puVar7 = 0xff;
              puVar7 = (undefined4 *)((int)puVar7 + 1);
            }
            local_c = param_2;
            do {
              local_14 = NtWriteFile(local_8,0,0,0,local_28,puVar4,uVar2,&local_20);
              if ((int)local_14 < 0) break;
              bVar8 = CARRY4(local_20,uVar2);
              local_20 = local_20 + uVar2;
              local_1c = local_1c + (uint)bVar8;
              local_c = local_c - uVar2;
            } while (local_c != 0);
LAB_002f89de:
            XAPILIB__LocalFree(puVar4);
LAB_002f89e6:
            NtFsControlFile(local_8,0,0,0,local_28,FUN_00090020,0,0,0,0);
            NtClose(local_8);
            uVar2 = local_14;
            if (-1 < (int)local_14) {
              return 1;
            }
          }
          goto LAB_002f8a15;
        }
      }
      NtClose(local_8);
      XAPILIB__SetLastError(0x70);
      return 0;
    }
    NtClose(local_8);
  }
LAB_002f8a15:
  XAPILIB__XapiSetLastNTError(uVar2);
  return 0;
}
