/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ED64C0A43AA7FB2161090116019A5767DA14C6E381AF9A6B8EA393B8F5D11C34
 * Entry: 0x002f3be2, Ghidra index: 10845, label: FUN_002f3be2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002f3be2(undefined4 param_1,wchar_t *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  wchar_t local_104 [128];
  
  uVar3 = 0;
  iVar1 = FUN_002f2b3f(param_1,0x80100000,0,0,4,4,0);
  if (iVar1 != -1) {
    iVar2 = FUN_002f390d(iVar1,1);
    if (((iVar2 == 0) || (iVar2 = FUN_002f3955(iVar1,L"Name",local_104,0x80), iVar2 == 0)) ||
       (iVar2 = _wcscmp(local_104,param_2), iVar2 != 0)) {
      uVar3 = 0x491;
    }
    XAPILIB__CloseHandle(iVar1);
    return uVar3;
  }
  uVar3 = XAPILIB__GetLastError();
  return uVar3;
}
