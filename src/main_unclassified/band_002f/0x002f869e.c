/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C8E434AAA0B480C28ED192598C2EABA83C6EC2E89F0F392BE01628C86DDD559F
 * Entry: 0x002f869e, Ghidra index: 10953, label: FUN_002f869e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002f869e(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_168 [328];
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  undefined4 local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  RtlInitAnsiString(local_18,param_1);
  local_10 = param_2;
  local_c = local_18;
  local_8 = 0x40;
  iVar1 = NtOpenFile(&param_1,(uintptr_t)0x00110101U,&local_10,local_20,3,0x4021);
  if (-1 < iVar1) {
    iVar1 = FUN_002f8521(param_1,local_168);
    NtClose(param_1);
  }
  return iVar1;
}
