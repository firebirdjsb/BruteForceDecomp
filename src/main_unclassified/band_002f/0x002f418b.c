/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F52F92E409DF309B9912CCE70117367F88CBA5219A32B01EEBC1F28F6EDBDEC9
 * Entry: 0x002f418b, Ghidra index: 10852, label: FUN_002f418b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_002f418b(undefined4 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined1 local_14 [8];
  undefined1 local_c [4];
  undefined4 local_8;
  
  RtlInitAnsiString(local_c,param_1);
  local_1c = local_c;
  local_20 = 0xfffffffd;
  local_18 = 0x40;
  iVar1 = NtOpenFile(&param_1,0x100001,&local_20,local_14,3,0x800021);
  if (iVar1 < 0) {
    XAPILIB__XapiSetLastNTError(iVar1);
    iVar1 = XAPILIB__GetLastError();
    if (iVar1 == 2) {
      XAPILIB__SetLastError(3);
    }
    uVar2 = 0;
  }
  else {
    iVar1 = NtQueryVolumeInformationFile(param_1,local_14,&local_38,0x18,3);
    NtClose(param_1);
    if (iVar1 < 0) {
      XAPILIB__XapiSetLastNTError(iVar1);
      uVar2 = 0;
    }
    else {
      uVar3 = __allmul(local_30,local_2c,local_28 * local_24,0);
      local_8 = (undefined4)((ulonglong)uVar3 >> 0x20);
      uVar4 = __allmul(local_38,local_34,local_28 * local_24,0);
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = (int)uVar3;
        param_2[1] = local_8;
      }
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = uVar4;
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = (int)uVar3;
        param_4[1] = local_8;
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}
