/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9BB2C2E9F7DB0BA20597EA155454BF4B67341A1A7DDBA4C11A9BB45B191C5370
 * Entry: 0x00110cd0, Ghidra index: 3553, label: FUN_00110cd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00110cd0(void)

{
  undefined1 *in_EAX;
  undefined1 *in_ECX;
  
  *in_EAX = *in_ECX;
  in_EAX[1] = in_ECX[1];
  in_EAX[2] = in_ECX[2];
  *(undefined4 *)(in_EAX + 4) = *(undefined4 *)(in_ECX + 4);
  *(undefined4 *)(in_EAX + 8) = *(undefined4 *)(in_ECX + 8);
  *(undefined4 *)(in_EAX + 0xc) = *(undefined4 *)(in_ECX + 0xc);
  *(undefined4 *)(in_EAX + 0x10) = *(undefined4 *)(in_ECX + 0x10);
  *(undefined4 *)(in_EAX + 0x14) = *(undefined4 *)(in_ECX + 0x14);
  *(undefined4 *)(in_EAX + 0x18) = *(undefined4 *)(in_ECX + 0x18);
  *(undefined4 *)(in_EAX + 0x1c) = *(undefined4 *)(in_ECX + 0x1c);
  *(undefined4 *)(in_EAX + 0x20) = *(undefined4 *)(in_ECX + 0x20);
  *(undefined4 *)(in_EAX + 0x24) = *(undefined4 *)(in_ECX + 0x24);
  *(undefined4 *)(in_EAX + 0x28) = *(undefined4 *)(in_ECX + 0x28);
  *(undefined4 *)(in_EAX + 0x2c) = *(undefined4 *)(in_ECX + 0x2c);
  *(undefined4 *)(in_EAX + 0x30) = *(undefined4 *)(in_ECX + 0x30);
  return;
}
