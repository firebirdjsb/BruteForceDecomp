/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 04C1C0FF9B5FAF2CEAC4E72171BE2B4CAE005CE485428AA7BE3982AB80547743
 * Entry: 0x000ac7f0, Ghidra index: 2063, label: FUN_000ac7f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ac7f0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int in_EDX;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_14 [5];
  
  iVar3 = 0;
  iVar7 = 0;
  local_14[0] = *(int *)(in_EDX + 0x84);
  piVar6 = (int *)(in_EDX + 0x88);
  piVar2 = local_14 + 1;
  piVar4 = (int *)(in_EDX + 0x90);
LAB_000ac815:
  if (1 < iVar7) goto LAB_000ac825;
  do {
    *piVar2 = *piVar4;
    piVar2 = piVar2 + 1;
    iVar7 = iVar7 + 1;
    piVar4 = piVar4 + 1;
LAB_000ac825:
    if (iVar3 < 2) {
      *piVar2 = *piVar6;
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + 1;
      piVar6 = piVar6 + 1;
      if (iVar3 < 2) goto LAB_000ac815;
    }
    if (1 < iVar7) {
      iVar3 = 5;
      break;
    }
  } while( true );
LAB_000ac846:
  iVar3 = iVar3 + -1;
  if (iVar3 < 1) {
    return;
  }
  iVar7 = local_14[iVar3];
  iVar5 = iVar3;
  do {
    if ((*(byte *)(iVar7 + 0x13) & 1) != 0) break;
    iVar1 = iVar5 * 4;
    iVar5 = iVar5 + -1;
    if ((*(int *)(*(int *)(&stack0xffffffe8 + iVar1) + 0x7c) == *(int *)(iVar7 + 0x7c)) &&
       (*(int *)(*(int *)(&stack0xffffffe8 + iVar1) + 0x80) == *(int *)(iVar7 + 0x80))) {
      *(byte *)(iVar7 + 0x13) = *(byte *)(iVar7 + 0x13) | 1;
    }
  } while (0 < iVar5);
  goto LAB_000ac846;
}
