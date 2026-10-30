/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4DD66688559710BB4DA5B3DB4BC1CF89C1CCC8F9E6A8DBE84C4C30A0CE41D328
 * Entry: 0x002f3563, Ghidra index: 10833, label: SetEndOfFile
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 XAPILIB__SetEndOfFile(undefined4 param_1)

{
  int iVar1;
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = NtQueryInformationFile(param_1,local_24,&local_c,8,0xe);
  if (iVar1 < 0) {
    XapiSetLastNTError(iVar1);
  }
  else {
    local_14 = local_c;
    local_10 = local_8;
    iVar1 = NtSetInformationFile(param_1,local_24,&local_14,8,0x14);
    if (-1 < iVar1) {
      local_1c = local_c;
      local_18 = local_8;
      iVar1 = NtSetInformationFile(param_1,local_24,&local_1c,8,0x13);
      if (-1 < iVar1) {
        return 1;
      }
    }
    XapiSetLastNTError(iVar1);
  }
  return 0;
}
