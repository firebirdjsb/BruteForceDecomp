/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 96AC645D788BE37F6C28C19CCCF6399B1CEAB52631CD2D63850413C648CD305E
 * Entry: 0x002f2b3f, Ghidra index: 10817, label: FUN_002f2b3f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_002f2b3f(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5,uint param_6
            )

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 local_24;
  ushort *local_20;
  undefined4 local_1c;
  undefined1 local_18 [4];
  int local_14;
  ushort local_10 [4];
  undefined4 local_8;
  
  uVar4 = param_2;
  if (param_5 == 1) {
    param_2 = 2;
  }
  else if (param_5 == 2) {
    param_2 = 5;
  }
  else if (param_5 == 3) {
    param_2 = 1;
  }
  else if (param_5 == 4) {
    param_2 = 3;
  }
  else if ((param_5 != 5) || (uVar2 = param_2 & 0x40000000, param_2 = 4, uVar2 == 0)) {
    XAPILIB__XapiSetLastNTError(0xc000000d);
    return 0xffffffff;
  }
  RtlInitAnsiString(local_10,param_1);
  if ((local_10[0] < 2) || (*(char *)((local_10[0] - 1) + param_1) != '\\')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  local_20 = local_10;
  uVar2 = ((((param_6 >> 4 & 0x8000000 | param_6 & 0x20000000) >> 1 | param_6 & 0x8000000) >> 8 |
           param_6 & 0x10000000) >> 6 | param_6 & 0x2000000) >> 0xb | ~(param_6 >> 0x19) & 0x20;
  local_24 = 0xfffffffd;
  local_1c = 0x40;
  if ((param_6 & 0x4000000) != 0) {
    uVar2 = uVar2 | 0x1000;
    uVar4 = uVar4 | 0x10000;
  }
  if ((param_6 & 0x2000000) == 0) {
    uVar2 = uVar2 | 0x40;
  }
  iVar3 = NtCreateFile(&local_8,uVar4 | 0x100080,&local_24,local_18,0,param_6 & 0x7fa7,param_3,
                       param_2,uVar2);
  if (iVar3 < 0) {
    XAPILIB__XapiSetLastNTError(iVar3);
    if (iVar3 == -0x3fffffcb) {
      uVar5 = 0x50;
    }
    else {
      if (iVar3 != -0x3fffff46) {
        return 0xffffffff;
      }
      if (bVar1) {
        uVar5 = 3;
      }
      else {
        uVar5 = 5;
      }
    }
    XAPILIB__SetLastError(uVar5);
    return 0xffffffff;
  }
  if (((param_5 == 2) && (local_14 == 3)) || ((param_5 == 4 && (local_14 == 1)))) {
    uVar5 = 0xb7;
  }
  else {
    uVar5 = 0;
  }
  XAPILIB__SetLastError(uVar5);
  return local_8;
}
