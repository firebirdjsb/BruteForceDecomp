/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C6B69D3AF93201168EF7A0862E1BF5BE244C371E53DA3700D5BFC0879A52E74C
 * Entry: 0x002f30bc, Ghidra index: 10822, label: FUN_002f30bc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_002f30bc(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  undefined4 local_8;
  
  RtlInitAnsiString(local_10,param_1);
  local_20 = local_10;
  local_24 = 0xfffffffd;
  local_1c = 0x40;
  iVar2 = NtOpenFile(&local_8,0x10000,&local_24,local_18,7,0x4040);
  if (iVar2 < 0) {
    XAPILIB__XapiSetLastNTError(iVar2);
    bVar1 = false;
  }
  else {
    param_1 = CONCAT13(1,(undefined3)param_1);
    iVar2 = NtSetInformationFile(local_8,local_18,(int)&param_1 + 3,1,0xd);
    NtClose(local_8);
    if (iVar2 < 0) {
      XAPILIB__XapiSetLastNTError(iVar2);
    }
    bVar1 = iVar2 >= 0;
  }
  return bVar1;
}
