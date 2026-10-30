/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 18138D96F1C7E4FD8EEDCB0A5B56C8375FCE46F9539F47F0D0FF4ABE29F12698
 * Entry: 0x002f4933, Ghidra index: 10862, label: CreateEventA
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int XAPILIB__CreateEventA(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_18 [12];
  undefined1 local_c [8];
  
  if (param_4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = XapiFormatObjectAttributes(local_18,local_c,param_4);
  }
  iVar2 = NtCreateEvent(&param_4,uVar1,param_2 == 0,param_3);
  if (iVar2 < 0) {
    XapiSetLastNTError(iVar2);
    param_4 = 0;
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
  return param_4;
}
