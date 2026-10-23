/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 856B42AF2BE2C098125EDF6B8CA70D01502E5E16A9E799A7AD16E1221F96F2F5
 * Entry: 0x002f37a9, Ghidra index: 10836, label: FlushFileBuffers
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool XAPILIB__FlushFileBuffers(undefined4 param_1)

{
  int iVar1;
  undefined1 local_c [8];
  
  iVar1 = NtFlushBuffersFile(param_1,local_c);
  if (iVar1 < 0) {
    XapiSetLastNTError(iVar1);
  }
  return iVar1 >= 0;
}
