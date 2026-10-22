/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D2E9DC908A0468F1D111205FC03C8F2E1598DEE64B050F25A9A954A48986DE01
 * Entry: 0x002f75e8, Ghidra index: 10921, label: FUN_002f75e8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00387920;
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

undefined1 FUN_002f75e8(int param_1,uint param_2,int param_3)

{
  ushort *puVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  int unaff_FS_OFFSET;
  int *local_64;
  int *local_60;
  undefined4 *local_5c;
  ushort *local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  int *local_4c;
  int *local_48;
  int local_44;
  uint local_40;
  int *local_3c;
  ushort *local_38;
  uint local_34;
  int local_30 [3];
  undefined1 local_22;
  char local_21;
  int local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00387920;
  uStack_c = 0x2f75f4;
  local_20 = param_1;
  local_21 = '\0';
  local_22 = 1;
  if (param_3 == 0) {
    local_22 = 1;
  }
  else {
    local_30[0] = param_3;
    local_30[1] = 0;
    local_30[2] = 0;
    iVar4 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x20) + 0x250);
    if (iVar4 != 0) {
      (**(code **)(iVar4 + 0x14))(0xb,local_30);
    }
    local_8 = (undefined *)0x0;
    if (((param_2 | *(uint *)(param_1 + 0x18)) & 1) == 0) {
      RtlEnterCriticalSection(*(undefined4 *)(param_1 + 0x580));
      local_21 = '\x01';
    }
    if ((*(byte *)(param_3 + -0xb) & 8) == 0) {
      local_34 = (uint)*(ushort *)(param_3 + -0x10);
      local_38 = (ushort *)FUN_002f60f0(param_1,(ushort *)(param_3 + -0x10),&local_34,0);
      if (local_34 < 0x80) {
        *(byte *)((int)local_38 + 5) = *(byte *)((int)local_38 + 5) & 0x10;
        local_48 = (int *)(param_1 + 0x180 + (local_34 & 0xffff) * 8);
        if ((int *)*local_48 == local_48) {
          local_40 = (uint)(*local_38 >> 3);
          local_44 = 1 << ((byte)*local_38 & 7);
          pbVar2 = (byte *)(local_40 + 0x160 + param_1);
          *pbVar2 = *pbVar2 | (byte)local_44;
        }
        local_4c = (int *)local_48[1];
        puVar1 = local_38 + 4;
        *(int **)puVar1 = local_48;
        *(int **)(local_38 + 6) = local_4c;
        *local_4c = (int)puVar1;
        local_48[1] = (int)puVar1;
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + local_34;
        local_3c = local_48;
      }
      else if ((local_34 < *(uint *)(param_1 + 0x28)) ||
              (*(int *)(param_1 + 0x30) + local_34 < *(uint *)(param_1 + 0x2c))) {
        if (local_34 < 0xff01) {
          *(byte *)((int)local_38 + 5) = *(byte *)((int)local_38 + 5) & 0x10;
          local_50 = (undefined4 *)(param_1 + 0x180);
          for (local_5c = (undefined4 *)*local_50;
              (local_50 != local_5c &&
              (local_58 = (ushort *)(local_5c + -2), *local_58 < (ushort)local_34));
              local_5c = (undefined4 *)*local_5c) {
          }
          local_60 = (int *)local_5c[1];
          puVar1 = local_38 + 4;
          *(undefined4 **)puVar1 = local_5c;
          *(int **)(local_38 + 6) = local_60;
          *local_60 = (int)puVar1;
          local_5c[1] = puVar1;
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + local_34;
          local_54 = local_5c;
        }
        else {
          FUN_002f6395(param_1,local_38,local_34);
        }
      }
      else {
        FUN_002f6763(param_1,local_38,local_34);
      }
    }
    else {
      local_64 = (int *)(param_3 + -0x30);
      iVar4 = *local_64;
      piVar3 = *(int **)(param_3 + -0x2c);
      *piVar3 = iVar4;
      *(int **)(iVar4 + 4) = piVar3;
      if (local_21 != '\0') {
        RtlLeaveCriticalSection(*(undefined4 *)(param_1 + 0x580));
        local_21 = '\0';
      }
      local_34 = 0;
      iVar4 = NtFreeVirtualMemory(&local_64,&local_34,0x8000);
      if (iVar4 < 0) {
        local_22 = 0;
      }
    }
    local_8 = (undefined *)0xffffffff;
    FUN_002f77c9();
  }
  return local_22;
}
