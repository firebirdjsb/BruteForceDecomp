/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6DDC202022C8594B9E6813487A19175C086735E7E9E3D9175B77FA0A58161B6A
 * Entry: 0x00251790, Ghidra index: 8369, label: FUN_00251790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00251790(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar4 = *(uint *)(*(int *)(in_EAX + 0x1c) + 0x14);
  if (*(uint *)(in_EAX + 0x10) < uVar4) {
    uVar4 = *(uint *)(in_EAX + 0x10);
  }
  if (uVar4 != 0) {
    puVar5 = *(undefined4 **)(*(int *)(in_EAX + 0x1c) + 0x10);
    puVar6 = *(undefined4 **)(in_EAX + 0xc);
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(uint *)(in_EAX + 0xc) = *(int *)(in_EAX + 0xc) + uVar4;
    piVar1 = (int *)(*(int *)(in_EAX + 0x1c) + 0x10);
    *piVar1 = *piVar1 + uVar4;
    *(uint *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + uVar4;
    *(uint *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) - uVar4;
    piVar1 = (int *)(*(int *)(in_EAX + 0x1c) + 0x14);
    *piVar1 = *piVar1 - uVar4;
    iVar2 = *(int *)(in_EAX + 0x1c);
    if (*(int *)(iVar2 + 0x14) == 0) {
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar2 + 8);
    }
  }
  return;
}
