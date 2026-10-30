/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2B9A1FD85988CD4C16E0F56AD9F526252D842AA33483819BE563B852B810C560
 * Entry: 0x002fe985, Ghidra index: 11038, label: thunk_FUN_002fe95d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 thunk_FUN_002fe95d(undefined4 param_1)

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
