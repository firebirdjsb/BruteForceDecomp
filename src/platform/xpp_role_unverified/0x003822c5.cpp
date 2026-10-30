/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 50BFFA1C75A79C9026E6B2252CA5B597B10F0BCF94E5FE1EA1108F5FE81FD8A5
 * Entry: 0x003822c5, Ghidra index: 13587, label: FUN_003822c5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003822c5(void)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  int in_ECX;
  char in_DL;
  byte bVar4;
  
  bVar2 = 0;
  bVar4 = in_DL - 1;
  if (0x1f < bVar4) {
    bVar2 = ((byte)(in_DL - 0x21U) >> 5) + 1;
    uVar3 = (uint)bVar2;
    do {
      bVar4 = bVar4 - 0x20;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  puVar1 = (uint *)(in_ECX + 8 + (uint)bVar2 * 4);
  *puVar1 = *puVar1 & ~(1 << (bVar4 & 0x1f));
  return;
}
