/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F6788F3D976083B77D46A4DA622F7EEA0153CAE4EB8CFF5EC959C1D32E68C65C
 * Entry: 0x002f49d2, Ghidra index: 10865, label: CreateMutexA
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int XAPILIB__CreateMutexA(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_18 [12];
  undefined1 local_c [8];
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = XapiFormatObjectAttributes(local_18,local_c,param_3);
  }
  iVar2 = NtCreateMutant(&param_3,uVar1,param_2);
  if (iVar2 < 0) {
    XapiSetLastNTError(iVar2);
    param_3 = 0;
  }
  else {
    if (iVar2 == 0x40000000) {
      uVar1 = 0xb7;
    }
    else {
      uVar1 = 0;
    }
    SetLastError(uVar1);
  }
  return param_3;
}
