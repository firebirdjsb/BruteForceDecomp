/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 83ABA8C1E3AC809A21F8CA357F10D8BFF0EF1B8EF08B446BE0142166191BB6FA
 * Entry: 0x002f4a4a, Ghidra index: 10867, label: WaitForSingleObjectEx
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int XAPILIB__WaitForSingleObjectEx(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_c [8];
  
  uVar1 = FUN_002f8a4b(local_c,param_2);
  while( true ) {
    iVar2 = NtWaitForSingleObjectEx(param_1,1,param_3,uVar1);
    if (iVar2 < 0) {
      XapiSetLastNTError(iVar2);
      return -1;
    }
    if (param_3 == 0) break;
    if (iVar2 != 0x101) {
      return iVar2;
    }
  }
  return iVar2;
}
