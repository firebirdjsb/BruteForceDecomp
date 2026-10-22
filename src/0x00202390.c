/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B4873D9C4573F83BBA88CEDC84F1BF638C827ED28F13BB685741380B426FC282
 * Entry: 0x00202390, Ghidra index: 7272, label: FUN_00202390
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00202390(int param_1)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  
  *(undefined4 *)(in_ECX + 0x74) = 1;
  *(int *)(in_ECX + 0x78) = param_1;
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  if (*(int *)(in_ECX + 0x58) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(int *)(in_ECX + 0x5c) - *(int *)(in_ECX + 0x58)) / 0x24;
  }
  uVar1 = param_1 - 1;
  if ((uVar1 < uVar2) &&
     (uVar1 = *(uint *)(in_ECX + 0x58), *(int *)((uVar1 - 0x20) + param_1 * 0x24) != 0)) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(in_ECX + 4);
  return uVar1 & 0xffffff00;
}
