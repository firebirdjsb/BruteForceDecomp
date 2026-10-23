/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 424D7E2142C94FB0530D1E25FA2567950C16778848FBF0B7AD55B2B24FF97315
 * Entry: 0x002f4a2a, Ghidra index: 10866, label: ReleaseMutex
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool XAPILIB__ReleaseMutex(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = NtReleaseMutant(param_1,0);
  if (iVar1 < 0) {
    XapiSetLastNTError(iVar1);
  }
  return iVar1 >= 0;
}
