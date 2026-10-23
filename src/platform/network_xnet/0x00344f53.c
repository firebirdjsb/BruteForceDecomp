/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D6B97D1DB2DA6F7BB0BAD3A760F00B4186FFB16C4DE287E70DA0EF2F25F0EA8C
 * Entry: 0x00344f53, Ghidra index: 12758, label: FUN_00344f53
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00344f53(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (in_ECX == 0) {
    uVar1 = 0x276d;
  }
  else {
    FUN_0034c7e5(param_1,param_2);
    uVar1 = 0;
  }
  return uVar1;
}
