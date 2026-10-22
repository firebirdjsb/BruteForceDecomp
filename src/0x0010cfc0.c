/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BA1E2341D8B2E4037D7D8A162F9ED437E9A8AB6B562BAC1CCF455D07450FD0CD
 * Entry: 0x0010cfc0, Ghidra index: 3485, label: FUN_0010cfc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0010cfc0(void)

{
  byte bVar1;
  byte bVar2;
  int in_ECX;
  
  bVar1 = *(byte *)(in_ECX + 0x88);
  bVar2 = *(byte *)(in_ECX + 0x28) >> 1 & 1;
  if ((bVar1 >> 1 & 1) != bVar2) {
    *(byte *)(in_ECX + 0x88) = (bVar2 << 1 ^ bVar1) & 2 ^ bVar1;
    (**(code **)(*(int *)(in_ECX + 0x60) + 0x24))();
  }
  bVar1 = *(byte *)(in_ECX + 0x17c);
  bVar2 = *(byte *)(in_ECX + 0x28) >> 1 & 1;
  if ((bVar1 >> 1 & 1) != bVar2) {
    *(byte *)(in_ECX + 0x17c) = (bVar2 << 1 ^ bVar1) & 2 ^ bVar1;
    (**(code **)(*(int *)(in_ECX + 0x154) + 0x24))();
  }
  return 1;
}
