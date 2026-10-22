/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7DF03CF31D36B124E7A33C391D789B19B9388F6BAEDDD2CB061E6375C8B9A354
 * Entry: 0x002d37e0, Ghidra index: 10202, label: FUN_002d37e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d37e0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  int in_EAX;
  int iVar5;
  int in_ECX;
  
  iVar3 = *(int *)(in_ECX + 0xec + in_EAX * 4);
  uVar1 = *(undefined4 *)(in_EAX * 0x10 + 0x48 + in_ECX);
  iVar5 = in_EAX * 0x10 + in_ECX;
  uVar2 = *(undefined4 *)(iVar5 + 0x4c);
  *(undefined4 *)(iVar3 + 0xac) = *(undefined4 *)(iVar5 + 0x44);
  *(undefined4 *)(iVar3 + 0xb0) = uVar1;
  *(undefined4 *)(iVar3 + 0xb4) = uVar2;
  uVar1 = *(undefined4 *)(iVar5 + 0x28);
  uVar2 = *(undefined4 *)(iVar5 + 0x2c);
  *(undefined4 *)(iVar3 + 0x9c) = *(undefined4 *)(iVar5 + 0x24);
  *(undefined4 *)(iVar3 + 0xa0) = uVar1;
  *(undefined4 *)(iVar3 + 0xa4) = uVar2;
  iVar5 = *(int *)(*(int *)(iVar3 + 0xc) + 0x24);
  if (*(int *)(iVar5 + 0xc) < (int)*(short *)(iVar3 + 0x68)) {
    uVar4 = (**(code **)(**(int **)(*(int *)(iVar3 + 0xc) + 0x20) + 0xc))(iVar5,iVar3);
    *(undefined1 *)(iVar3 + 0x65) = uVar4;
  }
  return;
}
