/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6C663B846E8C1470A94991E186B2AEC4D201BD27876BC0E184563967D9AB4041
 * Entry: 0x002fa1f0, Ghidra index: 10974, label: FUN_002fa1f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002fa1f0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_EAX;
  
  uVar1 = *(undefined4 *)(in_EAX + 0x18);
  uVar2 = *(undefined4 *)(in_EAX + 0x1c);
  uVar3 = *(undefined4 *)(in_EAX + 0x20);
  *(undefined4 *)(in_EAX + 0x20) = *(undefined4 *)(in_EAX + 8);
  uVar4 = *(undefined4 *)(in_EAX + 0x24);
  *(undefined4 *)(in_EAX + 0x24) = *(undefined4 *)(in_EAX + 0xc);
  *(undefined4 *)(in_EAX + 8) = uVar3;
  *(undefined4 *)(in_EAX + 0xc) = uVar4;
  *(undefined4 *)(in_EAX + 0x18) = *(undefined4 *)(in_EAX + 0x30);
  *(undefined4 *)(in_EAX + 0x1c) = *(undefined4 *)(in_EAX + 0x34);
  *(undefined4 *)(in_EAX + 0x30) = uVar1;
  *(undefined4 *)(in_EAX + 0x34) = uVar2;
  return;
}
