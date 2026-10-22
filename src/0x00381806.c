/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32E4101079F5D3418E05B69DD4C6A8153956F291CAF8292FB61C84C5F5630AD0
 * Entry: 0x00381806, Ghidra index: 13573, label: FUN_00381806
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00381806(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int in_EDX;
  uint uVar3;
  undefined2 local_8;
  
  iVar1 = *(int *)(*(int *)(in_EDX + 0x5c) + 8);
  *(undefined1 *)(in_ECX + 0x4f) = 0x2f;
  uVar2 = __allshr();
  uVar3 = *(uint *)(iVar1 + 8);
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(code **)(in_ECX + 0x30) = FUN_0038156d;
  uVar3 = uVar3 >> ((byte)*(undefined4 *)(in_ECX + 0x158) & 0x1f);
  *(short *)(in_ECX + 0x34) = *(short *)(iVar1 + 10) * 100;
  *(undefined1 *)(in_ECX + 0x37) = 0;
  *(undefined1 *)(in_ECX + 0x36) = 2;
  *(undefined4 *)(in_ECX + 0x4f) = 0;
  *(undefined4 *)(in_ECX + 0x53) = 0;
  *(undefined4 *)(in_ECX + 0x57) = 0;
  *(undefined4 *)(in_ECX + 0x5b) = 0;
  *(undefined1 *)(in_ECX + 0x4f) = 0x2f;
  uVar2 = FUN_003814f3(uVar2);
  *(undefined4 *)(in_ECX + 0x51) = uVar2;
  local_8 = CONCAT11((char)uVar3,(char)(uVar3 >> 8));
  *(undefined2 *)(in_ECX + 0x56) = local_8;
  FUN_00383571();
  return;
}
