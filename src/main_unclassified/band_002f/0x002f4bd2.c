/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B4CB176D5EB286FE7436F4C30E4A29863053F0FFFBF558295F74DAFD55CF42E8
 * Entry: 0x002f4bd2, Ghidra index: 10874, label: SetThreadPriority
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 XAPILIB__SetThreadPriority(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ObReferenceObjectByHandle(param_1,*(uint32_t *)(uintptr_t)UINT32_C(0x00386538),&param_1);
  if (iVar1 < 0) {
    XapiSetLastNTError(iVar1);
    uVar2 = 0;
  }
  else {
    if (param_2 == 0xf) {
      iVar1 = 0x10;
    }
    else {
      iVar1 = param_2;
      if (param_2 == -0xf) {
        iVar1 = -0x10;
      }
    }
    KeSetBasePriorityThread(param_1,iVar1);
    ObfDereferenceObject();
    uVar2 = 1;
  }
  return uVar2;
}
