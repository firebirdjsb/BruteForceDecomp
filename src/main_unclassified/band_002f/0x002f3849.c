/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6FDE91B4861AA6B5A9F9EDE8543F4AAE94F9513780513EBE373BE6F47FA2A851
 * Entry: 0x002f3849, Ghidra index: 10839, label: CloseHandle
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool XAPILIB__CloseHandle(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = NtClose(param_1);
  if (iVar1 < 0) {
    XapiSetLastNTError(iVar1);
  }
  return iVar1 >= 0;
}
