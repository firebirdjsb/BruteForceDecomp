/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7C48898EFBB1F50A9CECD899F3B1B12C64047B298E8C976DD6DF341B2448C3A5
 * Entry: 0x0033badb, Ghidra index: 12523, label: FUN_0033badb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0033badb(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2;
  if (param_2 == 0) {
    iVar1 = 0x4000000a;
  }
  iVar1 = FUN_003449ff(param_1,iVar1,&param_2);
  if ((iVar1 != 0) && (iVar1 = FUN_0033b9e1(), iVar1 != 0)) {
    iVar1 = FUN_00344a56(param_1,param_2);
    return iVar1 != 0;
  }
  return false;
}
