/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9E7ECB00C8111D9D67C7543BF5017C4DF02B039B7DBF51F74D8BCF53777CD369
 * Entry: 0x00209ca0, Ghidra index: 7327, label: FUN_00209ca0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00209ca0(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  int in_ECX;
  
  FUN_001ff4c0(param_1);
  iVar1 = *(int *)(in_ECX + 8);
  uVar3 = (**(code **)(*(int *)(param_1 + 8) + 0x10))();
  (**(code **)(iVar1 + 0x14))(uVar3);
  bVar2 = *(byte *)(in_ECX + 0xe4) ^ (*(byte *)(param_1 + 0xe4) ^ *(byte *)(in_ECX + 0xe4)) & 8;
  *(byte *)(in_ECX + 0xe4) = bVar2;
  bVar2 = (*(byte *)(param_1 + 0xe4) ^ bVar2) & 0x10 ^ bVar2;
  *(byte *)(in_ECX + 0xe4) = bVar2;
  *(byte *)(in_ECX + 0xe4) = (*(byte *)(param_1 + 0xe4) ^ bVar2) & 4 ^ bVar2;
  if (*(int *)(in_ECX + 0xcc) != *(int *)(param_1 + 0xcc)) {
    FUN_0008f6a0(*(int *)(param_1 + 0xcc));
  }
  *(undefined4 *)(in_ECX + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  if (*(int *)(in_ECX + 0x80) != *(int *)(param_1 + 0x80)) {
    FUN_0008f6a0(*(int *)(param_1 + 0x80));
  }
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(in_ECX + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(in_ECX + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  bVar2 = *(byte *)(in_ECX + 0xe4) ^ (*(byte *)(param_1 + 0xe4) ^ *(byte *)(in_ECX + 0xe4)) & 1;
  *(byte *)(in_ECX + 0xe4) = bVar2;
  *(byte *)(in_ECX + 0xe4) = (*(byte *)(param_1 + 0xe4) ^ bVar2) & 2 ^ bVar2;
  if (*(int *)(in_ECX + 0xd8) != *(int *)(param_1 + 0xd8)) {
    FUN_0008f6a0(*(int *)(param_1 + 0xd8));
  }
  *(undefined4 *)(in_ECX + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(byte *)(in_ECX + 0xe4) =
       *(byte *)(in_ECX + 0xe4) ^ (*(byte *)(param_1 + 0xe4) ^ *(byte *)(in_ECX + 0xe4)) & 0x20;
  return;
}
