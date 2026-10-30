/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E4F57872AA4BC24DABCED2BE01E00EE2741F254316DCC6B3222F2B4FF7E9296
 * Entry: 0x0003d060, Ghidra index: 444, label: FUN_0003d060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0003d060(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_EAX;
  undefined4 uVar3;
  undefined4 *unaff_EBX;
  int iVar4;
  int iVar5;
  
  if (*(uint *)(in_EAX + 8) <= *(int *)(in_EAX + 0x10) + 1U) {
    FUN_0003d170();
  }
  iVar4 = *(int *)(in_EAX + 0xc);
  if (iVar4 == 0) {
    iVar4 = *(int *)(in_EAX + 8);
  }
  iVar5 = iVar4 + -1;
  if (*(int *)(*(int *)(in_EAX + 4) + -4 + iVar4 * 4) == 0) {
    uVar3 = FUN_002ea01d(0x10);
    *(undefined4 *)(*(int *)(in_EAX + 4) + iVar5 * 4) = uVar3;
  }
  puVar1 = *(undefined4 **)(*(int *)(in_EAX + 4) + iVar5 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *unaff_EBX;
    uVar3 = unaff_EBX[3];
    uVar2 = unaff_EBX[2];
    puVar1[1] = unaff_EBX[1];
    puVar1[2] = uVar2;
    puVar1[3] = uVar3;
  }
  *(int *)(in_EAX + 0xc) = iVar5;
  *(int *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) + 1;
  return;
}
