/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 45F92299FB30673D873C3431F5666B7B1BDA5788C8697190DFA087E9910A32A2
 * Entry: 0x002ce3a0, Ghidra index: 10179, label: FUN_002ce3a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002ce3a0(void)

{
  int in_EAX;
  uint uVar1;
  bool bVar2;
  
  bVar2 = *(int *)(in_EAX + 0x2c) == 1;
  if (bVar2) {
    *(undefined1 *)(in_EAX + 0x103) = 0;
  }
  uVar1 = (uint)bVar2;
  if (*(int *)(in_EAX + 0x30) == 1) {
    *(undefined1 *)(uVar1 + 0x103 + in_EAX) = 1;
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(in_EAX + 0x34) == 1) {
    *(undefined1 *)(uVar1 + 0x103 + in_EAX) = 2;
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(in_EAX + 0x2c) == 2) {
    *(undefined1 *)(uVar1 + 0x103 + in_EAX) = 0;
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(in_EAX + 0x30) == 2) {
    *(undefined1 *)(uVar1 + 0x103 + in_EAX) = 1;
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(in_EAX + 0x34) == 2) {
    *(undefined1 *)(uVar1 + 0x103 + in_EAX) = 2;
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(in_EAX + 0x2c) == 0) {
    *(undefined1 *)(uVar1 + 0x103 + in_EAX) = 0;
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(in_EAX + 0x30) == 0) {
    *(undefined1 *)(uVar1 + 0x103 + in_EAX) = 1;
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(in_EAX + 0x34) == 0) {
    *(undefined1 *)(uVar1 + 0x103 + in_EAX) = 2;
  }
  *(undefined1 *)(in_EAX + 0x109) = 0;
  *(undefined1 *)(in_EAX + 0x107) = 0;
  if (*(uint *)(in_EAX + 0x2c) == 1) {
    *(undefined1 *)(in_EAX + 0x107) = 1;
  }
  if ((*(uint *)(in_EAX + 0x2c) & 2) != 0) {
    *(undefined1 *)(in_EAX + 0x109) = 1;
  }
  if (*(uint *)(in_EAX + 0x30) == 1) {
    *(char *)(in_EAX + 0x107) = *(char *)(in_EAX + 0x107) + '\x01';
  }
  if ((*(uint *)(in_EAX + 0x30) & 2) != 0) {
    *(char *)(in_EAX + 0x109) = *(char *)(in_EAX + 0x109) + '\x01';
  }
  if (*(uint *)(in_EAX + 0x34) == 1) {
    *(char *)(in_EAX + 0x107) = *(char *)(in_EAX + 0x107) + '\x01';
  }
  if ((*(uint *)(in_EAX + 0x34) & 2) != 0) {
    *(char *)(in_EAX + 0x109) = *(char *)(in_EAX + 0x109) + '\x01';
  }
  *(char *)(in_EAX + 0x10a) =
       *(char *)(in_EAX + 0x108) + *(char *)(in_EAX + 0x106) + *(char *)(in_EAX + 0x107) +
       *(char *)(in_EAX + 0x109);
  return;
}
