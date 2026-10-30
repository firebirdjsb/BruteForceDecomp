/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 598666365EDB76D158730F89BA71EA2EFB951D345AE9B8115968CB3E2AA76256
 * Entry: 0x002f46db, Ghidra index: 10858, label: FUN_002f46db
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002f46db(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_170 [328];
  undefined1 local_28 [8];
  undefined4 local_20;
  uint *local_1c;
  undefined4 local_18;
  short local_14;
  short local_12;
  char *local_10;
  uint local_c;
  int local_8;
  
  RtlInitAnsiString(&local_c,param_1);
  local_1c = &local_c;
  local_20 = 0xfffffffd;
  local_18 = 0x40;
  for (uVar2 = local_c & 0xffff; (uVar2 != 0 && (*(char *)(local_8 + -1 + uVar2) != '\\'));
      uVar2 = uVar2 - 1) {
  }
  sVar1 = (short)uVar2;
  local_12 = (short)local_c - sVar1;
  local_10 = (char *)(local_8 + uVar2);
  local_c = CONCAT22(sVar1,sVar1);
  local_14 = local_12;
  if ((sVar1 == 0) || (local_12 == 0)) {
    XAPILIB__SetLastError(0x57);
  }
  else {
    if ((((local_12 == 3) && (*local_10 == '*')) && (local_10[1] == '.')) && (local_10[2] == '*')) {
      local_14 = 0;
    }
    iVar3 = NtOpenFile(&param_1,0x100001,&local_20,local_28,3,0x4021);
    if (-1 < iVar3) {
      iVar3 = NtQueryDirectoryFile(param_1,0,0,0,local_28,local_170,0x148,1,&local_14,0);
      if (-1 < iVar3) {
        FUN_002f466f(local_170,param_2);
        return param_1;
      }
      NtClose(param_1);
    }
    XAPILIB__XapiSetLastNTError(iVar3);
  }
  return 0xffffffff;
}
