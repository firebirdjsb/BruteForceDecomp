/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 00CF4C9883A635C70CD3F4D6ED9AE0656AEE067051D14399B84A84B7E67D7733
 * Entry: 0x002f4839, Ghidra index: 10860, label: FUN_002f4839
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_002f4839(undefined4 param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  RtlInitAnsiString(local_c,param_1);
  local_1c = local_c;
  local_20 = 0xfffffffd;
  local_18 = 0x40;
  iVar1 = NtCreateFile(&param_1,0x100001,&local_20,local_14,0,0x80,3,2,0x4021);
  if (iVar1 < 0) {
    XAPILIB__XapiSetLastNTError(iVar1);
  }
  else {
    NtClose(param_1);
  }
  return iVar1 >= 0;
}
