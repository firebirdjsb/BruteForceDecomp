/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EA9D14A291DC6A8EBCDDA78FA62BB7938C2F5078AC19E71312BC0E932995705D
 * Entry: 0x002f9fe0, Ghidra index: 10972, label: FUN_002f9fe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002f9fe0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int in_EAX;
  
  uVar3 = *(undefined4 *)(in_EAX + 0x18);
  uVar1 = *(undefined4 *)(in_EAX + 8);
  uVar4 = *(undefined4 *)(in_EAX + 0x1c);
  uVar2 = *(undefined4 *)(in_EAX + 0xc);
  uVar5 = *(undefined4 *)(in_EAX + 0x28);
  uVar6 = *(undefined4 *)(in_EAX + 0x2c);
  uVar7 = *(undefined4 *)(in_EAX + 0x38);
  uVar8 = *(undefined4 *)(in_EAX + 0x3c);
  uVar9 = *(undefined4 *)(in_EAX + 0x58);
  uVar10 = *(undefined4 *)(in_EAX + 0x5c);
  *(undefined4 *)(in_EAX + 8) = *(undefined4 *)(in_EAX + 0x40);
  uVar11 = *(undefined4 *)(in_EAX + 0x20);
  *(undefined4 *)(in_EAX + 0x20) = *(undefined4 *)(in_EAX + 0x10);
  *(undefined4 *)(in_EAX + 0xc) = *(undefined4 *)(in_EAX + 0x44);
  uVar12 = *(undefined4 *)(in_EAX + 0x24);
  *(undefined4 *)(in_EAX + 0x24) = *(undefined4 *)(in_EAX + 0x14);
  *(undefined4 *)(in_EAX + 0x10) = uVar11;
  *(undefined4 *)(in_EAX + 0x40) = uVar1;
  *(undefined4 *)(in_EAX + 0x14) = uVar12;
  *(undefined4 *)(in_EAX + 0x44) = uVar2;
  *(undefined4 *)(in_EAX + 0x18) = *(undefined4 *)(in_EAX + 0x60);
  *(undefined4 *)(in_EAX + 0x1c) = *(undefined4 *)(in_EAX + 100);
  *(undefined4 *)(in_EAX + 0x28) = *(undefined4 *)(in_EAX + 0x50);
  *(undefined4 *)(in_EAX + 0x2c) = *(undefined4 *)(in_EAX + 0x54);
  *(undefined4 *)(in_EAX + 0x38) = *(undefined4 *)(in_EAX + 0x70);
  *(undefined4 *)(in_EAX + 0x3c) = *(undefined4 *)(in_EAX + 0x74);
  *(undefined4 *)(in_EAX + 0x50) = uVar5;
  *(undefined4 *)(in_EAX + 0x54) = uVar6;
  *(undefined4 *)(in_EAX + 0x58) = *(undefined4 *)(in_EAX + 0x68);
  *(undefined4 *)(in_EAX + 0x5c) = *(undefined4 *)(in_EAX + 0x6c);
  *(undefined4 *)(in_EAX + 0x60) = uVar3;
  *(undefined4 *)(in_EAX + 100) = uVar4;
  *(undefined4 *)(in_EAX + 0x68) = uVar9;
  *(undefined4 *)(in_EAX + 0x6c) = uVar10;
  *(undefined4 *)(in_EAX + 0x70) = uVar7;
  *(undefined4 *)(in_EAX + 0x74) = uVar8;
  return;
}
