/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA9ADEE6102D4AC548458AE0C73D00381602827449C9C213936F09AAC3DEF4F6
 * Entry: 0x002f6a0d, Ghidra index: 10918, label: FUN_002f6a0d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00387900;
extern uint32_t DAT_003b783c;
extern uint32_t DAT_003b7844;
extern uint32_t DAT_004a90d9;
extern uint32_t DAT_004a90da;
extern uint32_t PTR_LAB_003b7838;
extern uint32_t PTR_XBE_FILE_HEADER_003b7840;
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

undefined4 *
FUN_002f6a0d(uint param_1,undefined4 *param_2,uint param_3,uint param_4,undefined4 *param_5,
            int *param_6)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined **ppuVar8;
  int iVar9;
  undefined4 local_7c;
  undefined4 *local_78 [3];
  uint local_6c;
  int local_68;
  undefined4 *local_5c;
  int local_58;
  undefined *local_50 [2];
  int local_48;
  uint local_44;
  undefined *local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  undefined4 *local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00387900;
  uStack_c = 0x2f6a19;
  local_20[0] = (undefined4 *)0x0;
  ppuVar8 = local_50;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppuVar8 = (undefined *)0x0;
    ppuVar8 = ppuVar8 + 1;
  }
  if (param_6 != (int *)0x0) {
    local_8 = (undefined *)0x0;
    if (*param_6 == 0x30) {
      _memmove(local_50,param_6,0x30);
    }
    local_8 = (undefined *)0xffffffff;
  }
  if ((DAT_004a90da & 0x20) != 0) {
    param_1 = param_1 | 0x80;
  }
  if (local_50[1] == (undefined *)0x0) {
    local_50[1] = PTR_LAB_003b7838;
  }
  if (local_48 == 0) {
    local_48 = DAT_003b783c;
  }
  if (local_44 == 0) {
    local_44 = DAT_003b7844;
  }
  if (local_40 == (undefined *)0x0) {
    local_40 = PTR_XBE_FILE_HEADER_003b7840;
  }
  if (local_3c == 0) {
    local_3c = 0x7ffdefff;
  }
  if ((local_38 == 0) || (0xff000 < local_38)) {
    local_38 = 0xff000;
  }
  if (param_4 == 0) {
    param_4 = 0x1000;
    if (param_3 == 0) {
      param_3 = 0x40000;
    }
    else {
      param_3 = param_3 + 0xfff & 0xfffff000;
    }
  }
  else {
    param_4 = param_4 + 0xfff & 0xfffff000;
    if (param_3 == 0) {
      param_3 = param_4 + 0xffff & 0xffff0000;
    }
    else {
      param_3 = param_3 + 0xfff & 0xfffff000;
    }
  }
  local_58 = 0x590;
  if ((param_1 & 1) == 0) {
    if (param_5 == (undefined4 *)0x0) {
      local_58 = 0x5ac;
      param_5 = (undefined4 *)0xffffffff;
    }
    else {
      param_1 = param_1 | 0x80000000;
    }
  }
  else if (param_5 != (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  if (param_2 == (undefined4 *)0x0) {
    if (local_2c != 0) {
      return (undefined4 *)0x0;
    }
    iVar4 = NtAllocateVirtualMemory(local_20,0,&param_3,0x2000,4);
    if (iVar4 < 0) {
      return (undefined4 *)0x0;
    }
    local_7c = 0;
    if (param_4 == 0) {
      param_4 = 0x1000;
    }
    local_5c = local_20[0];
    puVar6 = local_20[0];
  }
  else {
    if (local_2c == 0) {
      iVar4 = NtQueryVirtualMemory(param_2,local_78);
      if (iVar4 < 0) {
        return (undefined4 *)0x0;
      }
      if (local_78[0] != param_2) {
        return (undefined4 *)0x0;
      }
      if (local_68 == 0x10000) {
        return (undefined4 *)0x0;
      }
      local_5c = local_78[0];
      if (local_68 == 0x1000) {
        puVar6 = local_78[0];
        for (iVar4 = 0x400; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        param_4 = local_6c;
        puVar6 = (undefined4 *)(local_6c + (int)local_78[0]);
        iVar4 = NtQueryVirtualMemory(puVar6,local_78);
        param_3 = param_4;
        local_78[0] = puVar6;
        if ((-1 < iVar4) && (local_68 == 0x2000)) {
          param_3 = local_6c + param_4;
        }
      }
      else {
        param_4 = 0x1000;
      }
    }
    else {
      if (local_34 == 0) {
        return (undefined4 *)0x0;
      }
      if (local_30 == 0) {
        return (undefined4 *)0x0;
      }
      if (local_30 < local_34) {
        return (undefined4 *)0x0;
      }
      if ((param_1 & 2) != 0) {
        return (undefined4 *)0x0;
      }
      local_5c = param_2;
      local_78[0] = (undefined4 *)(local_34 + (int)param_2);
      param_3 = local_30;
      puVar6 = param_2;
      for (iVar4 = 0x400; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
    }
    local_7c = 1;
    local_20[0] = param_2;
    puVar6 = local_78[0];
  }
  if (local_5c == puVar6) {
    iVar4 = NtAllocateVirtualMemory(&local_5c,0,&param_4,0x1000,4);
    if (iVar4 < 0) {
      if (param_2 != (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      NtFreeVirtualMemory(local_20,&param_3,0x8000);
      return (undefined4 *)0x0;
    }
    puVar6 = (undefined4 *)((int)puVar6 + param_4);
  }
  iVar9 = 0x80;
  iVar7 = local_58 + 0x80;
  iVar4 = 8;
  puVar5 = (undefined4 *)((int)local_20[0] + 0x597U & 0xfffffff8);
  puVar3 = local_20[0] + 0x13;
  do {
    puVar2 = puVar5;
    *puVar3 = puVar2;
    puVar5 = puVar2 + 4;
    iVar4 = iVar4 + -1;
    puVar3 = puVar2;
  } while (iVar4 != 0);
  *puVar2 = 0;
  if ((DAT_004a90d9 & 8) != 0) {
    local_20[0][0x5f] = puVar2 + 4;
    iVar7 = local_58 + 0x68c;
    puVar5 = (undefined4 *)(local_20[0][0x5f] + 0x60c);
  }
  *(short *)local_20[0] = (short)(iVar7 + 0xfU >> 4);
  *(undefined1 *)((int)local_20[0] + 5) = 1;
  local_20[0][4] = 0xeeffeeff;
  local_20[0][5] = param_1;
  local_20[0][6] = param_1 & 0x6001007d;
  *(undefined2 *)(local_20[0] + 0x5c) = 0xffff;
  *(short *)((int)local_20[0] + 0x3a) = (short)puVar5 - (short)local_20[0];
  local_20[0][0xf] = 0;
  puVar3 = local_20[0] + 0x60;
  do {
    puVar3[1] = puVar3;
    *puVar3 = puVar3;
    puVar3 = puVar3 + 2;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  local_20[0][0x17] = local_20[0] + 0x16;
  local_20[0][0x16] = local_20[0][0x17];
  puVar3 = param_5;
  if (param_5 == (undefined4 *)0xffffffff) {
    RtlInitializeCriticalSection(puVar5);
    puVar3 = puVar5;
  }
  local_20[0][0x160] = puVar3;
  cVar1 = FUN_002f64be(local_20[0],(iVar7 + 0xfU & 0xfffffff0) + (int)local_20[0],0,local_7c,
                       local_5c,puVar6,param_3 + (int)local_5c);
  if (cVar1 == '\0') {
    return (undefined4 *)0x0;
  }
  *(undefined2 *)(local_20[0] + 0xe) = 0;
  local_20[0][8] = local_50[1];
  local_20[0][9] = local_48;
  local_20[0][10] = local_44 >> 4;
  local_20[0][0xb] = (uint)local_40 >> 4;
  local_20[0][0xd] = local_3c;
  local_20[0][7] = local_38 + 0xf >> 4;
  local_20[0][0x161] = local_2c;
  local_20[0][0x14] = 0x1f;
  local_20[0][0x15] = 0xfffffff0;
  return local_20[0];
}
