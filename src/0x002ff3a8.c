/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B97992D9FB80CE526743733210F52CF8F54B62A6036D0B510AE0CFBEA9D5E570
 * Entry: 0x002ff3a8, Ghidra index: 11059, label: FUN_002ff3a8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_002ff3a8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = XAPILIB__IsBadReadPtr(param_1,param_2);
  return iVar1 == 0;
}
