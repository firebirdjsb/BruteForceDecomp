/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 13B7556C9FD226F55C2FB7B38B9E0D1B00E756AC6233B317B71EFDBB5991C888
 * Entry: 0x00079130, Ghidra index: 1442, label: FUN_00079130
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_00079130(undefined4 param_1)

{
  undefined4 in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  int local_404;
  undefined1 local_400 [1024];
  
  uVar4 = 0;
  iVar1 = FUN_002f2b3f(in_EAX,0x80000000,0,0,3,0,0);
  if (iVar1 != -1) {
    iVar2 = XAPILIB__XCalculateSignatureBegin(1);
    uVar4 = 0;
    if (iVar2 != -1) {
      local_404 = 0;
      while( true ) {
        iVar3 = XAPILIB__ReadFile(iVar1,local_400,0x400,&local_404,0);
        if ((iVar3 == 0) || (local_404 == 0)) break;
        XAPILIB__XCalculateSignatureUpdate(iVar2,local_400,local_404);
      }
      XAPILIB__XCalculateSignatureEnd(iVar2,param_1);
      uVar4 = 1;
    }
    XAPILIB__CloseHandle(iVar1);
  }
  return uVar4;
}
