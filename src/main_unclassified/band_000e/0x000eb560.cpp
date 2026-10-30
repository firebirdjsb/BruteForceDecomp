/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 90A09B5E39EB280E3262716A9D8ED80E82535B77E749E3FEA6327585008BAF7A
 * Entry: 0x000eb560, Ghidra index: 2894, label: FUN_000eb560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000eb560(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  FUN_00059a80();
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  uVar3 = *(undefined4 *)(param_1 + 0x40);
  uVar4 = *(undefined4 *)(param_1 + 0x44);
  uVar1 = *(undefined4 *)(param_1 + 0x58);
  uVar5 = *(undefined4 *)(param_1 + 0x48);
  uVar6 = *(undefined4 *)(param_1 + 0x4c);
  uVar7 = *(undefined4 *)(param_1 + 0x50);
  uVar8 = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = uVar2;
  *(undefined4 *)(in_ECX + 0x40) = uVar3;
  *(undefined4 *)(in_ECX + 0x44) = uVar4;
  *(undefined4 *)(in_ECX + 0x58) = uVar1;
  *(undefined4 *)(in_ECX + 0x48) = uVar5;
  *(undefined4 *)(in_ECX + 0x4c) = uVar6;
  *(undefined4 *)(in_ECX + 0x50) = uVar7;
  *(undefined4 *)(in_ECX + 0x54) = uVar8;
  return;
}
