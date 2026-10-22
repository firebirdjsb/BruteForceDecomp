/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B973B57941A9147FB770B5AB8783183B0DC56DDDE9873F91315858E6D7F0598B
 * Entry: 0x0010d5a0, Ghidra index: 3493, label: FUN_0010d5a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010d5a0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  FUN_000b2070(param_1);
  for (uVar2 = 0;
      (iVar1 = *(int *)(in_ECX + 0xbc), iVar1 != 0 &&
      (uVar2 < (uint)(*(int *)(in_ECX + 0xc0) - iVar1 >> 2))); uVar2 = uVar2 + 1) {
    (**(code **)(*(int *)(*(int *)(iVar1 + uVar2 * 4) + 4) + 0x3c))(param_1);
  }
  return;
}
