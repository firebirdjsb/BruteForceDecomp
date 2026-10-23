/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2A5971915ADECFE365EE69C7422C679A6245182839F60337CE4D60A3A097717D
 * Entry: 0x00048d30, Ghidra index: 581, label: FUN_00048d30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00048d30(void)

{
  int in_EAX;
  byte bVar1;
  int unaff_ESI;
  
  *(undefined4 *)(in_EAX + 4) = *(undefined4 *)(unaff_ESI + 4);
  *(undefined4 *)(in_EAX + 8) = *(undefined4 *)(unaff_ESI + 8);
  *(undefined4 *)(in_EAX + 0xc) = *(undefined4 *)(unaff_ESI + 0xc);
  *(undefined4 *)(in_EAX + 0x10) = *(undefined4 *)(unaff_ESI + 0x10);
  *(undefined4 *)(in_EAX + 0x18) = *(undefined4 *)(unaff_ESI + 0x18);
  bVar1 = *(byte *)(in_EAX + 0x1c) ^ (*(byte *)(in_EAX + 0x1c) ^ *(byte *)(unaff_ESI + 0x1c)) & 1;
  *(byte *)(in_EAX + 0x1c) = bVar1;
  bVar1 = (*(byte *)(unaff_ESI + 0x1c) ^ bVar1) & 2 ^ bVar1;
  *(byte *)(in_EAX + 0x1c) = bVar1;
  *(byte *)(in_EAX + 0x1c) = (*(byte *)(unaff_ESI + 0x1c) ^ bVar1) & 4 ^ bVar1;
  *(undefined4 *)(in_EAX + 0x20) = *(undefined4 *)(unaff_ESI + 0x20);
  *(undefined4 *)(in_EAX + 0x24) = *(undefined4 *)(unaff_ESI + 0x24);
  *(undefined4 *)(in_EAX + 0x28) = *(undefined4 *)(unaff_ESI + 0x28);
  *(undefined4 *)(in_EAX + 0x2c) = *(undefined4 *)(unaff_ESI + 0x2c);
  return;
}
