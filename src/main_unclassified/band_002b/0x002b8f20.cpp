/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5083D74FAA80C0A366C051A9C866850E6C117479282691D6A17E0F8908A2F34A
 * Entry: 0x002b8f20, Ghidra index: 9867, label: FUN_002b8f20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b8f20(void)

{
  undefined4 *puVar1;
  int iVar2;
  int in_EDX;
  
  puVar1 = (undefined4 *)(in_EDX + 0x14);
  iVar2 = 3;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(in_EDX + 0x44) = 0;
  puVar1 = (undefined4 *)(in_EDX + 0x58);
  iVar2 = 3;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)(in_EDX + 0x90);
  iVar2 = 3;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(in_EDX + 0xc0) = 0;
  *(undefined4 *)(in_EDX + 4) = 0;
  *(undefined4 *)(in_EDX + 0x80) = 0;
  *(undefined4 *)(in_EDX + 0x48) = 0;
  *(undefined4 *)(in_EDX + 0x7c) = 0;
  *(undefined4 *)(in_EDX + 0xc4) = 0;
  *(undefined4 *)(in_EDX + 200) = 0x3f800000;
  puVar1 = (undefined4 *)(in_EDX + 8);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)(in_EDX + 8) = 0x3f800000;
  *(undefined4 *)(in_EDX + 0x1c) = 0x3f800000;
  *(undefined4 *)(in_EDX + 0x30) = 0x3f800000;
  puVar1 = (undefined4 *)(in_EDX + 0x4c);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)(in_EDX + 0x4c) = 0x3f800000;
  *(undefined4 *)(in_EDX + 0x60) = 0x3f800000;
  *(undefined4 *)(in_EDX + 0x74) = 0x3f800000;
  puVar1 = (undefined4 *)(in_EDX + 0x84);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)(in_EDX + 0x84) = 0x3f800000;
  *(undefined4 *)(in_EDX + 0x98) = 0x3f800000;
  *(undefined4 *)(in_EDX + 0xac) = 0x3f800000;
  *(undefined4 *)(in_EDX + 0xe4) = 0;
  *(undefined4 *)(in_EDX + 0xe0) = 0;
  *(undefined4 *)(in_EDX + 0xdc) = 0;
  *(undefined4 *)(in_EDX + 0xfc) = 0;
  *(undefined4 *)(in_EDX + 0xf8) = 0;
  *(undefined4 *)(in_EDX + 0xf4) = 0;
  *(undefined4 *)(in_EDX + 0xf0) = 0;
  *(undefined4 *)(in_EDX + 0xec) = 0;
  *(undefined4 *)(in_EDX + 0xe8) = 0;
  *(undefined4 *)(in_EDX + 0x114) = 0;
  *(undefined4 *)(in_EDX + 0x110) = 0;
  *(undefined4 *)(in_EDX + 0x10c) = 0;
  *(undefined4 *)(in_EDX + 0x108) = 0;
  *(undefined4 *)(in_EDX + 0x104) = 0;
  *(undefined4 *)(in_EDX + 0x100) = 0;
  *(undefined4 *)(in_EDX + 0x144) = 0;
  *(undefined4 *)(in_EDX + 0x140) = 0;
  *(undefined4 *)(in_EDX + 0x13c) = 0;
  *(undefined4 *)(in_EDX + 0x138) = 0;
  *(undefined4 *)(in_EDX + 0x134) = 0;
  *(undefined4 *)(in_EDX + 0x130) = 0;
  *(undefined4 *)(in_EDX + 300) = 0;
  *(undefined4 *)(in_EDX + 0x128) = 0;
  *(undefined4 *)(in_EDX + 0x124) = 0;
  *(undefined4 *)(in_EDX + 0x120) = 0;
  *(undefined4 *)(in_EDX + 0x11c) = 0;
  *(undefined4 *)(in_EDX + 0x118) = 0;
  *(undefined4 *)(in_EDX + 0xd8) = 1;
  *(undefined4 *)(in_EDX + 0xd4) = 1;
  *(undefined4 *)(in_EDX + 0xd0) = 1;
  *(undefined4 *)(in_EDX + 0xcc) = 0x3e99999a;
  return;
}
