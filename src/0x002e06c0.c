/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 76C54FE623D46C4BA782F73D604EB0F38DE1A3DF50B104CCCE46B38A8233B7D0
 * Entry: 0x002e06c0, Ghidra index: 10352, label: FUN_002e06c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e06c0(int param_1)

{
  uint *puVar1;
  int in_ECX;
  
  puVar1 = (uint *)(in_ECX + 0x40);
  if (((param_1 != 0) && (in_ECX + 0x44 != 0)) && (puVar1 != (uint *)0x0)) {
    if (3 < *puVar1) {
      return 0x80040001;
    }
    *(int *)(in_ECX + 0x44 + *puVar1 * 4) = param_1;
    *puVar1 = *puVar1 + 1;
    return 0;
  }
  return 0x80004003;
}
