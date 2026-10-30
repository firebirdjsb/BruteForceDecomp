/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2E79A126BCADE6C29AF5210CC7400C0B676D8D66AE0F6632A830A57520CC20E9
 * Entry: 0x0021dab0, Ghidra index: 7550, label: FUN_0021dab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0021dab0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  *(byte *)(in_ECX + 0xc) =
       *(byte *)(in_ECX + 0xc) ^ (*(char *)(param_1 + 0xd) << 1 ^ *(byte *)(in_ECX + 0xc)) & 2;
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  piVar2 = (int *)FUN_000a7770(param_1 + 0x14);
  piVar1 = *(int **)(in_ECX + 0x1c);
  if (piVar1 != piVar2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(in_ECX + 0x1c) = 0;
    }
    *(int **)(in_ECX + 0x1c) = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
  }
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined1 *)(in_ECX + 0x40) = *(undefined1 *)(param_1 + 0x1c);
  *(undefined1 *)(in_ECX + 0x41) = *(undefined1 *)(param_1 + 0x1d);
  *(undefined1 *)(in_ECX + 0x42) = *(undefined1 *)(param_1 + 0x1e);
  *(undefined1 *)(in_ECX + 0x43) = *(undefined1 *)(param_1 + 0x1f);
  *(undefined1 *)(in_ECX + 0x44) = *(undefined1 *)(param_1 + 0x38);
  return;
}
