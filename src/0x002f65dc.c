/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B477F7AEC3F36E196CF64A52613BD212441179902778596269B75EEB01674A4C
 * Entry: 0x002f65dc, Ghidra index: 10916, label: FUN_002f65dc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002f65dc(uint param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  uVar3 = param_2;
  iVar2 = param_1;
  uVar8 = param_2 + 0xfff >> 0xc;
  uVar5 = uVar8 << 0xc;
  param_2 = param_2 & 0xffffff;
  local_10 = CONCAT31(local_10._1_3_,0x40);
  local_c = uVar5;
  do {
    local_8 = *(int *)(iVar2 + 0x60 + (uint)param_2._3_1_ * 4);
    if (local_8 == 0) {
      if ((char)local_10 == '@') {
        local_10 = CONCAT31(local_10._1_3_,param_2._3_1_);
      }
    }
    else if (((uVar8 <= *(uint *)(local_8 + 0x30)) && (uVar5 <= *(uint *)(local_8 + 0x1c))) &&
            (iVar6 = FUN_002f5f65(iVar2,local_8,&local_c,0), uVar5 = local_c, iVar6 != 0)) {
      local_c = local_c >> 4;
      uVar7 = FUN_002f60f0(iVar2,iVar6,&local_c,0);
      FUN_002f6395(iVar2,uVar7,local_c);
      return uVar7;
    }
    bVar1 = param_2._3_1_ + 1;
    param_2 = CONCAT13(bVar1,(undefined3)param_2);
  } while (bVar1 < 0x40);
  if (((char)local_10 != '@') && ((*(byte *)(iVar2 + 0x14) & 2) != 0)) {
    local_8 = 0;
    param_2 = uVar3 + 0x1000;
    param_1 = param_2;
    if (param_2 <= *(uint *)(iVar2 + 0x20)) {
      param_1 = *(uint *)(iVar2 + 0x20);
    }
    iVar6 = NtAllocateVirtualMemory(&local_8,0,&param_1,0x2000,4);
    if (iVar6 < 0) {
      do {
        if (param_1 == param_2) break;
        param_1 = param_1 >> 1;
        if (param_1 < param_2) {
          param_1 = param_2;
        }
        iVar6 = NtAllocateVirtualMemory(&local_8,0,&param_1,0x2000,4);
      } while (iVar6 < 0);
      if (iVar6 < 0) {
        return 0;
      }
    }
    *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + param_1;
    local_14 = param_2;
    if (param_2 <= *(uint *)(iVar2 + 0x24)) {
      local_14 = *(uint *)(iVar2 + 0x24);
    }
    iVar6 = NtAllocateVirtualMemory(&local_8,0,&local_14,0x1000,4);
    if (-1 < iVar6) {
      cVar4 = FUN_002f64be(iVar2,local_8,local_10,0,local_8,local_14 + local_8,param_1 + local_8);
      if (cVar4 == '\0') {
        iVar6 = -0x3fffffe9;
      }
      if (-1 < iVar6) {
        return *(undefined4 *)(local_8 + 0x28);
      }
    }
    NtFreeVirtualMemory(&local_8,&param_1,0x8000);
  }
  return 0;
}
