/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 83130030F7AEDBD728C624C299FF848946B2A74A6CEECBB9AAA6263BF97BF197
 * Entry: 0x002e4ef0, Ghidra index: 10461, label: FUN_002e4ef0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e4ef0(void)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined1 *)(in_ECX + 0x248) = 0;
  puVar2 = (undefined4 *)(in_ECX + 0x48);
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_002e45a0();
  *(undefined4 *)(in_ECX + 0x254) = 0;
  *(undefined4 *)(in_ECX + 0x25c) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x260) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x264) = 0xffffffff;
  return;
}
