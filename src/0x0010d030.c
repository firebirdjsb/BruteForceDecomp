/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9DA5C774532C3A6B8C4275C6F31E7E6A9A6FB83A65E33A0837F20609D07B79BD
 * Entry: 0x0010d030, Ghidra index: 3486, label: FUN_0010d030
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0010d030(void)

{
  byte bVar1;
  byte bVar2;
  int in_ECX;
  
  bVar1 = *(byte *)(in_ECX + 0x88);
  bVar2 = *(byte *)(in_ECX + 0x28) >> 2 & 1;
  if (bVar2 != (bVar1 >> 2 & 1)) {
    *(byte *)(in_ECX + 0x88) = (bVar2 << 2 ^ bVar1) & 4 ^ bVar1;
    (**(code **)(*(int *)(in_ECX + 0x60) + 0x28))();
  }
  bVar1 = *(byte *)(in_ECX + 0x17c);
  bVar2 = *(byte *)(in_ECX + 0x28) >> 2 & 1;
  if (bVar2 != (bVar1 >> 2 & 1)) {
    *(byte *)(in_ECX + 0x17c) = (bVar2 << 2 ^ bVar1) & 4 ^ bVar1;
    (**(code **)(*(int *)(in_ECX + 0x154) + 0x28))();
  }
  return 1;
}
