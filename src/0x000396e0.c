/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1398B6BB803F85649E1BADDC7670E6323BB789A6EAE4C9243F1A265297698828
 * Entry: 0x000396e0, Ghidra index: 405, label: FUN_000396e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000396e0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_EAX;
  uint uVar3;
  int unaff_EBX;
  
  if (*(int *)(in_EAX + 4) != *(int *)(unaff_EBX + 4)) {
    FUN_0008f6a0(*(int *)(unaff_EBX + 4));
  }
  *(undefined4 *)(in_EAX + 8) = *(undefined4 *)(unaff_EBX + 8);
  *(undefined4 *)(in_EAX + 0xc) = *(undefined4 *)(unaff_EBX + 0xc);
  *(undefined4 *)(in_EAX + 0x10) = *(undefined4 *)(unaff_EBX + 0x10);
  *(undefined4 *)(in_EAX + 0x14) = *(undefined4 *)(unaff_EBX + 0x14);
  *(undefined4 *)(in_EAX + 0x18) = *(undefined4 *)(unaff_EBX + 0x18);
  *(undefined4 *)(in_EAX + 0x1c) = *(undefined4 *)(unaff_EBX + 0x1c);
  *(undefined4 *)(in_EAX + 0x20) = *(undefined4 *)(unaff_EBX + 0x20);
  *(undefined4 *)(in_EAX + 0x24) = *(undefined4 *)(unaff_EBX + 0x24);
  *(undefined4 *)(in_EAX + 0x28) = *(undefined4 *)(unaff_EBX + 0x28);
  *(undefined4 *)(in_EAX + 0x2c) = *(undefined4 *)(unaff_EBX + 0x2c);
  *(undefined4 *)(in_EAX + 0x30) = *(undefined4 *)(unaff_EBX + 0x30);
  *(undefined4 *)(in_EAX + 0x34) = *(undefined4 *)(unaff_EBX + 0x34);
  *(undefined4 *)(in_EAX + 0x38) = *(undefined4 *)(unaff_EBX + 0x38);
  uVar1 = *(undefined4 *)(unaff_EBX + 0x44);
  uVar2 = *(undefined4 *)(unaff_EBX + 0x40);
  *(undefined4 *)(in_EAX + 0x3c) = *(undefined4 *)(unaff_EBX + 0x3c);
  *(undefined4 *)(in_EAX + 0x40) = uVar2;
  *(undefined4 *)(in_EAX + 0x44) = uVar1;
  *(undefined4 *)(in_EAX + 0x48) = *(undefined4 *)(unaff_EBX + 0x48);
  uVar1 = *(undefined4 *)(unaff_EBX + 0x54);
  uVar2 = *(undefined4 *)(unaff_EBX + 0x50);
  *(undefined4 *)(in_EAX + 0x4c) = *(undefined4 *)(unaff_EBX + 0x4c);
  *(undefined4 *)(in_EAX + 0x50) = uVar2;
  *(undefined4 *)(in_EAX + 0x54) = uVar1;
  *(undefined4 *)(in_EAX + 0x58) = *(undefined4 *)(unaff_EBX + 0x58);
  *(undefined4 *)(in_EAX + 0x5c) = *(undefined4 *)(unaff_EBX + 0x5c);
  *(undefined4 *)(in_EAX + 0x60) = *(undefined4 *)(unaff_EBX + 0x60);
  *(undefined4 *)(in_EAX + 100) = *(undefined4 *)(unaff_EBX + 100);
  FUN_0003be10();
  *(undefined4 *)(in_EAX + 0x7c) = *(undefined4 *)(unaff_EBX + 0x7c);
  uVar3 = *(uint *)(in_EAX + 0x80) ^ (*(uint *)(in_EAX + 0x80) ^ *(uint *)(unaff_EBX + 0x80)) & 1;
  *(uint *)(in_EAX + 0x80) = uVar3;
  uVar3 = (*(uint *)(unaff_EBX + 0x80) ^ uVar3) & 2 ^ uVar3;
  *(uint *)(in_EAX + 0x80) = uVar3;
  uVar3 = (*(uint *)(unaff_EBX + 0x80) ^ uVar3) & 4 ^ uVar3;
  *(uint *)(in_EAX + 0x80) = uVar3;
  uVar3 = (*(uint *)(unaff_EBX + 0x80) ^ uVar3) & 8 ^ uVar3;
  *(uint *)(in_EAX + 0x80) = uVar3;
  uVar3 = (*(uint *)(unaff_EBX + 0x80) ^ uVar3) & 0x10 ^ uVar3;
  *(uint *)(in_EAX + 0x80) = uVar3;
  uVar3 = (*(uint *)(unaff_EBX + 0x80) ^ uVar3) & 0x20 ^ uVar3;
  *(uint *)(in_EAX + 0x80) = uVar3;
  *(uint *)(in_EAX + 0x80) = (*(uint *)(unaff_EBX + 0x80) ^ uVar3) & 0x40 ^ uVar3;
  *(undefined4 *)(in_EAX + 0x84) = *(undefined4 *)(unaff_EBX + 0x84);
  FUN_0003bf50();
  return;
}
