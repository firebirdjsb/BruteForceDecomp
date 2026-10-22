/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DBD3019E87C871855A4908432C3BB7C3BE63C559F52BC6C837EFA8F72525CBBE
 * Entry: 0x002f36e1, Ghidra index: 10835, label: SetFilePointerEx
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
XAPILIB__SetFilePointerEx(undefined4 param_1,uint param_2,uint param_3,uint *param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  undefined1 local_4c [40];
  uint local_24;
  int local_20;
  undefined1 local_14 [8];
  uint local_c;
  uint local_8;
  
  if (param_5 != 0) {
    if ((param_5 == 1) || (param_5 != 2)) {
      iVar1 = NtQueryInformationFile(param_1,local_14,&local_c,8,0xe);
      if (iVar1 < 0) goto LAB_002f379d;
      bVar2 = CARRY4(local_c,param_2);
      param_2 = local_c + param_2;
      param_3 = local_8 + param_3 + (uint)bVar2;
    }
    else {
      iVar1 = NtQueryInformationFile(param_1,local_14,local_4c,0x38,0x22);
      if (iVar1 < 0) goto LAB_002f379d;
      bVar2 = CARRY4(local_24,param_2);
      param_2 = local_24 + param_2;
      param_3 = local_20 + param_3 + (uint)bVar2;
    }
  }
  local_c = param_2;
  local_8 = param_3;
  if (((int)param_3 < 1) && ((int)param_3 < 0)) {
    SetLastError(0x83);
    return 0;
  }
  iVar1 = NtSetInformationFile(param_1,local_14,&local_c,8,0xe);
  if (-1 < iVar1) {
    if (param_4 != (uint *)0x0) {
      *param_4 = local_c;
      param_4[1] = local_8;
    }
    return 1;
  }
LAB_002f379d:
  XapiSetLastNTError(iVar1);
  return 0;
}
