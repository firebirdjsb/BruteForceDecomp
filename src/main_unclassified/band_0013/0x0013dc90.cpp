/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1046CF2B5138FE93D8B21A2C4B88CC825E77450D414A889B6EF4C0F5A96F11BA
 * Entry: 0x0013dc90, Ghidra index: 4020, label: FUN_0013dc90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0013dc90(int *param_1)

{
  uint uVar1;
  int in_ECX;
  
  if (param_1[8] != 0) {
    (**(code **)(*param_1 + 0x38))();
    uVar1 = *(uint *)(*(int *)(in_ECX + 0x18) + 0xdc);
    if (uVar1 != 0) {
      FUN_0013e410((*(int *)(*(int *)(uVar1 + 0xc) + 4) != 3) - 1 & uVar1);
      return 1;
    }
    FUN_0013e410(0);
  }
  return 1;
}
