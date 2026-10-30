/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 29AAADC292412BBE855E2390701F9C098175854B06F12DF4A4C6C47B4FEB3EDA
 * Entry: 0x002e3360, Ghidra index: 10397, label: FUN_002e3360
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_002e3360(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  
  iVar1 = FUN_0034508f(*in_ECX,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = XAPILIB__GetLastError();
  if (iVar1 < 1) {
    uVar2 = XAPILIB__GetLastError();
    return uVar2;
  }
  uVar2 = XAPILIB__GetLastError();
  return uVar2 & 0xffff | 0x80070000;
}
