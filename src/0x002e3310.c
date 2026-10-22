/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 130700A8272164B306702F82403197B67628D7C62C8FC9F271CC9E98882FB350
 * Entry: 0x002e3310, Ghidra index: 10396, label: FUN_002e3310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_002e3310(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  
  iVar1 = FUN_003450a5(*in_ECX,param_1,param_2,param_3,param_4);
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
