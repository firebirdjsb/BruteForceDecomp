/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 79500F7EF157F66D50D428148F8510C31EA28BABEFA5823096CD057181624BCD
 * Entry: 0x002b3c60, Ghidra index: 9773, label: FUN_002b3c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b3c60(void)

{
  uint *puVar1;
  int iVar2;
  int in_EAX;
  
  if (*(char *)(in_EAX + 0x70) != '\b') {
    FUN_002bb180();
    return;
  }
  puVar1 = *(uint **)(in_EAX + 0x94);
  if (((byte)*puVar1 & 0x30) != 0x10) {
    iVar2 = *(int *)(in_EAX + 0x14);
    if (*(ushort *)(iVar2 + 0xe8) <= *(ushort *)(iVar2 + 0xea)) {
      FUN_002ccf80();
    }
    *(uint **)(*(int *)(iVar2 + 0xec) + (uint)*(ushort *)(iVar2 + 0xea) * 4) = puVar1;
    *(short *)(iVar2 + 0xea) = *(short *)(iVar2 + 0xea) + 1;
    *puVar1 = *puVar1 & 0xffffffdf | 0x10;
  }
  return;
}
