/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0DBDBB8AFF56D9DF89C17A149300F8A4A454DB0E18E690D2094064488B4C48D1
 * Entry: 0x002fe95d, Ghidra index: 11037, label: FUN_002fe95d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002fe95d(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_002f30bc(param_1);
  if (iVar1 == 0) {
    iVar1 = XAPILIB__GetLastError();
  }
  else {
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    __dosmaperr(iVar1);
    return 0xffffffff;
  }
  return 0;
}
