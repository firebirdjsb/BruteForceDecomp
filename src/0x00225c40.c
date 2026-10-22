/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CBC9E56130669636C984DCFC598A7E534F9B1D7D674237312914F41A424D6B52
 * Entry: 0x00225c40, Ghidra index: 7631, label: FUN_00225c40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_00225c40(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int in_EAX;
  
  if (*(int *)(in_EAX + 0x34) == 0) {
    FUN_0022c2e0(*(undefined4 *)(in_EAX + 0x54));
    FUN_00224a90(in_EAX,param_2);
    return 0;
  }
  uVar1 = FUN_00225c90(param_1);
  FUN_00224a90(in_EAX,param_2);
  return uVar1;
}
