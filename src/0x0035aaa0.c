/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 852C19817B86227270155FEFE0F6028CDDB50C97DC97FF533B329BB65FCD78E0
 * Entry: 0x0035aaa0, Ghidra index: 13180, label: FUN_0035aaa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0035aaa0(int *param_1)

{
  int iVar1;
  
  iVar1 = XAPILIB__WaitForSingleObject(param_1[2],param_1[1]);
  if (iVar1 == 0) {
    return 0;
  }
  do {
    XAPILIB__WaitForSingleObject(param_1[5],0xffffffff);
    if (*param_1 == 1) {
      if (param_1[6] != 0) {
        FUN_0035a9a0(param_1);
      }
    }
    else if (*param_1 == 3) {
      XAPILIB__ReleaseMutex(param_1[5]);
      return 0;
    }
    XAPILIB__ReleaseMutex(param_1[5]);
    iVar1 = XAPILIB__WaitForSingleObject(param_1[2],param_1[1]);
  } while (iVar1 != 0);
  return 0;
}
