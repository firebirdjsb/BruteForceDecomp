/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A18477810CEAAB63205997F9E54E0B9569860F6F931C9A66CCA4E499E098D137
 * Entry: 0x003832c8, Ghidra index: 13614, label: FUN_003832c8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003832c8(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x40) = 0x43425355;
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(in_ECX + 0x10);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(in_ECX + 0x2c);
  *(undefined1 *)(in_ECX + 0x4d) = 0;
  *(char *)(in_ECX + 0x4c) = *(char *)(in_ECX + 0x37) << 7;
  *(undefined1 *)(in_ECX + 0x4e) = 10;
  *(byte *)(in_ECX + 0xd) = *(byte *)(in_ECX + 0xd) | 1;
  KeSetTimer(in_ECX + 0x70,0xfff3cb00,0xffffffff,in_ECX + 0x98);
  *(byte *)(in_ECX + 0xd) = *(byte *)(in_ECX + 0xd) | 2;
  *(undefined1 *)(in_ECX + 0xd5) = 0;
  *(undefined1 *)(in_ECX + 0xd6) = 0;
  *(undefined1 *)(in_ECX + 0xb8) = 0x28;
  *(undefined1 *)(in_ECX + 0xb9) = 0x41;
  *(undefined1 **)(in_ECX + 0xc0) = &LAB_00383260;
  *(int *)(in_ECX + 0xc4) = in_ECX;
  *(undefined4 *)(in_ECX + 200) = *(undefined4 *)(in_ECX + 0x24);
  *(undefined4 **)(in_ECX + 0xd0) = (undefined4 *)(in_ECX + 0x40);
  *(undefined4 *)(in_ECX + 0xcc) = 0x1f;
  *(undefined1 *)(in_ECX + 0xd4) = 1;
  FUN_00381379((undefined1 *)(in_ECX + 0xb8));
  return;
}
