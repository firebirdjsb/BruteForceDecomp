/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 351DF38A926CA7B53FB6C63F5209AEE9A8AA0A076243E2DC4A94DFDE58A9F4A2
 * Entry: 0x00353790, Ghidra index: 13090, label: FUN_00353790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00353790(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  *(char *)(in_ECX + 0x7d) = *(char *)(in_ECX + 0x7d) + '\x01';
  *(int *)(param_1 + 0x60) = in_ECX;
  puVar2 = *(undefined4 **)(in_ECX + 0x68);
  piVar1 = (int *)(param_1 + 100);
  *piVar1 = in_ECX + 100;
  *(undefined4 **)(param_1 + 0x68) = puVar2;
  *puVar2 = piVar1;
  *(int **)(in_ECX + 0x68) = piVar1;
  FUN_00345541(0xffc1ffdf,*(uint *)(in_ECX + 0xc) & 0x3e0000 | 0x20);
  *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(in_ECX + 0x4a);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(in_ECX + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(in_ECX + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(in_ECX + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(in_ECX + 0x5c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(in_ECX + 0x80);
  return;
}
