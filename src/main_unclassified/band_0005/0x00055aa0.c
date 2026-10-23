/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 24BF778DE71D22426B1A7A31378ED2B7AF5143A3943538AC269034FDF2B6F72A
 * Entry: 0x00055aa0, Ghidra index: 818, label: FUN_00055aa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00055aa0(void)

{
  int in_EAX;
  uint uVar1;
  
  if (*(int *)(in_EAX + 0x10) == 0) {
    FUN_00055a60(in_EAX);
  }
  uVar1 = (*(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 0x10)) - 1;
  if (*(uint *)(in_EAX + 8) <= uVar1) {
    return *(undefined4 *)(*(int *)(in_EAX + 4) + (uVar1 - *(uint *)(in_EAX + 8)) * 4);
  }
  return *(undefined4 *)(*(int *)(in_EAX + 4) + uVar1 * 4);
}
