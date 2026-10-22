/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 64E8CF52C93FE9E86D2A2328A205CBC4FB5A1B99F07081708517980B0F0DF2DC
 * Entry: 0x0020e370, Ghidra index: 7406, label: FUN_0020e370
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0020e370(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  *(byte *)(in_ECX + 0xc) =
       *(byte *)(in_ECX + 0xc) ^ (*(char *)(param_1 + 0xd) << 1 ^ *(byte *)(in_ECX + 0xc)) & 2;
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  piVar2 = (int *)FUN_000a7770(param_1 + 0x14);
  piVar1 = *(int **)(in_ECX + 0x24);
  if (piVar1 != piVar2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(in_ECX + 0x24) = 0;
    }
    *(int **)(in_ECX + 0x24) = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
  }
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x10);
  *(undefined1 *)(in_ECX + 0x28) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)(in_ECX + 0x29) = *(undefined1 *)(param_1 + 0x21);
  *(undefined1 *)(in_ECX + 0x2a) = *(undefined1 *)(param_1 + 0x22);
  *(undefined1 *)(in_ECX + 0x2b) = *(undefined1 *)(param_1 + 0x23);
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x28);
  *(undefined1 *)(in_ECX + 0x34) = *(undefined1 *)(param_1 + 0x2c);
  *(undefined1 *)(in_ECX + 0x35) = *(undefined1 *)(param_1 + 0x2d);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x50);
  *(undefined1 *)(in_ECX + 0x5c) = *(undefined1 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x58);
  return;
}
