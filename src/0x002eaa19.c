/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4AF2DF1E50706CA8ACF946EF2B28D50106962FCE202D9427FF04064C3DF66418
 * Entry: 0x002eaa19, Ghidra index: 10593, label: FUN_002eaa19
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002eaa19(undefined1 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_20 = param_2;
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  uVar1 = FUN_002edbde(&local_24,param_3,&stack0x00000010);
  if (param_1 != (undefined1 *)0x0) {
    local_20 = local_20 + -1;
    if (local_20 < 0) {
      __flsbuf(0,&local_24);
    }
    else {
      *local_24 = 0;
    }
  }
  return uVar1;
}
