/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 18A85F653ABB6DBB3853D1F7C6744755F63D3B219ED11EBF3EF2EC6775B24BBA
 * Entry: 0x0003d0e0, Ghidra index: 445, label: FUN_0003d0e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0003d0e0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_EAX;
  undefined4 uVar3;
  undefined4 *unaff_EBX;
  uint uVar4;
  
  if (*(uint *)(in_EAX + 8) <= *(int *)(in_EAX + 0x10) + 1U) {
    FUN_0003d170();
  }
  uVar4 = *(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 0x10);
  if (*(uint *)(in_EAX + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)(in_EAX + 8);
  }
  if (*(int *)(*(int *)(in_EAX + 4) + uVar4 * 4) == 0) {
    uVar3 = FUN_002ea01d(0x10);
    *(undefined4 *)(*(int *)(in_EAX + 4) + uVar4 * 4) = uVar3;
  }
  puVar1 = *(undefined4 **)(*(int *)(in_EAX + 4) + uVar4 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *unaff_EBX;
    uVar3 = unaff_EBX[3];
    uVar2 = unaff_EBX[2];
    puVar1[1] = unaff_EBX[1];
    puVar1[2] = uVar2;
    puVar1[3] = uVar3;
  }
  *(int *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) + 1;
  return;
}
