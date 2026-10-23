/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 556124FB7B4BB8AC25738E2A254A4CCA2B771CB63C6DC404D3226FCF4C449717
 * Entry: 0x002f28dd, Ghidra index: 10806, label: VirtualAlloc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
XAPILIB__VirtualAlloc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = NtAllocateVirtualMemory(&param_1,0,&param_2,param_3,param_4);
  if (iVar1 < 0) {
    XapiSetLastNTError(iVar1);
    param_1 = 0;
  }
  return param_1;
}
