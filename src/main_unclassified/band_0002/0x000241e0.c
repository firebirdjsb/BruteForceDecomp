/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 986E3422F98C36360D6D5A6364CD1BBD9DC79F92C36AFE8689C49A7A660F3A64
 * Entry: 0x000241e0, Ghidra index: 251, label: FUN_000241e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_000241e0(void)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  
  uVar2 = *(uint *)(in_ECX + 0x44);
  if ((uVar2 != 0x13) &&
     ((uVar1 = uVar2, uVar2 != 0x78 || (uVar1 = *(uint *)(in_ECX + 0x798), uVar2 = 0, uVar1 != 0))))
  {
    return uVar1 & 0xffffff00;
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}
