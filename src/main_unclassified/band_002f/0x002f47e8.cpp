/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BB18A06F1C559AE76A73980AE0E7B1322504B0809349B70CBD6A25A237FBFDA6
 * Entry: 0x002f47e8, Ghidra index: 10859, label: FUN_002f47e8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_002f47e8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_154 [328];
  undefined1 local_c [8];
  
  iVar1 = NtQueryDirectoryFile(param_1,0,0,0,local_c,local_154,0x148,1,0,0);
  if (-1 < iVar1) {
    FUN_002f466f(local_154,param_2);
  }
  else {
    XAPILIB__XapiSetLastNTError(iVar1);
  }
  return -1 < iVar1;
}
