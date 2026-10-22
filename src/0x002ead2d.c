/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 327EDD306AA7058F598F2F8A092BBDC4B925E9E882AC1DBEF653C3791F1BC97E
 * Entry: 0x002ead2d, Ghidra index: 10600, label: FUN_002ead2d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002ead2d(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_18 = 0x42;
  local_20 = 0x7fffffff;
  uVar1 = FUN_002ed38c(&local_24,param_2,param_3);
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
