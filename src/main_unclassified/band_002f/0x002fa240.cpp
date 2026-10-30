/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 86AD7E31B4108E572DB53104FD4BF18669626D3975F5CD4258EF9F65EB1DC67C
 * Entry: 0x002fa240, Ghidra index: 10975, label: FUN_002fa240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002fa240(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_EAX;
  
  uVar1 = *(undefined4 *)(in_EAX + 0x10);
  uVar2 = *(undefined4 *)(in_EAX + 0x14);
  uVar3 = *(undefined4 *)(in_EAX + 0x20);
  *(undefined4 *)(in_EAX + 0x20) = *(undefined4 *)(in_EAX + 8);
  uVar4 = *(undefined4 *)(in_EAX + 0x24);
  *(undefined4 *)(in_EAX + 0x24) = *(undefined4 *)(in_EAX + 0xc);
  *(undefined4 *)(in_EAX + 8) = *(undefined4 *)(in_EAX + 0x38);
  *(undefined4 *)(in_EAX + 0xc) = *(undefined4 *)(in_EAX + 0x3c);
  *(undefined4 *)(in_EAX + 0x10) = *(undefined4 *)(in_EAX + 0x18);
  *(undefined4 *)(in_EAX + 0x14) = *(undefined4 *)(in_EAX + 0x1c);
  *(undefined4 *)(in_EAX + 0x18) = *(undefined4 *)(in_EAX + 0x28);
  *(undefined4 *)(in_EAX + 0x1c) = *(undefined4 *)(in_EAX + 0x2c);
  *(undefined4 *)(in_EAX + 0x28) = *(undefined4 *)(in_EAX + 0x30);
  *(undefined4 *)(in_EAX + 0x2c) = *(undefined4 *)(in_EAX + 0x34);
  *(undefined4 *)(in_EAX + 0x30) = uVar1;
  *(undefined4 *)(in_EAX + 0x34) = uVar2;
  *(undefined4 *)(in_EAX + 0x38) = uVar3;
  *(undefined4 *)(in_EAX + 0x3c) = uVar4;
  return;
}
