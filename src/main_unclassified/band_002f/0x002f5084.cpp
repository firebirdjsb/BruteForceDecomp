/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9677E9C78C99AAAEDB6029EFE1E5B4CAB0B1563E1182B16027BCE6C724C1070F
 * Entry: 0x002f5084, Ghidra index: 10886, label: GetOverlappedResult
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 XAPILIB__GetOverlappedResult(int param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  
  if (*param_2 == 0x103) {
    if (param_4 == 0) {
      iVar1 = 0x102;
    }
    else {
      iVar1 = param_2[4];
      if (param_2[4] == 0) {
        iVar1 = param_1;
      }
      iVar1 = WaitForSingleObject(iVar1,0xffffffff);
    }
    if (iVar1 == 0x102) {
      SetLastError(0x3e4);
      return 0;
    }
    if (iVar1 != 0) {
      return 0;
    }
  }
  *param_3 = param_2[1];
  if (*param_2 < 0) {
    XapiSetLastNTError(*param_2);
    return 0;
  }
  return 1;
}
