/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F4DE91285DEB71EA5F4E8ECC67441911EFE6DF9A600EF5F6DC1BD5D63F8E25AC
 * Entry: 0x00351d65, Ghidra index: 13065, label: FUN_00351d65
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00351d65(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  bool bVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  undefined3 uVar8;
  int in_ECX;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined4 uVar12;
  undefined2 uVar13;
  byte *pbVar14;
  byte local_3c [28];
  byte *local_20;
  byte *local_1c;
  int local_18;
  byte *local_14;
  char *local_10;
  byte *local_c;
  byte *local_8;
  
  pbVar10 = (byte *)*param_1;
  local_20 = pbVar10;
  if (*(ushort *)(param_1 + 1) < 4) {
    return;
  }
  uVar5 = *(ushort *)(pbVar10 + 2) >> 8 | *(ushort *)(pbVar10 + 2) << 8;
  uVar6 = (uint)uVar5;
  if (uVar6 < 4) {
    return;
  }
  uVar3 = *(ushort *)(param_1 + 1);
  if (uVar3 < uVar6) {
    return;
  }
  *(ushort *)(param_1 + 1) = uVar5;
  if (*(byte *)(in_ECX + 0x8c0) < 0x13) {
    return;
  }
  bVar1 = *pbVar10;
  if (((bVar1 == 5) || (bVar1 == 7)) || (bVar1 == 8)) {
    FUN_00351884(0xa0000000);
    return;
  }
  if ((short)param_2 == 0x21c0) {
    if (bVar1 == 10) {
      return;
    }
    if (bVar1 == 0xb) {
      return;
    }
    if (bVar1 == 9) {
      if (uVar6 < 8) {
        return;
      }
      if (*(char *)(in_ECX + 0xa30) != '\x04') {
        return;
      }
      iVar7 = uVar6 - 8;
      pbVar14 = pbVar10 + 8;
      uVar13 = 4;
      uVar5 = (ushort)pbVar10[1];
      uVar12 = 10;
      param_2 = 0x21c0;
      pbVar10 = (byte *)(in_ECX + 0xa3c);
      goto LAB_003521e2;
    }
  }
  if ((bVar1 == 0) || (4 < bVar1)) {
    if (0x15 < *(byte *)(in_ECX + 0x8c0)) {
      return;
    }
    cVar2 = *(char *)(in_ECX + 0xa33);
    uVar5 = CONCAT11((char)(uVar3 >> 8),cVar2);
    *(char *)(in_ECX + 0xa33) = cVar2 + '\x01';
    iVar7 = 0;
    pbVar14 = (byte *)0x0;
    uVar13 = *(undefined2 *)(param_1 + 1);
    uVar12 = 7;
LAB_003521e2:
    FUN_00350a7a(param_2,uVar12,uVar5,pbVar10,uVar13,pbVar14,iVar7,0,0,0,0,0,0,0);
    return;
  }
  if ((short)param_2 == 0x21c0) {
    local_10 = (char *)(in_ECX + 0xa30);
  }
  else {
    local_10 = (char *)(in_ECX + 0xa35);
  }
  if (*local_10 == '\0') {
    return;
  }
  local_14 = (byte *)(uVar6 - 4);
  local_8 = pbVar10 + 4;
  bVar4 = false;
  local_18 = 0;
  local_c = local_14;
  if (local_14 != (byte *)0x0) {
    do {
      if (local_c < (byte *)0x2) {
        return;
      }
      if (local_8[1] < 2) {
        return;
      }
      local_1c = (byte *)(uint)local_8[1];
      if (local_c < local_1c) {
        return;
      }
      iVar7 = FUN_0035080d(local_8,param_2,*pbVar10,0,0);
      if (iVar7 == 0) {
        return;
      }
      if (iVar7 == 1) {
        bVar4 = true;
      }
      else if (iVar7 == 2) {
        local_18 = 1;
      }
      local_8 = local_8 + (int)local_1c;
      local_c = local_c + -(int)local_1c;
    } while (local_c != (byte *)0x0);
    local_c = (byte *)0x0;
  }
  if (*pbVar10 == 1) {
    if (*(char *)(in_ECX + 0x8c0) == '\x14') {
      FUN_00351028(0x13);
    }
    local_c = local_14;
    *(byte *)(in_ECX + 0xa72) = *(byte *)(in_ECX + 0xa72) | 4;
    if ((bVar4) || (local_18 != 0)) {
      if (*local_10 == '\x04') {
        return;
      }
      local_8 = pbVar10 + 4;
      if (bVar4) {
        bVar4 = local_14 != (byte *)0x0;
        local_14 = local_8;
        if (bVar4) {
          do {
            bVar1 = local_8[1];
            iVar7 = FUN_0035080d(local_8,param_2,*pbVar10,0,0);
            if (iVar7 == 1) {
              pbVar14 = local_14 + bVar1;
              pbVar9 = local_8;
              for (uVar6 = (uint)(bVar1 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
                *(undefined4 *)local_14 = *(undefined4 *)pbVar9;
                pbVar9 = pbVar9 + 4;
                local_14 = local_14 + 4;
              }
              pbVar11 = local_14;
              for (uVar6 = bVar1 & 3; pbVar10 = local_20, local_14 = pbVar14, uVar6 != 0;
                  uVar6 = uVar6 - 1) {
                *pbVar11 = *pbVar9;
                pbVar9 = pbVar9 + 1;
                pbVar11 = pbVar11 + 1;
              }
            }
            local_8 = local_8 + bVar1;
            local_c = local_c + -(uint)bVar1;
          } while (local_c != (byte *)0x0);
          local_c = (byte *)0x0;
        }
        *(byte *)(in_ECX + 0xa72) = *(byte *)(in_ECX + 0xa72) | 2;
        pbVar14 = pbVar10 + 4;
        iVar7 = (int)local_14 - (int)pbVar14;
        bVar1 = pbVar10[1];
        uVar12 = 4;
      }
      else {
        pbVar14 = local_3c;
        local_14 = pbVar14;
        while (local_c != (byte *)0x0) {
          bVar1 = local_8[1];
          for (pbVar9 = local_3c; pbVar9 < pbVar14; pbVar9 = pbVar9 + pbVar9[1]) {
            if (*pbVar9 == *local_8) goto LAB_0035209b;
          }
          FUN_0035080d(local_8,param_2,*pbVar10,&local_14,1);
          pbVar14 = local_14;
LAB_0035209b:
          local_8 = local_8 + bVar1;
          local_c = local_c + -(uint)bVar1;
        }
        *(byte *)(in_ECX + 0xa72) = *(byte *)(in_ECX + 0xa72) | 1;
        iVar7 = (int)pbVar14 - (int)local_3c;
        pbVar14 = local_3c;
        bVar1 = pbVar10[1];
        uVar12 = 3;
        local_c = (byte *)0x0;
      }
      FUN_00350a7a(param_2,uVar12,bVar1,pbVar14,iVar7,0,0,0,0,0,0,0,0,0);
      if (*local_10 != '\x03') {
        return;
      }
      *local_10 = '\x01';
      return;
    }
    local_8 = pbVar10 + 4;
    local_18 = 0;
    for (; local_c != (byte *)0x0; local_c = local_c + -(uint)bVar1) {
      bVar1 = local_8[1];
      FUN_0035080d(local_8,param_2,*pbVar10,0,1);
      local_8 = local_8 + bVar1;
    }
    *(byte *)(in_ECX + 0xa71) = *(byte *)(in_ECX + 0xa71) | 0x80;
    uVar12 = FUN_00350a7a(param_2,2,pbVar10[1],pbVar10 + 4,local_14,0,0,0,0,0,0,0,0,0);
    uVar8 = (undefined3)((uint)uVar12 >> 8);
    if (*local_10 == '\x04') {
      return;
    }
    if (*local_10 != '\x02') {
      *local_10 = '\x03';
      return;
    }
    *local_10 = '\x04';
LAB_00351f9a:
    FUN_00351028(CONCAT31(uVar8,*(char *)(in_ECX + 0x8c0) != '\x13') * 2 + 0x14);
    return;
  }
  if (pbVar10[1] != *(byte *)(in_ECX + 0xa32)) {
    return;
  }
  if (*local_10 == '\x04') {
    return;
  }
  if (bVar4) {
    return;
  }
  if (local_18 != 0) {
    return;
  }
  *(undefined1 *)(in_ECX + 0x8c1) = 0;
  cVar2 = *(char *)(in_ECX + 0xa33);
  *(char *)(in_ECX + 0xa32) = cVar2;
  *(char *)(in_ECX + 0xa33) = cVar2 + '\x01';
  local_8 = pbVar10 + 4;
  local_c = local_14;
  if (local_14 != (byte *)0x0) {
    do {
      bVar1 = local_8[1];
      FUN_0035080d(local_8,param_2,*pbVar10,0,1);
      local_8 = local_8 + bVar1;
      local_c = local_c + -(uint)bVar1;
    } while (local_c != (byte *)0x0);
    local_c = (byte *)0x0;
  }
  uVar8 = 0;
  if (*pbVar10 == 2) {
    *(byte *)(in_ECX + 0xa72) = *(byte *)(in_ECX + 0xa72) | 8;
    if (*local_10 == '\x03') {
      *local_10 = '\x04';
      goto LAB_00351f9a;
    }
    if (*local_10 == '\x01') {
      *local_10 = '\x02';
      return;
    }
  }
  else {
    *(uint *)(in_ECX + 0xa70) =
         *(uint *)(in_ECX + 0xa70) | ((*pbVar10 != 3) - 1 & 0xfff00000) + 0x200000;
    if (*local_10 != '\x02') goto LAB_003521ab;
  }
  *local_10 = '\x01';
LAB_003521ab:
  FUN_00350cd7();
  return;
}
