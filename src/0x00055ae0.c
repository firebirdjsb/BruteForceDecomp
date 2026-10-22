/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7059AA7C43ACCCA0705227C6909C8FE5A42BEAAAD244B7B1445A704018E08F8F
 * Entry: 0x00055ae0, Ghidra index: 819, label: FUN_00055ae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00055ae0(void)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = (*(int *)(in_ECX + 0x10) + *(int *)(in_ECX + 0xc)) - 1;
  if (*(uint *)(in_ECX + 8) <= uVar1) {
    return *(undefined4 *)(*(int *)(in_ECX + 4) + (uVar1 - *(uint *)(in_ECX + 8)) * 4);
  }
  return *(undefined4 *)(*(int *)(in_ECX + 4) + uVar1 * 4);
}
