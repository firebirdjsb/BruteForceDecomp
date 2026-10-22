/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9449D08232FFBDD1DD7824BAA00AE9DF0660072BF4BA395F04888285A347EA07
 * Entry: 0x00330c53, Ghidra index: 12375, label: FUN_00330c53
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00330c53(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (in_ECX == 0) {
    uVar1 = 0x80150005;
  }
  else {
    (**(code **)(param_1 + 4))(param_1);
    uVar1 = 0;
  }
  return uVar1;
}
