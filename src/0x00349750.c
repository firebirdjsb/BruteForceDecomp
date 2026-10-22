/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6AEBBB6136AF50721380A1F55B3B8FA93A7CED9BCA16C845FFAA5BEA543AD248
 * Entry: 0x00349750, Ghidra index: 12919, label: FUN_00349750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00349750(int param_1)

{
  uint uVar1;
  int in_ECX;
  ushort *puVar2;
  
  puVar2 = *(ushort **)(in_ECX + 0xac4);
  for (uVar1 = (uint)*(byte *)(in_ECX + 0xe); uVar1 != 0; uVar1 = uVar1 - 1) {
    if (((byte)puVar2[1] != 0) && ((param_1 == 0 || ((*puVar2 & 6) != 0)))) {
      if ((5 < (byte)puVar2[1]) && ((*puVar2 & 8) == 0)) {
        *puVar2 = *puVar2 | 8;
        FUN_00349413(puVar2,0);
      }
      if (param_1 != 0) {
        FUN_00349730(puVar2,0);
      }
    }
    puVar2 = puVar2 + 0x98;
  }
  return;
}
