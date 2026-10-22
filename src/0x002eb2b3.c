/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 637456729200B5F5041ECBAA1198742E1DE12AA4838319F7AD489B68745AD011
 * Entry: 0x002eb2b3, Ghidra index: 10616, label: FUN_002eb2b3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002eb2b3(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_20 = param_2 * 2;
  local_18 = 0x42;
  uVar1 = FUN_002ed38c(&local_24,param_3,param_4);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    __flsbuf(0,&local_24);
  }
  else {
    *local_24 = 0;
    local_24 = local_24 + 1;
  }
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    __flsbuf(0,&local_24);
  }
  else {
    *local_24 = 0;
  }
  return uVar1;
}
