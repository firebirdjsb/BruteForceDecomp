/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A6655B60777EF30B463EA47F7C8140630DFAA654C847C68454F7A8D1AE55A65
 * Entry: 0x00141d40, Ghidra index: 4112, label: FUN_00141d40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00141d40(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int in_EAX;
  undefined4 uVar7;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 4);
  uVar7 = FUN_001421d0(*(undefined4 *)(*(int *)(in_EAX + 4) + 4),iVar2);
  *(undefined4 *)(iVar2 + 4) = uVar7;
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_EAX + 8);
  piVar3 = *(int **)(in_ECX + 4);
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0x1d) != '\0') {
    *piVar3 = (int)piVar3;
    *(int *)(*(int *)(in_ECX + 4) + 8) = *(int *)(in_ECX + 4);
    return;
  }
  cVar1 = *(char *)(*piVar4 + 0x1d);
  piVar6 = (int *)*piVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar6 + 0x1d);
    piVar4 = piVar6;
    piVar6 = (int *)*piVar6;
  }
  *piVar3 = (int)piVar4;
  iVar2 = *(int *)(*(int *)(in_ECX + 4) + 4);
  iVar5 = *(int *)(iVar2 + 8);
  cVar1 = *(char *)(iVar5 + 0x1d);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0x1d);
    iVar2 = iVar5;
    iVar5 = *(int *)(iVar5 + 8);
  }
  *(int *)(*(int *)(in_ECX + 4) + 8) = iVar2;
  return;
}
