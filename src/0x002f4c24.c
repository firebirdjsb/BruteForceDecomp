/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EAC419E57AE17E5458CA35B63F2A23F7A6EC92D6B5C674FA8C65D59210D3F9FD
 * Entry: 0x002f4c24, Ghidra index: 10875, label: ResumeThread
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 XAPILIB__ResumeThread(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = NtResumeThread(param_1,&param_1);
  if (iVar1 < 0) {
    XapiSetLastNTError(iVar1);
    param_1 = 0xffffffff;
  }
  return param_1;
}
