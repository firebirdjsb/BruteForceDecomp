/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6E2F73B44D4C3158454B1983D771666820D02B5C3E5FFF64CA44ED0EA32AB96D
 * Entry: 0x002f50e9, Ghidra index: 10887, label: XPhysicalAlloc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int XAPILIB__XPhysicalAlloc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_2 == -1) {
    param_2 = 0;
    iVar1 = -1;
  }
  else {
    param_3 = 0;
    iVar1 = param_1 + -1 + param_2;
  }
  iVar1 = MmAllocateContiguousMemoryEx(param_1,param_2,iVar1,param_3,param_4);
  if (iVar1 == 0) {
    SetLastError(8);
  }
  return iVar1;
}
