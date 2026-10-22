/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 50D680291578C5EB3A38377EC459B4AA8F6C3F8E58716258B9C14890F408749C
 * Entry: 0x0035ae50, Ghidra index: 13192, label: FUN_0035ae50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035ae50(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    if (param_2 != (int *)0x0) {
      FUN_0035ad00(param_2);
      return;
    }
  }
  else {
    if (param_2 == (int *)0x0) {
      FUN_0035ad00(param_1);
      return;
    }
    iVar1 = *param_1;
    XAPILIB__SetEvent(param_1[2]);
    *param_1 = 3;
    if (iVar1 == 0) {
      XAPILIB__ResumeThread(param_1[3]);
    }
    else if (iVar1 == 2) {
      XAPILIB__ReleaseMutex(param_1[5]);
    }
    iVar1 = *param_2;
    XAPILIB__SetEvent(param_2[2]);
    *param_2 = 3;
    if (iVar1 == 0) {
      XAPILIB__ResumeThread(param_2[3]);
    }
    else if (iVar1 == 2) {
      XAPILIB__ReleaseMutex(param_2[5]);
    }
    FUN_0035a960();
    XAPILIB__CloseHandle(param_1[5]);
    XAPILIB__CloseHandle(param_1[3]);
    XAPILIB__CloseHandle(param_1[2]);
    FUN_002f8e70(param_1);
    XAPILIB__CloseHandle(param_2[5]);
    XAPILIB__CloseHandle(param_2[3]);
    XAPILIB__CloseHandle(param_2[2]);
    FUN_002f8e70(param_2);
  }
  return;
}
