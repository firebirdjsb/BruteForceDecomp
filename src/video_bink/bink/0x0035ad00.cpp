/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F6260E76BC1D1BE54AA34E82B457BABC99B32317164D4302ACAC3EAAC8CE4BD1
 * Entry: 0x0035ad00, Ghidra index: 13187, label: FUN_0035ad00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035ad00(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  XAPILIB__SetEvent(param_1[2]);
  *param_1 = 3;
  if (iVar1 == 0) {
    XAPILIB__ResumeThread(param_1[3]);
  }
  else if (iVar1 == 2) {
    XAPILIB__ReleaseMutex(param_1[5]);
  }
  XAPILIB__WaitForSingleObject(param_1[3],0xffffffff);
  XAPILIB__CloseHandle(param_1[5]);
  XAPILIB__CloseHandle(param_1[3]);
  XAPILIB__CloseHandle(param_1[2]);
  FUN_002f8e70(param_1);
  return;
}
