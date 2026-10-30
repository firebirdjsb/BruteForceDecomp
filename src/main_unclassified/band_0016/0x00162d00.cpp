/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A02D41EB754FC8AF2F1FA1AED4343C4C331D06BC9F365E6248D90DE0A16DD45
 * Entry: 0x00162d00, Ghidra index: 4657, label: FUN_00162d00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00162d00(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  uint *in_ECX;
  
  if ((((char)in_ECX[0x42] != '\0') &&
      ((param_1 & -(uint)((*(byte *)(param_1 + 0x26) & 0x40) != 0)) != 0)) &&
     (uVar2 = *(uint *)(*(int *)(param_1 + 0xc) + 0xa8), (uVar2 >> 0xb & 1) != 0)) {
    return (uVar2 >> 0x13) << 8;
  }
  puVar1 = in_ECX + in_ECX[0x41] + 1;
  do {
    in_ECX = in_ECX + 1;
    if (in_ECX == puVar1) break;
  } while (*in_ECX != param_1);
  return CONCAT31((int3)((uint)in_ECX >> 8),in_ECX == puVar1);
}
