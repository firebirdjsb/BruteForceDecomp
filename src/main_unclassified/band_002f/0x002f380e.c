/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 307B0B698C3C81D9B2B4A6EA4E22A3333ACA9A3C86F2B3DF83A9445BFEA6D1F9
 * Entry: 0x002f380e, Ghidra index: 10838, label: GetFileSize
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int XAPILIB__GetFileSize(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int local_c;
  undefined4 local_8;
  
  iVar1 = GetFileSizeEx(param_1,&local_c);
  if (iVar1 == 0) {
    local_c = -1;
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = local_8;
    }
    if (local_c == -1) {
      SetLastError(0);
    }
  }
  return local_c;
}
