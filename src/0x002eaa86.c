/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A3AF5B889AAEDDFF70DFC7BE5796FD4586FC4832B162617ACD8666392181E1C1
 * Entry: 0x002eaa86, Ghidra index: 10595, label: FUN_002eaa86
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002eaa86(undefined1 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_20 = 0x7fffffff;
  local_18 = 0x42;
  local_1c = param_1;
  local_24 = param_1;
  uVar1 = FUN_002edbde(&local_24,param_2,&stack0x0000000c);
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
