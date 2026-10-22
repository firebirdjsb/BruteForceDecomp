/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8DA09D50C55A7EC0F34D0C9C1A99A54030C29AE46AF8CDD77808055FE442B7E7
 * Entry: 0x0021dbb0, Ghidra index: 7551, label: FUN_0021dbb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0021dbb0(undefined4 param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int in_ECX;
  
  *(int *)(param_2 + 0xc) = in_ECX;
  *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
  iVar1 = *(int *)(*(int *)(param_2 + 0xc) + 4);
  if (((iVar1 == 2) || (iVar1 == 0x1a)) || (iVar1 == 0x1f)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  *(byte *)(param_2 + 0x26) =
       *(byte *)(param_2 + 0x26) ^ (!bVar2 << 5 ^ *(byte *)(param_2 + 0x26)) & 0x20;
  *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(in_ECX + 0x20);
  *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(in_ECX + 0x24);
  *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(in_ECX + 0x3c);
  *(undefined4 *)(param_2 + 0x7c) = *(undefined4 *)(in_ECX + 0x30);
  *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(in_ECX + 0x34);
  *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(in_ECX + 0x38);
  *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(in_ECX + 0x28);
  *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(in_ECX + 0x2c);
  *(undefined1 *)(param_2 + 0x9c) = *(undefined1 *)(in_ECX + 0x40);
  *(undefined1 *)(param_2 + 0x9d) = *(undefined1 *)(in_ECX + 0x41);
  *(undefined1 *)(param_2 + 0x9e) = *(undefined1 *)(in_ECX + 0x42);
  *(undefined1 *)(param_2 + 0x9f) = *(undefined1 *)(in_ECX + 0x43);
  FUN_0021ec20();
  FUN_0021ef20(param_2);
  return param_2;
}
