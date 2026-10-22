/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 461A32087ECB5E14B19D76E797265D663B421CA54A36839B7D15E7C0E1457C63
 * Entry: 0x002ce2c0, Ghidra index: 10178, label: FUN_002ce2c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002ce2c0(void)

{
  uint *puVar1;
  short sVar2;
  int in_ECX;
  uint *puVar3;
  short sVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  puVar1 = (uint *)(in_ECX + 0x20);
  sVar4 = 0;
  sVar2 = 0;
  puVar3 = puVar1;
  do {
    if (*puVar3 == 1) {
      *(char *)(sVar4 + 0x100 + in_ECX) = (char)sVar2;
      sVar4 = sVar4 + 1;
    }
    sVar2 = sVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (sVar2 < 3);
  puVar6 = (undefined1 *)(in_ECX + 0x100);
  sVar2 = 0;
  puVar3 = puVar1;
  puVar5 = puVar6;
  do {
    if (*puVar3 == 2) {
      *puVar5 = (char)sVar2;
    }
    sVar2 = sVar2 + 1;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  } while (sVar2 < 3);
  sVar2 = 0;
  puVar3 = puVar1;
  do {
    if (*puVar3 == 0) {
      *puVar6 = (char)sVar2;
    }
    sVar2 = sVar2 + 1;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  } while (sVar2 < 3);
  *(undefined1 *)(in_ECX + 0x108) = 0;
  *(undefined1 *)(in_ECX + 0x106) = 0;
  if (*puVar1 == 1) {
    *(undefined1 *)(in_ECX + 0x106) = 1;
  }
  if ((*puVar1 & 2) != 0) {
    *(undefined1 *)(in_ECX + 0x108) = 1;
  }
  if (*(uint *)(in_ECX + 0x24) == 1) {
    *(char *)(in_ECX + 0x106) = *(char *)(in_ECX + 0x106) + '\x01';
  }
  if ((*(uint *)(in_ECX + 0x24) & 2) != 0) {
    *(char *)(in_ECX + 0x108) = *(char *)(in_ECX + 0x108) + '\x01';
  }
  if (*(uint *)(in_ECX + 0x28) == 1) {
    *(char *)(in_ECX + 0x106) = *(char *)(in_ECX + 0x106) + '\x01';
  }
  if ((*(uint *)(in_ECX + 0x28) & 2) != 0) {
    *(char *)(in_ECX + 0x108) = *(char *)(in_ECX + 0x108) + '\x01';
  }
  *(char *)(in_ECX + 0x10a) =
       *(char *)(in_ECX + 0x109) + *(char *)(in_ECX + 0x107) + *(char *)(in_ECX + 0x106) +
       *(char *)(in_ECX + 0x108);
  return;
}
