/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 596F3D2FCD4D4C4B1CA99F35B6CDD5533F9A62FA96AD57162D8125D93CEA4539
 * Entry: 0x002f0937, Ghidra index: 10755, label: FUN_002f0937
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f4dc;
extern uint32_t DAT_0040f4e0;
extern uint32_t DAT_0040f5a0;
extern uint32_t DAT_004a8ea0;
extern uint32_t _DAT_0040f4d8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_002f0937(undefined4 param_1,uint param_2,int param_3,byte param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  char local_6;
  byte local_5;
  
  local_5 = 0;
  if (((param_2 & 0x8000) == 0) && (((param_2 & 0x4000) != 0 || (DAT_0040f5a0 != 0x8000)))) {
    local_5 = 0x80;
  }
  uVar3 = param_2 & 3;
  if (uVar3 == 0) {
    local_14 = 0x80000000;
  }
  else if (uVar3 == 1) {
    local_14 = 0x40000000;
  }
  else {
    if (uVar3 != 2) {
      _DAT_0040f4d8 = 0x16;
      DAT_0040f4dc = 0;
      return 0xffffffff;
    }
    local_14 = 0xc0000000;
  }
  if (param_3 == 0x10) {
    local_c = 0;
  }
  else if (param_3 == 0x20) {
    local_c = 1;
  }
  else if (param_3 == 0x30) {
    local_c = 2;
  }
  else {
    if (param_3 != 0x40) {
      _DAT_0040f4d8 = 0x16;
      DAT_0040f4dc = 0;
      return 0xffffffff;
    }
    local_c = 3;
  }
  uVar3 = param_2 & 0x700;
  if (uVar3 < 0x401) {
    if ((uVar3 == 0x400) || (uVar3 == 0)) {
      local_10 = 3;
    }
    else if (uVar3 == 0x100) {
      local_10 = 4;
    }
    else {
      if (uVar3 == 0x200) goto LAB_002f0a46;
      if (uVar3 != 0x300) {
        _DAT_0040f4d8 = 0x16;
        DAT_0040f4dc = 0;
        return 0xffffffff;
      }
      local_10 = 2;
    }
  }
  else {
    if (uVar3 != 0x500) {
      if (uVar3 == 0x600) {
LAB_002f0a46:
        local_10 = 5;
        goto LAB_002f0a56;
      }
      if (uVar3 != 0x700) {
        _DAT_0040f4d8 = 0x16;
        DAT_0040f4dc = 0;
        return 0xffffffff;
      }
    }
    local_10 = 1;
  }
LAB_002f0a56:
  uVar3 = 0x80;
  if (((param_2 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_0040f4e0 & param_4))) {
    uVar3 = 1;
  }
  if ((param_2 & 0x40) != 0) {
    local_14 = CONCAT13(local_14._3_1_,0x10000);
    uVar3 = uVar3 | 0x4000000;
    local_c = local_c | 4;
  }
  if ((param_2 & 0x1000) != 0) {
    uVar3 = uVar3 | 0x100;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      uVar3 = uVar3 | 0x10000000;
    }
  }
  else {
    uVar3 = uVar3 | 0x8000000;
  }
  uVar4 = FUN_002f0e3c();
  if (uVar4 == 0xffffffff) {
    DAT_0040f4dc = 0;
    _DAT_0040f4d8 = 0x18;
  }
  else {
    iVar5 = FUN_002f2b3f(param_1,local_14,local_c,0,local_10,uVar3,0);
    if (iVar5 == -1) {
      uVar6 = XAPILIB__GetLastError();
      __dosmaperr(uVar6);
    }
    else {
      FUN_002f0ed9(uVar4,iVar5);
      bVar2 = local_5 | 1;
      iVar5 = (uVar4 & 0x1f) * 8;
      local_5 = local_5 & 0x48;
      *(byte *)((&DAT_004a8ea0)[(int)uVar4 >> 5] + 4 + iVar5) = bVar2;
      if (((local_5 != 0) || (-1 < (char)bVar2)) || ((param_2 & 2) == 0)) {
LAB_002f0b4c:
        if (local_5 != 0) {
          return uVar4;
        }
        if ((param_2 & 8) != 0) {
          pbVar1 = (byte *)((&DAT_004a8ea0)[(int)uVar4 >> 5] + 4 + iVar5);
          *pbVar1 = *pbVar1 | 0x20;
          return uVar4;
        }
        return uVar4;
      }
      iVar7 = FUN_002ef651(uVar4,0xffffffff,2);
      if (iVar7 == -1) {
        if (DAT_0040f4dc == 0x83) goto LAB_002f0b4c;
      }
      else {
        local_6 = '\0';
        iVar8 = FUN_002ef6db(uVar4,&local_6,1);
        if ((((iVar8 != 0) || (local_6 != '\x1a')) ||
            (iVar7 = FUN_002f1aaf(uVar4,iVar7), iVar7 != -1)) &&
           (iVar7 = FUN_002ef651(uVar4,0,0), iVar7 != -1)) goto LAB_002f0b4c;
      }
      FUN_002ef342(uVar4);
    }
  }
  return 0xffffffff;
}
