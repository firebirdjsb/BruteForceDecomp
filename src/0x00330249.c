/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8C43BA40F35E2420EF58569D0CC7D52566B4D1037DCF84DFDB1B55656D87B9C3
 * Entry: 0x00330249, Ghidra index: 12360, label: FUN_00330249
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00330249(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_188 [260];
  uint local_84;
  uint local_70;
  uint local_8;
  
  local_8 = 0;
  iVar1 = FUN_002f2b3f(param_1,0x80000000,0,0,3,0x8000080,0);
  if ((iVar1 != -1) && (iVar2 = XAPILIB__ReadFile(iVar1,local_188,0x178,&param_1,0), iVar2 != 0)) {
    if ((param_1 == 0x178) && (local_84 <= local_70)) {
      param_1 = local_70 - local_84;
      iVar2 = XAPILIB__SetFilePointer(iVar1,param_1,0,0);
      if ((iVar2 == 0) || (iVar2 = XAPILIB__ReadFile(iVar1,param_2,0x1d0,&param_1,0), iVar2 == 0))
      goto LAB_003302d8;
      if (param_1 == 0x1d0) goto LAB_003302fa;
    }
    XAPILIB__SetLastError(0xd);
  }
LAB_003302d8:
  iVar2 = XAPILIB__GetLastError();
  if (iVar2 < 1) {
    local_8 = XAPILIB__GetLastError();
  }
  else {
    uVar3 = XAPILIB__GetLastError();
    local_8 = uVar3 & 0xffff | 0x80070000;
  }
LAB_003302fa:
  if (iVar1 != -1) {
    XAPILIB__CloseHandle(iVar1);
  }
  return local_8;
}
