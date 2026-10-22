/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 257CADBE3A42073ADD6A30C81F5474294E878E9891503F9CB2810BC14658BA17
 * Entry: 0x002f35e7, Ghidra index: 10834, label: SetFilePointer
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint XAPILIB__SetFilePointer(undefined4 param_1,uint param_2,uint *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 local_4c [40];
  uint local_24;
  int local_20;
  undefined1 local_14 [8];
  uint local_c;
  uint local_8;
  
  if (param_3 == (uint *)0x0) {
    uVar2 = (int)param_2 >> 0x1f;
  }
  else {
    uVar2 = *param_3;
  }
  if (param_4 == 0) {
    local_c = param_2;
  }
  else {
    if ((param_4 == 1) || (param_4 != 2)) {
      iVar1 = NtQueryInformationFile(param_1,local_14,&local_c,8,0xe);
      local_24 = local_c;
    }
    else {
      iVar1 = NtQueryInformationFile(param_1,local_14,local_4c,0x38,0x22);
      local_8 = local_20;
    }
    if (iVar1 < 0) {
      XapiSetLastNTError(iVar1);
      return 0xffffffff;
    }
    local_c = local_24 + param_2;
    uVar2 = local_8 + uVar2 + (uint)CARRY4(local_24,param_2);
  }
  local_8 = uVar2;
  if (((int)uVar2 < 1) && ((int)uVar2 < 0)) {
    uVar3 = 0x83;
  }
  else {
    if ((param_3 != (uint *)0x0) || ((uVar2 & 0x7fffffff) == 0)) {
      iVar1 = NtSetInformationFile(param_1,local_14,&local_c,8,0xe);
      if (iVar1 < 0) {
        XapiSetLastNTError(iVar1);
        if (param_3 != (uint *)0x0) {
          *param_3 = 0xffffffff;
          return 0xffffffff;
        }
        return 0xffffffff;
      }
      if (param_3 != (uint *)0x0) {
        *param_3 = local_8;
      }
      if (local_c == 0xffffffff) {
        SetLastError(0);
        return local_c;
      }
      return local_c;
    }
    uVar3 = 0x57;
  }
  SetLastError(uVar3);
  return 0xffffffff;
}
