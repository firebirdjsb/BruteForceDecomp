/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC71BBA6476474C1A58D296E043E4E9550092759FA07960686B3C7BF3B2CA919
 * Entry: 0x00274f40, Ghidra index: 8882, label: FUN_00274f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00274f40(undefined4 *param_1)

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
  *(undefined4 *)(in_ECX + 0x20) = 2;
  *(undefined4 *)(in_ECX + 0x10) = 2;
  *(int *)(in_ECX + 8) = *(int *)(in_ECX + 0x24);
  *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x38) + *(int *)(in_ECX + 0x24);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(in_ECX + 0x3c);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(in_ECX + 0x40);
  return;
}
