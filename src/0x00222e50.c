/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 474FE378C5CBD80EA2E46B2B3A0B561DBD896C3E816867610C3787E12047718F
 * Entry: 0x00222e50, Ghidra index: 7595, label: FUN_00222e50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00222e50(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_EAX;
  byte bVar3;
  int unaff_ESI;
  
  *(undefined4 *)(in_EAX + 4) = *(undefined4 *)(unaff_ESI + 4);
  *(undefined4 *)(in_EAX + 8) = *(undefined4 *)(unaff_ESI + 8);
  *(undefined4 *)(in_EAX + 0xc) = *(undefined4 *)(unaff_ESI + 0xc);
  *(undefined4 *)(in_EAX + 0x10) = *(undefined4 *)(unaff_ESI + 0x10);
  *(undefined4 *)(in_EAX + 0x14) = *(undefined4 *)(unaff_ESI + 0x14);
  *(undefined4 *)(in_EAX + 0x18) = *(undefined4 *)(unaff_ESI + 0x18);
  *(undefined4 *)(in_EAX + 0x1c) = *(undefined4 *)(unaff_ESI + 0x1c);
  *(undefined4 *)(in_EAX + 0x20) = *(undefined4 *)(unaff_ESI + 0x20);
  uVar1 = *(undefined4 *)(unaff_ESI + 0x2c);
  uVar2 = *(undefined4 *)(unaff_ESI + 0x28);
  *(undefined4 *)(in_EAX + 0x24) = *(undefined4 *)(unaff_ESI + 0x24);
  *(undefined4 *)(in_EAX + 0x28) = uVar2;
  *(undefined4 *)(in_EAX + 0x2c) = uVar1;
  uVar1 = *(undefined4 *)(unaff_ESI + 0x34);
  uVar2 = *(undefined4 *)(unaff_ESI + 0x38);
  *(undefined4 *)(in_EAX + 0x30) = *(undefined4 *)(unaff_ESI + 0x30);
  *(undefined4 *)(in_EAX + 0x34) = uVar1;
  *(undefined4 *)(in_EAX + 0x38) = uVar2;
  uVar1 = *(undefined4 *)(unaff_ESI + 0x40);
  uVar2 = *(undefined4 *)(unaff_ESI + 0x44);
  *(undefined4 *)(in_EAX + 0x3c) = *(undefined4 *)(unaff_ESI + 0x3c);
  *(undefined4 *)(in_EAX + 0x40) = uVar1;
  *(undefined4 *)(in_EAX + 0x44) = uVar2;
  uVar1 = *(undefined4 *)(unaff_ESI + 0x4c);
  uVar2 = *(undefined4 *)(unaff_ESI + 0x50);
  *(undefined4 *)(in_EAX + 0x48) = *(undefined4 *)(unaff_ESI + 0x48);
  *(undefined4 *)(in_EAX + 0x4c) = uVar1;
  *(undefined4 *)(in_EAX + 0x50) = uVar2;
  *(undefined4 *)(in_EAX + 0x54) = *(undefined4 *)(unaff_ESI + 0x54);
  *(undefined4 *)(in_EAX + 0x58) = *(undefined4 *)(unaff_ESI + 0x58);
  *(undefined4 *)(in_EAX + 0x58) = *(undefined4 *)(unaff_ESI + 0x58);
  bVar3 = *(byte *)(in_EAX + 0x5c) ^ (*(byte *)(in_EAX + 0x5c) ^ *(byte *)(unaff_ESI + 0x5c)) & 1;
  *(byte *)(in_EAX + 0x5c) = bVar3;
  bVar3 = (*(byte *)(unaff_ESI + 0x5c) ^ bVar3) & 2 ^ bVar3;
  *(byte *)(in_EAX + 0x5c) = bVar3;
  bVar3 = (*(byte *)(unaff_ESI + 0x5c) ^ bVar3) & 4 ^ bVar3;
  *(byte *)(in_EAX + 0x5c) = bVar3;
  *(byte *)(in_EAX + 0x5c) = (*(byte *)(unaff_ESI + 0x5c) ^ bVar3) & 8 ^ bVar3;
  return;
}
