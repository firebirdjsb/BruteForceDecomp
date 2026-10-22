/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 11F206E5FB4BAB6CA764408BC642E3B5474DBD827C28A0C3A0E9D292FB9B6767
 * Entry: 0x00382100, Ghidra index: 13583, label: FUN_00382100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00382100(int param_1)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  
  uVar1 = param_1 - *(int *)(in_ECX + 0xe0) >> 5;
  iVar2 = (uVar1 & 0xff) * 0x20;
  *(undefined1 *)(iVar2 + *(int *)(in_ECX + 0xe0)) = 0xff;
  *(undefined1 *)(iVar2 + 1 + *(int *)(in_ECX + 0xe0)) = *(undefined1 *)(in_ECX + 0x79);
  *(char *)(in_ECX + 0x79) = (char)uVar1;
  return;
}
