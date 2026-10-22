/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F7F473ADE2037E9A5713D93E9D172E2E88EF0D7FB0429FA34436E3EF8A0C5ABC
 * Entry: 0x00277350, Ghidra index: 8908, label: FUN_00277350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00277350(undefined4 *param_1)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_34 [10];
  
  puVar2 = auStack_34;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_00273d50();
  *(undefined4 *)(in_ECX + 0x20) = 0xd;
  *(undefined4 *)(in_ECX + 0x10) = 0xd;
  *(int *)(in_ECX + 8) = *(int *)(in_ECX + 0x24);
  *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x38) + *(int *)(in_ECX + 0x24);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(in_ECX + 0x3c);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(in_ECX + 0x40);
  return;
}
