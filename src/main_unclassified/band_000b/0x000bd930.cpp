/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C210A843AFC551E96A4C96DB6B063EC4112252289C3042E6E53C4954CFAF650
 * Entry: 0x000bd930, Ghidra index: 2313, label: FUN_000bd930
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000bd930(void)

{
  byte *pbVar1;
  int iVar2;
  int in_EAX;
  
  *(byte *)(in_EAX + 0x13) = *(byte *)(in_EAX + 0x13) | 1;
  pbVar1 = (byte *)(*(int *)(in_EAX + 0x98) + 0x13);
  *pbVar1 = *pbVar1 | 1;
  FUN_000be2c0();
  iVar2 = *(int *)(*(int *)(in_EAX + 0x34) + 0x34);
  *(undefined1 *)(iVar2 + 0x7c) = 0;
  iVar2 = *(int *)(iVar2 + 0x78);
  *(undefined4 *)(iVar2 + 0x58) = 0;
  *(undefined1 *)(iVar2 + 0x5c) = 0;
  FUN_000bb220(0x15262e1b);
  return;
}
