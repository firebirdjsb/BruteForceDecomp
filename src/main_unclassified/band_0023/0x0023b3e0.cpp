/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F636C086F744ED8D70B0B1321C25AF21ED3A6397F420FBFC721710F773DB92EF
 * Entry: 0x0023b3e0, Ghidra index: 7911, label: FUN_0023b3e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0023b3e0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_0023b9c0(&param_1,0,0);
    return 0;
  }
  FUN_0023b9c0(&param_1,*puVar1,puVar1);
  return 0;
}
