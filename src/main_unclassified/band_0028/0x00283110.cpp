/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E3B343652DFAFA8872A0E7A081F25922CB2EBAE2884CD721B73ECD8DB6337404
 * Entry: 0x00283110, Ghidra index: 9066, label: FUN_00283110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00283110(void)

{
  uint in_ECX;
  uint uVar1;
  
  if ((0x200 < (in_ECX & 0xf00)) && ((in_ECX & 4) == 0)) {
    return 0x40;
  }
  uVar1 = in_ECX >> 4 & 0x30;
  if (uVar1 == 0x20) {
    uVar1 = 0x30;
  }
  return ((in_ECX >> 1 & 0x60 | in_ECX & 0x10) >> 1 | in_ECX & 4) >> 2 | uVar1;
}
