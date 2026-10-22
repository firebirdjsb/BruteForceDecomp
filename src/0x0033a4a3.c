/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DB785C0CF612480DC9D5A528581350D67D5A86AED842451CFCBACA39B1C0D348
 * Entry: 0x0033a4a3, Ghidra index: 12499, label: FUN_0033a4a3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0033a4a3(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 local_8;
  
  iVar1 = param_2;
  if (param_2 == 0) {
    iVar1 = 0x4000000b;
  }
  iVar1 = FUN_00343bd0(param_1,iVar1,&param_2,&local_8);
  if ((iVar1 != 0) && (iVar1 = FUN_00339b76(param_2), iVar1 != 0)) {
    iVar1 = FUN_00343dcb(param_1,param_2,local_8);
    return iVar1 != 0;
  }
  return false;
}
